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

// UnityNative.Toasts.Example.ShowLongToastButton
struct ShowLongToastButton_tFF8C867C14C7F374EF45D4BBBCAA6793813C48A4;
// UnityNative.Toasts.Example.ShowShortToastButton
struct ShowShortToastButton_t5B218A3EA7DCF2C26A4EB28A1E4813ACD5C103F5;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityNative.Toasts.IUnityNativeToasts
struct IUnityNativeToasts_t653F29E4DFA7BDF8CBA37531608B776F1C37FAF7;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* IUnityNativeToasts_t653F29E4DFA7BDF8CBA37531608B776F1C37FAF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityNativeToastsHelper_tDC8FEB4501FE655D1EA008B63C79358A95491BCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral327EA18C656CC8C0F08CD985C3303C22B8B86F04;
IL2CPP_EXTERN_C String_t* _stringLiteral952B6B35A961ABF0C491BBA2D5176076DF54A8E7;
IL2CPP_EXTERN_C const uint32_t ShowLongToastButton_ShowLongToast_m28C792E36DAF719B65809CC5A98C5BB758E1005D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShowLongToastButton__ctor_m6071460E3D2C8267E78DA4C0559339209D2DF75B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShowShortToastButton_ShowShortToast_m4E125480BC57B561A44D5CC04DD0297603ABB4D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShowShortToastButton__ctor_m7E5626B441AD81E7D324E16E7146BFA26CDAA7C6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityNativeToastsHelper_ShowLongToast_mC8BABE2D9F77BC7FF59DF77DA6D655D4A4BB485D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityNativeToastsHelper_ShowShortText_mA499825A2479AFB8C2900230E53097810F0170CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityNativeToastsHelper__cctor_m6483A3C050620E5CED61FB8C0B2A57C287CF8A9A_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t5735060863C846C460211464ADF5DCE0275A95C7 
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

// UnityNative.Toasts.Example.UnityNativeToastsHelper
struct  UnityNativeToastsHelper_tDC8FEB4501FE655D1EA008B63C79358A95491BCD  : public RuntimeObject
{
public:

public:
};

struct UnityNativeToastsHelper_tDC8FEB4501FE655D1EA008B63C79358A95491BCD_StaticFields
{
public:
	// UnityNative.Toasts.IUnityNativeToasts UnityNative.Toasts.Example.UnityNativeToastsHelper::unityNativeToasts
	RuntimeObject* ___unityNativeToasts_0;

public:
	inline static int32_t get_offset_of_unityNativeToasts_0() { return static_cast<int32_t>(offsetof(UnityNativeToastsHelper_tDC8FEB4501FE655D1EA008B63C79358A95491BCD_StaticFields, ___unityNativeToasts_0)); }
	inline RuntimeObject* get_unityNativeToasts_0() const { return ___unityNativeToasts_0; }
	inline RuntimeObject** get_address_of_unityNativeToasts_0() { return &___unityNativeToasts_0; }
	inline void set_unityNativeToasts_0(RuntimeObject* value)
	{
		___unityNativeToasts_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityNativeToasts_0), (void*)value);
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
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


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityNative.Toasts.Example.ShowLongToastButton
struct  ShowLongToastButton_tFF8C867C14C7F374EF45D4BBBCAA6793813C48A4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String UnityNative.Toasts.Example.ShowLongToastButton::toastText
	String_t* ___toastText_4;

public:
	inline static int32_t get_offset_of_toastText_4() { return static_cast<int32_t>(offsetof(ShowLongToastButton_tFF8C867C14C7F374EF45D4BBBCAA6793813C48A4, ___toastText_4)); }
	inline String_t* get_toastText_4() const { return ___toastText_4; }
	inline String_t** get_address_of_toastText_4() { return &___toastText_4; }
	inline void set_toastText_4(String_t* value)
	{
		___toastText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toastText_4), (void*)value);
	}
};


// UnityNative.Toasts.Example.ShowShortToastButton
struct  ShowShortToastButton_t5B218A3EA7DCF2C26A4EB28A1E4813ACD5C103F5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String UnityNative.Toasts.Example.ShowShortToastButton::toastText
	String_t* ___toastText_4;

