#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// UnityNative.Toasts.IUnityNativeToasts
struct IUnityNativeToasts_t653F29E4DFA7BDF8CBA37531608B776F1C37FAF7;
// UnityNative.Toasts.IUnityNativeToastsAdapter
struct IUnityNativeToastsAdapter_t0B5C0D07390349A17905A1A4474B380335A674A4;
// UnityNative.Toasts.IosUnityNativeToastsAdapter
struct IosUnityNativeToastsAdapter_tA927AB8D22598F5E245A59FF2E32E77BE64A2A09;
// UnityNative.Toasts.UnityNativeToasts
struct UnityNativeToasts_tD2C3B09980CC6D6ACB0475F9DB19140B86D0F437;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* IUnityNativeToastsAdapter_t0B5C0D07390349A17905A1A4474B380335A674A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosUnityNativeToastsAdapter_tA927AB8D22598F5E245A59FF2E32E77BE64A2A09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityNativeToasts_tD2C3B09980CC6D6ACB0475F9DB19140B86D0F437_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const uint32_t UnityNativeToasts_Create_m9C47A14472286C63DC70A8DA75A65AA2C149360E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityNativeToasts_ShowLongToast_mD26AB172D311495EB5DD5AB0A8347DB2119695B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityNativeToasts_ShowShortToast_m091686DE611A5EBA4AB2272A711C8358946FAAE2_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tB224F0134D9226AAFD4835141059F2AAD6FA0AD3 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityNative.Toasts.IosUnityNativeToastsAdapter
struct  IosUnityNativeToastsAdapter_tA927AB8D22598F5E245A59FF2E32E77BE64A2A09  : public RuntimeObject
{
public:

public:
};


