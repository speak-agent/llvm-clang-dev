/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* P3385 attribute Reflection facilities                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: Attr.td                                                              *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(CLANG_ATTR_IS_REFLECTABLE_LIST)
case (AttributeCommonInfo::Kind::AT_AArch64SVEPcs): return true;
case (AttributeCommonInfo::Kind::AT_AArch64VectorPcs): return true;
case (AttributeCommonInfo::Kind::AT_AMDGPUFlatWorkGroupSize): return true;
case (AttributeCommonInfo::Kind::AT_AMDGPUMaxNumWorkGroups): return true;
case (AttributeCommonInfo::Kind::AT_AMDGPUNumSGPR): return false;
case (AttributeCommonInfo::Kind::AT_AMDGPUNumVGPR): return false;
case (AttributeCommonInfo::Kind::AT_AMDGPUWavesPerEU): return true;
case (AttributeCommonInfo::Kind::AT_Interrupt): return true;
case (AttributeCommonInfo::Kind::AT_ARMInterruptSaveFP): return false;
case (AttributeCommonInfo::Kind::AT_ARMSaveFP): return false;
case (AttributeCommonInfo::Kind::AT_AVRSignal): return true;
case (AttributeCommonInfo::Kind::AT_AbiTag): return true;
case (AttributeCommonInfo::Kind::AT_AcquireCapability): return false;
case (AttributeCommonInfo::Kind::AT_AcquireHandle): return true;
case (AttributeCommonInfo::Kind::AT_AcquiredAfter): return false;
case (AttributeCommonInfo::Kind::AT_AcquiredBefore): return false;
case (AttributeCommonInfo::Kind::AT_AddressSpace): return false;
case (AttributeCommonInfo::Kind::AT_Alias): return true;
case (AttributeCommonInfo::Kind::AT_AlignValue): return false;
case (AttributeCommonInfo::Kind::AT_Aligned): return false;
case (AttributeCommonInfo::Kind::AT_AllocAlign): return false;
case (AttributeCommonInfo::Kind::AT_AllocSize): return false;
case (AttributeCommonInfo::Kind::AT_Allocating): return false;
case (AttributeCommonInfo::Kind::AT_AlwaysDestroy): return true;
case (AttributeCommonInfo::Kind::AT_AlwaysInline): return true;
case (AttributeCommonInfo::Kind::AT_AnalyzerNoReturn): return false;
case (AttributeCommonInfo::Kind::AT_Annotate): return false;
case (AttributeCommonInfo::Kind::AT_AnnotateType): return false;
case (AttributeCommonInfo::Kind::AT_AnyX86NoCallerSavedRegisters): return true;
case (AttributeCommonInfo::Kind::AT_AnyX86NoCfCheck): return true;
case (AttributeCommonInfo::Kind::AT_ArcWeakrefUnavailable): return true;
case (AttributeCommonInfo::Kind::AT_ArgumentWithTypeTag): return false;
case (AttributeCommonInfo::Kind::AT_ArmAgnostic): return false;
case (AttributeCommonInfo::Kind::AT_ArmBuiltinAlias): return false;
case (AttributeCommonInfo::Kind::AT_ArmIn): return false;
case (AttributeCommonInfo::Kind::AT_ArmInOut): return false;
case (AttributeCommonInfo::Kind::AT_ArmLocallyStreaming): return false;
case (AttributeCommonInfo::Kind::AT_ArmMveStrictPolymorphism): return false;
case (AttributeCommonInfo::Kind::AT_ArmNew): return false;
case (AttributeCommonInfo::Kind::AT_ArmOut): return false;
case (AttributeCommonInfo::Kind::AT_ArmPreserves): return false;
case (AttributeCommonInfo::Kind::AT_ArmStreaming): return false;
case (AttributeCommonInfo::Kind::AT_ArmStreamingCompatible): return false;
case (AttributeCommonInfo::Kind::AT_ArmSveVectorBits): return false;
case (AttributeCommonInfo::Kind::AT_Artificial): return true;
case (AttributeCommonInfo::Kind::AT_AssertCapability): return false;
case (AttributeCommonInfo::Kind::AT_AssumeAligned): return true;
case (AttributeCommonInfo::Kind::AT_Atomic): return false;
case (AttributeCommonInfo::Kind::AT_Availability): return false;
case (AttributeCommonInfo::Kind::AT_AvailableOnlyInDefaultEvalMethod): return true;
case (AttributeCommonInfo::Kind::AT_BPFFastCall): return true;
case (AttributeCommonInfo::Kind::AT_BPFPreserveAccessIndex): return true;
case (AttributeCommonInfo::Kind::AT_BPFPreserveStaticOffset): return true;
case (AttributeCommonInfo::Kind::AT_BTFDeclTag): return true;
case (AttributeCommonInfo::Kind::AT_BTFTypeTag): return false;
case (AttributeCommonInfo::Kind::AT_Blocking): return false;
case (AttributeCommonInfo::Kind::AT_Blocks): return true;
case (AttributeCommonInfo::Kind::AT_BuiltinAlias): return false;
case (AttributeCommonInfo::Kind::AT_CDecl): return true;
case (AttributeCommonInfo::Kind::AT_CFAuditedTransfer): return true;
case (AttributeCommonInfo::Kind::AT_CFConsumed): return true;
case (AttributeCommonInfo::Kind::AT_CFGuard): return false;
case (AttributeCommonInfo::Kind::AT_CFICanonicalJumpTable): return true;
case (AttributeCommonInfo::Kind::AT_CFISalt): return false;
case (AttributeCommonInfo::Kind::AT_CFIUncheckedCallee): return false;
case (AttributeCommonInfo::Kind::AT_CFReturnsNotRetained): return true;
case (AttributeCommonInfo::Kind::AT_CFReturnsRetained): return true;
case (AttributeCommonInfo::Kind::AT_CFUnknownTransfer): return true;
case (AttributeCommonInfo::Kind::AT_CPUDispatch): return false;
case (AttributeCommonInfo::Kind::AT_CPUSpecific): return false;
case (AttributeCommonInfo::Kind::AT_CUDAClusterDims): return false;
case (AttributeCommonInfo::Kind::AT_CUDAConstant): return false;
case (AttributeCommonInfo::Kind::AT_CUDADevice): return false;
case (AttributeCommonInfo::Kind::AT_CUDADeviceBuiltinSurfaceType): return false;
case (AttributeCommonInfo::Kind::AT_CUDADeviceBuiltinTextureType): return false;
case (AttributeCommonInfo::Kind::AT_CUDAGlobal): return false;
case (AttributeCommonInfo::Kind::AT_CUDAGridConstant): return false;
case (AttributeCommonInfo::Kind::AT_CUDAHost): return false;
case (AttributeCommonInfo::Kind::AT_CUDAInvalidTarget): return false;
case (AttributeCommonInfo::Kind::AT_CUDALaunchBounds): return false;
case (AttributeCommonInfo::Kind::AT_CUDANoCluster): return false;
case (AttributeCommonInfo::Kind::AT_CUDAShared): return false;
case (AttributeCommonInfo::Kind::AT_CXX11NoReturn): return true;
case (AttributeCommonInfo::Kind::AT_CXX26Annotation): return false;
case (AttributeCommonInfo::Kind::AT_CXXAssume): return true;
case (AttributeCommonInfo::Kind::AT_CallableWhen): return true;
case (AttributeCommonInfo::Kind::AT_Callback): return false;
case (AttributeCommonInfo::Kind::AT_CalledOnce): return true;
case (AttributeCommonInfo::Kind::AT_Capability): return true;
case (AttributeCommonInfo::Kind::AT_CarriesDependency): return true;
case (AttributeCommonInfo::Kind::AT_Cleanup): return false;
case (AttributeCommonInfo::Kind::AT_ClspvLibclcBuiltin): return true;
case (AttributeCommonInfo::Kind::AT_CmseNSCall): return false;
case (AttributeCommonInfo::Kind::AT_CmseNSEntry): return false;
case (AttributeCommonInfo::Kind::AT_CodeAlign): return true;
case (AttributeCommonInfo::Kind::AT_CodeModel): return true;
case (AttributeCommonInfo::Kind::AT_CodeSeg): return false;
case (AttributeCommonInfo::Kind::AT_Cold): return true;
case (AttributeCommonInfo::Kind::AT_Common): return true;
case (AttributeCommonInfo::Kind::AT_Const): return true;
case (AttributeCommonInfo::Kind::AT_ConstInit): return true;
case (AttributeCommonInfo::Kind::AT_Constructor): return true;
case (AttributeCommonInfo::Kind::AT_Consumable): return false;
case (AttributeCommonInfo::Kind::AT_ConsumableAutoCast): return true;
case (AttributeCommonInfo::Kind::AT_ConsumableSetOnRead): return true;
case (AttributeCommonInfo::Kind::AT_Convergent): return true;
case (AttributeCommonInfo::Kind::AT_CoroAwaitElidable): return true;
case (AttributeCommonInfo::Kind::AT_CoroAwaitElidableArgument): return true;
case (AttributeCommonInfo::Kind::AT_CoroDisableLifetimeBound): return true;
case (AttributeCommonInfo::Kind::AT_CoroLifetimeBound): return true;
case (AttributeCommonInfo::Kind::AT_CoroOnlyDestroyWhenComplete): return true;
case (AttributeCommonInfo::Kind::AT_CoroReturnType): return true;
case (AttributeCommonInfo::Kind::AT_CoroWrapper): return true;
case (AttributeCommonInfo::Kind::AT_CountedBy): return true;
case (AttributeCommonInfo::Kind::AT_CountedByOrNull): return true;
case (AttributeCommonInfo::Kind::AT_DLLExport): return true;
case (AttributeCommonInfo::Kind::AT_DLLExportOnDecl): return false;
case (AttributeCommonInfo::Kind::AT_DLLExportStaticLocal): return false;
case (AttributeCommonInfo::Kind::AT_DLLImport): return true;
case (AttributeCommonInfo::Kind::AT_DLLImportStaticLocal): return false;
case (AttributeCommonInfo::Kind::AT_Deprecated): return true;
case (AttributeCommonInfo::Kind::AT_Destructor): return true;
case (AttributeCommonInfo::Kind::AT_DeviceKernel): return true;
case (AttributeCommonInfo::Kind::AT_DiagnoseAsBuiltin): return false;
case (AttributeCommonInfo::Kind::AT_DiagnoseIf): return false;
case (AttributeCommonInfo::Kind::AT_DisableSanitizerInstrumentation): return true;
case (AttributeCommonInfo::Kind::AT_DisableTailCalls): return true;
case (AttributeCommonInfo::Kind::AT_EmptyBases): return false;
case (AttributeCommonInfo::Kind::AT_EnableIf): return false;
case (AttributeCommonInfo::Kind::AT_EnforceTCB): return true;
case (AttributeCommonInfo::Kind::AT_EnforceTCBLeaf): return true;
case (AttributeCommonInfo::Kind::AT_EnumExtensibility): return false;
case (AttributeCommonInfo::Kind::AT_Error): return true;
case (AttributeCommonInfo::Kind::AT_ExcludeFromExplicitInstantiation): return true;
case (AttributeCommonInfo::Kind::AT_ExplicitInit): return true;
case (AttributeCommonInfo::Kind::AT_ExtVectorType): return false;
case (AttributeCommonInfo::Kind::AT_ExternalSourceSymbol): return true;
case (AttributeCommonInfo::Kind::AT_FallThrough): return true;
case (AttributeCommonInfo::Kind::AT_FastCall): return true;
case (AttributeCommonInfo::Kind::AT_FlagEnum): return true;
case (AttributeCommonInfo::Kind::AT_Flatten): return true;
case (AttributeCommonInfo::Kind::AT_Format): return false;
case (AttributeCommonInfo::Kind::AT_FormatArg): return false;
case (AttributeCommonInfo::Kind::AT_FormatMatches): return false;
case (AttributeCommonInfo::Kind::AT_FunctionReturnThunks): return true;
case (AttributeCommonInfo::Kind::AT_GCCStruct): return true;
case (AttributeCommonInfo::Kind::AT_GNUInline): return true;
case (AttributeCommonInfo::Kind::AT_GuardedBy): return false;
case (AttributeCommonInfo::Kind::AT_GuardedVar): return true;
case (AttributeCommonInfo::Kind::AT_HIPManaged): return false;
case (AttributeCommonInfo::Kind::AT_HLSLAppliedSemantic): return false;
case (AttributeCommonInfo::Kind::AT_HLSLAssociatedResourceDecl): return false;
case (AttributeCommonInfo::Kind::AT_HLSLColumnMajor): return false;
case (AttributeCommonInfo::Kind::AT_HLSLContainedType): return false;
case (AttributeCommonInfo::Kind::AT_HLSLControlFlowHint): return false;
case (AttributeCommonInfo::Kind::AT_HLSLGroupSharedAddressSpace): return false;
case (AttributeCommonInfo::Kind::AT_HLSLIsArray): return false;
case (AttributeCommonInfo::Kind::AT_HLSLIsCounter): return false;
case (AttributeCommonInfo::Kind::AT_HLSLLoopHint): return false;
case (AttributeCommonInfo::Kind::AT_HLSLNumThreads): return false;
case (AttributeCommonInfo::Kind::AT_HLSLPackOffset): return false;
case (AttributeCommonInfo::Kind::AT_HLSLParamModifier): return false;
case (AttributeCommonInfo::Kind::AT_HLSLParsedSemantic): return false;
case (AttributeCommonInfo::Kind::AT_HLSLROV): return false;
case (AttributeCommonInfo::Kind::AT_HLSLRawBuffer): return false;
case (AttributeCommonInfo::Kind::AT_HLSLResourceBinding): return false;
case (AttributeCommonInfo::Kind::AT_HLSLResourceClass): return false;
case (AttributeCommonInfo::Kind::AT_HLSLResourceDimension): return false;
case (AttributeCommonInfo::Kind::AT_HLSLRowMajor): return false;
case (AttributeCommonInfo::Kind::AT_HLSLShader): return false;
case (AttributeCommonInfo::Kind::AT_HLSLUnparsedSemantic): return false;
case (AttributeCommonInfo::Kind::AT_HLSLVkBinding): return true;
case (AttributeCommonInfo::Kind::AT_HLSLVkConstantId): return true;
case (AttributeCommonInfo::Kind::AT_HLSLVkExtBuiltinInput): return false;
case (AttributeCommonInfo::Kind::AT_HLSLVkExtBuiltinOutput): return false;
case (AttributeCommonInfo::Kind::AT_HLSLVkLocation): return true;
case (AttributeCommonInfo::Kind::AT_HLSLVkPushConstant): return true;
case (AttributeCommonInfo::Kind::AT_HLSLWaveSize): return false;
case (AttributeCommonInfo::Kind::AT_Hot): return true;
case (AttributeCommonInfo::Kind::AT_HybridPatchable): return true;
case (AttributeCommonInfo::Kind::AT_IBAction): return true;
case (AttributeCommonInfo::Kind::AT_IBOutlet): return true;
case (AttributeCommonInfo::Kind::AT_IBOutletCollection): return true;
case (AttributeCommonInfo::Kind::AT_IFunc): return true;
case (AttributeCommonInfo::Kind::AT_InitPriority): return false;
case (AttributeCommonInfo::Kind::AT_InstantiationDependent): return true;
case (AttributeCommonInfo::Kind::AT_IntelOclBicc): return true;
case (AttributeCommonInfo::Kind::AT_InternalLinkage): return true;
case (AttributeCommonInfo::Kind::AT_LTOVisibilityPublic): return true;
case (AttributeCommonInfo::Kind::AT_LayoutVersion): return false;
case (AttributeCommonInfo::Kind::AT_Leaf): return true;
case (AttributeCommonInfo::Kind::AT_LifetimeBound): return true;
case (AttributeCommonInfo::Kind::AT_LifetimeCaptureBy): return false;
case (AttributeCommonInfo::Kind::AT_Likely): return true;
case (AttributeCommonInfo::Kind::AT_LoaderUninitialized): return true;
case (AttributeCommonInfo::Kind::AT_LockReturned): return false;
case (AttributeCommonInfo::Kind::AT_Lockable): return false;
case (AttributeCommonInfo::Kind::AT_LocksExcluded): return false;
case (AttributeCommonInfo::Kind::AT_LoopHint): return false;
case (AttributeCommonInfo::Kind::AT_M68kRTD): return true;
case (AttributeCommonInfo::Kind::AT_MIGServerRoutine): return true;
case (AttributeCommonInfo::Kind::AT_MSABI): return true;
case (AttributeCommonInfo::Kind::AT_MSAllocator): return false;
case (AttributeCommonInfo::Kind::AT_MSConstexpr): return true;
case (AttributeCommonInfo::Kind::AT_MSInheritance): return false;
case (AttributeCommonInfo::Kind::AT_MSNoVTable): return false;
case (AttributeCommonInfo::Kind::AT_MSStruct): return true;
case (AttributeCommonInfo::Kind::AT_MallocSpan): return true;
case (AttributeCommonInfo::Kind::AT_MatrixType): return false;
case (AttributeCommonInfo::Kind::AT_MayAlias): return true;
case (AttributeCommonInfo::Kind::AT_MaybeUndef): return true;
case (AttributeCommonInfo::Kind::AT_MicroMips): return true;
case (AttributeCommonInfo::Kind::AT_MinSize): return true;
case (AttributeCommonInfo::Kind::AT_MinVectorWidth): return false;
case (AttributeCommonInfo::Kind::AT_Mips16): return true;
case (AttributeCommonInfo::Kind::AT_MipsLongCall): return true;
case (AttributeCommonInfo::Kind::AT_MipsShortCall): return true;
case (AttributeCommonInfo::Kind::AT_Mode): return false;
case (AttributeCommonInfo::Kind::AT_ModularFormat): return false;
case (AttributeCommonInfo::Kind::AT_MustTail): return true;
case (AttributeCommonInfo::Kind::AT_NSConsumed): return true;
case (AttributeCommonInfo::Kind::AT_NSConsumesSelf): return true;
case (AttributeCommonInfo::Kind::AT_NSErrorDomain): return false;
case (AttributeCommonInfo::Kind::AT_NSReturnsAutoreleased): return true;
case (AttributeCommonInfo::Kind::AT_NSReturnsNotRetained): return true;
case (AttributeCommonInfo::Kind::AT_NSReturnsRetained): return true;
case (AttributeCommonInfo::Kind::AT_Naked): return true;
case (AttributeCommonInfo::Kind::AT_NeonPolyVectorType): return false;
case (AttributeCommonInfo::Kind::AT_NeonVectorType): return false;
case (AttributeCommonInfo::Kind::AT_NoAlias): return false;
case (AttributeCommonInfo::Kind::AT_NoBuiltin): return true;
case (AttributeCommonInfo::Kind::AT_NoCommon): return true;
case (AttributeCommonInfo::Kind::AT_NoConvergent): return true;
case (AttributeCommonInfo::Kind::AT_NoDebug): return true;
case (AttributeCommonInfo::Kind::AT_NoDeref): return false;
case (AttributeCommonInfo::Kind::AT_NoDestroy): return true;
case (AttributeCommonInfo::Kind::AT_NoDuplicate): return true;
case (AttributeCommonInfo::Kind::AT_NoEscape): return true;
case (AttributeCommonInfo::Kind::AT_NoFieldProtection): return true;
case (AttributeCommonInfo::Kind::AT_NoInline): return true;
case (AttributeCommonInfo::Kind::AT_NoInstrumentFunction): return true;
case (AttributeCommonInfo::Kind::AT_NoMerge): return true;
case (AttributeCommonInfo::Kind::AT_NoMicroMips): return true;
case (AttributeCommonInfo::Kind::AT_NoMips16): return true;
case (AttributeCommonInfo::Kind::AT_NoOutline): return true;
case (AttributeCommonInfo::Kind::AT_NoProfileFunction): return true;
case (AttributeCommonInfo::Kind::AT_NoRandomizeLayout): return true;
case (AttributeCommonInfo::Kind::AT_NoReturn): return true;
case (AttributeCommonInfo::Kind::AT_NoSanitize): return true;
case (AttributeCommonInfo::Kind::AT_NoSanitizeAddress): return false;
case (AttributeCommonInfo::Kind::AT_NoSanitizeMemory): return false;
case (AttributeCommonInfo::Kind::AT_NoSanitizeThread): return false;
case (AttributeCommonInfo::Kind::AT_NoSpecializations): return true;
case (AttributeCommonInfo::Kind::AT_NoSpeculativeLoadHardening): return true;
case (AttributeCommonInfo::Kind::AT_NoSplitStack): return true;
case (AttributeCommonInfo::Kind::AT_NoStackProtector): return true;
case (AttributeCommonInfo::Kind::AT_NoThreadSafetyAnalysis): return true;
case (AttributeCommonInfo::Kind::AT_NoThrow): return true;
case (AttributeCommonInfo::Kind::AT_NoTrivialAutoVarInit): return false;
case (AttributeCommonInfo::Kind::AT_NoUniqueAddress): return true;
case (AttributeCommonInfo::Kind::AT_NoUwtable): return true;
case (AttributeCommonInfo::Kind::AT_NonAllocating): return false;
case (AttributeCommonInfo::Kind::AT_NonBlocking): return false;
case (AttributeCommonInfo::Kind::AT_NonNull): return false;
case (AttributeCommonInfo::Kind::AT_NonString): return true;
case (AttributeCommonInfo::Kind::AT_NotTailCalled): return true;
case (AttributeCommonInfo::Kind::AT_OMPAssume): return true;
case (AttributeCommonInfo::Kind::AT_OSConsumed): return true;
case (AttributeCommonInfo::Kind::AT_OSConsumesThis): return true;
case (AttributeCommonInfo::Kind::AT_OSReturnsNotRetained): return true;
case (AttributeCommonInfo::Kind::AT_OSReturnsRetained): return true;
case (AttributeCommonInfo::Kind::AT_OSReturnsRetainedOnNonZero): return true;
case (AttributeCommonInfo::Kind::AT_OSReturnsRetainedOnZero): return true;
case (AttributeCommonInfo::Kind::AT_ObjCBoxable): return true;
case (AttributeCommonInfo::Kind::AT_ObjCBridge): return false;
case (AttributeCommonInfo::Kind::AT_ObjCBridgeMutable): return false;
case (AttributeCommonInfo::Kind::AT_ObjCBridgeRelated): return false;
case (AttributeCommonInfo::Kind::AT_ObjCClassStub): return true;
case (AttributeCommonInfo::Kind::AT_ObjCDesignatedInitializer): return true;
case (AttributeCommonInfo::Kind::AT_ObjCDirect): return true;
case (AttributeCommonInfo::Kind::AT_ObjCDirectMembers): return true;
case (AttributeCommonInfo::Kind::AT_ObjCException): return true;
case (AttributeCommonInfo::Kind::AT_ObjCExplicitProtocolImpl): return true;
case (AttributeCommonInfo::Kind::AT_ObjCExternallyRetained): return true;
case (AttributeCommonInfo::Kind::AT_ObjCGC): return false;
case (AttributeCommonInfo::Kind::AT_ObjCIndependentClass): return true;
case (AttributeCommonInfo::Kind::AT_ObjCInertUnsafeUnretained): return false;
case (AttributeCommonInfo::Kind::AT_ObjCKindOf): return false;
case (AttributeCommonInfo::Kind::AT_ObjCMethodFamily): return false;
case (AttributeCommonInfo::Kind::AT_ObjCNSObject): return true;
case (AttributeCommonInfo::Kind::AT_ObjCNonLazyClass): return true;
case (AttributeCommonInfo::Kind::AT_ObjCNonRuntimeProtocol): return true;
case (AttributeCommonInfo::Kind::AT_ObjCOwnership): return false;
case (AttributeCommonInfo::Kind::AT_ObjCPreciseLifetime): return true;
case (AttributeCommonInfo::Kind::AT_ObjCRequiresPropertyDefs): return true;
case (AttributeCommonInfo::Kind::AT_ObjCRequiresSuper): return true;
case (AttributeCommonInfo::Kind::AT_ObjCReturnsInnerPointer): return true;
case (AttributeCommonInfo::Kind::AT_ObjCRootClass): return true;
case (AttributeCommonInfo::Kind::AT_ObjCRuntimeName): return true;
case (AttributeCommonInfo::Kind::AT_ObjCRuntimeVisible): return true;
case (AttributeCommonInfo::Kind::AT_ObjCSubclassingRestricted): return true;
case (AttributeCommonInfo::Kind::AT_OpenACCRoutineAnnot): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLAccess): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLConstantAddressSpace): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLGenericAddressSpace): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLGlobalAddressSpace): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLGlobalDeviceAddressSpace): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLGlobalHostAddressSpace): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLIntelReqdSubGroupSize): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLLocalAddressSpace): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLNoSVM): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLPrivateAddressSpace): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLUnrollHint): return false;
case (AttributeCommonInfo::Kind::AT_OptimizeNone): return true;
case (AttributeCommonInfo::Kind::AT_OverflowBehavior): return false;
case (AttributeCommonInfo::Kind::AT_Overloadable): return true;
case (AttributeCommonInfo::Kind::AT_Owner): return true;
case (AttributeCommonInfo::Kind::AT_Ownership): return false;
case (AttributeCommonInfo::Kind::AT_Packed): return true;
case (AttributeCommonInfo::Kind::AT_ParamTypestate): return false;
case (AttributeCommonInfo::Kind::AT_Pascal): return true;
case (AttributeCommonInfo::Kind::AT_PassObjectSize): return true;
case (AttributeCommonInfo::Kind::AT_PatchableFunctionEntry): return false;
case (AttributeCommonInfo::Kind::AT_Pcs): return true;
case (AttributeCommonInfo::Kind::AT_Personality): return false;
case (AttributeCommonInfo::Kind::AT_Pointer): return true;
case (AttributeCommonInfo::Kind::AT_PointerAuth): return false;
case (AttributeCommonInfo::Kind::AT_PointerFieldProtection): return true;
case (AttributeCommonInfo::Kind::AT_PragmaClangBSSSection): return false;
case (AttributeCommonInfo::Kind::AT_PragmaClangDataSection): return false;
case (AttributeCommonInfo::Kind::AT_PragmaClangRelroSection): return false;
case (AttributeCommonInfo::Kind::AT_PragmaClangRodataSection): return false;
case (AttributeCommonInfo::Kind::AT_PragmaClangTextSection): return false;
case (AttributeCommonInfo::Kind::AT_PreferredName): return true;
case (AttributeCommonInfo::Kind::AT_PreferredType): return true;
case (AttributeCommonInfo::Kind::AT_PreserveAll): return true;
case (AttributeCommonInfo::Kind::AT_PreserveMost): return true;
case (AttributeCommonInfo::Kind::AT_PreserveNone): return true;
case (AttributeCommonInfo::Kind::AT_PtGuardedBy): return false;
case (AttributeCommonInfo::Kind::AT_PtGuardedVar): return true;
case (AttributeCommonInfo::Kind::AT_Ptr32): return false;
case (AttributeCommonInfo::Kind::AT_Ptr64): return false;
case (AttributeCommonInfo::Kind::AT_Pure): return true;
case (AttributeCommonInfo::Kind::AT_RISCVRVVVectorBits): return false;
case (AttributeCommonInfo::Kind::AT_RISCVVLSCC): return false;
case (AttributeCommonInfo::Kind::AT_RISCVVectorCC): return true;
case (AttributeCommonInfo::Kind::AT_RandomizeLayout): return true;
case (AttributeCommonInfo::Kind::AT_ReadOnlyPlacement): return true;
case (AttributeCommonInfo::Kind::AT_ReentrantCapability): return true;
case (AttributeCommonInfo::Kind::AT_RegCall): return true;
case (AttributeCommonInfo::Kind::AT_Regparm): return false;
case (AttributeCommonInfo::Kind::AT_Reinitializes): return true;
case (AttributeCommonInfo::Kind::AT_ReleaseCapability): return false;
case (AttributeCommonInfo::Kind::AT_ReleaseHandle): return true;
case (AttributeCommonInfo::Kind::AT_ReqdWorkGroupSize): return false;
case (AttributeCommonInfo::Kind::AT_RequiresCapability): return false;
case (AttributeCommonInfo::Kind::AT_Restrict): return false;
case (AttributeCommonInfo::Kind::AT_Retain): return true;
case (AttributeCommonInfo::Kind::AT_ReturnTypestate): return false;
case (AttributeCommonInfo::Kind::AT_ReturnsNonNull): return true;
case (AttributeCommonInfo::Kind::AT_ReturnsTwice): return true;
case (AttributeCommonInfo::Kind::AT_RootSignature): return false;
case (AttributeCommonInfo::Kind::AT_SPtr): return false;
case (AttributeCommonInfo::Kind::AT_SYCLExternal): return true;
case (AttributeCommonInfo::Kind::AT_SYCLKernel): return true;
case (AttributeCommonInfo::Kind::AT_SYCLKernelEntryPoint): return false;
case (AttributeCommonInfo::Kind::AT_SYCLSpecialClass): return true;
case (AttributeCommonInfo::Kind::AT_ScopedLockable): return true;
case (AttributeCommonInfo::Kind::AT_Section): return true;
case (AttributeCommonInfo::Kind::AT_SelectAny): return true;
case (AttributeCommonInfo::Kind::AT_Sentinel): return true;
case (AttributeCommonInfo::Kind::AT_SetTypestate): return false;
case (AttributeCommonInfo::Kind::AT_SizedBy): return true;
case (AttributeCommonInfo::Kind::AT_SizedByOrNull): return true;
case (AttributeCommonInfo::Kind::AT_SpeculativeLoadHardening): return true;
case (AttributeCommonInfo::Kind::AT_StackProtectorIgnore): return true;
case (AttributeCommonInfo::Kind::AT_StandaloneDebug): return true;
case (AttributeCommonInfo::Kind::AT_StdCall): return true;
case (AttributeCommonInfo::Kind::AT_StrictFP): return false;
case (AttributeCommonInfo::Kind::AT_StrictGuardStackCheck): return false;
case (AttributeCommonInfo::Kind::AT_Suppress): return true;
case (AttributeCommonInfo::Kind::AT_SwiftAsync): return false;
case (AttributeCommonInfo::Kind::AT_SwiftAsyncCall): return true;
case (AttributeCommonInfo::Kind::AT_SwiftAsyncContext): return true;
case (AttributeCommonInfo::Kind::AT_SwiftAsyncError): return false;
case (AttributeCommonInfo::Kind::AT_SwiftAsyncName): return false;
case (AttributeCommonInfo::Kind::AT_SwiftAttr): return false;
case (AttributeCommonInfo::Kind::AT_SwiftBridge): return false;
case (AttributeCommonInfo::Kind::AT_SwiftBridgedTypedef): return false;
case (AttributeCommonInfo::Kind::AT_SwiftCall): return true;
case (AttributeCommonInfo::Kind::AT_SwiftContext): return true;
case (AttributeCommonInfo::Kind::AT_SwiftError): return false;
case (AttributeCommonInfo::Kind::AT_SwiftErrorResult): return true;
case (AttributeCommonInfo::Kind::AT_SwiftIndirectResult): return true;
case (AttributeCommonInfo::Kind::AT_SwiftName): return false;
case (AttributeCommonInfo::Kind::AT_SwiftNewType): return false;
case (AttributeCommonInfo::Kind::AT_SwiftObjCMembers): return false;
case (AttributeCommonInfo::Kind::AT_SwiftPrivate): return false;
case (AttributeCommonInfo::Kind::AT_SysVABI): return true;
case (AttributeCommonInfo::Kind::AT_TLSModel): return true;
case (AttributeCommonInfo::Kind::AT_Target): return true;
case (AttributeCommonInfo::Kind::AT_TargetClones): return true;
case (AttributeCommonInfo::Kind::AT_TargetVersion): return true;
case (AttributeCommonInfo::Kind::AT_TestTypestate): return false;
case (AttributeCommonInfo::Kind::AT_ThisCall): return true;
case (AttributeCommonInfo::Kind::AT_Thread): return false;
case (AttributeCommonInfo::Kind::AT_TransparentUnion): return true;
case (AttributeCommonInfo::Kind::AT_TrivialABI): return true;
case (AttributeCommonInfo::Kind::AT_TryAcquireCapability): return false;
case (AttributeCommonInfo::Kind::AT_TypeNonNull): return false;
case (AttributeCommonInfo::Kind::AT_TypeNullUnspecified): return false;
case (AttributeCommonInfo::Kind::AT_TypeNullable): return false;
case (AttributeCommonInfo::Kind::AT_TypeNullableResult): return false;
case (AttributeCommonInfo::Kind::AT_TypeTagForDatatype): return false;
case (AttributeCommonInfo::Kind::AT_TypeVisibility): return true;
case (AttributeCommonInfo::Kind::AT_UPtr): return false;
case (AttributeCommonInfo::Kind::AT_Unavailable): return false;
case (AttributeCommonInfo::Kind::AT_Uninitialized): return true;
case (AttributeCommonInfo::Kind::AT_Unlikely): return true;
case (AttributeCommonInfo::Kind::AT_UnsafeBufferUsage): return true;
case (AttributeCommonInfo::Kind::AT_Unused): return true;
case (AttributeCommonInfo::Kind::AT_UseHandle): return true;
case (AttributeCommonInfo::Kind::AT_Used): return true;
case (AttributeCommonInfo::Kind::AT_UsingIfExists): return true;
case (AttributeCommonInfo::Kind::AT_Uuid): return false;
case (AttributeCommonInfo::Kind::AT_VTablePointerAuthentication): return true;
case (AttributeCommonInfo::Kind::AT_VecReturn): return true;
case (AttributeCommonInfo::Kind::AT_VecTypeHint): return false;
case (AttributeCommonInfo::Kind::AT_VectorCall): return true;
case (AttributeCommonInfo::Kind::AT_VectorSize): return false;
case (AttributeCommonInfo::Kind::AT_Visibility): return true;
case (AttributeCommonInfo::Kind::AT_WarnUnused): return true;
case (AttributeCommonInfo::Kind::AT_WarnUnusedResult): return true;
case (AttributeCommonInfo::Kind::AT_Weak): return true;
case (AttributeCommonInfo::Kind::AT_WeakImport): return true;
case (AttributeCommonInfo::Kind::AT_WeakRef): return true;
case (AttributeCommonInfo::Kind::AT_WebAssemblyExportName): return true;
case (AttributeCommonInfo::Kind::AT_WebAssemblyFuncref): return false;
case (AttributeCommonInfo::Kind::AT_WebAssemblyImportModule): return true;
case (AttributeCommonInfo::Kind::AT_WebAssemblyImportName): return true;
case (AttributeCommonInfo::Kind::AT_WorkGroupSizeHint): return false;
case (AttributeCommonInfo::Kind::AT_X86ForceAlignArgPointer): return true;
case (AttributeCommonInfo::Kind::AT_XRayInstrument): return true;
case (AttributeCommonInfo::Kind::AT_XRayLogArgs): return false;
case (AttributeCommonInfo::Kind::AT_ZeroCallUsedRegs): return true;
#endif // CLANG_ATTR_IS_REFLECTABLE_LIST