public:
	inline static int32_t get_offset_of_toastText_4() { return static_cast<int32_t>(offsetof(ShowShortToastButton_t5B218A3EA7DCF2C26A4EB28A1E4813ACD5C103F5, ___toastText_4)); }
	inline String_t* get_toastText_4() const { return ___toastText_4; }
	inline String_t** get_address_of_toastText_4() { return &___toastText_4; }
	inline void set_toastText_4(String_t* value)
	{
		___toastText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toastText_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void UnityNative.Toasts.Example.UnityNativeToastsHelper::ShowLongToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityNativeToastsHelper_ShowLongToast_mC8BABE2D9F77BC7FF59DF77DA6D655D4A4BB485D (String_t* ___toastText0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityNative.Toasts.Example.UnityNativeToastsHelper::ShowShortText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityNativeToastsHelper_ShowShortText_mA499825A2479AFB8C2900230E53097810F0170CC (String_t* ___toastText0, const RuntimeMethod* method);
// UnityNative.Toasts.IUnityNativeToasts UnityNative.Toasts.UnityNativeToasts::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityNativeToasts_Create_m9C47A14472286C63DC70A8DA75A65AA2C149360E (const RuntimeMethod* method);
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
// System.Void UnityNative.Toasts.Example.ShowLongToastButton::ShowLongToast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowLongToastButton_ShowLongToast_m28C792E36DAF719B65809CC5A98C5BB758E1005D (ShowLongToastButton_tFF8C867C14C7F374EF45D4BBBCAA6793813C48A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShowLongToastButton_ShowLongToast_m28C792E36DAF719B65809CC5A98C5BB758E1005D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityNativeToastsHelper.ShowLongToast(toastText);
		String_t* L_0 = __this->get_toastText_4();
		IL2CPP_RUNTIME_CLASS_INIT(UnityNativeToastsHelper_tDC8FEB4501FE655D1EA008B63C79358A95491BCD_il2cpp_TypeInfo_var);
		UnityNativeToastsHelper_ShowLongToast_mC8BABE2D9F77BC7FF59DF77DA6D655D4A4BB485D(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityNative.Toasts.Example.ShowLongToastButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowLongToastButton__ctor_m6071460E3D2C8267E78DA4C0559339209D2DF75B (ShowLongToastButton_tFF8C867C14C7F374EF45D4BBBCAA6793813C48A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShowLongToastButton__ctor_m6071460E3D2C8267E78DA4C0559339209D2DF75B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string toastText = "This is an example of a long toast text";
		__this->set_toastText_4(_stringLiteral952B6B35A961ABF0C491BBA2D5176076DF54A8E7);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityNative.Toasts.Example.ShowShortToastButton::ShowShortToast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowShortToastButton_ShowShortToast_m4E125480BC57B561A44D5CC04DD0297603ABB4D2 (ShowShortToastButton_t5B218A3EA7DCF2C26A4EB28A1E4813ACD5C103F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShowShortToastButton_ShowShortToast_m4E125480BC57B561A44D5CC04DD0297603ABB4D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityNativeToastsHelper.ShowShortText(toastText);
		String_t* L_0 = __this->get_toastText_4();
		IL2CPP_RUNTIME_CLASS_INIT(UnityNativeToastsHelper_tDC8FEB4501FE655D1EA008B63C79358A95491BCD_il2cpp_TypeInfo_var);
		UnityNativeToastsHelper_ShowShortText_mA499825A2479AFB8C2900230E53097810F0170CC(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityNative.Toasts.Example.ShowShortToastButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowShortToastButton__ctor_m7E5626B441AD81E7D324E16E7146BFA26CDAA7C6 (ShowShortToastButton_t5B218A3EA7DCF2C26A4EB28A1E4813ACD5C103F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShowShortToastButton__ctor_m7E5626B441AD81E7D324E16E7146BFA26CDAA7C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string toastText = "This is an example of a short toast text";
		__this->set_toastText_4(_stringLiteral327EA18C656CC8C0F08CD985C3303C22B8B86F04);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityNative.Toasts.Example.UnityNativeToastsHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityNativeToastsHelper__cctor_m6483A3C050620E5CED61FB8C0B2A57C287CF8A9A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityNativeToastsHelper__cctor_m6483A3C050620E5CED61FB8C0B2A57C287CF8A9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// unityNativeToasts = UnityNativeToasts.Create();
		RuntimeObject* L_0 = UnityNativeToasts_Create_m9C47A14472286C63DC70A8DA75A65AA2C149360E(/*hidden argument*/NULL);
		((UnityNativeToastsHelper_tDC8FEB4501FE655D1EA008B63C79358A95491BCD_StaticFields*)il2cpp_codegen_static_fields_for(UnityNativeToastsHelper_tDC8FEB4501FE655D1EA008B63C79358A95491BCD_il2cpp_TypeInfo_var))->set_unityNativeToasts_0(L_0);
		// }
		return;
	}
}
// System.Void UnityNative.Toasts.Example.UnityNativeToastsHelper::ShowLongToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityNativeToastsHelper_ShowLongToast_mC8BABE2D9F77BC7FF59DF77DA6D655D4A4BB485D (String_t* ___toastText0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityNativeToastsHelper_ShowLongToast_mC8BABE2D9F77BC7FF59DF77DA6D655D4A4BB485D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// unityNativeToasts.ShowLongToast(toastText);
		IL2CPP_RUNTIME_CLASS_INIT(UnityNativeToastsHelper_tDC8FEB4501FE655D1EA008B63C79358A95491BCD_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((UnityNativeToastsHelper_tDC8FEB4501FE655D1EA008B63C79358A95491BCD_StaticFields*)il2cpp_codegen_static_fields_for(UnityNativeToastsHelper_tDC8FEB4501FE655D1EA008B63C79358A95491BCD_il2cpp_TypeInfo_var))->get_unityNativeToasts_0();
		String_t* L_1 = ___toastText0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void UnityNative.Toasts.IUnityNativeToasts::ShowLongToast(System.String) */, IUnityNativeToasts_t653F29E4DFA7BDF8CBA37531608B776F1C37FAF7_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityNative.Toasts.Example.UnityNativeToastsHelper::ShowShortText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityNativeToastsHelper_ShowShortText_mA499825A2479AFB8C2900230E53097810F0170CC (String_t* ___toastText0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityNativeToastsHelper_ShowShortText_mA499825A2479AFB8C2900230E53097810F0170CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// unityNativeToasts.ShowShortToast(toastText);
		IL2CPP_RUNTIME_CLASS_INIT(UnityNativeToastsHelper_tDC8FEB4501FE655D1EA008B63C79358A95491BCD_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((UnityNativeToastsHelper_tDC8FEB4501FE655D1EA008B63C79358A95491BCD_StaticFields*)il2cpp_codegen_static_fields_for(UnityNativeToastsHelper_tDC8FEB4501FE655D1EA008B63C79358A95491BCD_il2cpp_TypeInfo_var))->get_unityNativeToasts_0();
		String_t* L_1 = ___toastText0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityNative.Toasts.IUnityNativeToasts::ShowShortToast(System.String) */, IUnityNativeToasts_t653F29E4DFA7BDF8CBA37531608B776F1C37FAF7_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
