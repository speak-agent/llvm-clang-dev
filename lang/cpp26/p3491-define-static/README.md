# P3491R3 `define_static_{string,object,array}`

Part of the reflection port (see `../p2996-reflection/README.md`): clang-p2996 implements them in its `<meta>`
over `substitute` of a variable template and `reflect_constant`, so the compiler's part is `substitute` (a template
specialization whose non-type arguments are reflections of values), `reflect_constant`, and `extract` of an array
object, plus the evaluation of a pointer into the object the specialization defines.
