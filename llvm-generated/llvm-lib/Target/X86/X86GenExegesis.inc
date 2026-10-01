/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Exegesis Tables                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


static const char *X86PfmCounterNames[] = {
  "BRANCH-MISSES", // 0
  "DTLB-LOAD-MISSES", // 1
  "DTLB_LOAD_MISSES:MISS_CAUSES_A_WALK", // 2
  "DTLB_STORE_MISSES:MISS_CAUSES_A_WALK", // 3
  "INSTRUCTIONS_RETIRED", // 4
  "ITLB-LOAD-MISSES", // 5
  "ITLB_MISSES:MISS_CAUSES_A_WALK", // 6
  "L1-DCACHE-LOAD-MISSES", // 7
  "L1-DCACHE-STORE-MISSES", // 8
  "L1-ICACHE-LOAD-MISSES", // 9
  "MEM_LOAD_UOPS_RETIRED:L1_MISS", // 10
  "RETIRED_INSTRUCTIONS", // 11
  "cpu_clk_unhalted", // 12
  "cycles_not_in_halt", // 13
  "dispatched_fpu:pipe0", // 14
  "dispatched_fpu:pipe1", // 15
  "dispatched_fpu_ops:ops_pipe0 + dispatched_fpu_ops:ops_dual_pipe0", // 16
  "dispatched_fpu_ops:ops_pipe1 + dispatched_fpu_ops:ops_dual_pipe1", // 17
  "dispatched_fpu_ops:ops_pipe2 + dispatched_fpu_ops:ops_dual_pipe2", // 18
  "dispatched_fpu_ops:ops_pipe3 + dispatched_fpu_ops:ops_dual_pipe3", // 19
  "div_op_count", // 20
  "fpu_pipe_assignment:total0", // 21
  "fpu_pipe_assignment:total1", // 22
  "fpu_pipe_assignment:total2", // 23
  "fpu_pipe_assignment:total3", // 24
  "ls_dispatch:ld_dispatch", // 25
  "ls_dispatch:ld_st_dispatch + ls_dispatch:ld_dispatch + ls_dispatch:store_dispatch", // 26
  "ls_dispatch:store_dispatch", // 27
  "mem_uop_retired:any_ld + mem_uop_retired:any_st", // 28
  "ops_type_dispatched_from_decoder:fp_disp_retire_mode", // 29
  "ops_type_dispatched_from_decoder:int_disp_retire_mode", // 30
  "retired_ops", // 31
  "retired_uops", // 32
  "rs_uops_dispatched_cycles:port_0", // 33
  "rs_uops_dispatched_cycles:port_1", // 34
  "rs_uops_dispatched_cycles:port_2 + rs_uops_dispatched_cycles:port_3", // 35
  "rs_uops_dispatched_cycles:port_4", // 36
  "rs_uops_dispatched_cycles:port_5", // 37
  "unhalted_core_cycles", // 38
  "uops_dispatched:alu", // 39
  "uops_dispatched:int_eu_all", // 40
  "uops_dispatched:jmp", // 41
  "uops_dispatched:load", // 42
  "uops_dispatched:port_0", // 43
  "uops_dispatched:port_1", // 44
  "uops_dispatched:port_2_3", // 45
  "uops_dispatched:port_2_3_10", // 46
  "uops_dispatched:port_4_9", // 47
  "uops_dispatched:port_5", // 48
  "uops_dispatched:port_5_11", // 49
  "uops_dispatched:port_6", // 50
  "uops_dispatched:port_7_8", // 51
  "uops_dispatched:shift", // 52
  "uops_dispatched:sta", // 53
  "uops_dispatched:std", // 54
  "uops_dispatched_port:port_0", // 55
  "uops_dispatched_port:port_1", // 56
  "uops_dispatched_port:port_2", // 57
  "uops_dispatched_port:port_2 + uops_dispatched_port:port_3", // 58
  "uops_dispatched_port:port_3", // 59
  "uops_dispatched_port:port_4", // 60
  "uops_dispatched_port:port_5", // 61
  "uops_dispatched_port:port_6", // 62
  "uops_dispatched_port:port_7", // 63
  "uops_executed:port0", // 64
  "uops_executed:port1", // 65
  "uops_executed:port2_core + uops_executed:port3_core", // 66
  "uops_executed:port4_core", // 67
  "uops_executed:port5", // 68
  "uops_executed_port:port_0", // 69
  "uops_executed_port:port_1", // 70
  "uops_executed_port:port_2", // 71
  "uops_executed_port:port_3", // 72
  "uops_executed_port:port_4", // 73
  "uops_executed_port:port_5", // 74
  "uops_executed_port:port_6", // 75
  "uops_executed_port:port_7", // 76
  "uops_issued:any", // 77
  "uops_retired", // 78
  "uops_retired:all", // 79
  "uops_retired:any", // 80
};

