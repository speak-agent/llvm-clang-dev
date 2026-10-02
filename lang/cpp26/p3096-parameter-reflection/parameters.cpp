// RUN: run
// ARGS: -freflection-latest
// P3096R12: reflection of function parameters: parameters_of, their names and types, default arguments,
// the return type, and the variable a parameter reflection stands for.
#include "../p2996-reflection/meta.h"

using namespace std::meta;

consteval bool streq(const char *a, const char *b) {
  while (*a && *a == *b) {
    ++a;
    ++b;
  }
  return *a == *b;
}

int add(int left, long right, char = 'a');
void noargs();
void ellipsis(int n, ...);

static_assert(parameters_of(^^add).size() == 3);
static_assert(parameters_of(^^noargs).size() == 0);
static_assert(parameters_of(^^ellipsis).size() == 1);
static_assert(has_ellipsis_parameter(^^ellipsis) && !has_ellipsis_parameter(^^add));

static_assert(streq(identifier_of(parameters_of(^^add)[0]), "left"));
static_assert(streq(identifier_of(parameters_of(^^add)[1]), "right"));
static_assert(!has_identifier(parameters_of(^^add)[2]));
static_assert(type_of(parameters_of(^^add)[0]) == ^^int);
static_assert(type_of(parameters_of(^^add)[1]) == ^^long);
static_assert(type_of(parameters_of(^^add)[2]) == ^^char);
static_assert(is_function_parameter(parameters_of(^^add)[0]));
static_assert(!is_function_parameter(^^add));
static_assert(has_default_argument(parameters_of(^^add)[2]));
static_assert(!has_default_argument(parameters_of(^^add)[0]));
static_assert(return_type_of(^^add) == ^^int);
static_assert(return_type_of(^^noargs) == ^^void);

// parameters of a member function and of a function template instantiation
struct S {
  double scale(double factor, int times) const;
  static void st(int only);
};
static_assert(parameters_of(^^S::scale).size() == 2);
static_assert(streq(identifier_of(parameters_of(^^S::scale)[0]), "factor"));
static_assert(parameters_of(^^S::st).size() == 1);

template <typename T>
T twice(T value, int count = 2);
static_assert(parameters_of(^^twice<int>).size() == 2);
static_assert(type_of(parameters_of(^^twice<long>)[0]) == ^^long);

// the same names across redeclarations, as the definition spells them
int add(int left, long right, char) { return left + (int)right; }

int main() { return add(1, 2) == 3 ? 0 : 1; }