#if defined(CLANG_ATTR_ON_SYNTACTIC_ARGS_LIST)
case (AttributeCommonInfo::Kind::AT_AArch64SVEPcs): {
  const AArch64SVEPcsAttr* attr = static_cast<const AArch64SVEPcsAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_AArch64VectorPcs): {
  const AArch64VectorPcsAttr* attr = static_cast<const AArch64VectorPcsAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_AMDGPUFlatWorkGroupSize): {
  const AMDGPUFlatWorkGroupSizeAttr* attr = static_cast<const AMDGPUFlatWorkGroupSizeAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_AMDGPUMaxNumWorkGroups): {
  const AMDGPUMaxNumWorkGroupsAttr* attr = static_cast<const AMDGPUMaxNumWorkGroupsAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_AMDGPUNumSGPR): return false;
case (AttributeCommonInfo::Kind::AT_AMDGPUNumVGPR): return false;
case (AttributeCommonInfo::Kind::AT_AMDGPUWavesPerEU): {
  const AMDGPUWavesPerEUAttr* attr = static_cast<const AMDGPUWavesPerEUAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Interrupt): {
  const ARMInterruptAttr* attr = static_cast<const ARMInterruptAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ARMInterruptSaveFP): return false;
case (AttributeCommonInfo::Kind::AT_ARMSaveFP): return false;
case (AttributeCommonInfo::Kind::AT_AVRSignal): {
  const AVRSignalAttr* attr = static_cast<const AVRSignalAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_AbiTag): {
  const AbiTagAttr* attr = static_cast<const AbiTagAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_AcquireCapability): return false;
