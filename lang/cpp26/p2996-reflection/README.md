# P2996 reflection (and P3096, P3394, P3491, P3385, consteval blocks) -- port of bloomberg/clang-p2996

Part of the C++26 / C++29 line S1 of the MC++ plan (ML.3): the reflection family and expansion statements,
ported into this fork's Clang 23.1 from [bloomberg/clang-p2996](https://github.com/bloomberg/clang-p2996)
(Apache-2.0 WITH LLVM-exception, as LLVM). Branch `ml/s1-reflection`.

## Source and what was measured

| | |
|---|---|
| Source | `bloomberg/clang-p2996`, branch `p2996`, commit `f17c8d6c7bfe` (2026-09-24) |
| Its base | LLVM main `b1774222c761` (2025-07-02, the 21.x development line); this fork is 23.1.0 (about a year later) |
| What p2996 changes vs. its base | 297 files. Core (`clang/include`, `clang/lib`, `clang/utils`, `llvm/include`): 182 files, +21,589 / -724 lines, 13 of them new (`ExprConstantMeta.cpp` 7,516 lines, `SemaReflect.cpp` 2,105, `SemaExpand.cpp` 642, `ParseReflect.cpp`, `Reflection.cpp`, `SpliceSpecifier.cpp`, `Metafunction.h`, `MetaActions.h`, `Reflection.h`, `SpliceSpecifier.h`, `DiagnosticMetafnKinds.td`, ...). Tests: `clang/test` + `clang/unittests` 28 files (+3,411), `libcxx/test` 63 files (+10,980). libc++: `<meta>` 3,349 lines and 11 small edits |
| Files this fork's `llvm/` has | all but 4 of the 166 modified core files (`libclang/CIndex.cpp`, `Index/USRGeneration.cpp`, `StaticAnalyzer/ExprEngine.cpp`, `Driver/Options.td` -- the last now `Options/Options.td`) |
| Mechanical three-way merge (p2996 base / this fork / p2996) | 83 of the 166 files merge cleanly, 83 have 184 conflict hunks (largest: `ExprConstant.cpp` 13, `Type.cpp` 8, `ParseStmt.cpp` 7, `ExprCXX.h` 7, `ItaniumMangle.cpp` 7, `NestedNameSpecifier.cpp` 7); upstream's own drift in those files is 6,504 lines in `ExprConstant.cpp` alone |

## What conflicts with 23.1 (and how the port resolves it)

1. **Expansion statements (P1306).** p2996 has its own implementation (`CXXExpansionStmt` family, `ExpansionStmtDecl`,
   `SemaExpand.cpp`); Clang 23.1 has upstream's (`CXXExpansionStmtPattern`, `CXXExpansionStmtDecl`, `SemaExpand.cpp`;
   enumerating and destructuring, not iterating). The two are different designs, so p2996's is not ported; reflection is
   ported onto upstream's, and iterating expansion is added to it (see `../p1306-expansion-statements/README.md`).
2. **Reflection skeleton.** 23.1 already has `-freflection`, `^^` for builtin types (`CXXReflectExpr` over a
   `TypeSourceInfo`, `ParseReflect.cpp` 52 lines). p2996's `CXXReflectExpr` (an `APValue` operand) replaces it.
3. **`Type.h` split.** 23.1 splits `Type.h` into `Type.h` and `TypeBase.h`; p2996's `Type.h` hunks go to `TypeBase.h`.
   Its per-type "consteval-only" bit (an extra constructor argument on every `Type` subclass) is replaced by
   `Type::isConstevalOnly()`, computed from the canonical type (`RecordDecl` keeps its bit).
4. **`ElaboratedType` removed, `NestedNameSpecifier` rewritten.** In 23.1 a qualified or keyword-written type is the
   type itself, and `NestedNameSpecifier` is a value (`Null`/`Global`/`Type`/`Namespace`/`MicrosoftSuper`).
   p2996's `NestedNameSpecifier::Splice` kinds are dropped: a splice leading a nested-name-specifier is a
   `ReflectionSpliceType` (kind `Type`) while dependent or naming a type, and a `Namespace` once it names one
   (`Sema::ActOnCXXSpliceScopeSpecifier`, and `TreeTransform` re-decides after substitution).
   `DependentTemplateSpecializationType` no longer exists; p2996's splice constructor for it was never defined.
5. **`getTypeForDecl()` deleted**, `CheckTemplateIdType`, `CXXBaseSpecifier`, `TemplateName`, `DeducedTemplateSpecializationType`,
   `MemberPointerType`, `UsingType`, ... have new signatures: about 120 call sites in `ExprConstantMeta.cpp` and `SemaReflect.cpp`.
6. **`ExprConstant.cpp`.** `EvaluationMode` moved to `ByteCode/State.h`; p2996's `EM_ConstantExpressionPlainlyConstantEvaluated`
   becomes `EvaluationMode::ConstantExpressionPlainlyConstantEvaluated`.
7. **`IsImmediateEscalating`** moves from `DeclRefExpr`/`CXXConstructExpr` to `Expr` (p2996), with the readers, writers and importers.

## Order of the port

1. Basic: tokens (`^^`, `[:`, `:]`, `__metafunction`), `LangOptions`, options, diagnostics (`DiagnosticMetafnKinds.td` is a new
   diagnostic component), `Attr.td` (`CXX26Annotation`, `InstantiationDependent`), node tables; `llvm-generated/` regenerated.
2. AST data: `APValue` (reflection kind, depth), `Reflection.h`, `MetaActions.h`, `Metafunction.h`, `SpliceSpecifier`, types, decls
   (`ConstevalBlockDecl`, `DependentNamespaceDecl`), expressions, dependence, serialization, mangling, printing.
3. Parse: lexer, `ParseReflect.cpp`, splices in declarations, expressions, templates, `consteval` blocks, annotations.
4. Sema: `SemaReflect.cpp`, templates, lookup, `TreeTransform`, immediate-function contexts for consteval-only values.
5. Constant evaluation: `ExprConstantMeta.cpp` (the metafunctions), `ExprConstant.cpp`.
6. CodeGen: consteval blocks, name mangling of reflections.
7. Tests, then CI.

## Options

Everything is behind `-freflection` (needs `-std=c++2c`); the same options as clang-p2996:
`-fparameter-reflection` (P3096), `-fattribute-reflection` (P3385), `-fannotation-attributes` (P3394),
`-fentity-proxy-reflection`, and `-freflection-latest` which turns on all of them. Without them nothing changes.
`-fexpansion-statements` is not carried over: expansion statements are part of C++26 in Clang 23.1.

Not in clang-p2996 (checked in `clang/`, `libcxx/` and `P2996.md`): P3293R3, P3684R1, P3598R0.
