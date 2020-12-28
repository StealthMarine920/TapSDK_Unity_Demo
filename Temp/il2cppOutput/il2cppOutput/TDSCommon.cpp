#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// TDSCommon.BridgeAndroid
struct BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16;
// TDSCommon.BridgeCallback
struct BridgeCallback_t008D75AAA5E00A3BD9720A5DE1912844CEBBF80C;
// TDSCommon.BridgeIOS
struct BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1;
// TDSCommon.Command
struct Command_t68880E9923656839A6EF1701A4FB2280884DFA48;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// TDSCommon.EngineBridge
struct EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// TDSCommon.IBridge
struct IBridge_tA0922C02103EE9E3E35C5BBDBE2ED478A220E226;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// TDSCommon.Result
struct Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// TDSCommon.BridgeIOS/EngineBridgeDelegate
struct EngineBridgeDelegate_tAF3B678052935ACF37FD27EFE8B7DE1E7854E81C;
// TDSCommon.Json/Parser
struct Parser_t47E0E2B71653F587EB703880B0045EC2222AF670;
// TDSCommon.Json/Serializer
struct Serializer_t5A4B7B98B0F098CDA805209BE96D24DDCC98CB15;
// System.Action`1<TDSCommon.Result>
struct Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<TDSCommon.Result>>
struct Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`1<TDSCommon.Result>>
struct KeyCollection_t17BD3B674BAB088442433560C4CB16BD4E726E9B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`1<TDSCommon.Result>>
struct ValueCollection_t4AF6B7472AC1FF36B22C142C5CF63E346FB8BD0C;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`1<TDSCommon.Result>>[]
struct EntryU5BU5D_tD5E2114E2B9C920EF8BC442B8DA2773B757C4E8C;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BridgeCallback_t008D75AAA5E00A3BD9720A5DE1912844CEBBF80C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EngineBridgeDelegate_tAF3B678052935ACF37FD27EFE8B7DE1E7854E81C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBridge_tA0922C02103EE9E3E35C5BBDBE2ED478A220E226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_t47E0E2B71653F587EB703880B0045EC2222AF670_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_t5A4B7B98B0F098CDA805209BE96D24DDCC98CB15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0BE425C3F18A9703B1907A2BAA91EFB2F92F4BDE;
IL2CPP_EXTERN_C String_t* _stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459;
IL2CPP_EXTERN_C String_t* _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral74995F8A2CBEF688BCD95DF9DB36E3FFCDE14774;
IL2CPP_EXTERN_C String_t* _stringLiteral74A76DBF43946A8F33022BF9BAFE6DC76F18CF0A;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA;
IL2CPP_EXTERN_C String_t* _stringLiteral9BC242DF4AEE0561D7635DB8227112DC96E863C3;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralCDB1A0A3D8C53C2F9DEC231A147964E483B79A09;
IL2CPP_EXTERN_C String_t* _stringLiteralD2671306B605AA32D582F0C7A19AAE677E5437A5;
IL2CPP_EXTERN_C String_t* _stringLiteralD6CFAA9A8F507F384B1008F247D2327A3D2F1426;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralDC69F5AD9724A6BD073F7B00F594564A34BE8F50;
IL2CPP_EXTERN_C String_t* _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19;
IL2CPP_EXTERN_C String_t* _stringLiteralE7CE87F5CD06F2CEADE5857C0C5F2EF8A58F5656;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mBD37B16C5E2A7D4939298F1037533EDA912C0A05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BridgeIOS_engineBridgeDelegate_m99A321D526A8DC21C6FE7D6D24F77D3C9F5141C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m401A878FCE938202FC98BAB01DC6A5A608BA5CF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m058F2025BE27E40EC78950A6F6919FC293BA40F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m7890DDCD47D32A8B6FE6EEF3A33146ED8663CA83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m2F14F576C45CC0238D3C25E50C93D63C11FF592E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mAD5155E7BDF9B0B146468C59E19A3190C07D1D06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4E2722BE78740C995F95AEBF1735E7945A2E0469_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mDCBE96075EBBD319B8A6DE0A9AE8EF39093386E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m92B4CFAE4F02B21A4F4B2710929DB71F0F876491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m90FD2E21204D49AEF320A745B37FD70B55EA0B8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m38089701D4D41945EF2ABCB8944592AF14BB179A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m6BD6A48A148B10F8BAEB9F460F10172B9C88DE37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BridgeAndroid_Call_m39E0D33EA4B136C08958607711378884C1FBC99E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BridgeAndroid_Call_m54DACDC8775C9A75DD5D4A5BB4258317B3D1739E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BridgeAndroid_GetInstance_m783F511010BC98704259AD173F7916BC7CF1807CTDSCommon_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BridgeAndroid_GetInstance_m783F511010BC98704259AD173F7916BC7CF1807C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BridgeAndroid_Register_m2C70E7E70387688027EA6B56D78A13730B4DD2B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BridgeAndroid__cctor_m1C8D16116569A5C5D627436718447CD437ED5310_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BridgeAndroid__ctor_mA6AB98C5500CDAF90E8FDFD42E5C3F123D450A36_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BridgeCallback_Invoke_m0482D0BF44279EA0889926C5F4765B698E28B27E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BridgeCallback__ctor_mB336FD292F049C993A8F28A247F1012E045CA8C6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BridgeIOS_Call_m5135A40A4A89A2DF9616567975263FB0C49C7951_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BridgeIOS_Call_mEC180D1CBBC79E076543B667B6B0F5A7E9135F19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BridgeIOS_GetInstance_m31FCF5433CC5333BD9BBCD10025BCF308DE33473TDSCommon_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BridgeIOS_GetInstance_m31FCF5433CC5333BD9BBCD10025BCF308DE33473_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BridgeIOS__cctor_m9B1D302CF50D9BFB542D4517412FA08F9B859F55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BridgeIOS__ctor_m3F88F5DD471ED6BB033A8E7D2333505BEA437444_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BridgeIOS_engineBridgeDelegate_m99A321D526A8DC21C6FE7D6D24F77D3C9F5141C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BridgeIOS_removeKey_m83ACF527B8616C942D974D52C0E1609B1FF2497C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Command__ctor_m5DA5B925CC9291FB33FC981FB6026506CDBE66BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EngineBridge_CallHandler_mC781871CE7BA0BD9403CB198B6B3AED4D5127CC2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EngineBridge_CallHandler_mF45541007F21E1CA854B5BC12CCA2F123C5CABE4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EngineBridge_GetInstance_mCFCC74D6FA806E61EC385D296D38388FB5B0C977_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EngineBridge_Register_m5BF43BCB8DEE05226E87E805331E235BE12B900B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EngineBridge__cctor_m0487773882515556D093234CFDA45EE9175652B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EngineBridge__ctor_mB8BE6D214218816D66D843FEC5ADE14E13B64CFF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_EatWhitespace_m72E0475E2B4D94B394A327D46754A520A3633261_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_IsWordBreak_m84D6C0991B9D5A88502087DDB2B1F24683068076_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseArray_mE07CC2320889BF90810ED4F201F70CBD9A614BC0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseByToken_m15C929C1C77C43DC8656BF3C5480060CE32D1A85_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseNumber_m919975EBAA0772845C506993B6CE7E1B4EA526DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseObject_m55779222EFB861138FE6783D98C9D6478E3E144A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseString_m4014EE44669F217B966400B90ED981C3C008D7A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_Parse_m45AFBB14E4401B0C7F496E27FEDF39D8C8D35CF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser__ctor_mA356F21CF106562640ABF607067829D93E6B1998_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_get_NextChar_m1765C0C9122E8044E4CE2D54476CA296BF83C300_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_get_NextToken_mF3ABF9F792515FF2E72E5FBD1383ACFFB30794C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_get_NextWord_m13A016A9A1515A929486A6E3F18458E87F93C7CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_get_PeekChar_m853A0235389C3A8536473D3F65FC2DA8B26BDF73_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Result__cctor_m216611DD7E5C47BD071C0D99F95B86AE9AB3EF2E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SafeDictionary_SafeGetValueByKey_mAA610A02CEE91E2D7636817B0A8243B3A9AE2B07_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeArray_m848C61A1BA3BC21322747C04379B7AD80511DC67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeObject_m0D370BED3A05991633A3BE1685EE101B32D663A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeOther_m41C903A996454DB1F83BD02393AA0DFB95327C1F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeString_m8F012D60C0B8643E3267B5D8384123655F63F04C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeValue_mCE90A867C1A8A498A2DEE7707A3B42F87D399252_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_Serialize_m23419C7CC8CBAF978FB8B29494E80DD2A7900A87_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer__ctor_mD3269A1FA6D516B0E6981FEAA08F177B6937457B_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t8C36591DB36DD7BAACB284C6E1C209FE4F3D7405 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<TDSCommon.Result>>
struct  Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD5E2114E2B9C920EF8BC442B8DA2773B757C4E8C* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t17BD3B674BAB088442433560C4CB16BD4E726E9B * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4AF6B7472AC1FF36B22C142C5CF63E346FB8BD0C * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227, ___entries_1)); }
	inline EntryU5BU5D_tD5E2114E2B9C920EF8BC442B8DA2773B757C4E8C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD5E2114E2B9C920EF8BC442B8DA2773B757C4E8C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD5E2114E2B9C920EF8BC442B8DA2773B757C4E8C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227, ___keys_7)); }
	inline KeyCollection_t17BD3B674BAB088442433560C4CB16BD4E726E9B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t17BD3B674BAB088442433560C4CB16BD4E726E9B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t17BD3B674BAB088442433560C4CB16BD4E726E9B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227, ___values_8)); }
	inline ValueCollection_t4AF6B7472AC1FF36B22C142C5CF63E346FB8BD0C * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4AF6B7472AC1FF36B22C142C5CF63E346FB8BD0C ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4AF6B7472AC1FF36B22C142C5CF63E346FB8BD0C * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// TDSCommon.BridgeAndroid
struct  BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16  : public RuntimeObject
{
public:
	// System.String TDSCommon.BridgeAndroid::bridgeJavaClz
	String_t* ___bridgeJavaClz_0;
	// System.String TDSCommon.BridgeAndroid::instanceMethod
	String_t* ___instanceMethod_1;
	// System.String TDSCommon.BridgeAndroid::registerHandlerMethod
	String_t* ___registerHandlerMethod_2;
	// System.String TDSCommon.BridgeAndroid::callHandlerMethod
	String_t* ___callHandlerMethod_3;
	// System.String TDSCommon.BridgeAndroid::initMethod
	String_t* ___initMethod_4;
	// System.String TDSCommon.BridgeAndroid::registerMethod
	String_t* ___registerMethod_5;
	// UnityEngine.AndroidJavaObject TDSCommon.BridgeAndroid::mCurrentActivity
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___mCurrentActivity_6;
	// UnityEngine.AndroidJavaObject TDSCommon.BridgeAndroid::mAndroidBridge
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___mAndroidBridge_7;

public:
	inline static int32_t get_offset_of_bridgeJavaClz_0() { return static_cast<int32_t>(offsetof(BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16, ___bridgeJavaClz_0)); }
	inline String_t* get_bridgeJavaClz_0() const { return ___bridgeJavaClz_0; }
	inline String_t** get_address_of_bridgeJavaClz_0() { return &___bridgeJavaClz_0; }
	inline void set_bridgeJavaClz_0(String_t* value)
	{
		___bridgeJavaClz_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bridgeJavaClz_0), (void*)value);
	}

	inline static int32_t get_offset_of_instanceMethod_1() { return static_cast<int32_t>(offsetof(BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16, ___instanceMethod_1)); }
	inline String_t* get_instanceMethod_1() const { return ___instanceMethod_1; }
	inline String_t** get_address_of_instanceMethod_1() { return &___instanceMethod_1; }
	inline void set_instanceMethod_1(String_t* value)
	{
		___instanceMethod_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instanceMethod_1), (void*)value);
	}

	inline static int32_t get_offset_of_registerHandlerMethod_2() { return static_cast<int32_t>(offsetof(BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16, ___registerHandlerMethod_2)); }
	inline String_t* get_registerHandlerMethod_2() const { return ___registerHandlerMethod_2; }
	inline String_t** get_address_of_registerHandlerMethod_2() { return &___registerHandlerMethod_2; }
	inline void set_registerHandlerMethod_2(String_t* value)
	{
		___registerHandlerMethod_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registerHandlerMethod_2), (void*)value);
	}

	inline static int32_t get_offset_of_callHandlerMethod_3() { return static_cast<int32_t>(offsetof(BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16, ___callHandlerMethod_3)); }
	inline String_t* get_callHandlerMethod_3() const { return ___callHandlerMethod_3; }
	inline String_t** get_address_of_callHandlerMethod_3() { return &___callHandlerMethod_3; }
	inline void set_callHandlerMethod_3(String_t* value)
	{
		___callHandlerMethod_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callHandlerMethod_3), (void*)value);
	}

	inline static int32_t get_offset_of_initMethod_4() { return static_cast<int32_t>(offsetof(BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16, ___initMethod_4)); }
	inline String_t* get_initMethod_4() const { return ___initMethod_4; }
	inline String_t** get_address_of_initMethod_4() { return &___initMethod_4; }
	inline void set_initMethod_4(String_t* value)
	{
		___initMethod_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initMethod_4), (void*)value);
	}

	inline static int32_t get_offset_of_registerMethod_5() { return static_cast<int32_t>(offsetof(BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16, ___registerMethod_5)); }
	inline String_t* get_registerMethod_5() const { return ___registerMethod_5; }
	inline String_t** get_address_of_registerMethod_5() { return &___registerMethod_5; }
	inline void set_registerMethod_5(String_t* value)
	{
		___registerMethod_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registerMethod_5), (void*)value);
	}

	inline static int32_t get_offset_of_mCurrentActivity_6() { return static_cast<int32_t>(offsetof(BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16, ___mCurrentActivity_6)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_mCurrentActivity_6() const { return ___mCurrentActivity_6; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_mCurrentActivity_6() { return &___mCurrentActivity_6; }
	inline void set_mCurrentActivity_6(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___mCurrentActivity_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCurrentActivity_6), (void*)value);
	}

	inline static int32_t get_offset_of_mAndroidBridge_7() { return static_cast<int32_t>(offsetof(BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16, ___mAndroidBridge_7)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_mAndroidBridge_7() const { return ___mAndroidBridge_7; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_mAndroidBridge_7() { return &___mAndroidBridge_7; }
	inline void set_mAndroidBridge_7(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___mAndroidBridge_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAndroidBridge_7), (void*)value);
	}
};

struct BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16_StaticFields
{
public:
	// TDSCommon.BridgeAndroid TDSCommon.BridgeAndroid::sInstance
	BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16 * ___sInstance_8;

public:
	inline static int32_t get_offset_of_sInstance_8() { return static_cast<int32_t>(offsetof(BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16_StaticFields, ___sInstance_8)); }
	inline BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16 * get_sInstance_8() const { return ___sInstance_8; }
	inline BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16 ** get_address_of_sInstance_8() { return &___sInstance_8; }
	inline void set_sInstance_8(BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16 * value)
	{
		___sInstance_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_8), (void*)value);
	}
};


// TDSCommon.BridgeIOS
struct  BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<TDSCommon.Result>> TDSCommon.BridgeIOS::dic
	Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * ___dic_1;

public:
	inline static int32_t get_offset_of_dic_1() { return static_cast<int32_t>(offsetof(BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1, ___dic_1)); }
	inline Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * get_dic_1() const { return ___dic_1; }
	inline Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 ** get_address_of_dic_1() { return &___dic_1; }
	inline void set_dic_1(Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * value)
	{
		___dic_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dic_1), (void*)value);
	}
};

struct BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1_StaticFields
{
public:
	// TDSCommon.BridgeIOS TDSCommon.BridgeIOS::sInstance
	BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 * ___sInstance_0;

public:
	inline static int32_t get_offset_of_sInstance_0() { return static_cast<int32_t>(offsetof(BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1_StaticFields, ___sInstance_0)); }
	inline BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 * get_sInstance_0() const { return ___sInstance_0; }
	inline BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 ** get_address_of_sInstance_0() { return &___sInstance_0; }
	inline void set_sInstance_0(BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 * value)
	{
		___sInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_0), (void*)value);
	}
};


// TDSCommon.Command
struct  Command_t68880E9923656839A6EF1701A4FB2280884DFA48  : public RuntimeObject
{
public:
	// System.String TDSCommon.Command::service
	String_t* ___service_0;
	// System.String TDSCommon.Command::method
	String_t* ___method_1;
	// System.String TDSCommon.Command::args
	String_t* ___args_2;
	// System.Boolean TDSCommon.Command::callback
	bool ___callback_3;
	// System.String TDSCommon.Command::callbackId
	String_t* ___callbackId_4;

public:
	inline static int32_t get_offset_of_service_0() { return static_cast<int32_t>(offsetof(Command_t68880E9923656839A6EF1701A4FB2280884DFA48, ___service_0)); }
	inline String_t* get_service_0() const { return ___service_0; }
	inline String_t** get_address_of_service_0() { return &___service_0; }
	inline void set_service_0(String_t* value)
	{
		___service_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___service_0), (void*)value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(Command_t68880E9923656839A6EF1701A4FB2280884DFA48, ___method_1)); }
	inline String_t* get_method_1() const { return ___method_1; }
	inline String_t** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(String_t* value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_1), (void*)value);
	}

	inline static int32_t get_offset_of_args_2() { return static_cast<int32_t>(offsetof(Command_t68880E9923656839A6EF1701A4FB2280884DFA48, ___args_2)); }
	inline String_t* get_args_2() const { return ___args_2; }
	inline String_t** get_address_of_args_2() { return &___args_2; }
	inline void set_args_2(String_t* value)
	{
		___args_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_2), (void*)value);
	}

	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(Command_t68880E9923656839A6EF1701A4FB2280884DFA48, ___callback_3)); }
	inline bool get_callback_3() const { return ___callback_3; }
	inline bool* get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(bool value)
	{
		___callback_3 = value;
	}

	inline static int32_t get_offset_of_callbackId_4() { return static_cast<int32_t>(offsetof(Command_t68880E9923656839A6EF1701A4FB2280884DFA48, ___callbackId_4)); }
	inline String_t* get_callbackId_4() const { return ___callbackId_4; }
	inline String_t** get_address_of_callbackId_4() { return &___callbackId_4; }
	inline void set_callbackId_4(String_t* value)
	{
		___callbackId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackId_4), (void*)value);
	}
};


// TDSCommon.EngineBridge
struct  EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A  : public RuntimeObject
{
public:
	// TDSCommon.IBridge TDSCommon.EngineBridge::bridge
	RuntimeObject* ___bridge_1;

public:
	inline static int32_t get_offset_of_bridge_1() { return static_cast<int32_t>(offsetof(EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A, ___bridge_1)); }
	inline RuntimeObject* get_bridge_1() const { return ___bridge_1; }
	inline RuntimeObject** get_address_of_bridge_1() { return &___bridge_1; }
	inline void set_bridge_1(RuntimeObject* value)
	{
		___bridge_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bridge_1), (void*)value);
	}
};

struct EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A_StaticFields
{
public:
	// TDSCommon.EngineBridge modreq(System.Runtime.CompilerServices.IsVolatile) TDSCommon.EngineBridge::sInstance
	EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A * ___sInstance_0;
	// System.Object TDSCommon.EngineBridge::locker
	RuntimeObject * ___locker_2;

public:
	inline static int32_t get_offset_of_sInstance_0() { return static_cast<int32_t>(offsetof(EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A_StaticFields, ___sInstance_0)); }
	inline EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A * get_sInstance_0() const { return ___sInstance_0; }
	inline EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A ** get_address_of_sInstance_0() { return &___sInstance_0; }
	inline void set_sInstance_0(EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A * value)
	{
		___sInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_0), (void*)value);
	}

	inline static int32_t get_offset_of_locker_2() { return static_cast<int32_t>(offsetof(EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A_StaticFields, ___locker_2)); }
	inline RuntimeObject * get_locker_2() const { return ___locker_2; }
	inline RuntimeObject ** get_address_of_locker_2() { return &___locker_2; }
	inline void set_locker_2(RuntimeObject * value)
	{
		___locker_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locker_2), (void*)value);
	}
};


// TDSCommon.Json
struct  Json_tFFD663FBE0BAC008BC7F5DDC5B075EA1CCFC3BB0  : public RuntimeObject
{
public:

public:
};


// TDSCommon.Json_Parser
struct  Parser_t47E0E2B71653F587EB703880B0045EC2222AF670  : public RuntimeObject
{
public:
	// System.IO.StringReader TDSCommon.Json_Parser::json
	StringReader_t74E352C280EAC22C878867444978741F19E1F895 * ___json_0;

public:
	inline static int32_t get_offset_of_json_0() { return static_cast<int32_t>(offsetof(Parser_t47E0E2B71653F587EB703880B0045EC2222AF670, ___json_0)); }
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895 * get_json_0() const { return ___json_0; }
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895 ** get_address_of_json_0() { return &___json_0; }
	inline void set_json_0(StringReader_t74E352C280EAC22C878867444978741F19E1F895 * value)
	{
		___json_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_0), (void*)value);
	}
};


// TDSCommon.Json_Serializer
struct  Serializer_t5A4B7B98B0F098CDA805209BE96D24DDCC98CB15  : public RuntimeObject
{
public:
	// System.Text.StringBuilder TDSCommon.Json_Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_t5A4B7B98B0F098CDA805209BE96D24DDCC98CB15, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builder_0), (void*)value);
	}
};


// TDSCommon.Platform
struct  Platform_t6D3F2102D85422F34E3F7F81C80787C90ABDD5BB  : public RuntimeObject
{
public:

public:
};


// TDSCommon.Result
struct  Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194  : public RuntimeObject
{
public:
	// System.Int32 TDSCommon.Result::code
	int32_t ___code_2;
	// System.String TDSCommon.Result::content
	String_t* ___content_3;
	// System.String TDSCommon.Result::callbackId
	String_t* ___callbackId_4;

public:
	inline static int32_t get_offset_of_code_2() { return static_cast<int32_t>(offsetof(Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194, ___code_2)); }
	inline int32_t get_code_2() const { return ___code_2; }
	inline int32_t* get_address_of_code_2() { return &___code_2; }
	inline void set_code_2(int32_t value)
	{
		___code_2 = value;
	}

	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194, ___content_3)); }
	inline String_t* get_content_3() const { return ___content_3; }
	inline String_t** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(String_t* value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___content_3), (void*)value);
	}

	inline static int32_t get_offset_of_callbackId_4() { return static_cast<int32_t>(offsetof(Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194, ___callbackId_4)); }
	inline String_t* get_callbackId_4() const { return ___callbackId_4; }
	inline String_t** get_address_of_callbackId_4() { return &___callbackId_4; }
	inline void set_callbackId_4(String_t* value)
	{
		___callbackId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackId_4), (void*)value);
	}
};

struct Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194_StaticFields
{
public:
	// System.Int32 TDSCommon.Result::RESULT_SUCCESS
	int32_t ___RESULT_SUCCESS_0;
	// System.Int32 TDSCommon.Result::RESULT_ERROR
	int32_t ___RESULT_ERROR_1;

public:
	inline static int32_t get_offset_of_RESULT_SUCCESS_0() { return static_cast<int32_t>(offsetof(Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194_StaticFields, ___RESULT_SUCCESS_0)); }
	inline int32_t get_RESULT_SUCCESS_0() const { return ___RESULT_SUCCESS_0; }
	inline int32_t* get_address_of_RESULT_SUCCESS_0() { return &___RESULT_SUCCESS_0; }
	inline void set_RESULT_SUCCESS_0(int32_t value)
	{
		___RESULT_SUCCESS_0 = value;
	}

	inline static int32_t get_offset_of_RESULT_ERROR_1() { return static_cast<int32_t>(offsetof(Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194_StaticFields, ___RESULT_ERROR_1)); }
	inline int32_t get_RESULT_ERROR_1() const { return ___RESULT_ERROR_1; }
	inline int32_t* get_address_of_RESULT_ERROR_1() { return &___RESULT_ERROR_1; }
	inline void set_RESULT_ERROR_1(int32_t value)
	{
		___RESULT_ERROR_1 = value;
	}
};


// TDSCommon.SafeDictionary
struct  SafeDictionary_t67040421713B3E8EDFBEC11EEFA03DBFA876E34B  : public RuntimeObject
{
public:

public:
};


// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Action`1<TDSCommon.Result>>
struct  KeyValuePair_2_tCADE1C0AC5A7B4CFDC61F0BD84543BA4812B5F5E 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tCADE1C0AC5A7B4CFDC61F0BD84543BA4812B5F5E, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tCADE1C0AC5A7B4CFDC61F0BD84543BA4812B5F5E, ___value_1)); }
	inline Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * get_value_1() const { return ___value_1; }
	inline Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.IO.TextReader
