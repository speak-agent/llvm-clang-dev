// RUN: verify
// P2843R3, [cpp.line]: the forms of #line, after macro replacement: a digit-sequence, optionally followed
// by one string-literal ("adjacent string literals are not concatenated"). Clang diagnoses what is not of
// them, as before: an error for what cannot be a line number, a warning for trailing tokens.

#line // expected-error {{#line directive requires a positive integer argument}}
#line sdf // expected-error {{#line directive requires a positive integer argument}}
#line "xyz" // expected-error {{#line directive requires a positive integer argument}}
#line -32 // expected-error {{#line directive requires a positive integer argument}}
#line 0x123 // expected-error {{#line directive requires a simple digit sequence}}
#line (123) // expected-error {{#line directive requires a positive integer argument}}
#line 09 // expected-warning {{#line directive interprets number as decimal, not octal}}
#line 10 2 3 // expected-error {{invalid filename for #line directive}}
#line 11 "2" // fine
#line 12 "2" 3 // expected-warning {{extra tokens at end of #line directive}}
#line 13 "4" "5" // expected-warning {{extra tokens at end of #line directive}}
#line 14 "6" "7" "8" // expected-warning {{extra tokens at end of #line directive}}
#line 99999999999999 // expected-error {{#line directive requires a positive integer argument}}

// The directive is processed as normal text first.
#define LINE_NUMBER 100
#line LINE_NUMBER
#define NOT_A_NUMBER sdf
#line NOT_A_NUMBER "f" // expected-error {{#line directive requires a positive integer argument}}
