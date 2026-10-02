// RUN: verify
// expected-no-diagnostics
// P2843R3, [lex.comment]: a form feed or a vertical tab in a // comment is well-formed, whatever follows it
// (it was IFNDR unless only white space followed): no diagnostic, and the comment ends at the new-line.

int a; // a  b
int b; //  c
int c; // 
int d; /*  */ int e;
static_assert(sizeof(a) + sizeof(b) + sizeof(c) + sizeof(d) + sizeof(e) > 0);