struct  TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
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


// System.SByte
struct  SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.Object,System.Object>
struct  Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.String,System.Action`1<TDSCommon.Result>>
struct  Enumerator_t84568AA7CA4EB2B9A425A89C220168A65E38337F 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_tCADE1C0AC5A7B4CFDC61F0BD84543BA4812B5F5E  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t84568AA7CA4EB2B9A425A89C220168A65E38337F, ___dictionary_0)); }
	inline Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t84568AA7CA4EB2B9A425A89C220168A65E38337F, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t84568AA7CA4EB2B9A425A89C220168A65E38337F, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t84568AA7CA4EB2B9A425A89C220168A65E38337F, ___current_3)); }
	inline KeyValuePair_2_tCADE1C0AC5A7B4CFDC61F0BD84543BA4812B5F5E  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tCADE1C0AC5A7B4CFDC61F0BD84543BA4812B5F5E * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tCADE1C0AC5A7B4CFDC61F0BD84543BA4812B5F5E  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t84568AA7CA4EB2B9A425A89C220168A65E38337F, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.IO.StringReader
struct  StringReader_t74E352C280EAC22C878867444978741F19E1F895  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____s_4), (void*)value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};


// TDSCommon.Json_Parser_TOKEN
struct  TOKEN_t679A77F711625DB22EC400EAD7F19F06170B8C40 
{
public:
	// System.Int32 TDSCommon.Json_Parser_TOKEN::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TOKEN_t679A77F711625DB22EC400EAD7F19F06170B8C40, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// TDSCommon.BridgeCallback
struct  BridgeCallback_t008D75AAA5E00A3BD9720A5DE1912844CEBBF80C  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// System.Action`1<TDSCommon.Result> TDSCommon.BridgeCallback::callback
	Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * ___callback_4;

public:
	inline static int32_t get_offset_of_callback_4() { return static_cast<int32_t>(offsetof(BridgeCallback_t008D75AAA5E00A3BD9720A5DE1912844CEBBF80C, ___callback_4)); }
	inline Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * get_callback_4() const { return ___callback_4; }
	inline Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 ** get_address_of_callback_4() { return &___callback_4; }
	inline void set_callback_4(Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * value)
	{
		___callback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_4), (void*)value);
	}
};


