/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Exegesis Tables                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


static const char *AArch64PfmCounterNames[] = {
  "CYCLES", // 0
};


static const PfmCountersInfo AArch64DefaultPfmCounters = {
  AArch64PfmCounterNames[0],  // Cycle counter
  -1, 0, // No raw cycle counter
  nullptr,  // No uops counter.
  -1, 0, // No raw uops counter
  nullptr, 0, // No issue counters
  nullptr, 0 // No validation counters.
};

// Sorted (by CpuName) array of pfm counters.
static const CpuAndPfmCounters AArch64CpuPfmCounters[] = {
  { "", &AArch64DefaultPfmCounters },
};

