// RUN: run
// ARGS: -freflection-latest
// P2996R13 define_aggregate, and P3289 consteval blocks: a class completed from a list of member descriptions.
#include "meta.h"

using namespace std::meta;

struct Pair;                 // incomplete

consteval infos pair_members() {
  infos m;
  m.push_back(data_member_spec(^^int, "first"));
  m.push_back(data_member_spec(^^char, "second"));
  return m;
}

consteval { define_aggregate(^^Pair, pair_members()); }

static_assert(is_complete_type(^^Pair));
static_assert(nonstatic_data_members_of(^^Pair).size() == 2);
static_assert(type_of(nonstatic_data_members_of(^^Pair)[0]) == ^^int);
static_assert(type_of(nonstatic_data_members_of(^^Pair)[1]) == ^^char);

// a class template whose members come from a list of types
template <typename... Ts>
struct Tuple;

template <typename... Ts>
consteval infos tuple_members() {
  infos m;
  size_t i = 0;
  ((m.push_back(data_member_spec(^^Ts, i == 0 ? "e0" : i == 1 ? "e1" : "e2")), ++i), ...);
  return m;
}

consteval { define_aggregate(^^Tuple<int, double, char>, tuple_members<int, double, char>()); }

// consteval blocks run during translation
constexpr int evaluated_in_block = [] {
  int n = 0;
  return n;
}();
consteval { if (evaluated_in_block != 0) throw "unreachable"; }

int main() {
  Pair p{3, 'z'};
  if (p.first != 3 || p.second != 'z') return 1;

  Tuple<int, double, char> t{1, 2.5, 'c'};
  if (t.e0 != 1 || t.e1 != 2.5 || t.e2 != 'c') return 2;
  return 0;
}
