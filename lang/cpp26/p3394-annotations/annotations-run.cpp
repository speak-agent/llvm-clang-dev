// RUN: run
// ARGS: -freflection-latest
// P3394R4: annotations (`[[=value]]`): attached to declarations, read back with annotations_of / extract.
#include "../p2996-reflection/meta.h"

using namespace std::meta;

struct Tag { int id; };
struct Other {};

[[=1, =Tag{7}]] int a;
[[=Other{}]] void fn();
struct [[=Tag{3}]] S {
  [[=2]] int member;
  int plain;
};

static_assert(annotations_of(^^a).size() == 2);
static_assert(annotations_of(^^fn).size() == 1);
static_assert(annotations_of(^^S).size() == 1);
static_assert(annotations_of(^^S::member).size() == 1);
static_assert(annotations_of(^^S::plain).size() == 0);

static_assert(is_annotation(annotations_of(^^a)[0]));
static_assert(!is_annotation(^^a));
static_assert(type_of(annotations_of(^^a)[0]) == ^^int);
static_assert(extract<int>(annotations_of(^^a)[0]) == 1);
static_assert(type_of(annotations_of(^^a)[1]) == ^^Tag);
static_assert(extract<Tag>(annotations_of(^^a)[1]).id == 7);
static_assert(extract<Tag>(annotations_of(^^S)[0]).id == 3);
static_assert(extract<int>(annotations_of(^^S::member)[0]) == 2);

// annotations used to drive a computation over the members
consteval int annotated_members_sum() {
  int sum = 0;
  for (info m : nonstatic_data_members_of(^^S))
    for (info an : annotations_of(m))
      if (type_of(an) == ^^int)
        sum += extract<int>(an);
  return sum;
}
static_assert(annotated_members_sum() == 2);

int main() { return 0; }
