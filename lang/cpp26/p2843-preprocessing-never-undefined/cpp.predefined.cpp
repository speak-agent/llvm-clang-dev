// RUN: verify
// P2843R3, [cpp.predefined]/4: if a predefined macro, or the identifier defined, is the subject of a #define
// or #undef, the program is ill-formed. Clang has diagnosed the macros it defines itself that are the
// standard's (__cplusplus, __STDC_*, __STDCPP_*, __cpp_*, __DATE__, __FILE__, __LINE__, __TIME__ and the
// __has_* ones) with a warning, and `defined` with an error.

#define __cplusplus 12345678L // expected-warning {{redefining builtin macro}}
#define __FILE__ "x" // expected-warning {{redefining builtin macro}}
#define __STDC_EMBED_FOUND__ 3 // expected-warning {{redefining builtin macro}}
#define __has_include 1 // expected-warning {{redefining builtin macro}}
#define __has_embed 1 // expected-warning {{redefining builtin macro}}
#define __cpp_pp_embed 1 // expected-warning {{redefining builtin macro}}

#undef __LINE__ // expected-warning {{undefining builtin macro}}
#undef __DATE__ // expected-warning {{undefining builtin macro}}
#undef __TIME__ // expected-warning {{undefining builtin macro}}
#undef __STDC_HOSTED__ // expected-warning {{undefining builtin macro}}
#undef __STDCPP_DEFAULT_NEW_ALIGNMENT__ // expected-warning {{undefining builtin macro}}
#undef __cpp_concepts // expected-warning {{undefining builtin macro}}
#undef __has_cpp_attribute // expected-warning {{undefining builtin macro}}

#define defined 1 // expected-error {{'defined' cannot be used as a macro name}}
#undef defined // expected-error {{'defined' cannot be used as a macro name}}
#define defined(...) // expected-error {{'defined' cannot be used as a macro name}}

// Names that are not predefined ones are not the subject of the rule: not a feature-test macro of the
// library (<version> defines those), not a macro of this implementation.
#define __cpp_lib_not_predefined 1
#undef __cpp_lib_not_predefined
#define NOT_PREDEFINED 1
#undef NOT_PREDEFINED
