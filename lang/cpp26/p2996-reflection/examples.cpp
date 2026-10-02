// RUN: run
// ARGS: -freflection-latest
// P2996R13, the paper's examples that need no standard library.
#include "meta.h"

using namespace std::meta;

// "Selecting members": splice a member chosen by a constant expression
struct Bits { unsigned i : 2, j : 6; };

consteval info member_number(int n) {
  if (n == 0)
    return ^^Bits::i;
  else
    return ^^Bits::j;
}

// "Forward and back": a reflection of a type, spliced as a type
constexpr info r = ^^int;
typename[:r:] x = 42;
typename[:^^char:] c = '*';

// "Enum to string"
template <typename E>
constexpr const char *enum_to_string(E value) {
  static constexpr auto es = enumerators_of(^^E);
  template for (constexpr auto e : es)
    if (value == [:e:])
      return identifier_of(e);
  return "<unnamed>";
}

enum Color { red, green, blue };
enum class Shape : int { circle = 1, square = 3 };

constexpr bool same(const char *a, const char *b) {
  while (*a && *a == *b) {
    ++a;
    ++b;
  }
  return *a == *b;
}
static_assert(same(enum_to_string(Color::red), "red"));
static_assert(same(enum_to_string(Color::blue), "blue"));
static_assert(same(enum_to_string(Shape::square), "square"));
static_assert(same(enum_to_string(static_cast<Shape>(2)), "<unnamed>"));

// "Struct to tuple"-style access over the members of a class
struct Point { int x; long y; char z; };

template <typename T>
constexpr long sum_members(const T &object) {
  static constexpr auto members = nonstatic_data_members_of(^^T);
  long total = 0;
  template for (constexpr auto m : members)
    total += object.[:m:];
  return total;
}
static_assert(sum_members(Point{1, 20, 3}) == 24);

// member names as strings
template <typename T>
consteval int count_members() { return (int)nonstatic_data_members_of(^^T).size(); }
static_assert(count_members<Point>() == 3);

int main() {
  Bits s{0, 0};
  s.[:member_number(1):] = 42;     // Same as: s.j = 42;
  if (s.j != 42 || s.i != 0) return 1;
  if (x != 42 || c != '*') return 2;
  if (!same(enum_to_string(Color::green), "green")) return 3;
  Point p{4, 5, 6};
  if (sum_members(p) != 15) return 4;
  return 0;
}