case (AttributeCommonInfo::Kind::AT_AcquireHandle): {
  const AcquireHandleAttr* attr = static_cast<const AcquireHandleAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_AcquiredAfter): return false;
case (AttributeCommonInfo::Kind::AT_AcquiredBefore): return false;
case (AttributeCommonInfo::Kind::AT_AddressSpace): return false;
case (AttributeCommonInfo::Kind::AT_Alias): {
  const AliasAttr* attr = static_cast<const AliasAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_AlignValue): return false;
case (AttributeCommonInfo::Kind::AT_Aligned): return false;
case (AttributeCommonInfo::Kind::AT_AllocAlign): return false;
case (AttributeCommonInfo::Kind::AT_AllocSize): return false;
case (AttributeCommonInfo::Kind::AT_Allocating): return false;
case (AttributeCommonInfo::Kind::AT_AlwaysDestroy): {
  const AlwaysDestroyAttr* attr = static_cast<const AlwaysDestroyAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_AlwaysInline): {
  const AlwaysInlineAttr* attr = static_cast<const AlwaysInlineAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_AnalyzerNoReturn): return false;
case (AttributeCommonInfo::Kind::AT_Annotate): return false;
case (AttributeCommonInfo::Kind::AT_AnnotateType): return false;
case (AttributeCommonInfo::Kind::AT_AnyX86NoCallerSavedRegisters): {
  const AnyX86NoCallerSavedRegistersAttr* attr = static_cast<const AnyX86NoCallerSavedRegistersAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_AnyX86NoCfCheck): {
  const AnyX86NoCfCheckAttr* attr = static_cast<const AnyX86NoCfCheckAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ArcWeakrefUnavailable): {
  const ArcWeakrefUnavailableAttr* attr = static_cast<const ArcWeakrefUnavailableAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ArgumentWithTypeTag): return false;
