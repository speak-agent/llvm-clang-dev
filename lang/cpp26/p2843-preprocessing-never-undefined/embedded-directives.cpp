// RUN: verify
// P2843R3, [cpp.replace.general]/13: sequences of preprocessing tokens within the list of arguments of a
// function-like macro that would otherwise act as preprocessing directives make the program ill-formed
// (IFNDR before). Clang accepts them, as before, with a warning (an error with -pedantic-errors); a
// directive that has no use in an argument list at all, #include and #pragma, stays an error.

#define DECLARE_CONSTRUCTOR(CLASS, TYPE, PARAM) CLASS (TYPE PARAM);

// The paper's ill-formed example.
struct Any {
  template <class T>
  DECLARE_CONSTRUCTOR( Any
#if defined __cpp_rvalue_references // expected-warning {{embedding a #if directive within macro arguments is ill-formed in C++26}}
                     , T &&
#else // expected-warning {{embedding a #else directive within macro arguments is ill-formed in C++26}}
                     , T const &
#endif
                     , arg_name
                     );
};

// and its well-formed workaround: the directives are around the invocation.
struct Workaround {
#if defined __cpp_rvalue_references
  template <class T>
  DECLARE_CONSTRUCTOR( Workaround, T &&, arg_name );
#else
  template <class T>
  DECLARE_CONSTRUCTOR( Workaround, T const &, arg_name );
#endif
};

#define F(a, b) a + b
int f1 = F(1,
#define X 2 // expected-warning {{embedding a #define directive within macro arguments is ill-formed in C++26}}
           X);
int f2 = F(1,
#undef X // expected-warning {{embedding a #undef directive within macro arguments is ill-formed in C++26}}
           2);
int f3 = F(1,
#  // expected-warning {{embedding a # directive within macro arguments is ill-formed in C++26}}
           2);

// #include and #pragma are not supported in arguments (an error before and now).
#define G(a) a
int g1 = G(
#pragma once // expected-error {{embedding a #pragma directive within macro arguments is not supported}}
           1);

// Between a function-like macro's name and the next token it is not an invocation (yet): fine.
int h1 = G
#if 1
(1)
#endif
;

// Not in an argument list, nothing is wrong.
#if 1
int plain = 1;
#endif