// UnityNative.Toasts.UnityNativeToasts
struct  UnityNativeToasts_tD2C3B09980CC6D6ACB0475F9DB19140B86D0F437  : public RuntimeObject
{
public:
	// UnityNative.Toasts.IUnityNativeToastsAdapter UnityNative.Toasts.UnityNativeToasts::adapter
	RuntimeObject* ___adapter_0;

public:
	inline static int32_t get_offset_of_adapter_0() { return static_cast<int32_t>(offsetof(UnityNativeToasts_tD2C3B09980CC6D6ACB0475F9DB19140B86D0F437, ___adapter_0)); }
	inline RuntimeObject* get_adapter_0() const { return ___adapter_0; }
	inline RuntimeObject** get_address_of_adapter_0() { return &___adapter_0; }
	inline void set_adapter_0(RuntimeObject* value)
	{
		___adapter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adapter_0), (void*)value);
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void UnityNative.Toasts.IosUnityNativeToastsAdapter::UnityNative_Toasts_ShowLongToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosUnityNativeToastsAdapter_UnityNative_Toasts_ShowLongToast_m6F01C0DCF30E27B24740960ABE396B3E532B37B8 (String_t* ___toastText0, const RuntimeMethod* method);
// System.Void UnityNative.Toasts.IosUnityNativeToastsAdapter::UnityNative_Toasts_ShowShortToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosUnityNativeToastsAdapter_UnityNative_Toasts_ShowShortToast_m286911B1B359C573274751C9B3B2A469AA356395 (String_t* ___toastText0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityNative.Toasts.IosUnityNativeToastsAdapter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosUnityNativeToastsAdapter__ctor_mE3156505A867148530BA883F127EC918F3A95EA6 (IosUnityNativeToastsAdapter_tA927AB8D22598F5E245A59FF2E32E77BE64A2A09 * __this, const RuntimeMethod* method);
// System.Void UnityNative.Toasts.UnityNativeToasts::.ctor(UnityNative.Toasts.IUnityNativeToastsAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityNativeToasts__ctor_m8C0CBAD1B3511A6E12D0F79B190B806669A1CBCC (UnityNativeToasts_tD2C3B09980CC6D6ACB0475F9DB19140B86D0F437 * __this, RuntimeObject* ___adapter0, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityNative_Toasts_ShowLongToast(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityNative_Toasts_ShowShortToast(char*);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityNative.Toasts.IosUnityNativeToastsAdapter::UnityNative_Toasts_ShowLongToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosUnityNativeToastsAdapter_UnityNative_Toasts_ShowLongToast_m6F01C0DCF30E27B24740960ABE396B3E532B37B8 (String_t* ___toastText0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___toastText0' to native representation
	char* ____toastText0_marshaled = NULL;
	____toastText0_marshaled = il2cpp_codegen_marshal_string(___toastText0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityNative_Toasts_ShowLongToast)(____toastText0_marshaled);

	// Marshaling cleanup of parameter '___toastText0' native representation
	il2cpp_codegen_marshal_free(____toastText0_marshaled);
	____toastText0_marshaled = NULL;

}
// System.Void UnityNative.Toasts.IosUnityNativeToastsAdapter::UnityNative_Toasts_ShowShortToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosUnityNativeToastsAdapter_UnityNative_Toasts_ShowShortToast_m286911B1B359C573274751C9B3B2A469AA356395 (String_t* ___toastText0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___toastText0' to native representation
	char* ____toastText0_marshaled = NULL;
	____toastText0_marshaled = il2cpp_codegen_marshal_string(___toastText0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityNative_Toasts_ShowShortToast)(____toastText0_marshaled);

	// Marshaling cleanup of parameter '___toastText0' native representation
	il2cpp_codegen_marshal_free(____toastText0_marshaled);
	____toastText0_marshaled = NULL;

}
// System.Void UnityNative.Toasts.IosUnityNativeToastsAdapter::ShowLongToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosUnityNativeToastsAdapter_ShowLongToast_m073E85CB77392A9657D59BDA2BDF36FD6BA6A2AE (IosUnityNativeToastsAdapter_tA927AB8D22598F5E245A59FF2E32E77BE64A2A09 * __this, String_t* ___toastText0, const RuntimeMethod* method)
{
	{
		// UnityNative_Toasts_ShowLongToast(toastText);
		String_t* L_0 = ___toastText0;
		IosUnityNativeToastsAdapter_UnityNative_Toasts_ShowLongToast_m6F01C0DCF30E27B24740960ABE396B3E532B37B8(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityNative.Toasts.IosUnityNativeToastsAdapter::ShowShortToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosUnityNativeToastsAdapter_ShowShortToast_m059564F18D7820B53E433F6DB9EC913D8339022F (IosUnityNativeToastsAdapter_tA927AB8D22598F5E245A59FF2E32E77BE64A2A09 * __this, String_t* ___toastText0, const RuntimeMethod* method)
{
	{
		// UnityNative_Toasts_ShowShortToast(toastText);
		String_t* L_0 = ___toastText0;
		IosUnityNativeToastsAdapter_UnityNative_Toasts_ShowShortToast_m286911B1B359C573274751C9B3B2A469AA356395(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityNative.Toasts.IosUnityNativeToastsAdapter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosUnityNativeToastsAdapter__ctor_mE3156505A867148530BA883F127EC918F3A95EA6 (IosUnityNativeToastsAdapter_tA927AB8D22598F5E245A59FF2E32E77BE64A2A09 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityNative.Toasts.UnityNativeToasts::.ctor(UnityNative.Toasts.IUnityNativeToastsAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityNativeToasts__ctor_m8C0CBAD1B3511A6E12D0F79B190B806669A1CBCC (UnityNativeToasts_tD2C3B09980CC6D6ACB0475F9DB19140B86D0F437 * __this, RuntimeObject* ___adapter0, const RuntimeMethod* method)
{
	{
		// public UnityNativeToasts(IUnityNativeToastsAdapter adapter)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.adapter = adapter;
		RuntimeObject* L_0 = ___adapter0;
		__this->set_adapter_0(L_0);
		// }
		return;
	}
}
// System.Void UnityNative.Toasts.UnityNativeToasts::ShowLongToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityNativeToasts_ShowLongToast_mD26AB172D311495EB5DD5AB0A8347DB2119695B1 (UnityNativeToasts_tD2C3B09980CC6D6ACB0475F9DB19140B86D0F437 * __this, String_t* ___toastText0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityNativeToasts_ShowLongToast_mD26AB172D311495EB5DD5AB0A8347DB2119695B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// adapter.ShowLongToast(toastText);
		RuntimeObject* L_0 = __this->get_adapter_0();
		String_t* L_1 = ___toastText0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void UnityNative.Toasts.IUnityNativeToastsAdapter::ShowLongToast(System.String) */, IUnityNativeToastsAdapter_t0B5C0D07390349A17905A1A4474B380335A674A4_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityNative.Toasts.UnityNativeToasts::ShowShortToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityNativeToasts_ShowShortToast_m091686DE611A5EBA4AB2272A711C8358946FAAE2 (UnityNativeToasts_tD2C3B09980CC6D6ACB0475F9DB19140B86D0F437 * __this, String_t* ___toastText0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityNativeToasts_ShowShortToast_m091686DE611A5EBA4AB2272A711C8358946FAAE2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// adapter.ShowShortToast(toastText);
		RuntimeObject* L_0 = __this->get_adapter_0();
		String_t* L_1 = ___toastText0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityNative.Toasts.IUnityNativeToastsAdapter::ShowShortToast(System.String) */, IUnityNativeToastsAdapter_t0B5C0D07390349A17905A1A4474B380335A674A4_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// UnityNative.Toasts.IUnityNativeToasts UnityNative.Toasts.UnityNativeToasts::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityNativeToasts_Create_m9C47A14472286C63DC70A8DA75A65AA2C149360E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityNativeToasts_Create_m9C47A14472286C63DC70A8DA75A65AA2C149360E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityNativeToasts(new IosUnityNativeToastsAdapter());
		IosUnityNativeToastsAdapter_tA927AB8D22598F5E245A59FF2E32E77BE64A2A09 * L_0 = (IosUnityNativeToastsAdapter_tA927AB8D22598F5E245A59FF2E32E77BE64A2A09 *)il2cpp_codegen_object_new(IosUnityNativeToastsAdapter_tA927AB8D22598F5E245A59FF2E32E77BE64A2A09_il2cpp_TypeInfo_var);
		IosUnityNativeToastsAdapter__ctor_mE3156505A867148530BA883F127EC918F3A95EA6(L_0, /*hidden argument*/NULL);
		UnityNativeToasts_tD2C3B09980CC6D6ACB0475F9DB19140B86D0F437 * L_1 = (UnityNativeToasts_tD2C3B09980CC6D6ACB0475F9DB19140B86D0F437 *)il2cpp_codegen_object_new(UnityNativeToasts_tD2C3B09980CC6D6ACB0475F9DB19140B86D0F437_il2cpp_TypeInfo_var);
		UnityNativeToasts__ctor_m8C0CBAD1B3511A6E12D0F79B190B806669A1CBCC(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