case (AttributeCommonInfo::Kind::AT_ArmAgnostic): return false;
case (AttributeCommonInfo::Kind::AT_ArmBuiltinAlias): return false;
case (AttributeCommonInfo::Kind::AT_ArmIn): return false;
case (AttributeCommonInfo::Kind::AT_ArmInOut): return false;
case (AttributeCommonInfo::Kind::AT_ArmLocallyStreaming): return false;
case (AttributeCommonInfo::Kind::AT_ArmMveStrictPolymorphism): return false;
case (AttributeCommonInfo::Kind::AT_ArmNew): return false;
case (AttributeCommonInfo::Kind::AT_ArmOut): return false;
case (AttributeCommonInfo::Kind::AT_ArmPreserves): return false;
case (AttributeCommonInfo::Kind::AT_ArmStreaming): return false;
case (AttributeCommonInfo::Kind::AT_ArmStreamingCompatible): return false;
case (AttributeCommonInfo::Kind::AT_ArmSveVectorBits): return false;
case (AttributeCommonInfo::Kind::AT_Artificial): {
  const ArtificialAttr* attr = static_cast<const ArtificialAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_AssertCapability): return false;
case (AttributeCommonInfo::Kind::AT_AssumeAligned): {
  const AssumeAlignedAttr* attr = static_cast<const AssumeAlignedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Atomic): return false;
