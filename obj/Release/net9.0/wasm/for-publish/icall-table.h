#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
184,
193,
194,
195,
196,
197,
198,
199,
201,
202,
258,
259,
260,
283,
284,
285,
300,
301,
302,
388,
389,
390,
393,
423,
424,
426,
428,
430,
432,
437,
445,
446,
447,
448,
449,
450,
451,
452,
527,
534,
535,
603,
609,
612,
614,
619,
620,
622,
623,
627,
628,
630,
631,
634,
635,
636,
639,
641,
644,
646,
648,
657,
714,
716,
718,
728,
729,
730,
732,
737,
738,
739,
740,
741,
749,
750,
751,
755,
756,
758,
760,
946,
1099,
1100,
6559,
6560,
6562,
6563,
6564,
6565,
6566,
6568,
6569,
6570,
6585,
6587,
6592,
6594,
6596,
6598,
6649,
6650,
6652,
6653,
6654,
6655,
6656,
6658,
6660,
7595,
7599,
7601,
7602,
7603,
7604,
7987,
7988,
7989,
7990,
8006,
8007,
8008,
8051,
8115,
8125,
8126,
8127,
8128,
8129,
8391,
8395,
8396,
8423,
8457,
8464,
8471,
8482,
8485,
8506,
8581,
8583,
8592,
8594,
8595,
8602,
8617,
8637,
8638,
8646,
8648,
8655,
8656,
8659,
8664,
8670,
8671,
8678,
8680,
8692,
8695,
8696,
8697,
8708,
8718,
8724,
8725,
8726,
8728,
8729,
8746,
8748,
8763,
8781,
8808,
8832,
8833,
9297,
9376,
9377,
9529,
9530,
9534,
9537,
9582,
9952,
9953,
10144,
10149,
10159,
10774,
10795,
10797,
10799,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw (int,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw (int,int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 184,
ves_icall_System_Array_InternalCreate,
// token 193,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 194,
ves_icall_System_Array_CanChangePrimitive,
// token 195,
ves_icall_System_Array_FastCopy,
// token 196,
ves_icall_System_Array_GetLengthInternal_raw,
// token 197,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 198,
ves_icall_System_Array_GetGenericValue_icall,
// token 199,
ves_icall_System_Array_GetValueImpl_raw,
// token 201,
ves_icall_System_Array_SetValueImpl_raw,
// token 202,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 258,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 259,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 260,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 283,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 284,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 285,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 300,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 301,
ves_icall_System_Enum_InternalGetCorElementType,
// token 302,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 388,
ves_icall_System_Environment_get_ProcessorCount,
// token 389,
ves_icall_System_Environment_get_TickCount,
// token 390,
ves_icall_System_Environment_get_TickCount64,
// token 393,
ves_icall_System_Environment_FailFast_raw,
// token 423,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 424,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 426,
ves_icall_System_GC_SuppressFinalize_raw,
// token 428,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 430,
ves_icall_System_GC_GetGCMemoryInfo,
// token 432,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 437,
ves_icall_System_Object_MemberwiseClone_raw,
// token 445,
ves_icall_System_Math_Ceiling,
// token 446,
ves_icall_System_Math_Cos,
// token 447,
ves_icall_System_Math_Floor,
// token 448,
ves_icall_System_Math_Pow,
// token 449,
ves_icall_System_Math_Sin,
// token 450,
ves_icall_System_Math_Sqrt,
// token 451,
ves_icall_System_Math_Tan,
// token 452,
ves_icall_System_Math_ModF,
// token 527,
ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
// token 534,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 535,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 603,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 609,
ves_icall_RuntimeType_make_array_type_raw,
// token 612,
ves_icall_RuntimeType_make_byref_type_raw,
// token 614,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 619,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 620,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 622,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 623,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 627,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 628,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 630,
ves_icall_System_RuntimeType_getFullName_raw,
// token 631,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 634,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 635,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 636,
ves_icall_RuntimeType_GetFields_native_raw,
// token 639,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 641,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 644,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 646,
ves_icall_RuntimeType_GetName_raw,
// token 648,
ves_icall_RuntimeType_GetNamespace_raw,
// token 657,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 714,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 716,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 718,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 728,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 729,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 730,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 732,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 737,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 738,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 739,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 740,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 741,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 749,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 750,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 751,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 755,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 756,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 758,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 760,
ves_icall_System_String_FastAllocateString_raw,
// token 946,
ves_icall_System_Type_internal_from_handle_raw,
// token 1099,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1100,
ves_icall_System_ValueType_Equals_raw,
// token 6559,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6560,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6562,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6563,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6564,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6565,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6566,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6568,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6569,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6570,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6585,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6587,
mono_monitor_exit_icall_raw,
// token 6592,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6594,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6596,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6598,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6649,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6650,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6652,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6653,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6654,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6655,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6656,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6658,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6660,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7595,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7599,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7601,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7602,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7603,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7604,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7987,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7988,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7989,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7990,
ves_icall_System_GCHandle_InternalSet_raw,
// token 8006,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 8007,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 8008,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 8051,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8115,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 8125,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8126,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8127,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 8128,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8129,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
// token 8391,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8395,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8396,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8423,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8457,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8464,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8471,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8482,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8485,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8506,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8581,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8583,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8592,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8594,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8595,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8602,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8617,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8637,
ves_icall_reflection_get_token_raw,
// token 8638,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8646,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8648,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8655,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8656,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8659,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8664,
ves_icall_reflection_get_token_raw,
// token 8670,
ves_icall_get_method_info_raw,
// token 8671,
ves_icall_get_method_attributes,
// token 8678,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8680,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8692,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8695,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8696,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8697,
ves_icall_reflection_get_token_raw,
// token 8708,
ves_icall_InternalInvoke_raw,
// token 8718,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8724,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8725,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8726,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8728,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8729,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8746,
ves_icall_InvokeClassConstructor_raw,
// token 8748,
ves_icall_InternalInvoke_raw,
// token 8763,
ves_icall_reflection_get_token_raw,
// token 8781,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8808,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8832,
ves_icall_reflection_get_token_raw,
// token 8833,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9297,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9376,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9377,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9529,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9530,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9534,
ves_icall_ModuleBuilder_getToken_raw,
// token 9537,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9582,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 9952,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 9953,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10144,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 10149,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10159,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 10774,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 10795,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10797,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10799,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
};
