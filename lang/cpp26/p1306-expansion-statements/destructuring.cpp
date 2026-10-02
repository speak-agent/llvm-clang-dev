// RUN: run
// P1306R5 [stmt.expand]: expansion over a destructurable expression (arrays, classes with public members,
// tuple-like classes), the elements being the structured bindings.

namespace std {
using size_t = decltype(sizeof 0);
template <class T> struct tuple_size;
template <size_t I, class T> struct tuple_element;
}

struct Point { int x, y, z; };

struct Pair {
  int first;
  char second;
};

// tuple-like
struct TL { int a; long b; };
template <> struct std::tuple_size<TL> { static constexpr std::size_t value = 2; };
template <> struct std::tuple_element<0, TL> { using type = int; };
template <> struct std::tuple_element<1, TL> { using type = long; };
template <std::size_t I> decltype(auto) get(TL &t) {
  if constexpr (I == 0) return (t.a); else return (t.b);
}
template <std::size_t I> decltype(auto) get(const TL &t) {
  if constexpr (I == 0) return (t.a); else return (t.b);
}

consteval int sum_array() {
  int arr[] = {1, 2, 3, 4};
  int r = 0;
  template for (int x : arr) r += x;
  return r;
}
static_assert(sum_array() == 10);

int main() {
  int sum = 0;

  int arr[] = {1, 2, 3};
  template for (auto x : arr) sum += x;
  if (sum != 6) return 1;

  // an lvalue expansion-initializer: the loop variable can refer to the elements
  template for (auto &x : arr) x *= 2;
  if (arr[0] != 2 || arr[1] != 4 || arr[2] != 6) return 2;

  Point p{1, 2, 3};
  sum = 0;
  template for (int c : p) sum += c;
  if (sum != 6) return 3;

  // different member types
  Pair pr{40, 'a'};
  sum = 0;
  template for (auto m : pr) sum += (int)m;
  if (sum != 40 + 97) return 4;

  // constexpr loop variable over a constexpr object
  static constexpr Point cp{4, 5, 6};
  template for (constexpr auto c : cp) static_assert(c > 3);

  // tuple-like
  TL tl{7, 8};
  sum = 0;
  template for (auto &m : tl) sum += (int)m;
  if (sum != 15) return 5;

  // a prvalue
  sum = 0;
  template for (int c : Point{9, 8, 7}) sum += c;
  if (sum != 24) return 6;

  // empty
  struct Empty {} e;
  template for (auto m : e) static_assert(sizeof(m) == 0);
  return 0;
}
