// RUN: verify
// P2662R3: an index past the pack is ill-formed -- the harness's check that expected errors are matched.

template <class... T> constexpr auto at3(T... t) { return t...[3]; } // expected-error {{invalid index 3 for pack 't' of size 2}}
int x = at3(1, 2); // expected-note {{in instantiation of function template specialization}}
