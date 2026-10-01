// RUN: run
// P2662R3: a run test -- compiled, linked and run, exit status 0.
extern "C" int puts(const char*);

template <class... T> constexpr auto last(T... t) { return t...[sizeof...(T) - 1]; }

int main() {
    if (last(1, 2, 7) != 7) return 1;
    puts("pack indexing runs");
    return 0;
}
