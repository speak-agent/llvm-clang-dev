// RUN: verify
// P2843R3, [cpp.replace.general]/9 (moved from [macro.names]): a translation unit shall not #define or #undef
// macro names lexically identical to keywords, to the identifiers with special meaning ([lex.name]: final,
// import, module, override, post, pre) or to attribute-tokens ([dcl.attr]), except that likely and unlikely
// may be defined as function-like macros and may be undefined. An alternative token is not an identifier:
// it is not a macro name at all (an error before and now).
//
// Clang accepts the program with a warning, as the paper says a conforming implementation may.

#define public private // expected-warning {{defining 'public' as a macro is ill-formed in C++26: it is a keyword}}
#undef public // expected-warning {{undefining 'public' as a macro is ill-formed in C++26: it is a keyword}}
#undef private // expected-warning {{undefining 'private' as a macro is ill-formed in C++26: it is a keyword}}
#define inline // expected-warning {{defining 'inline' as a macro is ill-formed in C++26: it is a keyword}}
#undef inline // expected-warning {{undefining 'inline' as a macro is ill-formed in C++26: it is a keyword}}
#define static_assert(...) // expected-warning {{defining 'static_assert' as a macro is ill-formed in C++26: it is a keyword}}
#define nullptr 0 // expected-warning {{defining 'nullptr' as a macro is ill-formed in C++26: it is a keyword}}
#define and // expected-error {{C++ operator 'and' (aka '&&') used as a macro name}}
#undef and // expected-error {{C++ operator 'and' (aka '&&') used as a macro name}}

#define final // expected-warning {{defining 'final' as a macro is ill-formed in C++26: it is an identifier with special meaning}}
#undef override // expected-warning {{undefining 'override' as a macro is ill-formed in C++26: it is an identifier with special meaning}}
#define import // expected-warning {{defining 'import' as a macro is ill-formed in C++26: it is an identifier with special meaning}}
#define module 1 // expected-warning {{defining 'module' as a macro is ill-formed in C++26: it is an identifier with special meaning}}
#define pre // expected-warning {{defining 'pre' as a macro is ill-formed in C++26: it is an identifier with special meaning}}
#undef post // expected-warning {{undefining 'post' as a macro is ill-formed in C++26: it is an identifier with special meaning}}

#define noreturn // expected-warning {{defining 'noreturn' as a macro is ill-formed in C++26: it is an attribute-token}}
#undef nodiscard // expected-warning {{undefining 'nodiscard' as a macro is ill-formed in C++26: it is an attribute-token}}
#define deprecated(x) x // expected-warning {{defining 'deprecated' as a macro is ill-formed in C++26: it is an attribute-token}}
#define maybe_unused // expected-warning {{defining 'maybe_unused' as a macro is ill-formed in C++26: it is an attribute-token}}
#define fallthrough // expected-warning {{defining 'fallthrough' as a macro is ill-formed in C++26: it is an attribute-token}}

// likely and unlikely: function-like macros, and #undef, are fine; an object-like macro is not.
#define likely(x) x
#define unlikely() 0
#undef likely
#undef unlikely
#define likely 1 // expected-warning {{defining 'likely' as a macro is ill-formed in C++26: it is an attribute-token}}
#define unlikely  0 // expected-warning {{defining 'unlikely' as a macro is ill-formed in C++26: it is an attribute-token}}

// Any other name is fine: a name in another case, one of the implementation's, one that is a word of
// another language or the library.
#define EXPORT 1
#define Final 1
#define NODISCARD
#define _Foo 2
#define __cppx 3
#define assume_not 4
#undef EXPORT
