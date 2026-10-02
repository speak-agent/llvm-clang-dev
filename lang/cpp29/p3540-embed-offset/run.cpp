// RUN: run
// P3540R3: compiled, linked and run.
extern "C" int puts(const char*);

constexpr unsigned char tail[] = {
#embed <jump.wav> offset(3)
};
constexpr unsigned char middle[] = {
#embed <jump.wav> offset(1) limit(3)
};
constexpr unsigned char none[] = {
#embed <jump.wav> offset(5) if_empty(99)
};

int main() {
  if (sizeof(tail) != 2 || tail[0] != 13 || tail[1] != 14) return 1;
  if (sizeof(middle) != 3 || middle[0] != 11 || middle[2] != 13) return 2;
  if (sizeof(none) != 1 || none[0] != 99) return 3;
  puts("offset");
  return 0;
}
