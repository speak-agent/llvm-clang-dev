// RUN: run
// P1306R5 [stmt.expand]: expansion over an expansion-init-list (an enumerating expansion statement).
// Paper example: each element of the list is a separate instantiation of the body, so the loop variable
// may have a different type in each; with 'constexpr' it is usable in constant expressions.

consteval int sum_ct() {
  int r = 0;
  template for (int x : {1, 2, 3, 4}) r += x;
  return r;
}
static_assert(sum_ct() == 10);

template <int... Vs>
constexpr int sum_pack() {
  int r = 0;
  template for (constexpr int x : {Vs...}) r += x;
  return r;
}
static_assert(sum_pack<>() == 0);
static_assert(sum_pack<5>() == 5);
static_assert(sum_pack<1, 2, 3>() == 6);

template <typename T>
int sizes_of() {
  int r = 0;
  template for (auto x : {T{}, 'a', 1.5, 2L}) r += sizeof(x);
  return r;
}

struct S { int a; long b; };

int main() {
  int total = 0;
  template for (auto x : {1, 'a', 2.5f, 3L}) total += (int)x;   // 1 + 97 + 2 + 3
  if (total != 103) return 1;

  // different types per element, constexpr loop variable
  template for (constexpr auto x : {1, 2u, 3L}) {
    static_assert(x > 0);
    total += x;
  }
  if (total != 109) return 2;

  // empty list: the body is not instantiated at all
  template for (auto x : {}) static_assert(sizeof(x) == 0);

  // break and continue
  int n = 0;
  template for (int x : {1, 2, 3, 4, 5}) {
    if (x == 2) continue;
    if (x == 4) break;
    n += x;                                  // 1 + 3
  }
  if (n != 4) return 3;

  // init-statement
  int k = 10;
  template for (k += 1; int x : {1, 2}) k += x;
  if (k != 14) return 4;

  if (sizes_of<char>() != 1 + 1 + 8 + 8) return 5;
  if (sum_pack<1, 2, 3>() != 6) return 6;
  return 0;
}
