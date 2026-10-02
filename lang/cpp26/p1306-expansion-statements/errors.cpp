// RUN: verify
// P1306R5: ill-formed expansion statements.

struct NotARange { int x; };

int f(int n) {
  int vla[n];
  template for (auto x : vla) {}   // expected-error {{cannot expand variable length array type}}
  return 0;
}

struct Incomplete;
void g(Incomplete &i) {
  template for (auto x : i) {}      // expected-error {{cannot expand expression of incomplete type}}
}

void h() {
  template for (auto x : 1) {}     // expected-error {{cannot expand expression of type 'int'}}
}

struct Lambda {};
void k() {
  auto l = []{};
  template for (auto x : l) {}      // expected-error {{cannot expand lambda closure type}}
}

struct Span {
  const int *b, *e;
  const int *begin() const { return b; }   // not constexpr
  const int *end() const { return e; }
};
void m(Span s) {
  template for (auto x : s) {}       // expected-error {{expansion statement size is not a constant expression}}
                                     // expected-note@-1 {{}}
}
