// RUN: run
// P1967R14: the bytes of the resource reach the program: compiled, linked and run.
extern "C" int puts(const char*);

constexpr unsigned char bin[] = {
#embed <d.bin>
};
constexpr unsigned char text[] = {
#embed "ches.glsl" suffix(, 0)
};
const int ints[] = {
#embed <data.dat> limit(3) suffix(, 7)
};

int main() {
  if (sizeof(bin) != 4 || bin[0] != 104 || bin[1] != 101 || bin[2] != 0 || bin[3] != 255) return 1;
  if (sizeof(text) != 3 || text[0] != 'a' || text[1] != 'b' || text[2] != 0) return 2;
  if (sizeof(ints) != 4 * sizeof(int) || ints[0] != 1 || ints[1] != 2 || ints[2] != 3 || ints[3] != 7) return 3;
  puts(reinterpret_cast<const char*>(text));
  // The unbounded array's size is the number of elements.
  static const char embedded[] = {
#embed <jump.wav>
  };
  return sizeof(embedded) == 5 && embedded[4] == 14 ? 0 : 4;
}
