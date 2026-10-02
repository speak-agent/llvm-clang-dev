// RUN: verify
// P2843R3, [cpp.stringize]/2: a # that does not make a valid character string literal is ill-formed (Clang has
// ignored the final backslash, with a warning, since 3.x: the diagnostic the paper requires), and a new-line
// in a raw string literal that is stringized becomes \n (CWG1709, defined now; it always was in Clang).

#define TO_TEXT(a) #a
#define TEXT(a) TO_TEXT(a)

// A macro that expands to a backslash: the string literal would have no end.
#define BACKSLASH \\

const char *x = TEXT(BACKSLASH); // expected-warning {{invalid string literal, ignoring final '\'}}

// Two backslashes are an escaped backslash: valid.
constexpr const char y[] = TO_TEXT(\\);
static_assert(__builtin_strcmp(y, "\\") == 0); // the spelling \\ is the string "\\": one backslash
constexpr const char z[] = TO_TEXT("\\");
static_assert(__builtin_strcmp(z, "\"\\\\\"") == 0);

// A new-line in a raw string literal is \n in the string.
#define STR(x) #x
constexpr const char raw[] = STR(R"(a
b)");
static_assert(__builtin_strcmp(raw, "R\"(a\nb)\"") == 0);