// System.Action`1<TDSCommon.Result>
struct  Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// TDSCommon.BridgeIOS_EngineBridgeDelegate
struct  EngineBridgeDelegate_tAF3B678052935ACF37FD27EFE8B7DE1E7854E81C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String TDSCommon.Command::toJSON()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Command_toJSON_m0304775FD793F19AA6F410A7AB445DC4F9D0C54F (Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * __this, const RuntimeMethod* method);
// System.Void TDSCommon.BridgeCallback::.ctor(System.Action`1<TDSCommon.Result>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeCallback__ctor_mB336FD292F049C993A8F28A247F1012E045CA8C6 (BridgeCallback_t008D75AAA5E00A3BD9720A5DE1912844CEBBF80C * __this, Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * ___action0, const RuntimeMethod* method);
// System.Void TDSCommon.BridgeAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeAndroid__ctor_mA6AB98C5500CDAF90E8FDFD42E5C3F123D450A36 (BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(UnityEngine.AndroidJavaClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m17BDD42A24CEBD07722B68A25CAD6DEAF64241E1 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void TDSCommon.Result::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_mEDA51EA26CE93063E6D3BAEC56A85691CE6B2CE0 (Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194 * __this, String_t* ___json0, const RuntimeMethod* method);
// System.Void System.Action`1<TDSCommon.Result>::Invoke(!0)
inline void Action_1_Invoke_mBD37B16C5E2A7D4939298F1037533EDA912C0A05 (Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * __this, Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 *, Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void TDSCommon.BridgeIOS::engineBridgeDelegate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeIOS_engineBridgeDelegate_m99A321D526A8DC21C6FE7D6D24F77D3C9F5141C8 (String_t* ___resultJson0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<TDSCommon.Result>>::.ctor()
inline void Dictionary_2__ctor_m4E2722BE78740C995F95AEBF1735E7945A2E0469 (Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Action`1<TDSCommon.Result>>::GetEnumerator()
inline Enumerator_t84568AA7CA4EB2B9A425A89C220168A65E38337F  Dictionary_2_GetEnumerator_m7890DDCD47D32A8B6FE6EEF3A33146ED8663CA83 (Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t84568AA7CA4EB2B9A425A89C220168A65E38337F  (*) (Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Action`1<TDSCommon.Result>>::get_Current()
inline KeyValuePair_2_tCADE1C0AC5A7B4CFDC61F0BD84543BA4812B5F5E  Enumerator_get_Current_m38089701D4D41945EF2ABCB8944592AF14BB179A_inline (Enumerator_t84568AA7CA4EB2B9A425A89C220168A65E38337F * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tCADE1C0AC5A7B4CFDC61F0BD84543BA4812B5F5E  (*) (Enumerator_t84568AA7CA4EB2B9A425A89C220168A65E38337F *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Action`1<TDSCommon.Result>>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m6BD6A48A148B10F8BAEB9F460F10172B9C88DE37_inline (KeyValuePair_2_tCADE1C0AC5A7B4CFDC61F0BD84543BA4812B5F5E * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tCADE1C0AC5A7B4CFDC61F0BD84543BA4812B5F5E *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<TDSCommon.Result>>::Remove(!0)
inline bool Dictionary_2_Remove_m2F14F576C45CC0238D3C25E50C93D63C11FF592E (Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Action`1<TDSCommon.Result>>::MoveNext()
inline bool Enumerator_MoveNext_m90FD2E21204D49AEF320A745B37FD70B55EA0B8C (Enumerator_t84568AA7CA4EB2B9A425A89C220168A65E38337F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t84568AA7CA4EB2B9A425A89C220168A65E38337F *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Action`1<TDSCommon.Result>>::Dispose()
inline void Enumerator_Dispose_m92B4CFAE4F02B21A4F4B2710929DB71F0F876491 (Enumerator_t84568AA7CA4EB2B9A425A89C220168A65E38337F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t84568AA7CA4EB2B9A425A89C220168A65E38337F *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// TDSCommon.BridgeIOS TDSCommon.BridgeIOS::GetInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 * BridgeIOS_GetInstance_m31FCF5433CC5333BD9BBCD10025BCF308DE33473_inline (const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<TDSCommon.Result>> TDSCommon.BridgeIOS::GetDictionary()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * BridgeIOS_GetDictionary_m6305F17DB0DF629EAADC200C87A349C8F0C99F72_inline (BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<TDSCommon.Result>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m058F2025BE27E40EC78950A6F6919FC293BA40F5 (Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Action`1<TDSCommon.Result>>::get_Item(!0)
inline Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * Dictionary_2_get_Item_mDCBE96075EBBD319B8A6DE0A9AE8EF39093386E7 (Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * (*) (Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void TDSCommon.BridgeIOS::callHandler(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeIOS_callHandler_m797F8E186B84D5DF875DEE86A8589C648BE89CA5 (String_t* ___command0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<TDSCommon.Result>>::Add(!0,!1)
inline void Dictionary_2_Add_m401A878FCE938202FC98BAB01DC6A5A608BA5CF4 (Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * __this, String_t* ___key0, Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 *, String_t*, Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void TDSCommon.BridgeIOS/EngineBridgeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineBridgeDelegate__ctor_m8961D4DDA53711FCC0F09C81F23BADAB2E79E261 (EngineBridgeDelegate_tAF3B678052935ACF37FD27EFE8B7DE1E7854E81C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void TDSCommon.BridgeIOS::registerHandler(System.String,TDSCommon.BridgeIOS/EngineBridgeDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeIOS_registerHandler_m3E82F899BAB86CD766F069027181F169D00FD768 (String_t* ___command0, EngineBridgeDelegate_tAF3B678052935ACF37FD27EFE8B7DE1E7854E81C * ___engineBridgeDelegate1, const RuntimeMethod* method);
// System.Void TDSCommon.BridgeIOS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeIOS__ctor_m3F88F5DD471ED6BB033A8E7D2333505BEA437444 (BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 * __this, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String TDSCommon.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_mD4CF059DA0601B618A63E6CEB061336A546C78A5 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void TDSCommon.EngineBridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineBridge__ctor_mB8BE6D214218816D66D843FEC5ADE14E13B64CFF (EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean TDSCommon.Platform::isAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_isAndroid_mEF0428487E18514A0D338B592A4C374D6D8F8344 (const RuntimeMethod* method);
// TDSCommon.BridgeAndroid TDSCommon.BridgeAndroid::GetInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16 * BridgeAndroid_GetInstance_m783F511010BC98704259AD173F7916BC7CF1807C_inline (const RuntimeMethod* method);
// System.Boolean TDSCommon.Platform::isIOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_isIOS_m46FD9D77C0C2D53B3B685E87494F08F4D0458209 (const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Object TDSCommon.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_m45AFBB14E4401B0C7F496E27FEDF39D8C8D35CF2 (String_t* ___jsonString0, const RuntimeMethod* method);
// System.String TDSCommon.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m23419C7CC8CBAF978FB8B29494E80DD2A7900A87 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Void UnityEngine.JsonUtility::FromJsonOverwrite(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility_FromJsonOverwrite_mC97C7C909591A29E72361FB5DBC1A58EEE6DBAEB (String_t* ___json0, RuntimeObject * ___objectToOverwrite1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mAD5155E7BDF9B0B146468C59E19A3190C07D1D06 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE (StringReader_t74E352C280EAC22C878867444978741F19E1F895 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void TDSCommon.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_mA356F21CF106562640ABF607067829D93E6B1998 (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, String_t* ___jsonString0, const RuntimeMethod* method);
// System.Object TDSCommon.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_m2A8C9D1C53EF7BF37464EB6AE416BF40FD63E5A6 (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method);
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8 (TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// TDSCommon.Json/Parser/TOKEN TDSCommon.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_mF3ABF9F792515FF2E72E5FBD1383ACFFB30794C0 (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method);
// System.String TDSCommon.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m4014EE44669F217B966400B90ED981C3C008D7A5 (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Object TDSCommon.Json/Parser::ParseByToken(TDSCommon.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m15C929C1C77C43DC8656BF3C5480060CE32D1A85 (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, int32_t ___token0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Object TDSCommon.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m919975EBAA0772845C506993B6CE7E1B4EA526DF (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> TDSCommon.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Parser_ParseObject_m55779222EFB861138FE6783D98C9D6478E3E144A (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Object> TDSCommon.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Parser_ParseArray_mE07CC2320889BF90810ED4F201F70CBD9A614BC0 (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Char TDSCommon.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m1765C0C9122E8044E4CE2D54476CA296BF83C300 (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643 (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method);
// System.String TDSCommon.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m13A016A9A1515A929486A6E3F18458E87F93C7CF (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m9152D976CDFE0B30C7E251DDD04EAD6BBD0800B0 (String_t* ___s0, double* ___result1, const RuntimeMethod* method);
// System.Char TDSCommon.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m853A0235389C3A8536473D3F65FC2DA8B26BDF73 (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean TDSCommon.Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_m84D6C0991B9D5A88502087DDB2B1F24683068076 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void TDSCommon.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m72E0475E2B4D94B394A327D46754A520A3633261 (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void TDSCommon.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_mD3269A1FA6D516B0E6981FEAA08F177B6937457B (Serializer_t5A4B7B98B0F098CDA805209BE96D24DDCC98CB15 * __this, const RuntimeMethod* method);
// System.Void TDSCommon.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_mCE90A867C1A8A498A2DEE7707A3B42F87D399252 (Serializer_t5A4B7B98B0F098CDA805209BE96D24DDCC98CB15 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void TDSCommon.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m8F012D60C0B8643E3267B5D8384123655F63F04C (Serializer_t5A4B7B98B0F098CDA805209BE96D24DDCC98CB15 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void TDSCommon.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m848C61A1BA3BC21322747C04379B7AD80511DC67 (Serializer_t5A4B7B98B0F098CDA805209BE96D24DDCC98CB15 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method);
// System.Void TDSCommon.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m0D370BED3A05991633A3BE1685EE101B32D663A9 (Serializer_t5A4B7B98B0F098CDA805209BE96D24DDCC98CB15 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Void TDSCommon.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m41C903A996454DB1F83BD02393AA0DFB95327C1F (Serializer_t5A4B7B98B0F098CDA805209BE96D24DDCC98CB15 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0B80BF2883121B16934DF6F71590CAE15442A5BC (Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mF6F0642EA16CAB414EEA621DEAA519527DA64284 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String System.Double::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C (double* __this, String_t* ___format0, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL callHandler(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL registerHandler(char*, Il2CppMethodPointer);
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
// TDSCommon.BridgeAndroid TDSCommon.BridgeAndroid::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16 * BridgeAndroid_GetInstance_m783F511010BC98704259AD173F7916BC7CF1807C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BridgeAndroid_GetInstance_m783F511010BC98704259AD173F7916BC7CF1807C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return sInstance;
		IL2CPP_RUNTIME_CLASS_INIT(BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16_il2cpp_TypeInfo_var);
		BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16 * L_0 = ((BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16_StaticFields*)il2cpp_codegen_static_fields_for(BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16_il2cpp_TypeInfo_var))->get_sInstance_8();
		return L_0;
	}
}
// System.Void TDSCommon.BridgeAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeAndroid__ctor_mA6AB98C5500CDAF90E8FDFD42E5C3F123D450A36 (BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BridgeAndroid__ctor_mA6AB98C5500CDAF90E8FDFD42E5C3F123D450A36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string bridgeJavaClz = "com.tds.common.bridge.Bridge";
		__this->set_bridgeJavaClz_0(_stringLiteralD2671306B605AA32D582F0C7A19AAE677E5437A5);
		// private string instanceMethod = "getInstance";
		__this->set_instanceMethod_1(_stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E);
		// private string registerHandlerMethod = "registerHandler";
		__this->set_registerHandlerMethod_2(_stringLiteral74995F8A2CBEF688BCD95DF9DB36E3FFCDE14774);
		// private string callHandlerMethod = "callHandler";
		__this->set_callHandlerMethod_3(_stringLiteralE7CE87F5CD06F2CEADE5857C0C5F2EF8A58F5656);
		// private string initMethod = "init";
		__this->set_initMethod_4(_stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459);
		// private string registerMethod = "register";
		__this->set_registerMethod_5(_stringLiteralD6CFAA9A8F507F384B1008F247D2327A3D2F1426);
		// private BridgeAndroid()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// mCurrentActivity = new AndroidJavaClass("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_0, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		__this->set_mCurrentActivity_6(L_1);
		// mAndroidBridge = new AndroidJavaClass(bridgeJavaClz).CallStatic<AndroidJavaObject>(instanceMethod);
		String_t* L_2 = __this->get_bridgeJavaClz_0();
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_3 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_3, L_2, /*hidden argument*/NULL);
		String_t* L_4 = __this->get_instanceMethod_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_6 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2(L_3, L_4, L_5, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		__this->set_mAndroidBridge_7(L_6);
		// mAndroidBridge.Call(initMethod, mCurrentActivity);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_7 = __this->get_mAndroidBridge_7();
		String_t* L_8 = __this->get_initMethod_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_9;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_11 = __this->get_mCurrentActivity_6();
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		NullCheck(L_7);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_7, L_8, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TDSCommon.BridgeAndroid::Register(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeAndroid_Register_m2C70E7E70387688027EA6B56D78A13730B4DD2B9 (BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16 * __this, String_t* ___serviceClzName0, String_t* ___serviceImplName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BridgeAndroid_Register_m2C70E7E70387688027EA6B56D78A13730B4DD2B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_0 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_1 = NULL;
	{
		// if (mAndroidBridge == null)
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_mAndroidBridge_7();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// AndroidJavaClass serviceClass = new AndroidJavaClass(serviceClzName);
		String_t* L_1 = ___serviceClzName0;
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_2 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// AndroidJavaObject serviceImpl = new AndroidJavaObject(serviceImplName);
		String_t* L_3 = ___serviceImplName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_5, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// mAndroidBridge.Call(registerMethod, serviceClass, serviceImpl);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_6 = __this->get_mAndroidBridge_7();
		String_t* L_7 = __this->get_registerMethod_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_10 = V_0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_9;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_12 = V_1;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		NullCheck(L_6);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_6, L_7, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TDSCommon.BridgeAndroid::Call(TDSCommon.Command,System.Action`1<TDSCommon.Result>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeAndroid_Call_m39E0D33EA4B136C08958607711378884C1FBC99E (BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16 * __this, Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * ___command0, Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BridgeAndroid_Call_m39E0D33EA4B136C08958607711378884C1FBC99E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mAndroidBridge == null)
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_mAndroidBridge_7();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// mAndroidBridge.Call(registerHandlerMethod, command.toJSON(), new BridgeCallback(action));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = __this->get_mAndroidBridge_7();
		String_t* L_2 = __this->get_registerHandlerMethod_2();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * L_5 = ___command0;
		NullCheck(L_5);
		String_t* L_6 = Command_toJSON_m0304775FD793F19AA6F410A7AB445DC4F9D0C54F(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_4;
		Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * L_8 = ___action1;
		BridgeCallback_t008D75AAA5E00A3BD9720A5DE1912844CEBBF80C * L_9 = (BridgeCallback_t008D75AAA5E00A3BD9720A5DE1912844CEBBF80C *)il2cpp_codegen_object_new(BridgeCallback_t008D75AAA5E00A3BD9720A5DE1912844CEBBF80C_il2cpp_TypeInfo_var);
		BridgeCallback__ctor_mB336FD292F049C993A8F28A247F1012E045CA8C6(L_9, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		NullCheck(L_1);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_1, L_2, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TDSCommon.BridgeAndroid::Call(TDSCommon.Command)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeAndroid_Call_m54DACDC8775C9A75DD5D4A5BB4258317B3D1739E (BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16 * __this, Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * ___command0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BridgeAndroid_Call_m54DACDC8775C9A75DD5D4A5BB4258317B3D1739E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mAndroidBridge == null)
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_mAndroidBridge_7();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// mAndroidBridge.Call(callHandlerMethod, command.toJSON());
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = __this->get_mAndroidBridge_7();
		String_t* L_2 = __this->get_callHandlerMethod_3();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * L_5 = ___command0;
		NullCheck(L_5);
		String_t* L_6 = Command_toJSON_m0304775FD793F19AA6F410A7AB445DC4F9D0C54F(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		NullCheck(L_1);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_1, L_2, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TDSCommon.BridgeAndroid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeAndroid__cctor_m1C8D16116569A5C5D627436718447CD437ED5310 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BridgeAndroid__cctor_m1C8D16116569A5C5D627436718447CD437ED5310_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static BridgeAndroid sInstance = new BridgeAndroid();
		BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16 * L_0 = (BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16 *)il2cpp_codegen_object_new(BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16_il2cpp_TypeInfo_var);
		BridgeAndroid__ctor_mA6AB98C5500CDAF90E8FDFD42E5C3F123D450A36(L_0, /*hidden argument*/NULL);
		((BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16_StaticFields*)il2cpp_codegen_static_fields_for(BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16_il2cpp_TypeInfo_var))->set_sInstance_8(L_0);
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
// System.Void TDSCommon.BridgeCallback::.ctor(System.Action`1<TDSCommon.Result>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeCallback__ctor_mB336FD292F049C993A8F28A247F1012E045CA8C6 (BridgeCallback_t008D75AAA5E00A3BD9720A5DE1912844CEBBF80C * __this, Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BridgeCallback__ctor_mB336FD292F049C993A8F28A247F1012E045CA8C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base(new AndroidJavaClass("com.tds.common.bridge.BridgeCallback"))
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteralCDB1A0A3D8C53C2F9DEC231A147964E483B79A09, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m17BDD42A24CEBD07722B68A25CAD6DEAF64241E1(__this, L_0, /*hidden argument*/NULL);
		// this.callback = action;
		Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * L_1 = ___action0;
		__this->set_callback_4(L_1);
		// }
		return;
	}
}
// UnityEngine.AndroidJavaObject TDSCommon.BridgeCallback::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * BridgeCallback_Invoke_m0482D0BF44279EA0889926C5F4765B698E28B27E (BridgeCallback_t008D75AAA5E00A3BD9720A5DE1912844CEBBF80C * __this, String_t* ___method0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BridgeCallback_Invoke_m0482D0BF44279EA0889926C5F4765B698E28B27E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (method.Equals("onResult"))
		String_t* L_0 = ___method0;
		NullCheck(L_0);
		bool L_1 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_0, _stringLiteral9BC242DF4AEE0561D7635DB8227112DC96E863C3, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		// if (args[0] is string)
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args1;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0031;
		}
	}
	{
		// string result = (string)(args[0]);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = ___args1;
		NullCheck(L_5);
		int32_t L_6 = 0;
		RuntimeObject * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var));
		// callback(new Result(result));
		Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * L_8 = __this->get_callback_4();
		String_t* L_9 = V_0;
		Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194 * L_10 = (Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194 *)il2cpp_codegen_object_new(Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194_il2cpp_TypeInfo_var);
		Result__ctor_mEDA51EA26CE93063E6D3BAEC56A85691CE6B2CE0(L_10, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Action_1_Invoke_mBD37B16C5E2A7D4939298F1037533EDA912C0A05(L_8, L_10, /*hidden argument*/Action_1_Invoke_mBD37B16C5E2A7D4939298F1037533EDA912C0A05_RuntimeMethod_var);
	}

IL_0031:
	{
		// return null;
		return (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)NULL;
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_BridgeIOS_engineBridgeDelegate_m99A321D526A8DC21C6FE7D6D24F77D3C9F5141C8(char* ___resultJson0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___resultJson0' to managed representation
	String_t* ____resultJson0_unmarshaled = NULL;
	____resultJson0_unmarshaled = il2cpp_codegen_marshal_string_result(___resultJson0);

	// Managed method invocation
	BridgeIOS_engineBridgeDelegate_m99A321D526A8DC21C6FE7D6D24F77D3C9F5141C8(____resultJson0_unmarshaled, NULL);

}
// TDSCommon.BridgeIOS TDSCommon.BridgeIOS::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 * BridgeIOS_GetInstance_m31FCF5433CC5333BD9BBCD10025BCF308DE33473 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BridgeIOS_GetInstance_m31FCF5433CC5333BD9BBCD10025BCF308DE33473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return sInstance;
		IL2CPP_RUNTIME_CLASS_INIT(BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1_il2cpp_TypeInfo_var);
		BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 * L_0 = ((BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1_StaticFields*)il2cpp_codegen_static_fields_for(BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1_il2cpp_TypeInfo_var))->get_sInstance_0();
		return L_0;
	}
}
// System.Void TDSCommon.BridgeIOS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeIOS__ctor_m3F88F5DD471ED6BB033A8E7D2333505BEA437444 (BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BridgeIOS__ctor_m3F88F5DD471ED6BB033A8E7D2333505BEA437444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private BridgeIOS()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// dic = new Dictionary<string, Action<Result>>();
		Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * L_0 = (Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 *)il2cpp_codegen_object_new(Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4E2722BE78740C995F95AEBF1735E7945A2E0469(L_0, /*hidden argument*/Dictionary_2__ctor_m4E2722BE78740C995F95AEBF1735E7945A2E0469_RuntimeMethod_var);
		__this->set_dic_1(L_0);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<TDSCommon.Result>> TDSCommon.BridgeIOS::GetDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * BridgeIOS_GetDictionary_m6305F17DB0DF629EAADC200C87A349C8F0C99F72 (BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 * __this, const RuntimeMethod* method)
{
	{
		// return dic;
		Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * L_0 = __this->get_dic_1();
		return L_0;
	}
}
// System.Void TDSCommon.BridgeIOS::removeKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeIOS_removeKey_m83ACF527B8616C942D974D52C0E1609B1FF2497C (BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BridgeIOS_removeKey_m83ACF527B8616C942D974D52C0E1609B1FF2497C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t84568AA7CA4EB2B9A425A89C220168A65E38337F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tCADE1C0AC5A7B4CFDC61F0BD84543BA4812B5F5E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var d in dic) {
		Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * L_0 = __this->get_dic_1();
		NullCheck(L_0);
		Enumerator_t84568AA7CA4EB2B9A425A89C220168A65E38337F  L_1 = Dictionary_2_GetEnumerator_m7890DDCD47D32A8B6FE6EEF3A33146ED8663CA83(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m7890DDCD47D32A8B6FE6EEF3A33146ED8663CA83_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_000e:
		{
			// foreach (var d in dic) {
			KeyValuePair_2_tCADE1C0AC5A7B4CFDC61F0BD84543BA4812B5F5E  L_2 = Enumerator_get_Current_m38089701D4D41945EF2ABCB8944592AF14BB179A_inline((Enumerator_t84568AA7CA4EB2B9A425A89C220168A65E38337F *)(&V_0), /*hidden argument*/Enumerator_get_Current_m38089701D4D41945EF2ABCB8944592AF14BB179A_RuntimeMethod_var);
			V_1 = L_2;
			// string k = d.Key.ToString();
			String_t* L_3 = KeyValuePair_2_get_Key_m6BD6A48A148B10F8BAEB9F460F10172B9C88DE37_inline((KeyValuePair_2_tCADE1C0AC5A7B4CFDC61F0BD84543BA4812B5F5E *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m6BD6A48A148B10F8BAEB9F460F10172B9C88DE37_RuntimeMethod_var);
			NullCheck(L_3);
			String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
			V_2 = L_4;
			// if (k.StartsWith(s)) {
			String_t* L_5 = V_2;
			String_t* L_6 = ___s0;
			NullCheck(L_5);
			bool L_7 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_5, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_003b;
			}
		}

IL_002c:
		{
			// dic.Remove(k);
			Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * L_8 = __this->get_dic_1();
			String_t* L_9 = V_2;
			NullCheck(L_8);
			Dictionary_2_Remove_m2F14F576C45CC0238D3C25E50C93D63C11FF592E(L_8, L_9, /*hidden argument*/Dictionary_2_Remove_m2F14F576C45CC0238D3C25E50C93D63C11FF592E_RuntimeMethod_var);
			// break;
			IL2CPP_LEAVE(0x54, FINALLY_0046);
		}

IL_003b:
		{
			// foreach (var d in dic) {
			bool L_10 = Enumerator_MoveNext_m90FD2E21204D49AEF320A745B37FD70B55EA0B8C((Enumerator_t84568AA7CA4EB2B9A425A89C220168A65E38337F *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m90FD2E21204D49AEF320A745B37FD70B55EA0B8C_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_000e;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m92B4CFAE4F02B21A4F4B2710929DB71F0F876491((Enumerator_t84568AA7CA4EB2B9A425A89C220168A65E38337F *)(&V_0), /*hidden argument*/Enumerator_Dispose_m92B4CFAE4F02B21A4F4B2710929DB71F0F876491_RuntimeMethod_var);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void TDSCommon.BridgeIOS::engineBridgeDelegate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeIOS_engineBridgeDelegate_m99A321D526A8DC21C6FE7D6D24F77D3C9F5141C8 (String_t* ___resultJson0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BridgeIOS_engineBridgeDelegate_m99A321D526A8DC21C6FE7D6D24F77D3C9F5141C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194 * V_0 = NULL;
	Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * V_1 = NULL;
	Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * V_2 = NULL;
	{
		// Debug.Log("resultJson:" + resultJson);
		String_t* L_0 = ___resultJson0;
		String_t* L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralDC69F5AD9724A6BD073F7B00F594564A34BE8F50, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// Result result = new Result(resultJson);
		String_t* L_2 = ___resultJson0;
		Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194 * L_3 = (Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194 *)il2cpp_codegen_object_new(Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194_il2cpp_TypeInfo_var);
		Result__ctor_mEDA51EA26CE93063E6D3BAEC56A85691CE6B2CE0(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// Dictionary<string, Action<Result>> actionDic = BridgeIOS.GetInstance().GetDictionary();
		IL2CPP_RUNTIME_CLASS_INIT(BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1_il2cpp_TypeInfo_var);
		BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 * L_4 = BridgeIOS_GetInstance_m31FCF5433CC5333BD9BBCD10025BCF308DE33473_inline(/*hidden argument*/NULL);
		NullCheck(L_4);
		Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * L_5 = BridgeIOS_GetDictionary_m6305F17DB0DF629EAADC200C87A349C8F0C99F72_inline(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// Action<Result> action = null;
		V_2 = (Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 *)NULL;
		// if (actionDic != null && actionDic.ContainsKey(result.callbackId))
		Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * L_7 = V_1;
		Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194 * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_callbackId_4();
		NullCheck(L_7);
		bool L_10 = Dictionary_2_ContainsKey_m058F2025BE27E40EC78950A6F6919FC293BA40F5(L_7, L_9, /*hidden argument*/Dictionary_2_ContainsKey_m058F2025BE27E40EC78950A6F6919FC293BA40F5_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		// action = actionDic[result.callbackId];
		Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * L_11 = V_1;
		Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = L_12->get_callbackId_4();
		NullCheck(L_11);
		Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * L_14 = Dictionary_2_get_Item_mDCBE96075EBBD319B8A6DE0A9AE8EF39093386E7(L_11, L_13, /*hidden argument*/Dictionary_2_get_Item_mDCBE96075EBBD319B8A6DE0A9AE8EF39093386E7_RuntimeMethod_var);
		V_2 = L_14;
	}

IL_0042:
	{
		// if (action != null)
		Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * L_15 = V_2;
		if (!L_15)
		{
			goto IL_004c;
		}
	}
	{
		// action(result);
		Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * L_16 = V_2;
		Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194 * L_17 = V_0;
		NullCheck(L_16);
		Action_1_Invoke_mBD37B16C5E2A7D4939298F1037533EDA912C0A05(L_16, L_17, /*hidden argument*/Action_1_Invoke_mBD37B16C5E2A7D4939298F1037533EDA912C0A05_RuntimeMethod_var);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void TDSCommon.BridgeIOS::Register(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeIOS_Register_mE26C5D1F1378DB8E143FAAEAF4E375939198163F (BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 * __this, String_t* ___serviceClz0, String_t* ___serviceImp1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TDSCommon.BridgeIOS::Call(TDSCommon.Command)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeIOS_Call_mEC180D1CBBC79E076543B667B6B0F5A7E9135F19 (BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 * __this, Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * ___command0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BridgeIOS_Call_mEC180D1CBBC79E076543B667B6B0F5A7E9135F19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// callHandler(command.toJSON());
		Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * L_0 = ___command0;
		NullCheck(L_0);
		String_t* L_1 = Command_toJSON_m0304775FD793F19AA6F410A7AB445DC4F9D0C54F(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1_il2cpp_TypeInfo_var);
		BridgeIOS_callHandler_m797F8E186B84D5DF875DEE86A8589C648BE89CA5(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TDSCommon.BridgeIOS::Call(TDSCommon.Command,System.Action`1<TDSCommon.Result>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeIOS_Call_m5135A40A4A89A2DF9616567975263FB0C49C7951 (BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 * __this, Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * ___command0, Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BridgeIOS_Call_m5135A40A4A89A2DF9616567975263FB0C49C7951_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (command.callback && !string.IsNullOrEmpty(command.callbackId))
		Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * L_0 = ___command0;
		NullCheck(L_0);
		bool L_1 = L_0->get_callback_3();
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * L_2 = ___command0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_callbackId_4();
		bool L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		// if (!dic.ContainsKey(command.callbackId))
		Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * L_5 = __this->get_dic_1();
		Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * L_6 = ___command0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_callbackId_4();
		NullCheck(L_5);
		bool L_8 = Dictionary_2_ContainsKey_m058F2025BE27E40EC78950A6F6919FC293BA40F5(L_5, L_7, /*hidden argument*/Dictionary_2_ContainsKey_m058F2025BE27E40EC78950A6F6919FC293BA40F5_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_003a;
		}
	}
	{
		// dic.Add(command.callbackId, action);
		Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * L_9 = __this->get_dic_1();
		Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * L_10 = ___command0;
		NullCheck(L_10);
		String_t* L_11 = L_10->get_callbackId_4();
		Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * L_12 = ___action1;
		NullCheck(L_9);
		Dictionary_2_Add_m401A878FCE938202FC98BAB01DC6A5A608BA5CF4(L_9, L_11, L_12, /*hidden argument*/Dictionary_2_Add_m401A878FCE938202FC98BAB01DC6A5A608BA5CF4_RuntimeMethod_var);
	}

IL_003a:
	{
		// registerHandler(command.toJSON(), engineBridgeDelegate);
		Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * L_13 = ___command0;
		NullCheck(L_13);
		String_t* L_14 = Command_toJSON_m0304775FD793F19AA6F410A7AB445DC4F9D0C54F(L_13, /*hidden argument*/NULL);
		EngineBridgeDelegate_tAF3B678052935ACF37FD27EFE8B7DE1E7854E81C * L_15 = (EngineBridgeDelegate_tAF3B678052935ACF37FD27EFE8B7DE1E7854E81C *)il2cpp_codegen_object_new(EngineBridgeDelegate_tAF3B678052935ACF37FD27EFE8B7DE1E7854E81C_il2cpp_TypeInfo_var);
		EngineBridgeDelegate__ctor_m8961D4DDA53711FCC0F09C81F23BADAB2E79E261(L_15, NULL, (intptr_t)((intptr_t)BridgeIOS_engineBridgeDelegate_m99A321D526A8DC21C6FE7D6D24F77D3C9F5141C8_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1_il2cpp_TypeInfo_var);
		BridgeIOS_registerHandler_m3E82F899BAB86CD766F069027181F169D00FD768(L_14, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TDSCommon.BridgeIOS::callHandler(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeIOS_callHandler_m797F8E186B84D5DF875DEE86A8589C648BE89CA5 (String_t* ___command0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___command0' to native representation
	char* ____command0_marshaled = NULL;
	____command0_marshaled = il2cpp_codegen_marshal_string(___command0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(callHandler)(____command0_marshaled);

	// Marshaling cleanup of parameter '___command0' native representation
	il2cpp_codegen_marshal_free(____command0_marshaled);
	____command0_marshaled = NULL;

}
// System.Void TDSCommon.BridgeIOS::registerHandler(System.String,TDSCommon.BridgeIOS_EngineBridgeDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeIOS_registerHandler_m3E82F899BAB86CD766F069027181F169D00FD768 (String_t* ___command0, EngineBridgeDelegate_tAF3B678052935ACF37FD27EFE8B7DE1E7854E81C * ___engineBridgeDelegate1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, Il2CppMethodPointer);

	// Marshaling of parameter '___command0' to native representation
	char* ____command0_marshaled = NULL;
	____command0_marshaled = il2cpp_codegen_marshal_string(___command0);

	// Marshaling of parameter '___engineBridgeDelegate1' to native representation
	Il2CppMethodPointer ____engineBridgeDelegate1_marshaled = NULL;
	____engineBridgeDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___engineBridgeDelegate1));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(registerHandler)(____command0_marshaled, ____engineBridgeDelegate1_marshaled);

	// Marshaling cleanup of parameter '___command0' native representation
	il2cpp_codegen_marshal_free(____command0_marshaled);
	____command0_marshaled = NULL;

}
// System.Void TDSCommon.BridgeIOS::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeIOS__cctor_m9B1D302CF50D9BFB542D4517412FA08F9B859F55 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BridgeIOS__cctor_m9B1D302CF50D9BFB542D4517412FA08F9B859F55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static BridgeIOS sInstance = new BridgeIOS();
		BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 * L_0 = (BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 *)il2cpp_codegen_object_new(BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1_il2cpp_TypeInfo_var);
		BridgeIOS__ctor_m3F88F5DD471ED6BB033A8E7D2333505BEA437444(L_0, /*hidden argument*/NULL);
		((BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1_StaticFields*)il2cpp_codegen_static_fields_for(BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1_il2cpp_TypeInfo_var))->set_sInstance_0(L_0);
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
// System.Void TDSCommon.Command::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Command__ctor_m1C18EDD41394210C637AD527FCC9849D1640F689 (Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * __this, const RuntimeMethod* method)
{
	{
		// public Command()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String TDSCommon.Command::toJSON()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Command_toJSON_m0304775FD793F19AA6F410A7AB445DC4F9D0C54F (Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * __this, const RuntimeMethod* method)
{
	{
		// return JsonUtility.ToJson(this);
		String_t* L_0 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void TDSCommon.Command::.ctor(System.String,System.String,System.Boolean,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Command__ctor_m5DA5B925CC9291FB33FC981FB6026506CDBE66BF (Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * __this, String_t* ___service0, String_t* ___method1, bool ___callback2, String_t* ___callbackId3, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dic4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Command__ctor_m5DA5B925CC9291FB33FC981FB6026506CDBE66BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * G_B2_0 = NULL;
	Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * G_B3_1 = NULL;
	{
		// public Command(string service, string method, bool callback, string callbackId, Dictionary<string, object> dic)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.args = dic == null ? null : Json.Serialize(dic);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ___dic4;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1 = ___dic4;
		String_t* L_2 = Json_Serialize_mD4CF059DA0601B618A63E6CEB061336A546C78A5(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_args_2(G_B3_0);
		// this.service = service;
		String_t* L_3 = ___service0;
		__this->set_service_0(L_3);
		// this.method = method;
		String_t* L_4 = ___method1;
		__this->set_method_1(L_4);
		// this.callback = callback;
		bool L_5 = ___callback2;
		__this->set_callback_3(L_5);
		// this.callbackId = callbackId;
		String_t* L_6 = ___callbackId3;
		__this->set_callbackId_4(L_6);
		// Debug.Log("Command constructor:" + toJSON());
		String_t* L_7 = Command_toJSON_m0304775FD793F19AA6F410A7AB445DC4F9D0C54F(__this, /*hidden argument*/NULL);
		String_t* L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0BE425C3F18A9703B1907A2BAA91EFB2F92F4BDE, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_8, /*hidden argument*/NULL);
		// }
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
// TDSCommon.EngineBridge TDSCommon.EngineBridge::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A * EngineBridge_GetInstance_mCFCC74D6FA806E61EC385D296D38388FB5B0C977 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EngineBridge_GetInstance_mCFCC74D6FA806E61EC385D296D38388FB5B0C977_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// lock (locker)
		IL2CPP_RUNTIME_CLASS_INIT(EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A_StaticFields*)il2cpp_codegen_static_fields_for(EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A_il2cpp_TypeInfo_var))->get_locker_2();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (sInstance == null)
			IL2CPP_RUNTIME_CLASS_INIT(EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A_il2cpp_TypeInfo_var);
			EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A * L_2 = ((EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A_StaticFields*)il2cpp_codegen_static_fields_for(EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A_il2cpp_TypeInfo_var))->get_sInstance_0();
			il2cpp_codegen_memory_barrier();
			if (L_2)
			{
				goto IL_0025;
			}
		}

IL_0019:
		{
			// sInstance = new EngineBridge();
			EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A * L_3 = (EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A *)il2cpp_codegen_object_new(EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A_il2cpp_TypeInfo_var);
			EngineBridge__ctor_mB8BE6D214218816D66D843FEC5ADE14E13B64CFF(L_3, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A_il2cpp_TypeInfo_var);
			il2cpp_codegen_memory_barrier();
			((EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A_StaticFields*)il2cpp_codegen_static_fields_for(EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A_il2cpp_TypeInfo_var))->set_sInstance_0(L_3);
		}

IL_0025:
		{
			// }
			IL2CPP_LEAVE(0x31, FINALLY_0027);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0030;
			}
		}

IL_002a:
		{
			RuntimeObject * L_5 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		}

IL_0030:
		{
			IL2CPP_END_FINALLY(39)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x31, IL_0031)
	}

IL_0031:
	{
		// return sInstance;
		IL2CPP_RUNTIME_CLASS_INIT(EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A_il2cpp_TypeInfo_var);
		EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A * L_6 = ((EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A_StaticFields*)il2cpp_codegen_static_fields_for(EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A_il2cpp_TypeInfo_var))->get_sInstance_0();
		il2cpp_codegen_memory_barrier();
		return L_6;
	}
}
// System.Void TDSCommon.EngineBridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineBridge__ctor_mB8BE6D214218816D66D843FEC5ADE14E13B64CFF (EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EngineBridge__ctor_mB8BE6D214218816D66D843FEC5ADE14E13B64CFF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private EngineBridge()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (Platform.isAndroid())
		bool L_0 = Platform_isAndroid_mEF0428487E18514A0D338B592A4C374D6D8F8344(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// bridge = BridgeAndroid.GetInstance();
		IL2CPP_RUNTIME_CLASS_INIT(BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16_il2cpp_TypeInfo_var);
		BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16 * L_1 = BridgeAndroid_GetInstance_m783F511010BC98704259AD173F7916BC7CF1807C_inline(/*hidden argument*/NULL);
		__this->set_bridge_1(L_1);
		// }
		return;
	}

IL_0019:
	{
		// else if (Platform.isIOS())
		bool L_2 = Platform_isIOS_m46FD9D77C0C2D53B3B685E87494F08F4D0458209(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// bridge = BridgeIOS.GetInstance();
		IL2CPP_RUNTIME_CLASS_INIT(BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1_il2cpp_TypeInfo_var);
		BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 * L_3 = BridgeIOS_GetInstance_m31FCF5433CC5333BD9BBCD10025BCF308DE33473_inline(/*hidden argument*/NULL);
		__this->set_bridge_1(L_3);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void TDSCommon.EngineBridge::Register(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineBridge_Register_m5BF43BCB8DEE05226E87E805331E235BE12B900B (EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A * __this, String_t* ___serviceClzName0, String_t* ___serviceImplName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EngineBridge_Register_m5BF43BCB8DEE05226E87E805331E235BE12B900B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bridge == null)
		RuntimeObject* L_0 = __this->get_bridge_1();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// bridge.Register(serviceClzName, serviceImplName);
		RuntimeObject* L_1 = __this->get_bridge_1();
		String_t* L_2 = ___serviceClzName0;
		String_t* L_3 = ___serviceImplName1;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void TDSCommon.IBridge::Register(System.String,System.String) */, IBridge_tA0922C02103EE9E3E35C5BBDBE2ED478A220E226_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void TDSCommon.EngineBridge::CallHandler(TDSCommon.Command,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineBridge_CallHandler_mF45541007F21E1CA854B5BC12CCA2F123C5CABE4 (EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A * __this, Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * ___command0, String_t* ___memberName1, String_t* ___sourceFilePath2, int32_t ___sourceLineNumber3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EngineBridge_CallHandler_mF45541007F21E1CA854B5BC12CCA2F123C5CABE4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bridge == null)
		RuntimeObject* L_0 = __this->get_bridge_1();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// command.callbackId = memberName + sourceFilePath + sourceLineNumber;
		Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * L_1 = ___command0;
		String_t* L_2 = ___memberName1;
		String_t* L_3 = ___sourceFilePath2;
		int32_t L_4 = ___sourceLineNumber3;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57(L_2, L_3, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_callbackId_4(L_7);
		// Debug.Log("callHandler CallbackId:" + command.callbackId);
		Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * L_8 = ___command0;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_callbackId_4();
		String_t* L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral74A76DBF43946A8F33022BF9BAFE6DC76F18CF0A, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_10, /*hidden argument*/NULL);
		// bridge.Call(command);
		RuntimeObject* L_11 = __this->get_bridge_1();
		Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * L_12 = ___command0;
		NullCheck(L_11);
		InterfaceActionInvoker1< Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * >::Invoke(1 /* System.Void TDSCommon.IBridge::Call(TDSCommon.Command) */, IBridge_tA0922C02103EE9E3E35C5BBDBE2ED478A220E226_il2cpp_TypeInfo_var, L_11, L_12);
		// }
		return;
	}
}
// System.Void TDSCommon.EngineBridge::CallHandler(TDSCommon.Command,System.Action`1<TDSCommon.Result>,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineBridge_CallHandler_mC781871CE7BA0BD9403CB198B6B3AED4D5127CC2 (EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A * __this, Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * ___command0, Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * ___action1, String_t* ___memberName2, String_t* ___sourceFilePath3, int32_t ___sourceLineNumber4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EngineBridge_CallHandler_mC781871CE7BA0BD9403CB198B6B3AED4D5127CC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bridge == null)
		RuntimeObject* L_0 = __this->get_bridge_1();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// command.callbackId = memberName + sourceFilePath + sourceLineNumber;
		Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * L_1 = ___command0;
		String_t* L_2 = ___memberName2;
		String_t* L_3 = ___sourceFilePath3;
		int32_t L_4 = ___sourceLineNumber4;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57(L_2, L_3, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_callbackId_4(L_7);
		// Debug.Log("callHandler CallbackId:" + command.callbackId);
		Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * L_8 = ___command0;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_callbackId_4();
		String_t* L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral74A76DBF43946A8F33022BF9BAFE6DC76F18CF0A, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_10, /*hidden argument*/NULL);
		// bridge.Call(command, action);
		RuntimeObject* L_11 = __this->get_bridge_1();
		Command_t68880E9923656839A6EF1701A4FB2280884DFA48 * L_12 = ___command0;
		Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * L_13 = ___action1;
		NullCheck(L_11);
		InterfaceActionInvoker2< Command_t68880E9923656839A6EF1701A4FB2280884DFA48 *, Action_1_tCB3A038A68DF791019158604CA48B6E466ECF357 * >::Invoke(2 /* System.Void TDSCommon.IBridge::Call(TDSCommon.Command,System.Action`1<TDSCommon.Result>) */, IBridge_tA0922C02103EE9E3E35C5BBDBE2ED478A220E226_il2cpp_TypeInfo_var, L_11, L_12, L_13);
		// }
		return;
	}
}
// System.Void TDSCommon.EngineBridge::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineBridge__cctor_m0487773882515556D093234CFDA45EE9175652B3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EngineBridge__cctor_m0487773882515556D093234CFDA45EE9175652B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly object locker = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A_StaticFields*)il2cpp_codegen_static_fields_for(EngineBridge_t5D5F53C83C4DAA16460C5EEC68CF82E7DA29A46A_il2cpp_TypeInfo_var))->set_locker_2(L_0);
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
// System.Object TDSCommon.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Json_Deserialize_m87E6D3A50A7E832EF1CEFA7E8046164AF93F09CD (String_t* ___json0, const RuntimeMethod* method)
{
	{
		// if (json == null)
		String_t* L_0 = ___json0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_0005:
	{
		// return Parser.Parse(json);
		String_t* L_1 = ___json0;
		RuntimeObject * L_2 = Parser_Parse_m45AFBB14E4401B0C7F496E27FEDF39D8C8D35CF2(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String TDSCommon.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_mD4CF059DA0601B618A63E6CEB061336A546C78A5 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// return Serializer.Serialize(obj);
		RuntimeObject * L_0 = ___obj0;
		String_t* L_1 = Serializer_Serialize_m23419C7CC8CBAF978FB8B29494E80DD2A7900A87(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Boolean TDSCommon.Platform::isAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_isAndroid_mEF0428487E18514A0D338B592A4C374D6D8F8344 (const RuntimeMethod* method)
{
	{
		// return Application.platform == RuntimePlatform.Android;
		int32_t L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)11)))? 1 : 0);
	}
}
// System.Boolean TDSCommon.Platform::isIOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_isIOS_m46FD9D77C0C2D53B3B685E87494F08F4D0458209 (const RuntimeMethod* method)
{
	{
		// return Application.platform == RuntimePlatform.IPhonePlayer;
		int32_t L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)8))? 1 : 0);
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
// System.Void TDSCommon.Result::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_m3D699723E9033CDBD90D9C66BB033D3B454350D5 (Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194 * __this, const RuntimeMethod* method)
{
	{
		// public Result()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TDSCommon.Result::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_mEDA51EA26CE93063E6D3BAEC56A85691CE6B2CE0 (Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194 * __this, String_t* ___json0, const RuntimeMethod* method)
{
	{
		// public Result(string json)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// JsonUtility.FromJsonOverwrite(json, this);
		String_t* L_0 = ___json0;
		JsonUtility_FromJsonOverwrite_mC97C7C909591A29E72361FB5DBC1A58EEE6DBAEB(L_0, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String TDSCommon.Result::toJSON()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Result_toJSON_mF249A48F8114DADE2F838E591A1C6BE39B79B5EA (Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194 * __this, const RuntimeMethod* method)
{
	{
		// return JsonUtility.ToJson(this);
		String_t* L_0 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void TDSCommon.Result::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__cctor_m216611DD7E5C47BD071C0D99F95B86AE9AB3EF2E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Result__cctor_m216611DD7E5C47BD071C0D99F95B86AE9AB3EF2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int RESULT_SUCCESS = 0;
		((Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194_StaticFields*)il2cpp_codegen_static_fields_for(Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194_il2cpp_TypeInfo_var))->set_RESULT_SUCCESS_0(0);
		// public static int RESULT_ERROR = -1;
		((Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194_StaticFields*)il2cpp_codegen_static_fields_for(Result_t44197AD3E7A7B7FEDB97181B130768C76E31E194_il2cpp_TypeInfo_var))->set_RESULT_ERROR_1((-1));
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
// System.Object TDSCommon.SafeDictionary::SafeGetValueByKey(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SafeDictionary_SafeGetValueByKey_mAA610A02CEE91E2D7636817B0A8243B3A9AE2B07 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dic0, String_t* ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SafeDictionary_SafeGetValueByKey_mAA610A02CEE91E2D7636817B0A8243B3A9AE2B07_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// if (dic.TryGetValue(key,out outputValue))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ___dic0;
		String_t* L_1 = ___key1;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_mAD5155E7BDF9B0B146468C59E19A3190C07D1D06(L_0, L_1, (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mAD5155E7BDF9B0B146468C59E19A3190C07D1D06_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_000d;
		}
	}
	{
		// return outputValue;
		RuntimeObject * L_3 = V_0;
		return L_3;
	}

IL_000d:
	{
		// return null;
		return NULL;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EngineBridgeDelegate_tAF3B678052935ACF37FD27EFE8B7DE1E7854E81C (EngineBridgeDelegate_tAF3B678052935ACF37FD27EFE8B7DE1E7854E81C * __this, String_t* ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___result0' to native representation
	char* ____result0_marshaled = NULL;
	____result0_marshaled = il2cpp_codegen_marshal_string(___result0);

	// Native function invocation
	il2cppPInvokeFunc(____result0_marshaled);

	// Marshaling cleanup of parameter '___result0' native representation
	il2cpp_codegen_marshal_free(____result0_marshaled);
	____result0_marshaled = NULL;

}
// System.Void TDSCommon.BridgeIOS_EngineBridgeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineBridgeDelegate__ctor_m8961D4DDA53711FCC0F09C81F23BADAB2E79E261 (EngineBridgeDelegate_tAF3B678052935ACF37FD27EFE8B7DE1E7854E81C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TDSCommon.BridgeIOS_EngineBridgeDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineBridgeDelegate_Invoke_m4810F00E7FA183793E39F55A2E3CEACCF05C4A1B (EngineBridgeDelegate_tAF3B678052935ACF37FD27EFE8B7DE1E7854E81C * __this, String_t* ___result0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___result0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___result0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___result0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___result0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___result0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___result0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___result0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult TDSCommon.BridgeIOS_EngineBridgeDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EngineBridgeDelegate_BeginInvoke_mBE992970240386FC687B423F0DB8604304BE089C (EngineBridgeDelegate_tAF3B678052935ACF37FD27EFE8B7DE1E7854E81C * __this, String_t* ___result0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___result0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void TDSCommon.BridgeIOS_EngineBridgeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineBridgeDelegate_EndInvoke_m7216CEC85E51B91C2E11AF482960B5A03F4A098D (EngineBridgeDelegate_tAF3B678052935ACF37FD27EFE8B7DE1E7854E81C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean TDSCommon.Json_Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_m84D6C0991B9D5A88502087DDB2B1F24683068076 (Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_IsWordBreak_m84D6C0991B9D5A88502087DDB2B1F24683068076_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Char.IsWhiteSpace(c) || WORD_BREAK.IndexOf(c) != -1;
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		NullCheck(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		int32_t L_3 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA, L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)1;
	}
}
// System.Void TDSCommon.Json_Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_mA356F21CF106562640ABF607067829D93E6B1998 (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser__ctor_mA356F21CF106562640ABF607067829D93E6B1998_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Parser(string jsonString)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// json = new StringReader(jsonString);
		String_t* L_0 = ___jsonString0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = (StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)il2cpp_codegen_object_new(StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE(L_1, L_0, /*hidden argument*/NULL);
		__this->set_json_0(L_1);
		// }
		return;
	}
}
// System.Object TDSCommon.Json_Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_m45AFBB14E4401B0C7F496E27FEDF39D8C8D35CF2 (String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_Parse_m45AFBB14E4401B0C7F496E27FEDF39D8C8D35CF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (var instance = new Parser(jsonString))
		String_t* L_0 = ___jsonString0;
		Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * L_1 = (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 *)il2cpp_codegen_object_new(Parser_t47E0E2B71653F587EB703880B0045EC2222AF670_il2cpp_TypeInfo_var);
		Parser__ctor_mA356F21CF106562640ABF607067829D93E6B1998(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		// return instance.ParseValue();
		Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_3 = Parser_ParseValue_m2A8C9D1C53EF7BF37464EB6AE416BF40FD63E5A6(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x1A, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		{
			Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0019;
			}
		}

IL_0013:
		{
			Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_5);
		}

IL_0019:
		{
			IL2CPP_END_FINALLY(16)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		// }
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void TDSCommon.Json_Parser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Dispose_m5959CFB7A1480A4B148726A4DC45C46253C9CED5 (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method)
{
	{
		// json.Dispose();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8(L_0, /*hidden argument*/NULL);
		// json = null;
		__this->set_json_0((StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> TDSCommon.Json_Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Parser_ParseObject_m55779222EFB861138FE6783D98C9D6478E3E144A (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseObject_m55779222EFB861138FE6783D98C9D6478E3E144A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// Dictionary<string, object> table = new Dictionary<string, object>();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0012:
	{
		// switch (NextToken)
		int32_t L_2 = Parser_get_NextToken_mF3ABF9F792515FF2E72E5FBD1383ACFFB30794C0(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)6)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		// return null;
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0028:
	{
		// return table;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6 = V_0;
		return L_6;
	}

IL_002a:
	{
		// string name = ParseString();
		String_t* L_7 = Parser_ParseString_m4014EE44669F217B966400B90ED981C3C008D7A5(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		// if (name == null)
		String_t* L_8 = V_2;
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return null;
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0036:
	{
		// if (NextToken != TOKEN.COLON)
		int32_t L_9 = Parser_get_NextToken_mF3ABF9F792515FF2E72E5FBD1383ACFFB30794C0(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)5)))
		{
			goto IL_0041;
		}
	}
	{
		// return null;
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0041:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_10 = __this->get_json_0();
		NullCheck(L_10);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_10);
		// table[name] = ParseValue();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_11 = V_0;
		String_t* L_12 = V_2;
		RuntimeObject * L_13 = Parser_ParseValue_m2A8C9D1C53EF7BF37464EB6AE416BF40FD63E5A6(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_11, L_12, L_13, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		// break;
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> TDSCommon.Json_Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Parser_ParseArray_mE07CC2320889BF90810ED4F201F70CBD9A614BC0 (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseArray_mE07CC2320889BF90810ED4F201F70CBD9A614BC0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		// List<object> array = new List<object>();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_0, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// var parsing = true;
		V_1 = (bool)1;
		goto IL_003f;
	}

IL_0016:
	{
		// TOKEN nextToken = NextToken;
		int32_t L_2 = Parser_get_NextToken_mF3ABF9F792515FF2E72E5FBD1383ACFFB30794C0(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		// switch (nextToken)
		int32_t L_3 = V_2;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)6)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		// return null;
		return (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)NULL;
	}

IL_002c:
	{
		// parsing = false;
		V_1 = (bool)0;
		// break;
		goto IL_003f;
	}

IL_0030:
	{
		// object value = ParseByToken(nextToken);
		int32_t L_6 = V_2;
		RuntimeObject * L_7 = Parser_ParseByToken_m15C929C1C77C43DC8656BF3C5480060CE32D1A85(__this, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		// array.Add(value);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		NullCheck(L_8);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_8, L_9, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
	}

IL_003f:
	{
		// while (parsing)
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0016;
		}
	}
	{
		// return array;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_11 = V_0;
		return L_11;
	}
}
// System.Object TDSCommon.Json_Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_m2A8C9D1C53EF7BF37464EB6AE416BF40FD63E5A6 (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// TOKEN nextToken = NextToken;
		int32_t L_0 = Parser_get_NextToken_mF3ABF9F792515FF2E72E5FBD1383ACFFB30794C0(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// return ParseByToken(nextToken);
		int32_t L_1 = V_0;
		RuntimeObject * L_2 = Parser_ParseByToken_m15C929C1C77C43DC8656BF3C5480060CE32D1A85(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object TDSCommon.Json_Parser::ParseByToken(TDSCommon.Json_Parser_TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m15C929C1C77C43DC8656BF3C5480060CE32D1A85 (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, int32_t ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseByToken_m15C929C1C77C43DC8656BF3C5480060CE32D1A85_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch (token)
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_0062;
			}
			case 5:
			{
				goto IL_0062;
			}
			case 6:
			{
				goto IL_0036;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_0052;
			}
			case 9:
			{
				goto IL_0059;
			}
			case 10:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0036:
	{
		// return ParseString();
		String_t* L_1 = Parser_ParseString_m4014EE44669F217B966400B90ED981C3C008D7A5(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_003d:
	{
		// return ParseNumber();
		RuntimeObject * L_2 = Parser_ParseNumber_m919975EBAA0772845C506993B6CE7E1B4EA526DF(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0044:
	{
		// return ParseObject();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_3 = Parser_ParseObject_m55779222EFB861138FE6783D98C9D6478E3E144A(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_004b:
	{
		// return ParseArray();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_4 = Parser_ParseArray_mE07CC2320889BF90810ED4F201F70CBD9A614BC0(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_0052:
	{
		// return true;
		bool L_5 = ((bool)1);
		RuntimeObject * L_6 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0059:
	{
		// return false;
		bool L_7 = ((bool)0);
		RuntimeObject * L_8 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_0060:
	{
		// return null;
		return NULL;
	}

IL_0062:
	{
		// return null;
		return NULL;
	}
}
// System.String TDSCommon.Json_Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m4014EE44669F217B966400B90ED981C3C008D7A5 (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseString_m4014EE44669F217B966400B90ED981C3C008D7A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// StringBuilder s = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// bool parsing = true;
		V_2 = (bool)1;
		goto IL_0137;
	}

IL_0019:
	{
		// if (json.Peek() == -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_2 = __this->get_json_0();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_013d;
	}

IL_002e:
	{
		// c = NextChar;
		Il2CppChar L_4 = Parser_get_NextChar_m1765C0C9122E8044E4CE2D54476CA296BF83C300(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		// switch (c)
		Il2CppChar L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)34))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)92))))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_012f;
	}

IL_0044:
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0137;
	}

IL_004b:
	{
		// if (json.Peek() == -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_7 = __this->get_json_0();
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_7);
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0137;
	}

IL_0060:
	{
		// c = NextChar;
		Il2CppChar L_9 = Parser_get_NextChar_m1765C0C9122E8044E4CE2D54476CA296BF83C300(__this, /*hidden argument*/NULL);
		V_1 = L_9;
		// switch (c)
		Il2CppChar L_10 = V_1;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_0080;
		}
	}
	{
		Il2CppChar L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)47))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)92))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0137;
	}

IL_0080:
	{
		Il2CppChar L_14 = V_1;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_0094;
		}
	}
	{
		Il2CppChar L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)98))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)102))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0137;
	}

IL_0094:
	{
		Il2CppChar L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)110))))
		{
			goto IL_00d6;
		}
	}
	{
		Il2CppChar L_18 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_00e1;
			}
			case 1:
			{
				goto IL_0137;
			}
			case 2:
			{
				goto IL_00ec;
			}
			case 3:
			{
				goto IL_00f7;
			}
		}
	}
	{
		goto IL_0137;
	}

IL_00b7:
	{
		// s.Append(c);
		StringBuilder_t * L_19 = V_0;
		Il2CppChar L_20 = V_1;
		NullCheck(L_19);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_19, L_20, /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00c1:
	{
		// s.Append('\b');
		StringBuilder_t * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_21, 8, /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00cb:
	{
		// s.Append('\f');
		StringBuilder_t * L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_22, ((int32_t)12), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00d6:
	{
		// s.Append('\n');
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_23, ((int32_t)10), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00e1:
	{
		// s.Append('\r');
		StringBuilder_t * L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_24, ((int32_t)13), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00ec:
	{
		// s.Append('\t');
		StringBuilder_t * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_25, ((int32_t)9), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00f7:
	{
		// var hex = new char[4];
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_26;
		// for (int i = 0; i < 4; i++)
		V_4 = 0;
		goto IL_0113;
	}

IL_0103:
	{
		// hex[i] = NextChar;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_27 = V_3;
		int32_t L_28 = V_4;
		Il2CppChar L_29 = Parser_get_NextChar_m1765C0C9122E8044E4CE2D54476CA296BF83C300(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (Il2CppChar)L_29);
		// for (int i = 0; i < 4; i++)
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0113:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_31 = V_4;
		if ((((int32_t)L_31) < ((int32_t)4)))
		{
			goto IL_0103;
		}
	}
	{
		// s.Append((char)Convert.ToInt32(new string(hex), 16));
		StringBuilder_t * L_32 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_33 = V_3;
		String_t* L_34 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_35 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_34, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_32);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_32, (((int32_t)((uint16_t)L_35))), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_012f:
	{
		// s.Append(c);
		StringBuilder_t * L_36 = V_0;
		Il2CppChar L_37 = V_1;
		NullCheck(L_36);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_36, L_37, /*hidden argument*/NULL);
	}

IL_0137:
	{
		// while (parsing)
		bool L_38 = V_2;
		if (L_38)
		{
			goto IL_0019;
		}
	}

IL_013d:
	{
		// return s.ToString();
		StringBuilder_t * L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_39);
		return L_40;
	}
}
// System.Object TDSCommon.Json_Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m919975EBAA0772845C506993B6CE7E1B4EA526DF (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseNumber_m919975EBAA0772845C506993B6CE7E1B4EA526DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	int64_t V_2 = 0;
	{
		// string number = NextWord;
		String_t* L_0 = Parser_get_NextWord_m13A016A9A1515A929486A6E3F18458E87F93C7CF(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (number.IndexOf('.') == -1)
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0022;
		}
	}
	{
		// Int64.TryParse(number, out parsedInt);
		String_t* L_3 = V_0;
		Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650(L_3, (int64_t*)(&V_2), /*hidden argument*/NULL);
		// return parsedInt;
		int64_t L_4 = V_2;
		int64_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0022:
	{
		// Double.TryParse(number, out parsedDouble);
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		Double_TryParse_m9152D976CDFE0B30C7E251DDD04EAD6BBD0800B0(L_7, (double*)(&V_1), /*hidden argument*/NULL);
		// return parsedDouble;
		double L_8 = V_1;
		double L_9 = L_8;
		RuntimeObject * L_10 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}
}
// System.Void TDSCommon.Json_Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m72E0475E2B4D94B394A327D46754A520A3633261 (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_EatWhitespace_m72E0475E2B4D94B394A327D46754A520A3633261_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_001c;
	}

IL_0002:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		// if (json.Peek() == -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_1);
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		// while (Char.IsWhiteSpace(PeekChar))
		Il2CppChar L_3 = Parser_get_PeekChar_m853A0235389C3A8536473D3F65FC2DA8B26BDF73(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_4 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0002;
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Char TDSCommon.Json_Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m853A0235389C3A8536473D3F65FC2DA8B26BDF73 (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_PeekChar_m853A0235389C3A8536473D3F65FC2DA8B26BDF73_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar(json.Peek());
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Char TDSCommon.Json_Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m1765C0C9122E8044E4CE2D54476CA296BF83C300 (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextChar_m1765C0C9122E8044E4CE2D54476CA296BF83C300_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar(json.Read());
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String TDSCommon.Json_Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m13A016A9A1515A929486A6E3F18458E87F93C7CF (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextWord_m13A016A9A1515A929486A6E3F18458E87F93C7CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		// StringBuilder word = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0023;
	}

IL_0008:
	{
		// word.Append(NextChar);
		StringBuilder_t * L_1 = V_0;
		Il2CppChar L_2 = Parser_get_NextChar_m1765C0C9122E8044E4CE2D54476CA296BF83C300(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_1, L_2, /*hidden argument*/NULL);
		// if (json.Peek() == -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_3 = __this->get_json_0();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0030;
		}
	}

IL_0023:
	{
		// while (!IsWordBreak(PeekChar))
		Il2CppChar L_5 = Parser_get_PeekChar_m853A0235389C3A8536473D3F65FC2DA8B26BDF73(__this, /*hidden argument*/NULL);
		bool L_6 = Parser_IsWordBreak_m84D6C0991B9D5A88502087DDB2B1F24683068076(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0008;
		}
	}

IL_0030:
	{
		// return word.ToString();
		StringBuilder_t * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		return L_8;
	}
}
// TDSCommon.Json_Parser_TOKEN TDSCommon.Json_Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_mF3ABF9F792515FF2E72E5FBD1383ACFFB30794C0 (Parser_t47E0E2B71653F587EB703880B0045EC2222AF670 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextToken_mF3ABF9F792515FF2E72E5FBD1383ACFFB30794C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		// EatWhitespace();
		Parser_EatWhitespace_m72E0475E2B4D94B394A327D46754A520A3633261(__this, /*hidden argument*/NULL);
		// if (json.Peek() == -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
	}

IL_0016:
	{
		// switch (PeekChar)
		Il2CppChar L_2 = Parser_get_PeekChar_m853A0235389C3A8536473D3F65FC2DA8B26BDF73(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)34))))
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00db;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_00db;
			}
			case 5:
			{
				goto IL_00db;
			}
			case 6:
			{
				goto IL_00db;
			}
			case 7:
			{
				goto IL_00db;
			}
			case 8:
			{
				goto IL_00db;
			}
			case 9:
			{
				goto IL_00db;
			}
			case 10:
			{
				goto IL_00c7;
			}
			case 11:
			{
				goto IL_00d9;
			}
			case 12:
			{
				goto IL_00db;
			}
			case 13:
			{
				goto IL_00db;
			}
			case 14:
			{
				goto IL_00d9;
			}
			case 15:
			{
				goto IL_00d9;
			}
			case 16:
			{
				goto IL_00d9;
			}
			case 17:
			{
				goto IL_00d9;
			}
			case 18:
			{
				goto IL_00d9;
			}
			case 19:
			{
				goto IL_00d9;
			}
			case 20:
			{
				goto IL_00d9;
			}
			case 21:
			{
				goto IL_00d9;
			}
			case 22:
			{
				goto IL_00d9;
			}
			case 23:
			{
				goto IL_00d9;
			}
			case 24:
			{
				goto IL_00d7;
			}
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)91))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b9;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)123))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00db;
	}

IL_00a7:
	{
		// return TOKEN.CURLY_OPEN;
		return (int32_t)(1);
	}

IL_00a9:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_9 = __this->get_json_0();
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		// return TOKEN.CURLY_CLOSE;
		return (int32_t)(2);
	}

