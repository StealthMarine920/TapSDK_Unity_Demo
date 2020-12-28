#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// UnityNative.Toasts.IosUnityNativeToastsAdapter
struct IosUnityNativeToastsAdapter_tA927AB8D22598F5E245A59FF2E32E77BE64A2A09;
// System.String
struct String_t;



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



// System.Void UnityNative.Toasts.IosUnityNativeToastsAdapter::UnityNative_Toasts_ShowShortToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosUnityNativeToastsAdapter_UnityNative_Toasts_ShowShortToast_m286911B1B359C573274751C9B3B2A469AA356395 (String_t* ___toastText0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
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