static const PfmCountersInfo::IssueCounter X86PfmIssueCounters[] = {
  { X86PfmCounterNames[43], "ADLPPort00"},
  { X86PfmCounterNames[44], "ADLPPort01"},
  { X86PfmCounterNames[46], "ADLPPort02_03_10"},
  { X86PfmCounterNames[47], "ADLPPort04_09"},
  { X86PfmCounterNames[49], "ADLPPort05_11"},
  { X86PfmCounterNames[50], "ADLPPort06"},
  { X86PfmCounterNames[51], "ADLPPort07_08"},
  { X86PfmCounterNames[16], "PdFPU0"},
  { X86PfmCounterNames[17], "PdFPU1"},
  { X86PfmCounterNames[18], "PdFPU2"},
  { X86PfmCounterNames[19], "PdFPU3"},
  { X86PfmCounterNames[16], "SrFPU0"},
  { X86PfmCounterNames[17], "SrFPU1"},
  { X86PfmCounterNames[18], "SrFPU2"},
  { X86PfmCounterNames[69], "BWPort0"},
  { X86PfmCounterNames[70], "BWPort1"},
  { X86PfmCounterNames[71], "BWPort2"},
  { X86PfmCounterNames[72], "BWPort3"},
  { X86PfmCounterNames[73], "BWPort4"},
  { X86PfmCounterNames[74], "BWPort5"},
  { X86PfmCounterNames[75], "BWPort6"},
  { X86PfmCounterNames[76], "BWPort7"},
  { X86PfmCounterNames[14], "BtFPU0"},
  { X86PfmCounterNames[15], "BtFPU1"},
  { X86PfmCounterNames[14], "JFPU0"},
  { X86PfmCounterNames[15], "JFPU1"},
  { X86PfmCounterNames[33], "SBPort0"},
  { X86PfmCounterNames[34], "SBPort1"},
  { X86PfmCounterNames[35], "SBPort23"},
  { X86PfmCounterNames[36], "SBPort4"},
  { X86PfmCounterNames[37], "SBPort5"},
  { X86PfmCounterNames[69], "HWPort0"},
  { X86PfmCounterNames[70], "HWPort1"},
  { X86PfmCounterNames[71], "HWPort2"},
  { X86PfmCounterNames[72], "HWPort3"},
  { X86PfmCounterNames[73], "HWPort4"},
  { X86PfmCounterNames[74], "HWPort5"},
  { X86PfmCounterNames[75], "HWPort6"},
  { X86PfmCounterNames[76], "HWPort7"},
  { X86PfmCounterNames[43], "ICXPort0"},
  { X86PfmCounterNames[44], "ICXPort1"},
  { X86PfmCounterNames[45], "ICXPort23"},
  { X86PfmCounterNames[47], "ICXPort49"},
  { X86PfmCounterNames[48], "ICXPort5"},
  { X86PfmCounterNames[50], "ICXPort6"},
  { X86PfmCounterNames[51], "ICXPort78"},
  { X86PfmCounterNames[39], "LNLPVPort02_03"},
  { X86PfmCounterNames[40], "LNLPPort00_01_02_03_04_05"},
  { X86PfmCounterNames[41], "LNLPPort00_02_04"},
  { X86PfmCounterNames[42], "LNLPPort20_21_22"},
  { X86PfmCounterNames[52], "LNLPPort01_03_05"},
  { X86PfmCounterNames[53], "LNLPPort25_26_27"},
  { X86PfmCounterNames[54], "LNLPPort10_11"},
  { X86PfmCounterNames[64], "SBPort0"},
  { X86PfmCounterNames[65], "SBPort1"},
  { X86PfmCounterNames[66], "SBPort23"},
  { X86PfmCounterNames[67], "SBPort4"},
  { X86PfmCounterNames[68], "SBPort5"},
  { X86PfmCounterNames[28], "SLM_MEC_RSV"},
  { X86PfmCounterNames[55], "SBPort0"},
  { X86PfmCounterNames[56], "SBPort1"},
  { X86PfmCounterNames[58], "SBPort23"},
  { X86PfmCounterNames[60], "SBPort4"},
  { X86PfmCounterNames[61], "SBPort5"},
  { X86PfmCounterNames[43], "SPRPort00"},
  { X86PfmCounterNames[44], "SPRPort01"},
  { X86PfmCounterNames[46], "SPRPort02_03_10"},
  { X86PfmCounterNames[47], "SPRPort04_09"},
  { X86PfmCounterNames[49], "SPRPort05_11"},
  { X86PfmCounterNames[50], "SPRPort06"},
  { X86PfmCounterNames[51], "SPRPort07_08"},
  { X86PfmCounterNames[55], "SKLPort0"},
  { X86PfmCounterNames[56], "SKLPort1"},
  { X86PfmCounterNames[57], "SKLPort2"},
  { X86PfmCounterNames[59], "SKLPort3"},
  { X86PfmCounterNames[60], "SKLPort4"},
  { X86PfmCounterNames[61], "SKLPort5"},
  { X86PfmCounterNames[62], "SKLPort6"},
  { X86PfmCounterNames[63], "SKLPort7"},
  { X86PfmCounterNames[55], "SKXPort0"},
  { X86PfmCounterNames[56], "SKXPort1"},
  { X86PfmCounterNames[57], "SKXPort2"},
  { X86PfmCounterNames[59], "SKXPort3"},
  { X86PfmCounterNames[60], "SKXPort4"},
  { X86PfmCounterNames[61], "SKXPort5"},
  { X86PfmCounterNames[62], "SKXPort6"},
  { X86PfmCounterNames[63], "SKXPort7"},
  { X86PfmCounterNames[21], "ZnFPU0"},
  { X86PfmCounterNames[22], "ZnFPU1"},
  { X86PfmCounterNames[23], "ZnFPU2"},
  { X86PfmCounterNames[24], "ZnFPU3"},
  { X86PfmCounterNames[26], "ZnAGU"},
  { X86PfmCounterNames[20], "ZnDivider"},
  { X86PfmCounterNames[26], "Zn2AGU"},
  { X86PfmCounterNames[20], "Zn2Divider"},
  { X86PfmCounterNames[30], "Zn3Int"},
  { X86PfmCounterNames[29], "Zn3FPU"},
  { X86PfmCounterNames[25], "Zn3Load"},
  { X86PfmCounterNames[27], "Zn3Store"},
  { X86PfmCounterNames[20], "Zn3Divider"},
  { X86PfmCounterNames[30], "Zn4Int"},
  { X86PfmCounterNames[29], "Zn4FPU"},
  { X86PfmCounterNames[25], "Zn4Load"},
  { X86PfmCounterNames[27], "Zn4Store"},
  { X86PfmCounterNames[20], "Zn4Divider"},
  { X86PfmCounterNames[26], "Zn4AGU"},
};