IL_00b7:
	{
		// return TOKEN.SQUARED_OPEN;
		return (int32_t)(3);
	}

IL_00b9:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_10 = __this->get_json_0();
		NullCheck(L_10);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_10);
		// return TOKEN.SQUARED_CLOSE;
		return (int32_t)(4);
	}

IL_00c7:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_11 = __this->get_json_0();
		NullCheck(L_11);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// return TOKEN.COMMA;
		return (int32_t)(6);
	}

IL_00d5:
	{
		// return TOKEN.STRING;
		return (int32_t)(7);
	}

IL_00d7:
	{
		// return TOKEN.COLON;
		return (int32_t)(5);
	}

IL_00d9:
	{
		// return TOKEN.NUMBER;
		return (int32_t)(8);
	}

IL_00db:
	{
		// switch (NextWord)
		String_t* L_12 = Parser_get_NextWord_m13A016A9A1515A929486A6E3F18458E87F93C7CF(__this, /*hidden argument*/NULL);
		V_1 = L_12;
		String_t* L_13 = V_1;
		bool L_14 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_13, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_010b;
		}
	}
	{
		String_t* L_15 = V_1;
		bool L_16 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_15, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_17 = V_1;
		bool L_18 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_17, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0114;
	}

IL_010b:
	{
		// return TOKEN.FALSE;
		return (int32_t)(((int32_t)10));
	}