case (AttributeCommonInfo::Kind::AT_Availability): return false;
case (AttributeCommonInfo::Kind::AT_AvailableOnlyInDefaultEvalMethod): {
  const AvailableOnlyInDefaultEvalMethodAttr* attr = static_cast<const AvailableOnlyInDefaultEvalMethodAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_BPFFastCall): {
  const BPFFastCallAttr* attr = static_cast<const BPFFastCallAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_BPFPreserveAccessIndex): {
  const BPFPreserveAccessIndexAttr* attr = static_cast<const BPFPreserveAccessIndexAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_BPFPreserveStaticOffset): {
  const BPFPreserveStaticOffsetAttr* attr = static_cast<const BPFPreserveStaticOffsetAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_BTFDeclTag): {
  const BTFDeclTagAttr* attr = static_cast<const BTFDeclTagAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_BTFTypeTag): return false;
case (AttributeCommonInfo::Kind::AT_Blocking): return false;
case (AttributeCommonInfo::Kind::AT_Blocks): {
  const BlocksAttr* attr = static_cast<const BlocksAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_BuiltinAlias): return false;
case (AttributeCommonInfo::Kind::AT_CDecl): {
  const CDeclAttr* attr = static_cast<const CDeclAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CFAuditedTransfer): {
  const CFAuditedTransferAttr* attr = static_cast<const CFAuditedTransferAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CFConsumed): {
  const CFConsumedAttr* attr = static_cast<const CFConsumedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CFGuard): return false;
case (AttributeCommonInfo::Kind::AT_CFICanonicalJumpTable): {
  const CFICanonicalJumpTableAttr* attr = static_cast<const CFICanonicalJumpTableAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CFISalt): return false;
case (AttributeCommonInfo::Kind::AT_CFIUncheckedCallee): return false;
case (AttributeCommonInfo::Kind::AT_CFReturnsNotRetained): {
  const CFReturnsNotRetainedAttr* attr = static_cast<const CFReturnsNotRetainedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CFReturnsRetained): {
  const CFReturnsRetainedAttr* attr = static_cast<const CFReturnsRetainedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CFUnknownTransfer): {
  const CFUnknownTransferAttr* attr = static_cast<const CFUnknownTransferAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CPUDispatch): return false;
case (AttributeCommonInfo::Kind::AT_CPUSpecific): return false;
case (AttributeCommonInfo::Kind::AT_CUDAClusterDims): return false;
case (AttributeCommonInfo::Kind::AT_CUDAConstant): return false;
case (AttributeCommonInfo::Kind::AT_CUDADevice): return false;
case (AttributeCommonInfo::Kind::AT_CUDADeviceBuiltinSurfaceType): return false;
case (AttributeCommonInfo::Kind::AT_CUDADeviceBuiltinTextureType): return false;
case (AttributeCommonInfo::Kind::AT_CUDAGlobal): return false;
case (AttributeCommonInfo::Kind::AT_CUDAGridConstant): return false;
case (AttributeCommonInfo::Kind::AT_CUDAHost): return false;
case (AttributeCommonInfo::Kind::AT_CUDAInvalidTarget): return false;
case (AttributeCommonInfo::Kind::AT_CUDALaunchBounds): return false;
case (AttributeCommonInfo::Kind::AT_CUDANoCluster): return false;
case (AttributeCommonInfo::Kind::AT_CUDAShared): return false;
case (AttributeCommonInfo::Kind::AT_CXX11NoReturn): {
  const CXX11NoReturnAttr* attr = static_cast<const CXX11NoReturnAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CXX26Annotation): return false;
case (AttributeCommonInfo::Kind::AT_CXXAssume): {
  const CXXAssumeAttr* attr = static_cast<const CXXAssumeAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CallableWhen): {
  const CallableWhenAttr* attr = static_cast<const CallableWhenAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Callback): return false;
case (AttributeCommonInfo::Kind::AT_CalledOnce): {
  const CalledOnceAttr* attr = static_cast<const CalledOnceAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Capability): {
  const CapabilityAttr* attr = static_cast<const CapabilityAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CarriesDependency): {
  const CarriesDependencyAttr* attr = static_cast<const CarriesDependencyAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Cleanup): return false;
case (AttributeCommonInfo::Kind::AT_ClspvLibclcBuiltin): {
  const ClspvLibclcBuiltinAttr* attr = static_cast<const ClspvLibclcBuiltinAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CmseNSCall): return false;
case (AttributeCommonInfo::Kind::AT_CmseNSEntry): return false;
case (AttributeCommonInfo::Kind::AT_CodeAlign): {
  const CodeAlignAttr* attr = static_cast<const CodeAlignAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CodeModel): {
  const CodeModelAttr* attr = static_cast<const CodeModelAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CodeSeg): return false;
case (AttributeCommonInfo::Kind::AT_Cold): {
  const ColdAttr* attr = static_cast<const ColdAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Common): {
  const CommonAttr* attr = static_cast<const CommonAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Const): {
  const ConstAttr* attr = static_cast<const ConstAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ConstInit): {
  const ConstInitAttr* attr = static_cast<const ConstInitAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Constructor): {
  const ConstructorAttr* attr = static_cast<const ConstructorAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Consumable): return false;
case (AttributeCommonInfo::Kind::AT_ConsumableAutoCast): {
  const ConsumableAutoCastAttr* attr = static_cast<const ConsumableAutoCastAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ConsumableSetOnRead): {
  const ConsumableSetOnReadAttr* attr = static_cast<const ConsumableSetOnReadAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Convergent): {
  const ConvergentAttr* attr = static_cast<const ConvergentAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CoroAwaitElidable): {
  const CoroAwaitElidableAttr* attr = static_cast<const CoroAwaitElidableAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CoroAwaitElidableArgument): {
  const CoroAwaitElidableArgumentAttr* attr = static_cast<const CoroAwaitElidableArgumentAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CoroDisableLifetimeBound): {
  const CoroDisableLifetimeBoundAttr* attr = static_cast<const CoroDisableLifetimeBoundAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CoroLifetimeBound): {
  const CoroLifetimeBoundAttr* attr = static_cast<const CoroLifetimeBoundAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CoroOnlyDestroyWhenComplete): {
  const CoroOnlyDestroyWhenCompleteAttr* attr = static_cast<const CoroOnlyDestroyWhenCompleteAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CoroReturnType): {
  const CoroReturnTypeAttr* attr = static_cast<const CoroReturnTypeAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CoroWrapper): {
  const CoroWrapperAttr* attr = static_cast<const CoroWrapperAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CountedBy): {
  const CountedByAttr* attr = static_cast<const CountedByAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_CountedByOrNull): {
  const CountedByOrNullAttr* attr = static_cast<const CountedByOrNullAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_DLLExport): {
  const DLLExportAttr* attr = static_cast<const DLLExportAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_DLLExportOnDecl): return false;
case (AttributeCommonInfo::Kind::AT_DLLExportStaticLocal): return false;
case (AttributeCommonInfo::Kind::AT_DLLImport): {
  const DLLImportAttr* attr = static_cast<const DLLImportAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_DLLImportStaticLocal): return false;
case (AttributeCommonInfo::Kind::AT_Deprecated): {
  const DeprecatedAttr* attr = static_cast<const DeprecatedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Destructor): {
  const DestructorAttr* attr = static_cast<const DestructorAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_DeviceKernel): {
  const DeviceKernelAttr* attr = static_cast<const DeviceKernelAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_DiagnoseAsBuiltin): return false;
case (AttributeCommonInfo::Kind::AT_DiagnoseIf): return false;
case (AttributeCommonInfo::Kind::AT_DisableSanitizerInstrumentation): {
  const DisableSanitizerInstrumentationAttr* attr = static_cast<const DisableSanitizerInstrumentationAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_DisableTailCalls): {
  const DisableTailCallsAttr* attr = static_cast<const DisableTailCallsAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_EmptyBases): return false;
case (AttributeCommonInfo::Kind::AT_EnableIf): return false;
case (AttributeCommonInfo::Kind::AT_EnforceTCB): {
  const EnforceTCBAttr* attr = static_cast<const EnforceTCBAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_EnforceTCBLeaf): {
  const EnforceTCBLeafAttr* attr = static_cast<const EnforceTCBLeafAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_EnumExtensibility): return false;
case (AttributeCommonInfo::Kind::AT_Error): {
  const ErrorAttr* attr = static_cast<const ErrorAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ExcludeFromExplicitInstantiation): {
  const ExcludeFromExplicitInstantiationAttr* attr = static_cast<const ExcludeFromExplicitInstantiationAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ExplicitInit): {
  const ExplicitInitAttr* attr = static_cast<const ExplicitInitAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ExtVectorType): return false;
