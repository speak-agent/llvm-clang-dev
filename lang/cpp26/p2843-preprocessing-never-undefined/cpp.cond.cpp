// RUN: verify
// P2843R3, [cpp.cond]: the use of defined in the two forms only (ill-formed, always diagnosed by Clang, an
// error), and the defined that a macro expansion generates, which stays ill-formed with no diagnostic
// required (IFNDR): Clang accepts it as every compiler does, with a warning.

#define D defined
#define X 1
#if D X // expected-warning {{macro expansion producing 'defined' has undefined behavior}}
#endif
#if D(X) // expected-warning {{macro expansion producing 'defined' has undefined behavior}}
#endif

#if defined // expected-error {{macro name missing}}
#endif
#if defined() // expected-error {{macro name must be an identifier}}
#endif
#if defined(1) // expected-error {{macro name must be an identifier}}
#endif
#if defined +X // expected-error {{macro name must be an identifier}}
#endif
#if defined(X Y) // expected-error {{missing ')' after 'defined'}} expected-note {{to match this '('}}
#endif
#if defined(X, Y) // expected-error {{missing ')' after 'defined'}} expected-note {{to match this '('}}
#endif

// The well-formed ones.
#if defined X + 1 && defined(X) && (defined X, 1)
#endif