IL_010e:
	{
		// return TOKEN.TRUE;
		return (int32_t)(((int32_t)9));
	}

IL_0111:
	{
		// return TOKEN.NULL;
		return (int32_t)(((int32_t)11));
	}

IL_0114:
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
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
// System.Void TDSCommon.Json_Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_mD3269A1FA6D516B0E6981FEAA08F177B6937457B (Serializer_t5A4B7B98B0F098CDA805209BE96D24DDCC98CB15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer__ctor_mD3269A1FA6D516B0E6981FEAA08F177B6937457B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Serializer()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// builder = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		// }
		return;
	}
}
// System.String TDSCommon.Json_Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m23419C7CC8CBAF978FB8B29494E80DD2A7900A87 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_Serialize_m23419C7CC8CBAF978FB8B29494E80DD2A7900A87_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var instance = new Serializer();
		Serializer_t5A4B7B98B0F098CDA805209BE96D24DDCC98CB15 * L_0 = (Serializer_t5A4B7B98B0F098CDA805209BE96D24DDCC98CB15 *)il2cpp_codegen_object_new(Serializer_t5A4B7B98B0F098CDA805209BE96D24DDCC98CB15_il2cpp_TypeInfo_var);
		Serializer__ctor_mD3269A1FA6D516B0E6981FEAA08F177B6937457B(L_0, /*hidden argument*/NULL);
		// instance.SerializeValue(obj);
		Serializer_t5A4B7B98B0F098CDA805209BE96D24DDCC98CB15 * L_1 = L_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_mCE90A867C1A8A498A2DEE7707A3B42F87D399252(L_1, L_2, /*hidden argument*/NULL);
		// return instance.builder.ToString();
		NullCheck(L_1);
		StringBuilder_t * L_3 = L_1->get_builder_0();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Void TDSCommon.Json_Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_mCE90A867C1A8A498A2DEE7707A3B42F87D399252 (Serializer_t5A4B7B98B0F098CDA805209BE96D24DDCC98CB15 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeValue_mCE90A867C1A8A498A2DEE7707A3B42F87D399252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t * G_B7_0 = NULL;
	StringBuilder_t * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t * G_B8_1 = NULL;
	{
		// if (value == null)
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// builder.Append("null");
		StringBuilder_t * L_1 = __this->get_builder_0();
		NullCheck(L_1);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0015:
	{
		// else if ((asStr = value as string) != null)
		RuntimeObject * L_2 = ___value0;
		String_t* L_3 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		V_2 = L_3;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// SerializeString(asStr);
		String_t* L_4 = V_2;
		Serializer_SerializeString_m8F012D60C0B8643E3267B5D8384123655F63F04C(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0027:
	{
		// else if (value is bool)
		RuntimeObject * L_5 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}
	{
		// builder.Append((bool)value ? "true" : "false");
		StringBuilder_t * L_6 = __this->get_builder_0();
		RuntimeObject * L_7 = ___value0;
		G_B6_0 = L_6;
		if (((*(bool*)((bool*)UnBox(L_7, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_6;
			goto IL_0044;
		}
	}
	{
		G_B8_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B8_1 = G_B6_0;
		goto IL_0049;
	}

IL_0044:
	{
		G_B8_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B8_1 = G_B7_0;
	}

IL_0049:
	{
		NullCheck(G_B8_1);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0050:
	{
		// else if ((asList = value as IList) != null)
		RuntimeObject * L_8 = ___value0;
		RuntimeObject* L_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		V_0 = L_9;
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		// SerializeArray(asList);
		RuntimeObject* L_10 = V_0;
		Serializer_SerializeArray_m848C61A1BA3BC21322747C04379B7AD80511DC67(__this, L_10, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0062:
	{
		// else if ((asDict = value as IDictionary) != null)
		RuntimeObject * L_11 = ___value0;
		RuntimeObject* L_12 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
		V_1 = L_12;
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		// SerializeObject(asDict);
		RuntimeObject* L_13 = V_1;
		Serializer_SerializeObject_m0D370BED3A05991633A3BE1685EE101B32D663A9(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0074:
	{
		// else if (value is char)
		RuntimeObject * L_14 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		// SerializeString(new string((char)value, 1));
		RuntimeObject * L_15 = ___value0;
		String_t* L_16 = String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED(NULL, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_15, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))), 1, /*hidden argument*/NULL);
		Serializer_SerializeString_m8F012D60C0B8643E3267B5D8384123655F63F04C(__this, L_16, /*hidden argument*/NULL);
		// }
		return;
	}

IL_008f:
	{
		// SerializeOther(value);
		RuntimeObject * L_17 = ___value0;
		Serializer_SerializeOther_m41C903A996454DB1F83BD02393AA0DFB95327C1F(__this, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TDSCommon.Json_Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m0D370BED3A05991633A3BE1685EE101B32D663A9 (Serializer_t5A4B7B98B0F098CDA805209BE96D24DDCC98CB15 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeObject_m0D370BED3A05991633A3BE1685EE101B32D663A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// bool first = true;
		V_0 = (bool)1;
		// builder.Append('{');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)123), /*hidden argument*/NULL);
		// foreach (object e in obj.Keys)
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_001e:
		{
			// foreach (object e in obj.Keys)
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			// if (!first)
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_0036;
			}
		}

IL_0028:
		{
			// builder.Append(',');
			StringBuilder_t * L_7 = __this->get_builder_0();
			NullCheck(L_7);
			StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0036:
		{
			// SerializeString(e.ToString());
			RuntimeObject * L_8 = V_2;
			NullCheck(L_8);
			String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			Serializer_SerializeString_m8F012D60C0B8643E3267B5D8384123655F63F04C(__this, L_9, /*hidden argument*/NULL);
			// builder.Append(':');
			StringBuilder_t * L_10 = __this->get_builder_0();
			NullCheck(L_10);
			StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_10, ((int32_t)58), /*hidden argument*/NULL);
			// SerializeValue(obj[e]);
			RuntimeObject* L_11 = ___obj0;
			RuntimeObject * L_12 = V_2;
			NullCheck(L_11);
			RuntimeObject * L_13 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_11, L_12);
			Serializer_SerializeValue_mCE90A867C1A8A498A2DEE7707A3B42F87D399252(__this, L_13, /*hidden argument*/NULL);
			// first = false;
			V_0 = (bool)0;
		}

IL_005f:
		{
			// foreach (object e in obj.Keys)
			RuntimeObject* L_14 = V_1;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_001e;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x7A, FINALLY_0069);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_17 = V_3;
			if (!L_17)
			{
				goto IL_0079;
			}
		}

IL_0073:
		{
			RuntimeObject* L_18 = V_3;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_18);
		}

IL_0079:
		{
			IL2CPP_END_FINALLY(105)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
	}

IL_007a:
	{
		// builder.Append('}');
		StringBuilder_t * L_19 = __this->get_builder_0();
		NullCheck(L_19);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_19, ((int32_t)125), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TDSCommon.Json_Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m848C61A1BA3BC21322747C04379B7AD80511DC67 (Serializer_t5A4B7B98B0F098CDA805209BE96D24DDCC98CB15 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeArray_m848C61A1BA3BC21322747C04379B7AD80511DC67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// builder.Append('[');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)91), /*hidden argument*/NULL);
		// bool first = true;
		V_0 = (bool)1;
		// foreach (object obj in anArray)
		RuntimeObject* L_1 = ___anArray0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_0019:
		{
			// foreach (object obj in anArray)
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_3);
			V_2 = L_4;
			// if (!first)
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0031;
			}
		}

IL_0023:
		{
			// builder.Append(',');
			StringBuilder_t * L_6 = __this->get_builder_0();
			NullCheck(L_6);
			StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_6, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0031:
		{
			// SerializeValue(obj);
			RuntimeObject * L_7 = V_2;
			Serializer_SerializeValue_mCE90A867C1A8A498A2DEE7707A3B42F87D399252(__this, L_7, /*hidden argument*/NULL);
			// first = false;
			V_0 = (bool)0;
		}

IL_003a:
		{
			// foreach (object obj in anArray)
			RuntimeObject* L_8 = V_1;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0019;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_11 = V_3;
			if (!L_11)
			{
				goto IL_0054;
			}
		}

IL_004e:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_12);
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(68)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x55, IL_0055)
	}

IL_0055:
	{
		// builder.Append(']');
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_13, ((int32_t)93), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TDSCommon.Json_Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m8F012D60C0B8643E3267B5D8384123655F63F04C (Serializer_t5A4B7B98B0F098CDA805209BE96D24DDCC98CB15 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeString_m8F012D60C0B8643E3267B5D8384123655F63F04C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		// builder.Append('\"');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)34), /*hidden argument*/NULL);
		// char[] charArray = str.ToCharArray();
		String_t* L_1 = ___str0;
		NullCheck(L_1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_1, /*hidden argument*/NULL);
		// foreach (var c in charArray)
		V_0 = L_2;
		V_1 = 0;
		goto IL_012d;
	}

IL_001c:
	{
		// foreach (var c in charArray)
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (uint16_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// switch (c)
		Il2CppChar L_7 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)8)))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_00a7;
			}
			case 3:
			{
				goto IL_00e0;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_00ba;
			}
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00e0;
	}

IL_004f:
	{
		// builder.Append("\\\"");
		StringBuilder_t * L_10 = __this->get_builder_0();
		NullCheck(L_10);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_10, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_0065:
	{
		// builder.Append("\\\\");
		StringBuilder_t * L_11 = __this->get_builder_0();
		NullCheck(L_11);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_007b:
	{
		// builder.Append("\\b");
		StringBuilder_t * L_12 = __this->get_builder_0();
		NullCheck(L_12);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_12, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_0091:
	{
		// builder.Append("\\f");
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_13, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00a7:
	{
		// builder.Append("\\n");
		StringBuilder_t * L_14 = __this->get_builder_0();
		NullCheck(L_14);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_14, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00ba:
	{
		// builder.Append("\\r");
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_15, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00cd:
	{
		// builder.Append("\\t");
		StringBuilder_t * L_16 = __this->get_builder_0();
		NullCheck(L_16);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_16, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00e0:
	{
		// int codepoint = Convert.ToInt32(c);
		Il2CppChar L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_18 = Convert_ToInt32_m0B80BF2883121B16934DF6F71590CAE15442A5BC(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		// if ((codepoint >= 32) && (codepoint <= 126))
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)32))))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) > ((int32_t)((int32_t)126))))
		{
			goto IL_0100;
		}
	}
	{
		// builder.Append(c);
		StringBuilder_t * L_21 = __this->get_builder_0();
		Il2CppChar L_22 = V_2;
		NullCheck(L_21);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_21, L_22, /*hidden argument*/NULL);
		// }
		goto IL_0129;
	}

IL_0100:
	{
		// builder.Append("\\u");
		StringBuilder_t * L_23 = __this->get_builder_0();
		NullCheck(L_23);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_23, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, /*hidden argument*/NULL);
		// builder.Append(codepoint.ToString("x4"));
		StringBuilder_t * L_24 = __this->get_builder_0();
		String_t* L_25 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&V_3), _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19, /*hidden argument*/NULL);
		NullCheck(L_24);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_24, L_25, /*hidden argument*/NULL);
	}