case (AttributeCommonInfo::Kind::AT_ExternalSourceSymbol): {
  const ExternalSourceSymbolAttr* attr = static_cast<const ExternalSourceSymbolAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_FallThrough): {
  const FallThroughAttr* attr = static_cast<const FallThroughAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_FastCall): {
  const FastCallAttr* attr = static_cast<const FastCallAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_FlagEnum): {
  const FlagEnumAttr* attr = static_cast<const FlagEnumAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Flatten): {
  const FlattenAttr* attr = static_cast<const FlattenAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Format): return false;
case (AttributeCommonInfo::Kind::AT_FormatArg): return false;
case (AttributeCommonInfo::Kind::AT_FormatMatches): return false;
case (AttributeCommonInfo::Kind::AT_FunctionReturnThunks): {
  const FunctionReturnThunksAttr* attr = static_cast<const FunctionReturnThunksAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_GCCStruct): {
  const GCCStructAttr* attr = static_cast<const GCCStructAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_GNUInline): {
  const GNUInlineAttr* attr = static_cast<const GNUInlineAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_GuardedBy): return false;
case (AttributeCommonInfo::Kind::AT_GuardedVar): {
  const GuardedVarAttr* attr = static_cast<const GuardedVarAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_HIPManaged): return false;
case (AttributeCommonInfo::Kind::AT_HLSLAppliedSemantic): return false;
case (AttributeCommonInfo::Kind::AT_HLSLAssociatedResourceDecl): return false;
case (AttributeCommonInfo::Kind::AT_HLSLColumnMajor): return false;
case (AttributeCommonInfo::Kind::AT_HLSLContainedType): return false;
case (AttributeCommonInfo::Kind::AT_HLSLControlFlowHint): return false;
case (AttributeCommonInfo::Kind::AT_HLSLGroupSharedAddressSpace): return false;
case (AttributeCommonInfo::Kind::AT_HLSLIsArray): return false;
case (AttributeCommonInfo::Kind::AT_HLSLIsCounter): return false;
case (AttributeCommonInfo::Kind::AT_HLSLLoopHint): return false;
case (AttributeCommonInfo::Kind::AT_HLSLNumThreads): return false;
case (AttributeCommonInfo::Kind::AT_HLSLPackOffset): return false;
case (AttributeCommonInfo::Kind::AT_HLSLParamModifier): return false;
case (AttributeCommonInfo::Kind::AT_HLSLParsedSemantic): return false;
case (AttributeCommonInfo::Kind::AT_HLSLROV): return false;
case (AttributeCommonInfo::Kind::AT_HLSLRawBuffer): return false;
case (AttributeCommonInfo::Kind::AT_HLSLResourceBinding): return false;
case (AttributeCommonInfo::Kind::AT_HLSLResourceClass): return false;
case (AttributeCommonInfo::Kind::AT_HLSLResourceDimension): return false;
case (AttributeCommonInfo::Kind::AT_HLSLRowMajor): return false;
case (AttributeCommonInfo::Kind::AT_HLSLShader): return false;
case (AttributeCommonInfo::Kind::AT_HLSLUnparsedSemantic): return false;
case (AttributeCommonInfo::Kind::AT_HLSLVkBinding): {
  const HLSLVkBindingAttr* attr = static_cast<const HLSLVkBindingAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_HLSLVkConstantId): {
  const HLSLVkConstantIdAttr* attr = static_cast<const HLSLVkConstantIdAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_HLSLVkExtBuiltinInput): return false;
case (AttributeCommonInfo::Kind::AT_HLSLVkExtBuiltinOutput): return false;
case (AttributeCommonInfo::Kind::AT_HLSLVkLocation): {
  const HLSLVkLocationAttr* attr = static_cast<const HLSLVkLocationAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_HLSLVkPushConstant): {
  const HLSLVkPushConstantAttr* attr = static_cast<const HLSLVkPushConstantAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_HLSLWaveSize): return false;
case (AttributeCommonInfo::Kind::AT_Hot): {
  const HotAttr* attr = static_cast<const HotAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_HybridPatchable): {
  const HybridPatchableAttr* attr = static_cast<const HybridPatchableAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_IBAction): {
  const IBActionAttr* attr = static_cast<const IBActionAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_IBOutlet): {
  const IBOutletAttr* attr = static_cast<const IBOutletAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_IBOutletCollection): {
  const IBOutletCollectionAttr* attr = static_cast<const IBOutletCollectionAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_IFunc): {
  const IFuncAttr* attr = static_cast<const IFuncAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_InitPriority): return false;
case (AttributeCommonInfo::Kind::AT_InstantiationDependent): {
  const InstantiationDependentAttr* attr = static_cast<const InstantiationDependentAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_IntelOclBicc): {
  const IntelOclBiccAttr* attr = static_cast<const IntelOclBiccAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_InternalLinkage): {
  const InternalLinkageAttr* attr = static_cast<const InternalLinkageAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_LTOVisibilityPublic): {
  const LTOVisibilityPublicAttr* attr = static_cast<const LTOVisibilityPublicAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_LayoutVersion): return false;
case (AttributeCommonInfo::Kind::AT_Leaf): {
  const LeafAttr* attr = static_cast<const LeafAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_LifetimeBound): {
  const LifetimeBoundAttr* attr = static_cast<const LifetimeBoundAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_LifetimeCaptureBy): return false;
case (AttributeCommonInfo::Kind::AT_Likely): {
  const LikelyAttr* attr = static_cast<const LikelyAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_LoaderUninitialized): {
  const LoaderUninitializedAttr* attr = static_cast<const LoaderUninitializedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_LockReturned): return false;
case (AttributeCommonInfo::Kind::AT_Lockable): return false;
case (AttributeCommonInfo::Kind::AT_LocksExcluded): return false;
case (AttributeCommonInfo::Kind::AT_LoopHint): return false;
case (AttributeCommonInfo::Kind::AT_M68kRTD): {
  const M68kRTDAttr* attr = static_cast<const M68kRTDAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_MIGServerRoutine): {
  const MIGServerRoutineAttr* attr = static_cast<const MIGServerRoutineAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_MSABI): {
  const MSABIAttr* attr = static_cast<const MSABIAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_MSAllocator): return false;
case (AttributeCommonInfo::Kind::AT_MSConstexpr): {
  const MSConstexprAttr* attr = static_cast<const MSConstexprAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_MSInheritance): return false;
case (AttributeCommonInfo::Kind::AT_MSNoVTable): return false;
case (AttributeCommonInfo::Kind::AT_MSStruct): {
  const MSStructAttr* attr = static_cast<const MSStructAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_MallocSpan): {
  const MallocSpanAttr* attr = static_cast<const MallocSpanAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_MatrixType): return false;
case (AttributeCommonInfo::Kind::AT_MayAlias): {
  const MayAliasAttr* attr = static_cast<const MayAliasAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_MaybeUndef): {
  const MaybeUndefAttr* attr = static_cast<const MaybeUndefAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_MicroMips): {
  const MicroMipsAttr* attr = static_cast<const MicroMipsAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_MinSize): {
  const MinSizeAttr* attr = static_cast<const MinSizeAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_MinVectorWidth): return false;
case (AttributeCommonInfo::Kind::AT_Mips16): {
  const Mips16Attr* attr = static_cast<const Mips16Attr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_MipsLongCall): {
  const MipsLongCallAttr* attr = static_cast<const MipsLongCallAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_MipsShortCall): {
  const MipsShortCallAttr* attr = static_cast<const MipsShortCallAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Mode): return false;
case (AttributeCommonInfo::Kind::AT_ModularFormat): return false;
case (AttributeCommonInfo::Kind::AT_MustTail): {
  const MustTailAttr* attr = static_cast<const MustTailAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NSConsumed): {
  const NSConsumedAttr* attr = static_cast<const NSConsumedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NSConsumesSelf): {
  const NSConsumesSelfAttr* attr = static_cast<const NSConsumesSelfAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NSErrorDomain): return false;
case (AttributeCommonInfo::Kind::AT_NSReturnsAutoreleased): {
  const NSReturnsAutoreleasedAttr* attr = static_cast<const NSReturnsAutoreleasedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NSReturnsNotRetained): {
  const NSReturnsNotRetainedAttr* attr = static_cast<const NSReturnsNotRetainedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NSReturnsRetained): {
  const NSReturnsRetainedAttr* attr = static_cast<const NSReturnsRetainedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Naked): {
  const NakedAttr* attr = static_cast<const NakedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NeonPolyVectorType): return false;
case (AttributeCommonInfo::Kind::AT_NeonVectorType): return false;
case (AttributeCommonInfo::Kind::AT_NoAlias): return false;
case (AttributeCommonInfo::Kind::AT_NoBuiltin): {
  const NoBuiltinAttr* attr = static_cast<const NoBuiltinAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoCommon): {
  const NoCommonAttr* attr = static_cast<const NoCommonAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoConvergent): {
  const NoConvergentAttr* attr = static_cast<const NoConvergentAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoDebug): {
  const NoDebugAttr* attr = static_cast<const NoDebugAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoDeref): return false;