static const std::pair<ValidationEvent, const char*> X86AlderLakePfmCountersValidationCounters[] = {
  { InstructionRetired, X86PfmCounterNames[4]},
  { L1DCacheLoadMiss, X86PfmCounterNames[10]},
  { L1ICacheLoadMiss, X86PfmCounterNames[9]},
  { DataTLBLoadMiss, X86PfmCounterNames[2]},
  { DataTLBStoreMiss, X86PfmCounterNames[3]},
  { InstructionTLBLoadMiss, X86PfmCounterNames[6]},
  { BranchPredictionMiss, X86PfmCounterNames[0]},
};

static const PfmCountersInfo X86AlderLakePfmCounters = {
  X86PfmCounterNames[38],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[77],  // Uops counter
  -1, 0, // No raw uops counter
  X86PfmIssueCounters + 0, 7, // Issue counters.
  X86AlderLakePfmCountersValidationCounters, 7 // Validation counters.
};

static const PfmCountersInfo X86AtomPfmCounters = {
  X86PfmCounterNames[38],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[80],  // Uops counter
  -1, 0, // No raw uops counter
  nullptr, 0, // No issue counters
  nullptr, 0 // No validation counters.
};

static const PfmCountersInfo X86BdVer2PfmCounters = {
  X86PfmCounterNames[12],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[32],  // Uops counter
  -1, 0, // No raw uops counter
  X86PfmIssueCounters + 7, 4, // Issue counters.
  nullptr, 0 // No validation counters.
};