IL_0129:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_012d:
	{
		// foreach (var c in charArray)
		int32_t L_27 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_28 = V_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		// builder.Append('\"');
		StringBuilder_t * L_29 = __this->get_builder_0();
		NullCheck(L_29);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_29, ((int32_t)34), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TDSCommon.Json_Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m41C903A996454DB1F83BD02393AA0DFB95327C1F (Serializer_t5A4B7B98B0F098CDA805209BE96D24DDCC98CB15 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeOther_m41C903A996454DB1F83BD02393AA0DFB95327C1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		// if (value is float)
		RuntimeObject * L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		// builder.Append(((float)value).ToString("R"));
		StringBuilder_t * L_1 = __this->get_builder_0();
		RuntimeObject * L_2 = ___value0;
		V_0 = ((*(float*)((float*)UnBox(L_2, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))));
		String_t* L_3 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_0), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0028:
	{
		// else if (value is int
		//   || value is uint
		//   || value is long
		//   || value is sbyte
		//   || value is byte
		//   || value is short
		//   || value is ushort
		//   || value is ulong)
		RuntimeObject * L_4 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_5 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_11 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))
		{
			goto IL_0076;
		}
	}

IL_0068:
	{
		// builder.Append(value);
		StringBuilder_t * L_12 = __this->get_builder_0();
		RuntimeObject * L_13 = ___value0;
		NullCheck(L_12);
		StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F(L_12, L_13, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0076:
	{
		// else if (value is double
		//   || value is decimal)
		RuntimeObject * L_14 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject * L_15 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_15, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))
		{
			goto IL_00a6;
		}
	}

