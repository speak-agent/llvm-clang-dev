// RUN: run
// ARGS: -freflection-latest
// P3491R3: define_static_string / define_static_array / define_static_object: objects with static storage
// created at compile time from values computed at compile time (here through 'substitute' of a variable
// template over the elements, as libc++'s <meta> does).
#include "../p2996-reflection/meta.h"

using namespace std::meta;

consteval bool streq(const char *a, const char *b) {
  while (*a && *a == *b) {
    ++a;
    ++b;
  }
  return *a == *b;
}

// a string built at compile time, the result usable at run time
consteval const char *greeting() {
  char buffer[16] = {'h', 'e', 'l', 'l', 'o', 0};
  return std::define_static_string(buffer);
}
constexpr const char *g = greeting();
static_assert(streq(g, "hello"));

// the same content gives the same object
static_assert(std::define_static_string("abc") == std::define_static_string("abc"));
static_assert(std::define_static_string("abc") != std::define_static_string("abd"));

// a string from a name
static_assert(streq(std::define_static_string(identifier_of(^^greeting)), "greeting"));

// arrays: the elements as template arguments of an array template
template <typename T, T... Vs>
inline constexpr T Array[sizeof...(Vs)] = {Vs...};

consteval const int *squares() {
  infos args;
  args.push_back(^^int);
  for (int i = 1; i <= 4; ++i)
    args.push_back(reflect_constant(i * i));
  return extract<const int *>(substitute(^^Array, args));
}
constexpr const int *sq = squares();
static_assert(sq[0] == 1 && sq[1] == 4 && sq[2] == 9 && sq[3] == 16);

int main() {
  const char *s = g;               // static storage: valid at run time
  if (s[0] != 'h' || s[4] != 'o' || s[5] != 0) return 1;
  int total = 0;
  for (int i = 0; i < 4; ++i)
    total += sq[i];
  return total == 30 ? 0 : 2;
}