static const PfmCountersInfo X86BdVer3PfmCounters = {
  X86PfmCounterNames[12],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[32],  // Uops counter
  -1, 0, // No raw uops counter
  X86PfmIssueCounters + 11, 3, // Issue counters.
  nullptr, 0 // No validation counters.
};

static const std::pair<ValidationEvent, const char*> X86BroadwellPfmCountersValidationCounters[] = {
  { InstructionRetired, X86PfmCounterNames[4]},
  { L1DCacheLoadMiss, X86PfmCounterNames[10]},
  { L1ICacheLoadMiss, X86PfmCounterNames[9]},
  { DataTLBLoadMiss, X86PfmCounterNames[2]},
  { DataTLBStoreMiss, X86PfmCounterNames[3]},
  { InstructionTLBLoadMiss, X86PfmCounterNames[6]},
  { BranchPredictionMiss, X86PfmCounterNames[0]},
};

static const PfmCountersInfo X86BroadwellPfmCounters = {
  X86PfmCounterNames[38],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[77],  // Uops counter
  -1, 0, // No raw uops counter
  X86PfmIssueCounters + 14, 8, // Issue counters.
  X86BroadwellPfmCountersValidationCounters, 7 // Validation counters.
};

static const PfmCountersInfo X86BtVer1PfmCounters = {
  X86PfmCounterNames[12],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[32],  // Uops counter
  -1, 0, // No raw uops counter
  X86PfmIssueCounters + 22, 2, // Issue counters.
  nullptr, 0 // No validation counters.
};

static const PfmCountersInfo X86BtVer2PfmCounters = {
  X86PfmCounterNames[12],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[32],  // Uops counter
  -1, 0, // No raw uops counter
  X86PfmIssueCounters + 24, 2, // Issue counters.
  nullptr, 0 // No validation counters.
};

static const PfmCountersInfo X86Core2PfmCounters = {
  X86PfmCounterNames[38],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[80],  // Uops counter
  -1, 0, // No raw uops counter
  X86PfmIssueCounters + 26, 5, // Issue counters.
  nullptr, 0 // No validation counters.
};

static const PfmCountersInfo X86CorePfmCounters = {
  X86PfmCounterNames[38],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[80],  // Uops counter
  -1, 0, // No raw uops counter
  nullptr, 0, // No issue counters
  nullptr, 0 // No validation counters.
};

static const PfmCountersInfo X86DefaultAMDPfmCounters = {
  X86PfmCounterNames[12],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[32],  // Uops counter
  -1, 0, // No raw uops counter
  nullptr, 0, // No issue counters
  nullptr, 0 // No validation counters.
};