IL_0086:
	{
		// builder.Append(Convert.ToDouble(value).ToString("R"));
		StringBuilder_t * L_16 = __this->get_builder_0();
		RuntimeObject * L_17 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		double L_18 = Convert_ToDouble_mF6F0642EA16CAB414EEA621DEAA519527DA64284(L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		String_t* L_19 = Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C((double*)(&V_1), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, /*hidden argument*/NULL);
		NullCheck(L_16);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_16, L_19, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00a6:
	{
		// SerializeString(value.ToString());
		RuntimeObject * L_20 = ___value0;
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		Serializer_SerializeString_m8F012D60C0B8643E3267B5D8384123655F63F04C(__this, L_21, /*hidden argument*/NULL);
		// }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 * BridgeIOS_GetInstance_m31FCF5433CC5333BD9BBCD10025BCF308DE33473_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BridgeIOS_GetInstance_m31FCF5433CC5333BD9BBCD10025BCF308DE33473TDSCommon_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return sInstance;
		IL2CPP_RUNTIME_CLASS_INIT(BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1_il2cpp_TypeInfo_var);
		BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 * L_0 = ((BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1_StaticFields*)il2cpp_codegen_static_fields_for(BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1_il2cpp_TypeInfo_var))->get_sInstance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * BridgeIOS_GetDictionary_m6305F17DB0DF629EAADC200C87A349C8F0C99F72_inline (BridgeIOS_tC22DF83B918198DFA0D31A63C0F83791472591E1 * __this, const RuntimeMethod* method)
{
	{
		// return dic;
		Dictionary_2_t34639EE8BEF152AF31F88A1B22DA5D2D0277A227 * L_0 = __this->get_dic_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16 * BridgeAndroid_GetInstance_m783F511010BC98704259AD173F7916BC7CF1807C_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BridgeAndroid_GetInstance_m783F511010BC98704259AD173F7916BC7CF1807CTDSCommon_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return sInstance;
		IL2CPP_RUNTIME_CLASS_INIT(BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16_il2cpp_TypeInfo_var);
		BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16 * L_0 = ((BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16_StaticFields*)il2cpp_codegen_static_fields_for(BridgeAndroid_t765358096FCAE2B154B24F1DB178AF739BD47A16_il2cpp_TypeInfo_var))->get_sInstance_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
