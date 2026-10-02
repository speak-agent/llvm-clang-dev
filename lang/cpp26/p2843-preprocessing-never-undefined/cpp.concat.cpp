// RUN: verify
// P2843R3, [cpp.concat]/3: if the result of ## is not a valid preprocessing token the program is ill-formed
// (an error in Clang, as the paper says the compilers' existing practice is).

#define DO_CONCAT(a, b) a##b
#define CONCAT(a, b) DO_CONCAT(a, b)
#define MINUS -

int main() {
  int word = 0;
  auto x = CONCAT(MINUS, word); // expected-error {{pasting formed '-word', an invalid preprocessing token}}
}