case (AttributeCommonInfo::Kind::AT_NoDestroy): {
  const NoDestroyAttr* attr = static_cast<const NoDestroyAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoDuplicate): {
  const NoDuplicateAttr* attr = static_cast<const NoDuplicateAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoEscape): {
  const NoEscapeAttr* attr = static_cast<const NoEscapeAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoFieldProtection): {
  const NoFieldProtectionAttr* attr = static_cast<const NoFieldProtectionAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoInline): {
  const NoInlineAttr* attr = static_cast<const NoInlineAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoInstrumentFunction): {
  const NoInstrumentFunctionAttr* attr = static_cast<const NoInstrumentFunctionAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoMerge): {
  const NoMergeAttr* attr = static_cast<const NoMergeAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoMicroMips): {
  const NoMicroMipsAttr* attr = static_cast<const NoMicroMipsAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoMips16): {
  const NoMips16Attr* attr = static_cast<const NoMips16Attr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoOutline): {
  const NoOutlineAttr* attr = static_cast<const NoOutlineAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoProfileFunction): {
  const NoProfileFunctionAttr* attr = static_cast<const NoProfileFunctionAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoRandomizeLayout): {
  const NoRandomizeLayoutAttr* attr = static_cast<const NoRandomizeLayoutAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoReturn): {
  const NoReturnAttr* attr = static_cast<const NoReturnAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoSanitize): {
  const NoSanitizeAttr* attr = static_cast<const NoSanitizeAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoSanitizeAddress): return false;
case (AttributeCommonInfo::Kind::AT_NoSanitizeMemory): return false;
case (AttributeCommonInfo::Kind::AT_NoSanitizeThread): return false;
case (AttributeCommonInfo::Kind::AT_NoSpecializations): {
  const NoSpecializationsAttr* attr = static_cast<const NoSpecializationsAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoSpeculativeLoadHardening): {
  const NoSpeculativeLoadHardeningAttr* attr = static_cast<const NoSpeculativeLoadHardeningAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoSplitStack): {
  const NoSplitStackAttr* attr = static_cast<const NoSplitStackAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoStackProtector): {
  const NoStackProtectorAttr* attr = static_cast<const NoStackProtectorAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoThreadSafetyAnalysis): {
  const NoThreadSafetyAnalysisAttr* attr = static_cast<const NoThreadSafetyAnalysisAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoThrow): {
  const NoThrowAttr* attr = static_cast<const NoThrowAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoTrivialAutoVarInit): return false;
case (AttributeCommonInfo::Kind::AT_NoUniqueAddress): {
  const NoUniqueAddressAttr* attr = static_cast<const NoUniqueAddressAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NoUwtable): {
  const NoUwtableAttr* attr = static_cast<const NoUwtableAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NonAllocating): return false;
case (AttributeCommonInfo::Kind::AT_NonBlocking): return false;
case (AttributeCommonInfo::Kind::AT_NonNull): return false;
case (AttributeCommonInfo::Kind::AT_NonString): {
  const NonStringAttr* attr = static_cast<const NonStringAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_NotTailCalled): {
  const NotTailCalledAttr* attr = static_cast<const NotTailCalledAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_OMPAssume): {
  const OMPAssumeAttr* attr = static_cast<const OMPAssumeAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_OSConsumed): {
  const OSConsumedAttr* attr = static_cast<const OSConsumedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_OSConsumesThis): {
  const OSConsumesThisAttr* attr = static_cast<const OSConsumesThisAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_OSReturnsNotRetained): {
  const OSReturnsNotRetainedAttr* attr = static_cast<const OSReturnsNotRetainedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_OSReturnsRetained): {
  const OSReturnsRetainedAttr* attr = static_cast<const OSReturnsRetainedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_OSReturnsRetainedOnNonZero): {
  const OSReturnsRetainedOnNonZeroAttr* attr = static_cast<const OSReturnsRetainedOnNonZeroAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_OSReturnsRetainedOnZero): {
  const OSReturnsRetainedOnZeroAttr* attr = static_cast<const OSReturnsRetainedOnZeroAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ObjCBoxable): {
  const ObjCBoxableAttr* attr = static_cast<const ObjCBoxableAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ObjCBridge): return false;
case (AttributeCommonInfo::Kind::AT_ObjCBridgeMutable): return false;
case (AttributeCommonInfo::Kind::AT_ObjCBridgeRelated): return false;
case (AttributeCommonInfo::Kind::AT_ObjCClassStub): {
  const ObjCClassStubAttr* attr = static_cast<const ObjCClassStubAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ObjCDesignatedInitializer): {
  const ObjCDesignatedInitializerAttr* attr = static_cast<const ObjCDesignatedInitializerAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ObjCDirect): {
  const ObjCDirectAttr* attr = static_cast<const ObjCDirectAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ObjCDirectMembers): {
  const ObjCDirectMembersAttr* attr = static_cast<const ObjCDirectMembersAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ObjCException): {
  const ObjCExceptionAttr* attr = static_cast<const ObjCExceptionAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ObjCExplicitProtocolImpl): {
  const ObjCExplicitProtocolImplAttr* attr = static_cast<const ObjCExplicitProtocolImplAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ObjCExternallyRetained): {
  const ObjCExternallyRetainedAttr* attr = static_cast<const ObjCExternallyRetainedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ObjCGC): return false;
case (AttributeCommonInfo::Kind::AT_ObjCIndependentClass): {
  const ObjCIndependentClassAttr* attr = static_cast<const ObjCIndependentClassAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ObjCInertUnsafeUnretained): return false;
case (AttributeCommonInfo::Kind::AT_ObjCKindOf): return false;
case (AttributeCommonInfo::Kind::AT_ObjCMethodFamily): return false;
case (AttributeCommonInfo::Kind::AT_ObjCNSObject): {
  const ObjCNSObjectAttr* attr = static_cast<const ObjCNSObjectAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ObjCNonLazyClass): {
  const ObjCNonLazyClassAttr* attr = static_cast<const ObjCNonLazyClassAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ObjCNonRuntimeProtocol): {
  const ObjCNonRuntimeProtocolAttr* attr = static_cast<const ObjCNonRuntimeProtocolAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ObjCOwnership): return false;
case (AttributeCommonInfo::Kind::AT_ObjCPreciseLifetime): {
  const ObjCPreciseLifetimeAttr* attr = static_cast<const ObjCPreciseLifetimeAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ObjCRequiresPropertyDefs): {
  const ObjCRequiresPropertyDefsAttr* attr = static_cast<const ObjCRequiresPropertyDefsAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ObjCRequiresSuper): {
  const ObjCRequiresSuperAttr* attr = static_cast<const ObjCRequiresSuperAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ObjCReturnsInnerPointer): {
  const ObjCReturnsInnerPointerAttr* attr = static_cast<const ObjCReturnsInnerPointerAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ObjCRootClass): {
  const ObjCRootClassAttr* attr = static_cast<const ObjCRootClassAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ObjCRuntimeName): {
  const ObjCRuntimeNameAttr* attr = static_cast<const ObjCRuntimeNameAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ObjCRuntimeVisible): {
  const ObjCRuntimeVisibleAttr* attr = static_cast<const ObjCRuntimeVisibleAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ObjCSubclassingRestricted): {
  const ObjCSubclassingRestrictedAttr* attr = static_cast<const ObjCSubclassingRestrictedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_OpenACCRoutineAnnot): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLAccess): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLConstantAddressSpace): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLGenericAddressSpace): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLGlobalAddressSpace): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLGlobalDeviceAddressSpace): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLGlobalHostAddressSpace): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLIntelReqdSubGroupSize): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLLocalAddressSpace): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLNoSVM): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLPrivateAddressSpace): return false;
case (AttributeCommonInfo::Kind::AT_OpenCLUnrollHint): return false;
case (AttributeCommonInfo::Kind::AT_OptimizeNone): {
  const OptimizeNoneAttr* attr = static_cast<const OptimizeNoneAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_OverflowBehavior): return false;
case (AttributeCommonInfo::Kind::AT_Overloadable): {
  const OverloadableAttr* attr = static_cast<const OverloadableAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Owner): {
  const OwnerAttr* attr = static_cast<const OwnerAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Ownership): return false;
case (AttributeCommonInfo::Kind::AT_Packed): {
  const PackedAttr* attr = static_cast<const PackedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ParamTypestate): return false;
case (AttributeCommonInfo::Kind::AT_Pascal): {
  const PascalAttr* attr = static_cast<const PascalAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_PassObjectSize): {
  const PassObjectSizeAttr* attr = static_cast<const PassObjectSizeAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_PatchableFunctionEntry): return false;
case (AttributeCommonInfo::Kind::AT_Pcs): {
  const PcsAttr* attr = static_cast<const PcsAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Personality): return false;
case (AttributeCommonInfo::Kind::AT_Pointer): {
  const PointerAttr* attr = static_cast<const PointerAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_PointerAuth): return false;
case (AttributeCommonInfo::Kind::AT_PointerFieldProtection): {
  const PointerFieldProtectionAttr* attr = static_cast<const PointerFieldProtectionAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_PragmaClangBSSSection): return false;
case (AttributeCommonInfo::Kind::AT_PragmaClangDataSection): return false;
case (AttributeCommonInfo::Kind::AT_PragmaClangRelroSection): return false;
case (AttributeCommonInfo::Kind::AT_PragmaClangRodataSection): return false;
case (AttributeCommonInfo::Kind::AT_PragmaClangTextSection): return false;
case (AttributeCommonInfo::Kind::AT_PreferredName): {
  const PreferredNameAttr* attr = static_cast<const PreferredNameAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_PreferredType): {
  const PreferredTypeAttr* attr = static_cast<const PreferredTypeAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_PreserveAll): {
  const PreserveAllAttr* attr = static_cast<const PreserveAllAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_PreserveMost): {
  const PreserveMostAttr* attr = static_cast<const PreserveMostAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_PreserveNone): {
  const PreserveNoneAttr* attr = static_cast<const PreserveNoneAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_PtGuardedBy): return false;
case (AttributeCommonInfo::Kind::AT_PtGuardedVar): {
  const PtGuardedVarAttr* attr = static_cast<const PtGuardedVarAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Ptr32): return false;
case (AttributeCommonInfo::Kind::AT_Ptr64): return false;
case (AttributeCommonInfo::Kind::AT_Pure): {
  const PureAttr* attr = static_cast<const PureAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_RISCVRVVVectorBits): return false;
