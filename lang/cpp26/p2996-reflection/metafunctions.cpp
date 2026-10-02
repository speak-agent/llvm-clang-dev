// RUN: run
// ARGS: -freflection-latest
// P2996R13: the reflection operator, splices and the metafunctions the core language needs
// (reflections of namespaces, types, members, enumerators, bases, template arguments, values).
#include "meta.h"

using namespace std::meta;

consteval bool streq(const char *a, const char *b) {
  while (*a && *a == *b) {
    ++a;
    ++b;
  }
  return *a == *b;
}

namespace N {
struct Base {};
struct S : Base {
  int a;
  char b;
  static int c;
  void f();
 private:
  long d;
};
enum class E { x, y = 5, z };
template <typename T, int I> struct TT {};
int global;
}  // namespace N

// names and kinds
static_assert(streq(identifier_of(^^N), "N"));
static_assert(streq(identifier_of(^^N::S), "S"));
static_assert(streq(identifier_of(^^N::S::a), "a"));
static_assert(streq(identifier_of(^^N::E::y), "y"));
static_assert(is_namespace(^^N) && !is_namespace(^^N::S));
static_assert(is_type(^^N::S) && is_type(^^int) && !is_type(^^N::S::a));
static_assert(is_function(^^N::S::f) && !is_function(^^N::global));
static_assert(is_variable(^^N::global) && is_variable(^^N::S::c));
static_assert(is_template(^^N::TT) && !is_template(^^N::S));
static_assert(is_enumerator(^^N::E::x));
static_assert(is_nonstatic_data_member(^^N::S::a) && !is_nonstatic_data_member(^^N::S::c));
static_assert(is_static_member(^^N::S::c));
static_assert(is_public(^^N::S::a) && is_private(^^N::S::d));
static_assert(is_class_member(^^N::S::f) && is_namespace_member(^^N::S));

// parents and types
static_assert(parent_of(^^N::S) == ^^N);
static_assert(parent_of(^^N::S::a) == ^^N::S);
static_assert(type_of(^^N::S::a) == ^^int);
static_assert(type_of(^^N::S::d) == ^^long);
static_assert(type_of(^^N::global) == ^^int);

// ranges
static_assert(members_of(^^N::S).size() >= 5);
static_assert(nonstatic_data_members_of(^^N::S).size() == 3);
static_assert(streq(identifier_of(nonstatic_data_members_of(^^N::S)[0]), "a"));
static_assert(streq(identifier_of(nonstatic_data_members_of(^^N::S)[1]), "b"));
static_assert(enumerators_of(^^N::E).size() == 3);
static_assert(streq(identifier_of(enumerators_of(^^N::E)[2]), "z"));
static_assert(bases_of(^^N::S).size() == 1);
static_assert(type_of(bases_of(^^N::S)[0]) == ^^N::Base);
static_assert(is_base(bases_of(^^N::S)[0]));

// template arguments
using TT_int_3 = N::TT<int, 3>;
static_assert(template_of(^^TT_int_3) == ^^N::TT);
static_assert(has_template_arguments(^^TT_int_3));
static_assert(template_arguments_of(^^TT_int_3).size() == 2);
static_assert(template_arguments_of(^^TT_int_3)[0] == ^^int);
static_assert(extract<int>(template_arguments_of(^^TT_int_3)[1]) == 3);

// reflections of values, extraction
static_assert(extract<int>(reflect_constant(42)) == 42);
static_assert(reflect_constant(42) == reflect_constant(42));
static_assert(reflect_constant(42) != reflect_constant(43));
static_assert(extract<char>(reflect_constant('x')) == 'x');

// substitute
template <typename T> struct Box { T value; };
static_assert(substitute(^^Box, [] { infos a; a.push_back(^^int); return a; }()) == ^^Box<int>);

// splices
constexpr info r_int = ^^int;
static_assert(sizeof(typename [:r_int:]) == sizeof(int));
static_assert([:reflect_constant(7):] == 7);
constexpr info r_global = ^^N::global;

int main() {
  [:r_global:] = 11;
  if (N::global != 11) return 1;

  N::S s{1, 'b', 2};
  s.[:^^N::S::a:] = 5;
  if (s.a != 5) return 2;
  return 0;
}