static const PfmCountersInfo X86DefaultPfmCounters = {
  nullptr,  // No cycle counter.
  -1, 0, // No raw cycle counter
  nullptr,  // No uops counter.
  -1, 0, // No raw uops counter
  nullptr, 0, // No issue counters
  nullptr, 0 // No validation counters.
};

static const std::pair<ValidationEvent, const char*> X86HaswellPfmCountersValidationCounters[] = {
  { InstructionRetired, X86PfmCounterNames[4]},
  { L1DCacheLoadMiss, X86PfmCounterNames[10]},
  { L1ICacheLoadMiss, X86PfmCounterNames[9]},
  { DataTLBLoadMiss, X86PfmCounterNames[2]},
  { DataTLBStoreMiss, X86PfmCounterNames[3]},
  { InstructionTLBLoadMiss, X86PfmCounterNames[6]},
  { BranchPredictionMiss, X86PfmCounterNames[0]},
};

static const PfmCountersInfo X86HaswellPfmCounters = {
  X86PfmCounterNames[38],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[77],  // Uops counter
  -1, 0, // No raw uops counter
  X86PfmIssueCounters + 31, 8, // Issue counters.
  X86HaswellPfmCountersValidationCounters, 7 // Validation counters.
};

static const std::pair<ValidationEvent, const char*> X86IceLakePfmCountersValidationCounters[] = {
  { InstructionRetired, X86PfmCounterNames[4]},
  { L1DCacheLoadMiss, X86PfmCounterNames[10]},
  { L1ICacheLoadMiss, X86PfmCounterNames[9]},
  { DataTLBLoadMiss, X86PfmCounterNames[2]},
  { DataTLBStoreMiss, X86PfmCounterNames[3]},
  { InstructionTLBLoadMiss, X86PfmCounterNames[6]},
  { BranchPredictionMiss, X86PfmCounterNames[0]},
};

static const PfmCountersInfo X86IceLakePfmCounters = {
  X86PfmCounterNames[38],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[77],  // Uops counter
  -1, 0, // No raw uops counter
  X86PfmIssueCounters + 39, 7, // Issue counters.
  X86IceLakePfmCountersValidationCounters, 7 // Validation counters.
};

static const PfmCountersInfo X86KnightPfmCounters = {
  X86PfmCounterNames[38],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[79],  // Uops counter
  -1, 0, // No raw uops counter
  nullptr, 0, // No issue counters
  nullptr, 0 // No validation counters.
};

static const std::pair<ValidationEvent, const char*> X86LunarLakePfmCountersValidationCounters[] = {
  { InstructionRetired, X86PfmCounterNames[4]},
  { L1DCacheLoadMiss, X86PfmCounterNames[10]},
  { L1ICacheLoadMiss, X86PfmCounterNames[9]},
  { DataTLBLoadMiss, X86PfmCounterNames[2]},
  { DataTLBStoreMiss, X86PfmCounterNames[3]},
  { InstructionTLBLoadMiss, X86PfmCounterNames[6]},
  { BranchPredictionMiss, X86PfmCounterNames[0]},
};

static const PfmCountersInfo X86LunarLakePfmCounters = {
  X86PfmCounterNames[38],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[77],  // Uops counter
  -1, 0, // No raw uops counter
  X86PfmIssueCounters + 46, 7, // Issue counters.
  X86LunarLakePfmCountersValidationCounters, 7 // Validation counters.
};

static const PfmCountersInfo X86NehalemPfmCounters = {
  X86PfmCounterNames[38],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[80],  // Uops counter
  -1, 0, // No raw uops counter
  X86PfmIssueCounters + 53, 5, // Issue counters.
  nullptr, 0 // No validation counters.
};

static const PfmCountersInfo X86PentiumPfmCounters = {
  X86PfmCounterNames[12],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[78],  // Uops counter
  -1, 0, // No raw uops counter
  nullptr, 0, // No issue counters
  nullptr, 0 // No validation counters.
};

