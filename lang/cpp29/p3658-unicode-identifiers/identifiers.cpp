// RUN: verify
// P3658R1 (identifiers follow the mathematical compatibility notation profile, a defect report against all
// C++ modes; the diagnostics below are for the modes before C++2d): the examples of the paper's table.

// Valid since C++11 and after P1949: XID_Start and XID_Continue.
int Hawaiʻi;   // Hawaiʻi, U+02BB
int Hawaiʻi2;
int ǃnu;            // U+01C3 (a letter; Clang warns that it looks like '!') // expected-warning {{treating Unicode character <U+01C3> as an identifier character rather than as '!' symbol}}
int fʹ;             // U+02B9
int grad_𝑓;         // U+1D453
int xⁿ;             // U+207F
int 𓋴𓅱𓎛𓏏𓆇;

// Valid in C++11 and again now, with the profile's ID_Compat_Math_Start and ID_Compat_Math_Continue.
int 𝛁f, x², x₂, 𝜕Ω;
// Invalid in C++11 and in P1949's, valid now.
int ∇f, ∂Ω, C∞;

// The same with universal-character-names (both forms).
int x²y;       // x²y
int ∇g;        // ∇g
int \U0001D6C1h;    // 𝛁h
int \u{221E}q = 1;  // ∞q
int a\N{SUBSCRIPT EQUALS SIGN}z = 1;
int \N{MATHEMATICAL SANS-SERIF BOLD ITALIC PARTIAL DIFFERENTIAL}w = 1;

// All of them are one identifier each, so they can be used.
constexpr int ∂x = 3, ∂y = 4;
constexpr int norm² = ∂x * ∂x + ∂y * ∂y;
static_assert(norm² == 25);

// Compare the identifier with its spelling by universal-character-names: the same one.
constexpr int Δ² = 1;
static_assert(Δ² == 1);