case (AttributeCommonInfo::Kind::AT_RISCVVLSCC): return false;
case (AttributeCommonInfo::Kind::AT_RISCVVectorCC): {
  const RISCVVectorCCAttr* attr = static_cast<const RISCVVectorCCAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_RandomizeLayout): {
  const RandomizeLayoutAttr* attr = static_cast<const RandomizeLayoutAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ReadOnlyPlacement): {
  const ReadOnlyPlacementAttr* attr = static_cast<const ReadOnlyPlacementAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ReentrantCapability): {
  const ReentrantCapabilityAttr* attr = static_cast<const ReentrantCapabilityAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_RegCall): {
  const RegCallAttr* attr = static_cast<const RegCallAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Regparm): return false;
case (AttributeCommonInfo::Kind::AT_Reinitializes): {
  const ReinitializesAttr* attr = static_cast<const ReinitializesAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ReleaseCapability): return false;
case (AttributeCommonInfo::Kind::AT_ReleaseHandle): {
  const ReleaseHandleAttr* attr = static_cast<const ReleaseHandleAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ReqdWorkGroupSize): return false;
case (AttributeCommonInfo::Kind::AT_RequiresCapability): return false;
case (AttributeCommonInfo::Kind::AT_Restrict): return false;
case (AttributeCommonInfo::Kind::AT_Retain): {
  const RetainAttr* attr = static_cast<const RetainAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ReturnTypestate): return false;
case (AttributeCommonInfo::Kind::AT_ReturnsNonNull): {
  const ReturnsNonNullAttr* attr = static_cast<const ReturnsNonNullAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ReturnsTwice): {
  const ReturnsTwiceAttr* attr = static_cast<const ReturnsTwiceAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_RootSignature): return false;
case (AttributeCommonInfo::Kind::AT_SPtr): return false;
case (AttributeCommonInfo::Kind::AT_SYCLExternal): {
  const SYCLExternalAttr* attr = static_cast<const SYCLExternalAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_SYCLKernel): {
  const SYCLKernelAttr* attr = static_cast<const SYCLKernelAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_SYCLKernelEntryPoint): return false;
case (AttributeCommonInfo::Kind::AT_SYCLSpecialClass): {
  const SYCLSpecialClassAttr* attr = static_cast<const SYCLSpecialClassAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_ScopedLockable): {
  const ScopedLockableAttr* attr = static_cast<const ScopedLockableAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Section): {
  const SectionAttr* attr = static_cast<const SectionAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_SelectAny): {
  const SelectAnyAttr* attr = static_cast<const SelectAnyAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Sentinel): {
  const SentinelAttr* attr = static_cast<const SentinelAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_SetTypestate): return false;
case (AttributeCommonInfo::Kind::AT_SizedBy): {
  const SizedByAttr* attr = static_cast<const SizedByAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_SizedByOrNull): {
  const SizedByOrNullAttr* attr = static_cast<const SizedByOrNullAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_SpeculativeLoadHardening): {
  const SpeculativeLoadHardeningAttr* attr = static_cast<const SpeculativeLoadHardeningAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_StackProtectorIgnore): {
  const StackProtectorIgnoreAttr* attr = static_cast<const StackProtectorIgnoreAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_StandaloneDebug): {
  const StandaloneDebugAttr* attr = static_cast<const StandaloneDebugAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_StdCall): {
  const StdCallAttr* attr = static_cast<const StdCallAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_StrictFP): return false;
case (AttributeCommonInfo::Kind::AT_StrictGuardStackCheck): return false;
case (AttributeCommonInfo::Kind::AT_Suppress): {
  const SuppressAttr* attr = static_cast<const SuppressAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_SwiftAsync): return false;
case (AttributeCommonInfo::Kind::AT_SwiftAsyncCall): {
  const SwiftAsyncCallAttr* attr = static_cast<const SwiftAsyncCallAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_SwiftAsyncContext): {
  const SwiftAsyncContextAttr* attr = static_cast<const SwiftAsyncContextAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_SwiftAsyncError): return false;
case (AttributeCommonInfo::Kind::AT_SwiftAsyncName): return false;
case (AttributeCommonInfo::Kind::AT_SwiftAttr): return false;
case (AttributeCommonInfo::Kind::AT_SwiftBridge): return false;
case (AttributeCommonInfo::Kind::AT_SwiftBridgedTypedef): return false;
case (AttributeCommonInfo::Kind::AT_SwiftCall): {
  const SwiftCallAttr* attr = static_cast<const SwiftCallAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_SwiftContext): {
  const SwiftContextAttr* attr = static_cast<const SwiftContextAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_SwiftError): return false;
case (AttributeCommonInfo::Kind::AT_SwiftErrorResult): {
  const SwiftErrorResultAttr* attr = static_cast<const SwiftErrorResultAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_SwiftIndirectResult): {
  const SwiftIndirectResultAttr* attr = static_cast<const SwiftIndirectResultAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_SwiftName): return false;
case (AttributeCommonInfo::Kind::AT_SwiftNewType): return false;
case (AttributeCommonInfo::Kind::AT_SwiftObjCMembers): return false;
case (AttributeCommonInfo::Kind::AT_SwiftPrivate): return false;
case (AttributeCommonInfo::Kind::AT_SysVABI): {
  const SysVABIAttr* attr = static_cast<const SysVABIAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_TLSModel): {
  const TLSModelAttr* attr = static_cast<const TLSModelAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Target): {
  const TargetAttr* attr = static_cast<const TargetAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_TargetClones): {
  const TargetClonesAttr* attr = static_cast<const TargetClonesAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_TargetVersion): {
  const TargetVersionAttr* attr = static_cast<const TargetVersionAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_TestTypestate): return false;
case (AttributeCommonInfo::Kind::AT_ThisCall): {
  const ThisCallAttr* attr = static_cast<const ThisCallAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Thread): return false;
case (AttributeCommonInfo::Kind::AT_TransparentUnion): {
  const TransparentUnionAttr* attr = static_cast<const TransparentUnionAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_TrivialABI): {
  const TrivialABIAttr* attr = static_cast<const TrivialABIAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_TryAcquireCapability): return false;
case (AttributeCommonInfo::Kind::AT_TypeNonNull): return false;
case (AttributeCommonInfo::Kind::AT_TypeNullUnspecified): return false;
case (AttributeCommonInfo::Kind::AT_TypeNullable): return false;
case (AttributeCommonInfo::Kind::AT_TypeNullableResult): return false;
case (AttributeCommonInfo::Kind::AT_TypeTagForDatatype): return false;
case (AttributeCommonInfo::Kind::AT_TypeVisibility): {
  const TypeVisibilityAttr* attr = static_cast<const TypeVisibilityAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_UPtr): return false;
case (AttributeCommonInfo::Kind::AT_Unavailable): return false;
case (AttributeCommonInfo::Kind::AT_Uninitialized): {
  const UninitializedAttr* attr = static_cast<const UninitializedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Unlikely): {
  const UnlikelyAttr* attr = static_cast<const UnlikelyAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_UnsafeBufferUsage): {
  const UnsafeBufferUsageAttr* attr = static_cast<const UnsafeBufferUsageAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Unused): {
  const UnusedAttr* attr = static_cast<const UnusedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_UseHandle): {
  const UseHandleAttr* attr = static_cast<const UseHandleAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Used): {
  const UsedAttr* attr = static_cast<const UsedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_UsingIfExists): {
  const UsingIfExistsAttr* attr = static_cast<const UsingIfExistsAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Uuid): return false;
case (AttributeCommonInfo::Kind::AT_VTablePointerAuthentication): {
  const VTablePointerAuthenticationAttr* attr = static_cast<const VTablePointerAuthenticationAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_VecReturn): {
  const VecReturnAttr* attr = static_cast<const VecReturnAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_VecTypeHint): return false;
case (AttributeCommonInfo::Kind::AT_VectorCall): {
  const VectorCallAttr* attr = static_cast<const VectorCallAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_VectorSize): return false;
case (AttributeCommonInfo::Kind::AT_Visibility): {
  const VisibilityAttr* attr = static_cast<const VisibilityAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_WarnUnused): {
  const WarnUnusedAttr* attr = static_cast<const WarnUnusedAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_WarnUnusedResult): {
  const WarnUnusedResultAttr* attr = static_cast<const WarnUnusedResultAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_Weak): {
  const WeakAttr* attr = static_cast<const WeakAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_WeakImport): {
  const WeakImportAttr* attr = static_cast<const WeakImportAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_WeakRef): {
  const WeakRefAttr* attr = static_cast<const WeakRefAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_WebAssemblyExportName): {
  const WebAssemblyExportNameAttr* attr = static_cast<const WebAssemblyExportNameAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_WebAssemblyFuncref): return false;
case (AttributeCommonInfo::Kind::AT_WebAssemblyImportModule): {
  const WebAssemblyImportModuleAttr* attr = static_cast<const WebAssemblyImportModuleAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_WebAssemblyImportName): {
  const WebAssemblyImportNameAttr* attr = static_cast<const WebAssemblyImportNameAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_WorkGroupSizeHint): return false;
case (AttributeCommonInfo::Kind::AT_X86ForceAlignArgPointer): {
  const X86ForceAlignArgPointerAttr* attr = static_cast<const X86ForceAlignArgPointerAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_XRayInstrument): {
  const XRayInstrumentAttr* attr = static_cast<const XRayInstrumentAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
case (AttributeCommonInfo::Kind::AT_XRayLogArgs): return false;
case (AttributeCommonInfo::Kind::AT_ZeroCallUsedRegs): {
  const ZeroCallUsedRegsAttr* attr = static_cast<const ZeroCallUsedRegsAttr*>(semanticAttr);
  return attr->extractSyntacticArguments(C, onSyntax, srcLocation);
}
#endif // CLANG_ATTR_ON_SYNTACTIC_ARGS_LIST