static const PfmCountersInfo X86SLMPfmCounters = {
  X86PfmCounterNames[38],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[80],  // Uops counter
  -1, 0, // No raw uops counter
  X86PfmIssueCounters + 58, 1, // Issue counters.
  nullptr, 0 // No validation counters.
};

static const std::pair<ValidationEvent, const char*> X86SandyBridgePfmCountersValidationCounters[] = {
  { InstructionRetired, X86PfmCounterNames[4]},
  { L1DCacheLoadMiss, X86PfmCounterNames[10]},
  { L1ICacheLoadMiss, X86PfmCounterNames[9]},
  { DataTLBLoadMiss, X86PfmCounterNames[2]},
  { DataTLBStoreMiss, X86PfmCounterNames[3]},
  { InstructionTLBLoadMiss, X86PfmCounterNames[6]},
  { BranchPredictionMiss, X86PfmCounterNames[0]},
};

static const PfmCountersInfo X86SandyBridgePfmCounters = {
  X86PfmCounterNames[38],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[77],  // Uops counter
  -1, 0, // No raw uops counter
  X86PfmIssueCounters + 59, 5, // Issue counters.
  X86SandyBridgePfmCountersValidationCounters, 7 // Validation counters.
};

static const std::pair<ValidationEvent, const char*> X86SapphireRapidsPfmCountersValidationCounters[] = {
  { InstructionRetired, X86PfmCounterNames[4]},
  { L1DCacheLoadMiss, X86PfmCounterNames[10]},
  { L1ICacheLoadMiss, X86PfmCounterNames[9]},
  { DataTLBLoadMiss, X86PfmCounterNames[2]},
  { DataTLBStoreMiss, X86PfmCounterNames[3]},
  { InstructionTLBLoadMiss, X86PfmCounterNames[6]},
  { BranchPredictionMiss, X86PfmCounterNames[0]},
};

static const PfmCountersInfo X86SapphireRapidsPfmCounters = {
  X86PfmCounterNames[38],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[77],  // Uops counter
  -1, 0, // No raw uops counter
  X86PfmIssueCounters + 64, 7, // Issue counters.
  X86SapphireRapidsPfmCountersValidationCounters, 7 // Validation counters.
};

static const std::pair<ValidationEvent, const char*> X86SkylakeClientPfmCountersValidationCounters[] = {
  { InstructionRetired, X86PfmCounterNames[4]},
  { L1DCacheLoadMiss, X86PfmCounterNames[10]},
  { L1ICacheLoadMiss, X86PfmCounterNames[9]},
  { DataTLBLoadMiss, X86PfmCounterNames[2]},
  { DataTLBStoreMiss, X86PfmCounterNames[3]},
  { InstructionTLBLoadMiss, X86PfmCounterNames[6]},
  { BranchPredictionMiss, X86PfmCounterNames[0]},
};

static const PfmCountersInfo X86SkylakeClientPfmCounters = {
  X86PfmCounterNames[38],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[77],  // Uops counter
  -1, 0, // No raw uops counter
  X86PfmIssueCounters + 71, 8, // Issue counters.
  X86SkylakeClientPfmCountersValidationCounters, 7 // Validation counters.
};

static const std::pair<ValidationEvent, const char*> X86SkylakeServerPfmCountersValidationCounters[] = {
  { InstructionRetired, X86PfmCounterNames[4]},
  { L1DCacheLoadMiss, X86PfmCounterNames[10]},
  { L1ICacheLoadMiss, X86PfmCounterNames[9]},
  { DataTLBLoadMiss, X86PfmCounterNames[2]},
  { DataTLBStoreMiss, X86PfmCounterNames[3]},
  { InstructionTLBLoadMiss, X86PfmCounterNames[6]},
  { BranchPredictionMiss, X86PfmCounterNames[0]},
};

static const PfmCountersInfo X86SkylakeServerPfmCounters = {
  X86PfmCounterNames[38],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[77],  // Uops counter
  -1, 0, // No raw uops counter
  X86PfmIssueCounters + 79, 8, // Issue counters.
  X86SkylakeServerPfmCountersValidationCounters, 7 // Validation counters.
};

