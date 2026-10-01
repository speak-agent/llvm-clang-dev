#!/usr/bin/env python3
"""The C++26 / C++29 language tests (ML): every test under lang/<generation>/<paper>/ compiled by the clang
this repository builds (tools/driver-smoke), as its first lines say.

    python3 lang/run.py --clang CLANG [--ld-path LD] [--only SUBSTRING] [--jobs N] [--report FILE]

A test is one source file; its leading comment lines say what to do with it:

    // RUN: verify          clang -fsyntax-only -Xclang -verify: the file's expected-error / expected-warning /
                            expected-note directives (or expected-no-diagnostics) must be exactly what clang reports
    // RUN: run             compiled, linked (--ld-path) and run: it must exit with 0
    // ARGS: -fsomething    further arguments for this file (the paper's option, when the fork puts it behind one)

The standard is the directory's: cpp26 is -std=c++2c, cpp29 -std=c++2d. A run test uses no C++ library (it
links with -nostdlib++): it declares what it calls from the C library itself (extern "C" int puts(const char*)).

Exits non-zero when any test fails; prints one line per failure with clang's output, and a count per paper.
"""
import concurrent.futures, json, pathlib, subprocess, sys, tempfile

def arg(name, default=None):
    return sys.argv[sys.argv.index(f"--{name}") + 1] if f"--{name}" in sys.argv else default

STANDARD = { "cpp26": "-std=c++2c", "cpp29": "-std=c++2d" }
root = pathlib.Path(__file__).resolve().parent
clang = str(pathlib.Path(arg("clang")).absolute())
ld_path = arg("ld-path")
only = arg("only", "")
jobs = int(arg("jobs", "4"))

def header(path):
    run, args = None, []
    for line in path.read_text(encoding="utf-8").splitlines():
        if not line.startswith("//"):
            break
        text = line[2:].strip()
        if text.startswith("RUN:"):
            run = text[4:].strip()
        elif text.startswith("ARGS:"):
            args += text[5:].split()
    return run, args

def check(path):
    generation = path.relative_to(root).parts[0]
    run, args = header(path)
    common = [clang, STANDARD[generation], *args]
    if run == "verify":
        p = subprocess.run([*common, "-fsyntax-only", "-Xclang", "-verify", str(path)], capture_output=True, text=True)
        return p.returncode == 0, p.stdout + p.stderr
    if run == "run":
        with tempfile.TemporaryDirectory(prefix="mcxx-lang-") as d:
            exe = pathlib.Path(d) / "t"
            link = [f"--ld-path={ld_path}"] if ld_path else []
            p = subprocess.run([*common, "-nostdlib++", *link, str(path), "-o", str(exe)], capture_output=True, text=True)
            if p.returncode != 0:
                return False, p.stdout + p.stderr
            r = subprocess.run([str(exe)], capture_output=True, text=True, timeout=60)
            return r.returncode == 0, f"exit {r.returncode}\n{r.stdout}{r.stderr}"
    return False, f"no `// RUN: verify` or `// RUN: run` line (found {run!r})"

tests = sorted(p for g in STANDARD for p in (root / g).rglob("*.cpp") if only in str(p.relative_to(root)))
with concurrent.futures.ThreadPoolExecutor(jobs) as pool:
    results = list(zip(tests, pool.map(check, tests)))

papers = {}
for path, (ok, output) in results:
    paper = "/".join(path.relative_to(root).parts[:2])
    passed, total = papers.get(paper, (0, 0))
    papers[paper] = (passed + ok, total + 1)
    if not ok:
        print(f"FAILED {path.relative_to(root)}\n{output.rstrip()}\n")
for paper, (passed, total) in papers.items():
    print(f"{paper:48} {passed}/{total}")
failed = sum(not ok for _, (ok, _) in results)
print(f"{len(results) - failed}/{len(results)} tests passed")
if arg("report"):
    report = { str(p.relative_to(root)): { "passed": ok, "output": out } for p, (ok, out) in results }
    pathlib.Path(arg("report")).write_text(json.dumps(report, indent=1) + "\n")
sys.exit(1 if failed or not results else 0)
