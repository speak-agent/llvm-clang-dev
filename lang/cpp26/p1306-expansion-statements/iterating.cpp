// RUN: run
// P1306R5 [stmt.expand]: expansion over an expansion-iterable expression, i.e. a range with begin() and end()
// (members or found by argument-dependent lookup) whose iterator is random access: the i-th instantiation
// uses 'begin + i'; the number of instantiations is the size of the range, a constant expression.

using ptrdiff_t = decltype((char*)0 - (char*)0);

// a span-like range over static storage
struct Span {
  const int *b, *e;
  constexpr const int *begin() const { return b; }
  constexpr const int *end() const { return e; }
};

constexpr int data[] = {10, 20, 30, 40};
constexpr Span span{data, data + 4};

// a range through argument-dependent lookup
namespace ns {
struct R { int n; };
constexpr const int *begin(const R &) { return data; }
constexpr const int *end(const R &r) { return data + r.n; }
}

// an iterator that is a class
struct It {
  int v;
  constexpr int operator*() const { return v * v; }
  constexpr It operator+(ptrdiff_t n) const { return It{v + (int)n}; }
  constexpr ptrdiff_t operator-(It o) const { return v - o.v; }
  constexpr bool operator!=(It o) const { return v != o.v; }
  constexpr It &operator++() { ++v; return *this; }
};
struct Squares {
  int lo, hi;
  constexpr It begin() const { return It{lo}; }
  constexpr It end() const { return It{hi}; }
};

consteval int total() {
  int r = 0;
  template for (constexpr int x : span) r += x;
  return r;
}
static_assert(total() == 100);

template <typename R>
consteval int count_of(const R &) { return 0; }

int main() {
  int sum = 0;
  template for (constexpr auto &x : span) sum += x;
  if (sum != 100) return 1;

  sum = 0;
  constexpr ns::R r3{3};
  template for (constexpr int x : r3) sum += x;
  if (sum != 60) return 2;

  // the loop variable is an lvalue designating the element
  sum = 0;
  template for (constexpr const int &x : span) {
    static_assert(&x >= data && &x < data + 4);
    sum += x;
  }
  if (sum != 100) return 3;

  // a range of class iterators
  constexpr Squares sq{1, 5};
  sum = 0;
  template for (constexpr int s : sq) sum += s;     // 1 + 4 + 9 + 16
  if (sum != 30) return 4;

  // an empty range
  constexpr Span none{data, data};
  template for (constexpr int x : none) static_assert(x < 0);

  // break and continue
  sum = 0;
  template for (constexpr int x : span) {
    if (x == 20) continue;
    if (x == 40) break;
    sum += x;
  }
  if (sum != 40) return 5;
  return 0;
}