static const std::pair<ValidationEvent, const char*> X86ZnVer1PfmCountersValidationCounters[] = {
  { InstructionRetired, X86PfmCounterNames[11]},
  { L1DCacheLoadMiss, X86PfmCounterNames[7]},
  { L1DCacheStoreMiss, X86PfmCounterNames[8]},
  { L1ICacheLoadMiss, X86PfmCounterNames[9]},
  { DataTLBLoadMiss, X86PfmCounterNames[1]},
  { InstructionTLBLoadMiss, X86PfmCounterNames[5]},
  { BranchPredictionMiss, X86PfmCounterNames[0]},
};

static const PfmCountersInfo X86ZnVer1PfmCounters = {
  X86PfmCounterNames[13],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[32],  // Uops counter
  -1, 0, // No raw uops counter
  X86PfmIssueCounters + 87, 6, // Issue counters.
  X86ZnVer1PfmCountersValidationCounters, 7 // Validation counters.
};

static const std::pair<ValidationEvent, const char*> X86ZnVer2PfmCountersValidationCounters[] = {
  { InstructionRetired, X86PfmCounterNames[11]},
  { L1DCacheLoadMiss, X86PfmCounterNames[7]},
  { L1DCacheStoreMiss, X86PfmCounterNames[8]},
  { L1ICacheLoadMiss, X86PfmCounterNames[9]},
  { DataTLBLoadMiss, X86PfmCounterNames[1]},
  { InstructionTLBLoadMiss, X86PfmCounterNames[5]},
  { BranchPredictionMiss, X86PfmCounterNames[0]},
};

static const PfmCountersInfo X86ZnVer2PfmCounters = {
  X86PfmCounterNames[13],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[32],  // Uops counter
  -1, 0, // No raw uops counter
  X86PfmIssueCounters + 93, 2, // Issue counters.
  X86ZnVer2PfmCountersValidationCounters, 7 // Validation counters.
};

static const std::pair<ValidationEvent, const char*> X86ZnVer3PfmCountersValidationCounters[] = {
  { InstructionRetired, X86PfmCounterNames[11]},
  { L1DCacheLoadMiss, X86PfmCounterNames[7]},
  { L1DCacheStoreMiss, X86PfmCounterNames[8]},
  { L1ICacheLoadMiss, X86PfmCounterNames[9]},
  { DataTLBLoadMiss, X86PfmCounterNames[1]},
  { InstructionTLBLoadMiss, X86PfmCounterNames[5]},
  { BranchPredictionMiss, X86PfmCounterNames[0]},
};

static const PfmCountersInfo X86ZnVer3PfmCounters = {
  X86PfmCounterNames[13],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[31],  // Uops counter
  -1, 0, // No raw uops counter
  X86PfmIssueCounters + 95, 5, // Issue counters.
  X86ZnVer3PfmCountersValidationCounters, 7 // Validation counters.
};

static const std::pair<ValidationEvent, const char*> X86ZnVer4PfmCountersValidationCounters[] = {
  { InstructionRetired, X86PfmCounterNames[11]},
  { L1DCacheLoadMiss, X86PfmCounterNames[7]},
  { L1DCacheStoreMiss, X86PfmCounterNames[8]},
  { L1ICacheLoadMiss, X86PfmCounterNames[9]},
  { DataTLBLoadMiss, X86PfmCounterNames[1]},
  { InstructionTLBLoadMiss, X86PfmCounterNames[5]},
  { BranchPredictionMiss, X86PfmCounterNames[0]},
};

static const PfmCountersInfo X86ZnVer4PfmCounters = {
  X86PfmCounterNames[13],  // Cycle counter
  -1, 0, // No raw cycle counter
  X86PfmCounterNames[31],  // Uops counter
  -1, 0, // No raw uops counter
  X86PfmIssueCounters + 100, 6, // Issue counters.
  X86ZnVer4PfmCountersValidationCounters, 7 // Validation counters.
};

