// RUN: verify
// P2843R3, [cpp.include]/4: an #include whose pp-tokens, after macro replacement, are not one of the two
// forms is ill-formed, and "adjacent string-literals are not concatenated": a header name followed by
// tokens is not a header name of the concatenation. Clang warns (-Wextra-tokens, on by default) and
// ignores the tokens; an expansion that is not a header name at all is an error.

#include "empty.h"
#include "empty.h" "" // expected-warning {{extra tokens at end of #include directive}}
#include "empty.h" extra // expected-warning {{extra tokens at end of #include directive}}

#define HEADER "empty.h"
#include HEADER
#include HEADER "" // expected-warning {{extra tokens at end of #include directive}}

#include // expected-error {{expected "FILENAME" or <FILENAME>}}
#include empty // expected-error {{expected "FILENAME" or <FILENAME>}}