// Sorted (by CpuName) array of pfm counters.
static const CpuAndPfmCounters X86CpuPfmCounters[] = {
  { "", &X86DefaultPfmCounters },
  { "alderlake", &X86AlderLakePfmCounters },
  { "amdfam10", &X86DefaultAMDPfmCounters },
  { "athlon", &X86DefaultAMDPfmCounters },
  { "athlon-4", &X86DefaultAMDPfmCounters },
  { "athlon-fx", &X86DefaultAMDPfmCounters },
  { "athlon-mp", &X86DefaultAMDPfmCounters },
  { "athlon-tbird", &X86DefaultAMDPfmCounters },
  { "athlon-xp", &X86DefaultAMDPfmCounters },
  { "athlon64", &X86DefaultAMDPfmCounters },
  { "athlon64-sse3", &X86DefaultAMDPfmCounters },
  { "atom", &X86AtomPfmCounters },
  { "barcelona", &X86DefaultAMDPfmCounters },
  { "bdver1", &X86BdVer2PfmCounters },
  { "bdver2", &X86BdVer2PfmCounters },
  { "bdver3", &X86BdVer3PfmCounters },
  { "bdver4", &X86BdVer3PfmCounters },
  { "bonnell", &X86AtomPfmCounters },
  { "broadwell", &X86BroadwellPfmCounters },
  { "btver1", &X86BtVer1PfmCounters },
  { "btver2", &X86BtVer2PfmCounters },
  { "cannonlake", &X86SkylakeServerPfmCounters },
  { "cascadelake", &X86SkylakeServerPfmCounters },
  { "core2", &X86Core2PfmCounters },
  { "corei7", &X86NehalemPfmCounters },
  { "emeraldrapids", &X86SapphireRapidsPfmCounters },
  { "goldmont", &X86SLMPfmCounters },
  { "goldmont-plus", &X86SLMPfmCounters },
  { "haswell", &X86HaswellPfmCounters },
  { "icelake-client", &X86IceLakePfmCounters },
  { "icelake-server", &X86IceLakePfmCounters },
  { "ivybridge", &X86SandyBridgePfmCounters },
  { "k8", &X86DefaultAMDPfmCounters },
  { "k8-sse3", &X86DefaultAMDPfmCounters },
  { "knl", &X86KnightPfmCounters },
  { "knm", &X86KnightPfmCounters },
  { "lunarlake", &X86LunarLakePfmCounters },
  { "nehalem", &X86NehalemPfmCounters },
  { "opteron", &X86DefaultAMDPfmCounters },
  { "opteron-sse3", &X86DefaultAMDPfmCounters },
  { "penryn", &X86Core2PfmCounters },
  { "pentium-m", &X86PentiumPfmCounters },
  { "pentium2", &X86PentiumPfmCounters },
  { "pentium3", &X86PentiumPfmCounters },
  { "pentium3m", &X86PentiumPfmCounters },
  { "pentiumpro", &X86PentiumPfmCounters },
  { "prescott", &X86CorePfmCounters },
  { "rocketlake", &X86IceLakePfmCounters },
  { "sandybridge", &X86SandyBridgePfmCounters },
  { "sapphirerapids", &X86SapphireRapidsPfmCounters },
  { "silvermont", &X86SLMPfmCounters },
  { "skylake", &X86SkylakeClientPfmCounters },
  { "skylake-avx512", &X86SkylakeServerPfmCounters },
  { "tigerlake", &X86IceLakePfmCounters },
  { "tremont", &X86SLMPfmCounters },
  { "westmere", &X86NehalemPfmCounters },
  { "yonah", &X86CorePfmCounters },
  { "znver1", &X86ZnVer1PfmCounters },
  { "znver2", &X86ZnVer2PfmCounters },
  { "znver3", &X86ZnVer3PfmCounters },
  { "znver4", &X86ZnVer4PfmCounters },
  { "znver5", &X86ZnVer4PfmCounters },
  { "znver6", &X86ZnVer4PfmCounters },
};

