﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Char[]
struct CharU5BU5D_t3528271667;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t2928496527;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t3852015985;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.ArgumentException
struct ArgumentException_t132251570;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t25761545;
// UnityEngine.WWWForm
struct WWWForm_t4064702195;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t1293755103;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.IO.MemoryStream
struct MemoryStream_t94973147;
// System.Uri
struct Uri_t100236324;
// System.Text.RegularExpressions.Regex
struct Regex_t3657309853;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t132201056;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t2082808316;
// System.UriParser
struct UriParser_t3890150400;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t457913172;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Reflection.Assembly
struct Assembly_t;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_t1617499438;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t2327118887;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t1209798546;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;

extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t CertificateHandler_Dispose_m2100863831_MetadataUsageId;
extern const uint32_t DownloadHandler_Dispose_m2747726581_MetadataUsageId;
extern String_t* _stringLiteral757602046;
extern const uint32_t DownloadHandler_GetText_m600283602_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3515428721;
extern String_t* _stringLiteral463295005;
extern const uint32_t DownloadHandler_GetTextEncoder_m3244408468_MetadataUsageId;
struct DownloadHandler_t2937767557_marshaled_pinvoke;
struct DownloadHandler_t2937767557;;
struct DownloadHandler_t2937767557_marshaled_pinvoke;;
struct UploadHandler_t2993558019_marshaled_pinvoke;
struct UploadHandler_t2993558019;;
struct UploadHandler_t2993558019_marshaled_pinvoke;;
struct CertificateHandler_t2739891000_marshaled_pinvoke;
struct CertificateHandler_t2739891000;;
struct CertificateHandler_t2739891000_marshaled_pinvoke;;
struct DownloadHandler_t2937767557_marshaled_com;
struct DownloadHandler_t2937767557_marshaled_com;;
struct UploadHandler_t2993558019_marshaled_com;
struct UploadHandler_t2993558019_marshaled_com;;
struct CertificateHandler_t2739891000_marshaled_com;
struct CertificateHandler_t2739891000_marshaled_com;;
extern const uint32_t UnityWebRequest_InternalDestroy_m2954597795_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern const RuntimeMethod* UnityWebRequest_InternalSetMethod_m287631745_RuntimeMethod_var;
extern String_t* _stringLiteral2024966745;
extern const uint32_t UnityWebRequest_InternalSetMethod_m287631745_MetadataUsageId;
extern const RuntimeMethod* UnityWebRequest_InternalSetCustomMethod_m3670745235_RuntimeMethod_var;
extern const uint32_t UnityWebRequest_InternalSetCustomMethod_m3670745235_MetadataUsageId;
extern const RuntimeMethod* UnityWebRequest_set_method_m3969249710_RuntimeMethod_var;
extern String_t* _stringLiteral3514720613;
extern String_t* _stringLiteral1130393535;
extern String_t* _stringLiteral45808443;
extern String_t* _stringLiteral1131442134;
extern String_t* _stringLiteral831347629;
extern const uint32_t UnityWebRequest_set_method_m3969249710_MetadataUsageId;
extern RuntimeClass* WebRequestUtils_t3541624225_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2530579871;
extern const uint32_t UnityWebRequest_set_url_m2541992937_MetadataUsageId;
extern const RuntimeMethod* UnityWebRequest_InternalSetUrl_m1036291515_RuntimeMethod_var;
extern String_t* _stringLiteral314995292;
extern const uint32_t UnityWebRequest_InternalSetUrl_m1036291515_MetadataUsageId;
extern const RuntimeMethod* UnityWebRequest_set_chunkedTransfer_m1735705240_RuntimeMethod_var;
extern String_t* _stringLiteral1510198755;
extern const uint32_t UnityWebRequest_set_chunkedTransfer_m1735705240_MetadataUsageId;
extern const RuntimeMethod* UnityWebRequest_SetRequestHeader_m2927335855_RuntimeMethod_var;
extern String_t* _stringLiteral3272455574;
extern String_t* _stringLiteral1361828523;
extern String_t* _stringLiteral3767907038;
extern const uint32_t UnityWebRequest_SetRequestHeader_m2927335855_MetadataUsageId;
extern const RuntimeMethod* UnityWebRequest_set_uploadHandler_m54574009_RuntimeMethod_var;
extern String_t* _stringLiteral3211556917;
extern const uint32_t UnityWebRequest_set_uploadHandler_m54574009_MetadataUsageId;
extern const RuntimeMethod* UnityWebRequest_set_downloadHandler_m970510352_RuntimeMethod_var;
extern String_t* _stringLiteral1287409439;
extern const uint32_t UnityWebRequest_set_downloadHandler_m970510352_MetadataUsageId;
struct UnityWebRequest_t463507806_marshaled_pinvoke;
struct UnityWebRequest_t463507806;;
struct UnityWebRequest_t463507806_marshaled_pinvoke;;
struct UnityWebRequest_t463507806_marshaled_com;
struct UnityWebRequest_t463507806_marshaled_com;;
extern const uint32_t UploadHandler_Dispose_m3057340132_MetadataUsageId;
extern const RuntimeMethod* UploadHandlerRaw__ctor_m1397254157_RuntimeMethod_var;
extern String_t* _stringLiteral4274026319;
extern const uint32_t UploadHandlerRaw__ctor_m1397254157_MetadataUsageId;
extern RuntimeClass* List_1_t1293755103_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2882708797_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const uint32_t WWWForm__ctor_m2465700452_MetadataUsageId;
extern const uint32_t WWWForm_get_DefaultEncoding_m4131957975_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t1632706988_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3302800229_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m187286838_RuntimeMethod_var;
extern String_t* _stringLiteral2263792357;
extern String_t* _stringLiteral587319919;
extern String_t* _stringLiteral3452614526;
extern String_t* _stringLiteral3776665136;
extern const uint32_t WWWForm_get_headers_m1854290957_MetadataUsageId;
extern RuntimeClass* WWWTranscoder_t272523958_il2cpp_TypeInfo_var;
extern const uint32_t WWWTranscoder_URLDecode_m3587034544_MetadataUsageId;
extern RuntimeClass* MemoryStream_t94973147_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t WWWTranscoder_Decode_m157051313_MetadataUsageId;
extern String_t* _stringLiteral598647136;
extern String_t* _stringLiteral3445932352;
extern String_t* _stringLiteral3074512661;
extern String_t* _stringLiteral1153672764;
extern String_t* _stringLiteral3256060902;
extern const uint32_t WWWTranscoder__cctor_m1887474915_MetadataUsageId;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern const uint32_t WebRequestUtils_RedirectTo_m55747000_MetadataUsageId;
extern RuntimeClass* FormatException_t154580423_il2cpp_TypeInfo_var;
extern const RuntimeMethod* WebRequestUtils_MakeInitialUrl_m973728695_RuntimeMethod_var;
extern String_t* _stringLiteral1057238085;
extern const uint32_t WebRequestUtils_MakeInitialUrl_m973728695_MetadataUsageId;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4054833267;
extern String_t* _stringLiteral3452614523;
extern String_t* _stringLiteral1390680534;
extern const uint32_t WebRequestUtils_MakeUriString_m291605890_MetadataUsageId;
extern const uint32_t WebRequestUtils_URLDecode_m2727298221_MetadataUsageId;
extern RuntimeClass* Regex_t3657309853_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral97523668;
extern const uint32_t WebRequestUtils__cctor_m4190982137_MetadataUsageId;

struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;


#ifndef U3CMODULEU3E_T692745533_H
#define U3CMODULEU3E_T692745533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745533 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745533_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef DICTIONARY_2_T1632706988_H
#define DICTIONARY_2_T1632706988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t1632706988  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	StringU5BU5D_t1281789340* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___valueSlots_7)); }
	inline StringU5BU5D_t1281789340* get_valueSlots_7() const { return ___valueSlots_7; }
	inline StringU5BU5D_t1281789340** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(StringU5BU5D_t1281789340* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1632706988_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t132201056 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t132201056 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t132201056 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t132201056 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1632706988_H
#ifndef WWWTRANSCODER_T272523958_H
#define WWWTRANSCODER_T272523958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWWTranscoder
struct  WWWTranscoder_t272523958  : public RuntimeObject
{
public:

public:
};

struct WWWTranscoder_t272523958_StaticFields
{
public:
	// System.Byte[] UnityEngine.WWWTranscoder::ucHexChars
	ByteU5BU5D_t4116647657* ___ucHexChars_0;
	// System.Byte[] UnityEngine.WWWTranscoder::lcHexChars
	ByteU5BU5D_t4116647657* ___lcHexChars_1;
	// System.Byte UnityEngine.WWWTranscoder::urlEscapeChar
	uint8_t ___urlEscapeChar_2;
	// System.Byte[] UnityEngine.WWWTranscoder::urlSpace
	ByteU5BU5D_t4116647657* ___urlSpace_3;
	// System.Byte[] UnityEngine.WWWTranscoder::dataSpace
	ByteU5BU5D_t4116647657* ___dataSpace_4;
	// System.Byte[] UnityEngine.WWWTranscoder::urlForbidden
	ByteU5BU5D_t4116647657* ___urlForbidden_5;
	// System.Byte UnityEngine.WWWTranscoder::qpEscapeChar
	uint8_t ___qpEscapeChar_6;
	// System.Byte[] UnityEngine.WWWTranscoder::qpSpace
	ByteU5BU5D_t4116647657* ___qpSpace_7;
	// System.Byte[] UnityEngine.WWWTranscoder::qpForbidden
	ByteU5BU5D_t4116647657* ___qpForbidden_8;

public:
	inline static int32_t get_offset_of_ucHexChars_0() { return static_cast<int32_t>(offsetof(WWWTranscoder_t272523958_StaticFields, ___ucHexChars_0)); }
	inline ByteU5BU5D_t4116647657* get_ucHexChars_0() const { return ___ucHexChars_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_ucHexChars_0() { return &___ucHexChars_0; }
	inline void set_ucHexChars_0(ByteU5BU5D_t4116647657* value)
	{
		___ucHexChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___ucHexChars_0), value);
	}

	inline static int32_t get_offset_of_lcHexChars_1() { return static_cast<int32_t>(offsetof(WWWTranscoder_t272523958_StaticFields, ___lcHexChars_1)); }
	inline ByteU5BU5D_t4116647657* get_lcHexChars_1() const { return ___lcHexChars_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_lcHexChars_1() { return &___lcHexChars_1; }
	inline void set_lcHexChars_1(ByteU5BU5D_t4116647657* value)
	{
		___lcHexChars_1 = value;
		Il2CppCodeGenWriteBarrier((&___lcHexChars_1), value);
	}

	inline static int32_t get_offset_of_urlEscapeChar_2() { return static_cast<int32_t>(offsetof(WWWTranscoder_t272523958_StaticFields, ___urlEscapeChar_2)); }
	inline uint8_t get_urlEscapeChar_2() const { return ___urlEscapeChar_2; }
	inline uint8_t* get_address_of_urlEscapeChar_2() { return &___urlEscapeChar_2; }
	inline void set_urlEscapeChar_2(uint8_t value)
	{
		___urlEscapeChar_2 = value;
	}

	inline static int32_t get_offset_of_urlSpace_3() { return static_cast<int32_t>(offsetof(WWWTranscoder_t272523958_StaticFields, ___urlSpace_3)); }
	inline ByteU5BU5D_t4116647657* get_urlSpace_3() const { return ___urlSpace_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_urlSpace_3() { return &___urlSpace_3; }
	inline void set_urlSpace_3(ByteU5BU5D_t4116647657* value)
	{
		___urlSpace_3 = value;
		Il2CppCodeGenWriteBarrier((&___urlSpace_3), value);
	}

	inline static int32_t get_offset_of_dataSpace_4() { return static_cast<int32_t>(offsetof(WWWTranscoder_t272523958_StaticFields, ___dataSpace_4)); }
	inline ByteU5BU5D_t4116647657* get_dataSpace_4() const { return ___dataSpace_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_dataSpace_4() { return &___dataSpace_4; }
	inline void set_dataSpace_4(ByteU5BU5D_t4116647657* value)
	{
		___dataSpace_4 = value;
		Il2CppCodeGenWriteBarrier((&___dataSpace_4), value);
	}

	inline static int32_t get_offset_of_urlForbidden_5() { return static_cast<int32_t>(offsetof(WWWTranscoder_t272523958_StaticFields, ___urlForbidden_5)); }
	inline ByteU5BU5D_t4116647657* get_urlForbidden_5() const { return ___urlForbidden_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_urlForbidden_5() { return &___urlForbidden_5; }
	inline void set_urlForbidden_5(ByteU5BU5D_t4116647657* value)
	{
		___urlForbidden_5 = value;
		Il2CppCodeGenWriteBarrier((&___urlForbidden_5), value);
	}

	inline static int32_t get_offset_of_qpEscapeChar_6() { return static_cast<int32_t>(offsetof(WWWTranscoder_t272523958_StaticFields, ___qpEscapeChar_6)); }
	inline uint8_t get_qpEscapeChar_6() const { return ___qpEscapeChar_6; }
	inline uint8_t* get_address_of_qpEscapeChar_6() { return &___qpEscapeChar_6; }
	inline void set_qpEscapeChar_6(uint8_t value)
	{
		___qpEscapeChar_6 = value;
	}

	inline static int32_t get_offset_of_qpSpace_7() { return static_cast<int32_t>(offsetof(WWWTranscoder_t272523958_StaticFields, ___qpSpace_7)); }
	inline ByteU5BU5D_t4116647657* get_qpSpace_7() const { return ___qpSpace_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_qpSpace_7() { return &___qpSpace_7; }
	inline void set_qpSpace_7(ByteU5BU5D_t4116647657* value)
	{
		___qpSpace_7 = value;
		Il2CppCodeGenWriteBarrier((&___qpSpace_7), value);
	}

	inline static int32_t get_offset_of_qpForbidden_8() { return static_cast<int32_t>(offsetof(WWWTranscoder_t272523958_StaticFields, ___qpForbidden_8)); }
	inline ByteU5BU5D_t4116647657* get_qpForbidden_8() const { return ___qpForbidden_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_qpForbidden_8() { return &___qpForbidden_8; }
	inline void set_qpForbidden_8(ByteU5BU5D_t4116647657* value)
	{
		___qpForbidden_8 = value;
		Il2CppCodeGenWriteBarrier((&___qpForbidden_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWWTRANSCODER_T272523958_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef WEBREQUESTUTILS_T3541624225_H
#define WEBREQUESTUTILS_T3541624225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.WebRequestUtils
struct  WebRequestUtils_t3541624225  : public RuntimeObject
{
public:

public:
};

struct WebRequestUtils_t3541624225_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngineInternal.WebRequestUtils::domainRegex
	Regex_t3657309853 * ___domainRegex_0;

public:
	inline static int32_t get_offset_of_domainRegex_0() { return static_cast<int32_t>(offsetof(WebRequestUtils_t3541624225_StaticFields, ___domainRegex_0)); }
	inline Regex_t3657309853 * get_domainRegex_0() const { return ___domainRegex_0; }
	inline Regex_t3657309853 ** get_address_of_domainRegex_0() { return &___domainRegex_0; }
	inline void set_domainRegex_0(Regex_t3657309853 * value)
	{
		___domainRegex_0 = value;
		Il2CppCodeGenWriteBarrier((&___domainRegex_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTUTILS_T3541624225_H
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String System.Uri::source
	String_t* ___source_1;
	// System.String System.Uri::scheme
	String_t* ___scheme_2;
	// System.String System.Uri::host
	String_t* ___host_3;
	// System.Int32 System.Uri::port
	int32_t ___port_4;
	// System.String System.Uri::path
	String_t* ___path_5;
	// System.String System.Uri::query
	String_t* ___query_6;
	// System.String System.Uri::fragment
	String_t* ___fragment_7;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_11;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_12;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_13;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_14;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_15;
	// System.UriParser System.Uri::parser
	UriParser_t3890150400 * ___parser_29;

public:
	inline static int32_t get_offset_of_isUnixFilePath_0() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnixFilePath_0)); }
	inline bool get_isUnixFilePath_0() const { return ___isUnixFilePath_0; }
	inline bool* get_address_of_isUnixFilePath_0() { return &___isUnixFilePath_0; }
	inline void set_isUnixFilePath_0(bool value)
	{
		___isUnixFilePath_0 = value;
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_scheme_2() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___scheme_2)); }
	inline String_t* get_scheme_2() const { return ___scheme_2; }
	inline String_t** get_address_of_scheme_2() { return &___scheme_2; }
	inline void set_scheme_2(String_t* value)
	{
		___scheme_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_2), value);
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___port_4)); }
	inline int32_t get_port_4() const { return ___port_4; }
	inline int32_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(int32_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((&___path_5), value);
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___query_6)); }
	inline String_t* get_query_6() const { return ___query_6; }
	inline String_t** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(String_t* value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((&___query_6), value);
	}

	inline static int32_t get_offset_of_fragment_7() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___fragment_7)); }
	inline String_t* get_fragment_7() const { return ___fragment_7; }
	inline String_t** get_address_of_fragment_7() { return &___fragment_7; }
	inline void set_fragment_7(String_t* value)
	{
		___fragment_7 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_7), value);
	}

	inline static int32_t get_offset_of_userinfo_8() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userinfo_8)); }
	inline String_t* get_userinfo_8() const { return ___userinfo_8; }
	inline String_t** get_address_of_userinfo_8() { return &___userinfo_8; }
	inline void set_userinfo_8(String_t* value)
	{
		___userinfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_8), value);
	}

	inline static int32_t get_offset_of_isUnc_9() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnc_9)); }
	inline bool get_isUnc_9() const { return ___isUnc_9; }
	inline bool* get_address_of_isUnc_9() { return &___isUnc_9; }
	inline void set_isUnc_9(bool value)
	{
		___isUnc_9 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_10() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isOpaquePart_10)); }
	inline bool get_isOpaquePart_10() const { return ___isOpaquePart_10; }
	inline bool* get_address_of_isOpaquePart_10() { return &___isOpaquePart_10; }
	inline void set_isOpaquePart_10(bool value)
	{
		___isOpaquePart_10 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_11() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isAbsoluteUri_11)); }
	inline bool get_isAbsoluteUri_11() const { return ___isAbsoluteUri_11; }
	inline bool* get_address_of_isAbsoluteUri_11() { return &___isAbsoluteUri_11; }
	inline void set_isAbsoluteUri_11(bool value)
	{
		___isAbsoluteUri_11 = value;
	}

	inline static int32_t get_offset_of_userEscaped_12() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userEscaped_12)); }
	inline bool get_userEscaped_12() const { return ___userEscaped_12; }
	inline bool* get_address_of_userEscaped_12() { return &___userEscaped_12; }
	inline void set_userEscaped_12(bool value)
	{
		___userEscaped_12 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_13() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedAbsoluteUri_13)); }
	inline String_t* get_cachedAbsoluteUri_13() const { return ___cachedAbsoluteUri_13; }
	inline String_t** get_address_of_cachedAbsoluteUri_13() { return &___cachedAbsoluteUri_13; }
	inline void set_cachedAbsoluteUri_13(String_t* value)
	{
		___cachedAbsoluteUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_13), value);
	}

	inline static int32_t get_offset_of_cachedToString_14() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedToString_14)); }
	inline String_t* get_cachedToString_14() const { return ___cachedToString_14; }
	inline String_t** get_address_of_cachedToString_14() { return &___cachedToString_14; }
	inline void set_cachedToString_14(String_t* value)
	{
		___cachedToString_14 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_14), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_15() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedHashCode_15)); }
	inline int32_t get_cachedHashCode_15() const { return ___cachedHashCode_15; }
	inline int32_t* get_address_of_cachedHashCode_15() { return &___cachedHashCode_15; }
	inline void set_cachedHashCode_15(int32_t value)
	{
		___cachedHashCode_15 = value;
	}

	inline static int32_t get_offset_of_parser_29() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___parser_29)); }
	inline UriParser_t3890150400 * get_parser_29() const { return ___parser_29; }
	inline UriParser_t3890150400 ** get_address_of_parser_29() { return &___parser_29; }
	inline void set_parser_29(UriParser_t3890150400 * value)
	{
		___parser_29 = value;
		Il2CppCodeGenWriteBarrier((&___parser_29), value);
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_16;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_17;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_18;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_19;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_20;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_21;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_22;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_23;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_24;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_25;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_26;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_27;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t2082808316* ___schemes_28;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map12
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map12_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map14_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map15_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map16_33;

public:
	inline static int32_t get_offset_of_hexUpperChars_16() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___hexUpperChars_16)); }
	inline String_t* get_hexUpperChars_16() const { return ___hexUpperChars_16; }
	inline String_t** get_address_of_hexUpperChars_16() { return &___hexUpperChars_16; }
	inline void set_hexUpperChars_16(String_t* value)
	{
		___hexUpperChars_16 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_16), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_17() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_17)); }
	inline String_t* get_SchemeDelimiter_17() const { return ___SchemeDelimiter_17; }
	inline String_t** get_address_of_SchemeDelimiter_17() { return &___SchemeDelimiter_17; }
	inline void set_SchemeDelimiter_17(String_t* value)
	{
		___SchemeDelimiter_17 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_17), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_18() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_18)); }
	inline String_t* get_UriSchemeFile_18() const { return ___UriSchemeFile_18; }
	inline String_t** get_address_of_UriSchemeFile_18() { return &___UriSchemeFile_18; }
	inline void set_UriSchemeFile_18(String_t* value)
	{
		___UriSchemeFile_18 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_18), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_19() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_19)); }
	inline String_t* get_UriSchemeFtp_19() const { return ___UriSchemeFtp_19; }
	inline String_t** get_address_of_UriSchemeFtp_19() { return &___UriSchemeFtp_19; }
	inline void set_UriSchemeFtp_19(String_t* value)
	{
		___UriSchemeFtp_19 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_19), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_20() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_20)); }
	inline String_t* get_UriSchemeGopher_20() const { return ___UriSchemeGopher_20; }
	inline String_t** get_address_of_UriSchemeGopher_20() { return &___UriSchemeGopher_20; }
	inline void set_UriSchemeGopher_20(String_t* value)
	{
		___UriSchemeGopher_20 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_21() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_21)); }
	inline String_t* get_UriSchemeHttp_21() const { return ___UriSchemeHttp_21; }
	inline String_t** get_address_of_UriSchemeHttp_21() { return &___UriSchemeHttp_21; }
	inline void set_UriSchemeHttp_21(String_t* value)
	{
		___UriSchemeHttp_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_22() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_22)); }
	inline String_t* get_UriSchemeHttps_22() const { return ___UriSchemeHttps_22; }
	inline String_t** get_address_of_UriSchemeHttps_22() { return &___UriSchemeHttps_22; }
	inline void set_UriSchemeHttps_22(String_t* value)
	{
		___UriSchemeHttps_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_23)); }
	inline String_t* get_UriSchemeMailto_23() const { return ___UriSchemeMailto_23; }
	inline String_t** get_address_of_UriSchemeMailto_23() { return &___UriSchemeMailto_23; }
	inline void set_UriSchemeMailto_23(String_t* value)
	{
		___UriSchemeMailto_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_24)); }
	inline String_t* get_UriSchemeNews_24() const { return ___UriSchemeNews_24; }
	inline String_t** get_address_of_UriSchemeNews_24() { return &___UriSchemeNews_24; }
	inline void set_UriSchemeNews_24(String_t* value)
	{
		___UriSchemeNews_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_25)); }
	inline String_t* get_UriSchemeNntp_25() const { return ___UriSchemeNntp_25; }
	inline String_t** get_address_of_UriSchemeNntp_25() { return &___UriSchemeNntp_25; }
	inline void set_UriSchemeNntp_25(String_t* value)
	{
		___UriSchemeNntp_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_26)); }
	inline String_t* get_UriSchemeNetPipe_26() const { return ___UriSchemeNetPipe_26; }
	inline String_t** get_address_of_UriSchemeNetPipe_26() { return &___UriSchemeNetPipe_26; }
	inline void set_UriSchemeNetPipe_26(String_t* value)
	{
		___UriSchemeNetPipe_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_27)); }
	inline String_t* get_UriSchemeNetTcp_27() const { return ___UriSchemeNetTcp_27; }
	inline String_t** get_address_of_UriSchemeNetTcp_27() { return &___UriSchemeNetTcp_27; }
	inline void set_UriSchemeNetTcp_27(String_t* value)
	{
		___UriSchemeNetTcp_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_27), value);
	}

	inline static int32_t get_offset_of_schemes_28() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___schemes_28)); }
	inline UriSchemeU5BU5D_t2082808316* get_schemes_28() const { return ___schemes_28; }
	inline UriSchemeU5BU5D_t2082808316** get_address_of_schemes_28() { return &___schemes_28; }
	inline void set_schemes_28(UriSchemeU5BU5D_t2082808316* value)
	{
		___schemes_28 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_30() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map12_30)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map12_30() const { return ___U3CU3Ef__switchU24map12_30; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map12_30() { return &___U3CU3Ef__switchU24map12_30; }
	inline void set_U3CU3Ef__switchU24map12_30(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map12_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_31() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map14_31)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map14_31() const { return ___U3CU3Ef__switchU24map14_31; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map14_31() { return &___U3CU3Ef__switchU24map14_31; }
	inline void set_U3CU3Ef__switchU24map14_31(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map14_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_32() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map15_32)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map15_32() const { return ___U3CU3Ef__switchU24map15_32; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map15_32() { return &___U3CU3Ef__switchU24map15_32; }
	inline void set_U3CU3Ef__switchU24map15_32(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map15_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_33() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map16_33)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map16_33() const { return ___U3CU3Ef__switchU24map16_33; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map16_33() { return &___U3CU3Ef__switchU24map16_33; }
	inline void set_U3CU3Ef__switchU24map16_33(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map16_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_33), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef LIST_1_T1293755103_H
#define LIST_1_T1293755103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Byte[]>
struct  List_1_t1293755103  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t457913172* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1293755103, ____items_1)); }
	inline ByteU5BU5DU5BU5D_t457913172* get__items_1() const { return ____items_1; }
	inline ByteU5BU5DU5BU5D_t457913172** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5DU5BU5D_t457913172* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1293755103, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1293755103, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1293755103_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ByteU5BU5DU5BU5D_t457913172* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1293755103_StaticFields, ___EmptyArray_4)); }
	inline ByteU5BU5DU5BU5D_t457913172* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ByteU5BU5DU5BU5D_t457913172** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ByteU5BU5DU5BU5D_t457913172* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1293755103_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1523322056 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1523322056 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1523322056 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1523322056 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1523322056 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1523322056 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1523322056 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1523322056 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef WWWFORM_T4064702195_H
#define WWWFORM_T4064702195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWWForm
struct  WWWForm_t4064702195  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t1293755103 * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t3319525431 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t3319525431 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t3319525431 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_t4116647657* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___formData_0)); }
	inline List_1_t1293755103 * get_formData_0() const { return ___formData_0; }
	inline List_1_t1293755103 ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t1293755103 * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier((&___formData_0), value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___fieldNames_1)); }
	inline List_1_t3319525431 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_t3319525431 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_t3319525431 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___fieldNames_1), value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___fileNames_2)); }
	inline List_1_t3319525431 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_t3319525431 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_t3319525431 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___fileNames_2), value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___types_3)); }
	inline List_1_t3319525431 * get_types_3() const { return ___types_3; }
	inline List_1_t3319525431 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_t3319525431 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier((&___types_3), value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___boundary_4)); }
	inline ByteU5BU5D_t4116647657* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_t4116647657* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((&___boundary_4), value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWWFORM_T4064702195_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef MEMORYSTREAM_T94973147_H
#define MEMORYSTREAM_T94973147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_t94973147  : public Stream_t1273022909
{
public:
	// System.Boolean System.IO.MemoryStream::canWrite
	bool ___canWrite_1;
	// System.Boolean System.IO.MemoryStream::allowGetBuffer
	bool ___allowGetBuffer_2;
	// System.Int32 System.IO.MemoryStream::capacity
	int32_t ___capacity_3;
	// System.Int32 System.IO.MemoryStream::length
	int32_t ___length_4;
	// System.Byte[] System.IO.MemoryStream::internalBuffer
	ByteU5BU5D_t4116647657* ___internalBuffer_5;
	// System.Int32 System.IO.MemoryStream::initialIndex
	int32_t ___initialIndex_6;
	// System.Boolean System.IO.MemoryStream::expandable
	bool ___expandable_7;
	// System.Boolean System.IO.MemoryStream::streamClosed
	bool ___streamClosed_8;
	// System.Int32 System.IO.MemoryStream::position
	int32_t ___position_9;
	// System.Int32 System.IO.MemoryStream::dirty_bytes
	int32_t ___dirty_bytes_10;

public:
	inline static int32_t get_offset_of_canWrite_1() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___canWrite_1)); }
	inline bool get_canWrite_1() const { return ___canWrite_1; }
	inline bool* get_address_of_canWrite_1() { return &___canWrite_1; }
	inline void set_canWrite_1(bool value)
	{
		___canWrite_1 = value;
	}

	inline static int32_t get_offset_of_allowGetBuffer_2() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___allowGetBuffer_2)); }
	inline bool get_allowGetBuffer_2() const { return ___allowGetBuffer_2; }
	inline bool* get_address_of_allowGetBuffer_2() { return &___allowGetBuffer_2; }
	inline void set_allowGetBuffer_2(bool value)
	{
		___allowGetBuffer_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_internalBuffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___internalBuffer_5)); }
	inline ByteU5BU5D_t4116647657* get_internalBuffer_5() const { return ___internalBuffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_internalBuffer_5() { return &___internalBuffer_5; }
	inline void set_internalBuffer_5(ByteU5BU5D_t4116647657* value)
	{
		___internalBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___internalBuffer_5), value);
	}

	inline static int32_t get_offset_of_initialIndex_6() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___initialIndex_6)); }
	inline int32_t get_initialIndex_6() const { return ___initialIndex_6; }
	inline int32_t* get_address_of_initialIndex_6() { return &___initialIndex_6; }
	inline void set_initialIndex_6(int32_t value)
	{
		___initialIndex_6 = value;
	}

	inline static int32_t get_offset_of_expandable_7() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___expandable_7)); }
	inline bool get_expandable_7() const { return ___expandable_7; }
	inline bool* get_address_of_expandable_7() { return &___expandable_7; }
	inline void set_expandable_7(bool value)
	{
		___expandable_7 = value;
	}

	inline static int32_t get_offset_of_streamClosed_8() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___streamClosed_8)); }
	inline bool get_streamClosed_8() const { return ___streamClosed_8; }
	inline bool* get_address_of_streamClosed_8() { return &___streamClosed_8; }
	inline void set_streamClosed_8(bool value)
	{
		___streamClosed_8 = value;
	}

	inline static int32_t get_offset_of_position_9() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___position_9)); }
	inline int32_t get_position_9() const { return ___position_9; }
	inline int32_t* get_address_of_position_9() { return &___position_9; }
	inline void set_position_9(int32_t value)
	{
		___position_9 = value;
	}

	inline static int32_t get_offset_of_dirty_bytes_10() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___dirty_bytes_10)); }
	inline int32_t get_dirty_bytes_10() const { return ___dirty_bytes_10; }
	inline int32_t* get_address_of_dirty_bytes_10() { return &___dirty_bytes_10; }
	inline void set_dirty_bytes_10(int32_t value)
	{
		___dirty_bytes_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_T94973147_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef FORMATEXCEPTION_T154580423_H
#define FORMATEXCEPTION_T154580423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t154580423  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T154580423_H
#ifndef URIKIND_T3816567336_H
#define URIKIND_T3816567336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriKind
struct  UriKind_t3816567336 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriKind_t3816567336, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIKIND_T3816567336_H
#ifndef UNITYWEBREQUESTMETHOD_T1119759680_H
#define UNITYWEBREQUESTMETHOD_T1119759680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod
struct  UnityWebRequestMethod_t1119759680 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityWebRequestMethod_t1119759680, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYWEBREQUESTMETHOD_T1119759680_H
#ifndef ASYNCOPERATION_T1445031843_H
#define ASYNCOPERATION_T1445031843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1445031843  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_t1617499438 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_completeCallback_1)); }
	inline Action_1_t1617499438 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_t1617499438 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_t1617499438 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T1445031843_H
#ifndef CERTIFICATEHANDLER_T2739891000_H
#define CERTIFICATEHANDLER_T2739891000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_t2739891000  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_t2739891000, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // CERTIFICATEHANDLER_T2739891000_H
#ifndef DOWNLOADHANDLER_T2937767557_H
#define DOWNLOADHANDLER_T2937767557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t2937767557  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t2937767557, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // DOWNLOADHANDLER_T2937767557_H
#ifndef STRINGCOMPARISON_T3657712135_H
#define STRINGCOMPARISON_T3657712135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t3657712135 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringComparison_t3657712135, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARISON_T3657712135_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef UPLOADHANDLER_T2993558019_H
#define UPLOADHANDLER_T2993558019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t2993558019  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t2993558019, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // UPLOADHANDLER_T2993558019_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef REGEXOPTIONS_T92845595_H
#define REGEXOPTIONS_T92845595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t92845595 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegexOptions_t92845595, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEXOPTIONS_T92845595_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef UNITYWEBREQUESTERROR_T359680823_H
#define UNITYWEBREQUESTERROR_T359680823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError
struct  UnityWebRequestError_t359680823 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/UnityWebRequestError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityWebRequestError_t359680823, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYWEBREQUESTERROR_T359680823_H
#ifndef UNITYWEBREQUEST_T463507806_H
#define UNITYWEBREQUEST_T463507806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t463507806  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t2937767557 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t2993558019 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t2739891000 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t100236324 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t2937767557 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t2937767557 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t2937767557 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DownloadHandler_1), value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_UploadHandler_2)); }
	inline UploadHandler_t2993558019 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t2993558019 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t2993558019 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_UploadHandler_2), value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_CertificateHandler_3)); }
	inline CertificateHandler_t2739891000 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_t2739891000 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_t2739891000 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CertificateHandler_3), value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_Uri_4)); }
	inline Uri_t100236324 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t100236324 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t100236324 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uri_4), value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t2937767557_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t2993558019_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t2739891000_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t100236324 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t2937767557_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t2993558019_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t2739891000_marshaled_com* ___m_CertificateHandler_3;
	Uri_t100236324 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
#endif // UNITYWEBREQUEST_T463507806_H
#ifndef UPLOADHANDLERRAW_T25761545_H
#define UPLOADHANDLERRAW_T25761545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UploadHandlerRaw
struct  UploadHandlerRaw_t25761545  : public UploadHandler_t2993558019
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t25761545_marshaled_pinvoke : public UploadHandler_t2993558019_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t25761545_marshaled_com : public UploadHandler_t2993558019_marshaled_com
{
};
#endif // UPLOADHANDLERRAW_T25761545_H
#ifndef DOWNLOADHANDLERBUFFER_T2928496527_H
#define DOWNLOADHANDLERBUFFER_T2928496527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandlerBuffer
struct  DownloadHandlerBuffer_t2928496527  : public DownloadHandler_t2937767557
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t2928496527_marshaled_pinvoke : public DownloadHandler_t2937767557_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t2928496527_marshaled_com : public DownloadHandler_t2937767557_marshaled_com
{
};
#endif // DOWNLOADHANDLERBUFFER_T2928496527_H
#ifndef UNITYWEBREQUESTASYNCOPERATION_T3852015985_H
#define UNITYWEBREQUESTASYNCOPERATION_T3852015985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_t3852015985  : public AsyncOperation_t1445031843
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t463507806 * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_t3852015985, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_t463507806 * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_t463507806 * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwebRequestU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t3852015985_marshaled_pinvoke : public AsyncOperation_t1445031843_marshaled_pinvoke
{
	UnityWebRequest_t463507806_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t3852015985_marshaled_com : public AsyncOperation_t1445031843_marshaled_com
{
	UnityWebRequest_t463507806_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};
#endif // UNITYWEBREQUESTASYNCOPERATION_T3852015985_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef REGEX_T3657309853_H
#define REGEX_T3657309853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Regex
struct  Regex_t3657309853  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::machineFactory
	RuntimeObject* ___machineFactory_1;
	// System.Collections.IDictionary System.Text.RegularExpressions.Regex::mapping
	RuntimeObject* ___mapping_2;
	// System.Int32 System.Text.RegularExpressions.Regex::group_count
	int32_t ___group_count_3;
	// System.Int32 System.Text.RegularExpressions.Regex::gap
	int32_t ___gap_4;
	// System.String[] System.Text.RegularExpressions.Regex::group_names
	StringU5BU5D_t1281789340* ___group_names_5;
	// System.Int32[] System.Text.RegularExpressions.Regex::group_numbers
	Int32U5BU5D_t385246372* ___group_numbers_6;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_7;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_8;

public:
	inline static int32_t get_offset_of_machineFactory_1() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___machineFactory_1)); }
	inline RuntimeObject* get_machineFactory_1() const { return ___machineFactory_1; }
	inline RuntimeObject** get_address_of_machineFactory_1() { return &___machineFactory_1; }
	inline void set_machineFactory_1(RuntimeObject* value)
	{
		___machineFactory_1 = value;
		Il2CppCodeGenWriteBarrier((&___machineFactory_1), value);
	}

	inline static int32_t get_offset_of_mapping_2() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___mapping_2)); }
	inline RuntimeObject* get_mapping_2() const { return ___mapping_2; }
	inline RuntimeObject** get_address_of_mapping_2() { return &___mapping_2; }
	inline void set_mapping_2(RuntimeObject* value)
	{
		___mapping_2 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_2), value);
	}

	inline static int32_t get_offset_of_group_count_3() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___group_count_3)); }
	inline int32_t get_group_count_3() const { return ___group_count_3; }
	inline int32_t* get_address_of_group_count_3() { return &___group_count_3; }
	inline void set_group_count_3(int32_t value)
	{
		___group_count_3 = value;
	}

	inline static int32_t get_offset_of_gap_4() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___gap_4)); }
	inline int32_t get_gap_4() const { return ___gap_4; }
	inline int32_t* get_address_of_gap_4() { return &___gap_4; }
	inline void set_gap_4(int32_t value)
	{
		___gap_4 = value;
	}

	inline static int32_t get_offset_of_group_names_5() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___group_names_5)); }
	inline StringU5BU5D_t1281789340* get_group_names_5() const { return ___group_names_5; }
	inline StringU5BU5D_t1281789340** get_address_of_group_names_5() { return &___group_names_5; }
	inline void set_group_names_5(StringU5BU5D_t1281789340* value)
	{
		___group_names_5 = value;
		Il2CppCodeGenWriteBarrier((&___group_names_5), value);
	}

	inline static int32_t get_offset_of_group_numbers_6() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___group_numbers_6)); }
	inline Int32U5BU5D_t385246372* get_group_numbers_6() const { return ___group_numbers_6; }
	inline Int32U5BU5D_t385246372** get_address_of_group_numbers_6() { return &___group_numbers_6; }
	inline void set_group_numbers_6(Int32U5BU5D_t385246372* value)
	{
		___group_numbers_6 = value;
		Il2CppCodeGenWriteBarrier((&___group_numbers_6), value);
	}

	inline static int32_t get_offset_of_pattern_7() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___pattern_7)); }
	inline String_t* get_pattern_7() const { return ___pattern_7; }
	inline String_t** get_address_of_pattern_7() { return &___pattern_7; }
	inline void set_pattern_7(String_t* value)
	{
		___pattern_7 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_7), value);
	}

	inline static int32_t get_offset_of_roptions_8() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___roptions_8)); }
	inline int32_t get_roptions_8() const { return ___roptions_8; }
	inline int32_t* get_address_of_roptions_8() { return &___roptions_8; }
	inline void set_roptions_8(int32_t value)
	{
		___roptions_8 = value;
	}
};

struct Regex_t3657309853_StaticFields
{
public:
	// System.Text.RegularExpressions.FactoryCache System.Text.RegularExpressions.Regex::cache
	FactoryCache_t2327118887 * ___cache_0;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___cache_0)); }
	inline FactoryCache_t2327118887 * get_cache_0() const { return ___cache_0; }
	inline FactoryCache_t2327118887 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(FactoryCache_t2327118887 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier((&___cache_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEX_T3657309853_H
#ifndef ACTION_1_T1617499438_H
#define ACTION_1_T1617499438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.AsyncOperation>
struct  Action_1_t1617499438  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1617499438_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
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

extern "C" void DownloadHandler_t2937767557_marshal_pinvoke(const DownloadHandler_t2937767557& unmarshaled, DownloadHandler_t2937767557_marshaled_pinvoke& marshaled);
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke_back(const DownloadHandler_t2937767557_marshaled_pinvoke& marshaled, DownloadHandler_t2937767557& unmarshaled);
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke_cleanup(DownloadHandler_t2937767557_marshaled_pinvoke& marshaled);
extern "C" void UploadHandler_t2993558019_marshal_pinvoke(const UploadHandler_t2993558019& unmarshaled, UploadHandler_t2993558019_marshaled_pinvoke& marshaled);
extern "C" void UploadHandler_t2993558019_marshal_pinvoke_back(const UploadHandler_t2993558019_marshaled_pinvoke& marshaled, UploadHandler_t2993558019& unmarshaled);
extern "C" void UploadHandler_t2993558019_marshal_pinvoke_cleanup(UploadHandler_t2993558019_marshaled_pinvoke& marshaled);
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke(const CertificateHandler_t2739891000& unmarshaled, CertificateHandler_t2739891000_marshaled_pinvoke& marshaled);
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke_back(const CertificateHandler_t2739891000_marshaled_pinvoke& marshaled, CertificateHandler_t2739891000& unmarshaled);
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke_cleanup(CertificateHandler_t2739891000_marshaled_pinvoke& marshaled);
extern "C" void DownloadHandler_t2937767557_marshal_com(const DownloadHandler_t2937767557& unmarshaled, DownloadHandler_t2937767557_marshaled_com& marshaled);
extern "C" void DownloadHandler_t2937767557_marshal_com_back(const DownloadHandler_t2937767557_marshaled_com& marshaled, DownloadHandler_t2937767557& unmarshaled);
extern "C" void DownloadHandler_t2937767557_marshal_com_cleanup(DownloadHandler_t2937767557_marshaled_com& marshaled);
extern "C" void UploadHandler_t2993558019_marshal_com(const UploadHandler_t2993558019& unmarshaled, UploadHandler_t2993558019_marshaled_com& marshaled);
extern "C" void UploadHandler_t2993558019_marshal_com_back(const UploadHandler_t2993558019_marshaled_com& marshaled, UploadHandler_t2993558019& unmarshaled);
extern "C" void UploadHandler_t2993558019_marshal_com_cleanup(UploadHandler_t2993558019_marshaled_com& marshaled);
extern "C" void CertificateHandler_t2739891000_marshal_com(const CertificateHandler_t2739891000& unmarshaled, CertificateHandler_t2739891000_marshaled_com& marshaled);
extern "C" void CertificateHandler_t2739891000_marshal_com_back(const CertificateHandler_t2739891000_marshaled_com& marshaled, CertificateHandler_t2739891000& unmarshaled);
extern "C" void CertificateHandler_t2739891000_marshal_com_cleanup(CertificateHandler_t2739891000_marshaled_com& marshaled);
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke(const UnityWebRequest_t463507806& unmarshaled, UnityWebRequest_t463507806_marshaled_pinvoke& marshaled);
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke_back(const UnityWebRequest_t463507806_marshaled_pinvoke& marshaled, UnityWebRequest_t463507806& unmarshaled);
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke_cleanup(UnityWebRequest_t463507806_marshaled_pinvoke& marshaled);
extern "C" void UnityWebRequest_t463507806_marshal_com(const UnityWebRequest_t463507806& unmarshaled, UnityWebRequest_t463507806_marshaled_com& marshaled);
extern "C" void UnityWebRequest_t463507806_marshal_com_back(const UnityWebRequest_t463507806_marshaled_com& marshaled, UnityWebRequest_t463507806& unmarshaled);
extern "C" void UnityWebRequest_t463507806_marshal_com_cleanup(UnityWebRequest_t463507806_marshaled_com& marshaled);

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);

// System.Void UnityEngine.Networking.CertificateHandler::Dispose()
extern "C"  void CertificateHandler_Dispose_m2100863831 (CertificateHandler_t2739891000 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::Finalize()
extern "C"  void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C"  bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.CertificateHandler::Release()
extern "C"  void CertificateHandler_Release_m648790222 (CertificateHandler_t2739891000 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
extern "C"  void DownloadHandler_Dispose_m2747726581 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::Release()
extern "C"  void DownloadHandler_Release_m3024555697 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.Networking.DownloadHandler::GetTextEncoder()
extern "C"  Encoding_t1523322056 * DownloadHandler_GetTextEncoder_m3244408468 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.DownloadHandler::GetContentType()
extern "C"  String_t* DownloadHandler_GetContentType_m4249877960 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
extern "C"  int32_t String_IndexOf_m1298810678 (String_t* __this, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
extern "C"  int32_t String_IndexOf_m2466398549 (String_t* __this, Il2CppChar p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
extern "C"  String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim()
extern "C"  String_t* String_Trim_m923598732 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim(System.Char[])
extern "C"  String_t* String_Trim_m3384720403 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char)
extern "C"  int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.String)
extern "C"  Encoding_t1523322056 * Encoding_GetEncoding_m2599798446 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C"  Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
extern "C"  void DownloadHandler__ctor_m2126376377 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::InternalCreateBuffer()
extern "C"  void DownloadHandlerBuffer_InternalCreateBuffer_m301356089 (DownloadHandlerBuffer_t2928496527 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)
extern "C"  intptr_t DownloadHandlerBuffer_Create_m1196797347 (RuntimeObject * __this /* static, unused */, DownloadHandlerBuffer_t2928496527 * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.DownloadHandlerBuffer::InternalGetData()
extern "C"  ByteU5BU5D_t4116647657* DownloadHandlerBuffer_InternalGetData_m3771716959 (DownloadHandlerBuffer_t2928496527 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)
extern "C"  ByteU5BU5D_t4116647657* DownloadHandler_InternalGetByteArray_m4277508027 (RuntimeObject * __this /* static, unused */, DownloadHandler_t2937767557 * ___dh0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Networking.UnityWebRequest::Create()
extern "C"  intptr_t UnityWebRequest_Create_m1328190473 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetDefaults()
extern "C"  void UnityWebRequest_InternalSetDefaults_m3669466854 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_url(System.String)
extern "C"  void UnityWebRequest_set_url_m2541992937 (UnityWebRequest_t463507806 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
extern "C"  void UnityWebRequest_set_method_m3969249710 (UnityWebRequest_t463507806 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::Abort()
extern "C"  void UnityWebRequest_Abort_m1490033122 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::Release()
extern "C"  void UnityWebRequest_Release_m2347155176 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeDownloadHandlerOnDispose(System.Boolean)
extern "C"  void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m2026832119 (UnityWebRequest_t463507806 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeUploadHandlerOnDispose(System.Boolean)
extern "C"  void UnityWebRequest_set_disposeUploadHandlerOnDispose_m2753289015 (UnityWebRequest_t463507806 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeCertificateHandlerOnDispose(System.Boolean)
extern "C"  void UnityWebRequest_set_disposeCertificateHandlerOnDispose_m4266558538 (UnityWebRequest_t463507806 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::DisposeHandlers()
extern "C"  void UnityWebRequest_DisposeHandlers_m3575283268 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalDestroy()
extern "C"  void UnityWebRequest_InternalDestroy_m2954597795 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C"  void GC_SuppressFinalize_m1177400158 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeDownloadHandlerOnDispose()
extern "C"  bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_m3413606992 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
extern "C"  DownloadHandler_t2937767557 * UnityWebRequest_get_downloadHandler_m534911913 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeUploadHandlerOnDispose()
extern "C"  bool UnityWebRequest_get_disposeUploadHandlerOnDispose_m2375741633 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::get_uploadHandler()
extern "C"  UploadHandler_t2993558019 * UnityWebRequest_get_uploadHandler_m3692520788 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UploadHandler::Dispose()
extern "C"  void UploadHandler_Dispose_m3057340132 (UploadHandler_t2993558019 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeCertificateHandlerOnDispose()
extern "C"  bool UnityWebRequest_get_disposeCertificateHandlerOnDispose_m4051074453 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::get_certificateHandler()
extern "C"  CertificateHandler_t2739891000 * UnityWebRequest_get_certificateHandler_m3453757623 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::BeginWebRequest()
extern "C"  UnityWebRequestAsyncOperation_t3852015985 * UnityWebRequest_BeginWebRequest_m464964044 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::set_webRequest(UnityEngine.Networking.UnityWebRequest)
extern "C"  void UnityWebRequestAsyncOperation_set_webRequest_m3712663211 (UnityWebRequestAsyncOperation_t3852015985 * __this, UnityWebRequest_t463507806 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable()
extern "C"  bool UnityWebRequest_get_isModifiable_m4181352937 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
extern "C"  int32_t UnityWebRequest_SetMethod_m3005196532 (UnityWebRequest_t463507806 * __this, int32_t ___methodType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
extern "C"  String_t* UnityWebRequest_GetWebErrorString_m4076320575 (RuntimeObject * __this /* static, unused */, int32_t ___err0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)
extern "C"  int32_t UnityWebRequest_SetCustomMethod_m305650395 (UnityWebRequest_t463507806 * __this, String_t* ___customMethodName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToUpper()
extern "C"  String_t* String_ToUpper_m3324454496 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
extern "C"  void UnityWebRequest_InternalSetMethod_m287631745 (UnityWebRequest_t463507806 * __this, int32_t ___methodType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetCustomMethod(System.String)
extern "C"  void UnityWebRequest_InternalSetCustomMethod_m3670745235 (UnityWebRequest_t463507806 * __this, String_t* ___customMethodName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.UnityWebRequest::GetUrl()
extern "C"  String_t* UnityWebRequest_GetUrl_m3419782119 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngineInternal.WebRequestUtils::MakeInitialUrl(System.String,System.String)
extern "C"  String_t* WebRequestUtils_MakeInitialUrl_m973728695 (RuntimeObject * __this /* static, unused */, String_t* ___targetUrl0, String_t* ___localUrl1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetUrl(System.String)
extern "C"  void UnityWebRequest_InternalSetUrl_m1036291515 (UnityWebRequest_t463507806 * __this, String_t* ___url0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)
extern "C"  int32_t UnityWebRequest_SetUrl_m4135786364 (UnityWebRequest_t463507806 * __this, String_t* ___url0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetChunked(System.Boolean)
extern "C"  int32_t UnityWebRequest_SetChunked_m2819118383 (UnityWebRequest_t463507806 * __this, bool ___chunked0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)
extern "C"  int32_t UnityWebRequest_InternalSetRequestHeader_m2218760805 (UnityWebRequest_t463507806 * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)
extern "C"  int32_t UnityWebRequest_SetUploadHandler_m2465141380 (UnityWebRequest_t463507806 * __this, UploadHandler_t2993558019 * ___uh0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)
extern "C"  int32_t UnityWebRequest_SetDownloadHandler_m2637095256 (UnityWebRequest_t463507806 * __this, DownloadHandler_t2937767557 * ___dh0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C"  void AsyncOperation__ctor_m410195587 (AsyncOperation_t1445031843 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UploadHandler::Release()
extern "C"  void UploadHandler_Release_m2289600429 (UploadHandler_t2993558019 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UploadHandler::.ctor()
extern "C"  void UploadHandler__ctor_m1351468229 (UploadHandler_t2993558019 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Networking.UploadHandlerRaw::Create(UnityEngine.Networking.UploadHandlerRaw,System.Byte[])
extern "C"  intptr_t UploadHandlerRaw_Create_m2571854625 (RuntimeObject * __this /* static, unused */, UploadHandlerRaw_t25761545 * ___self0, ByteU5BU5D_t4116647657* ___data1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UploadHandlerRaw::InternalSetContentType(System.String)
extern "C"  void UploadHandlerRaw_InternalSetContentType_m1631554169 (UploadHandlerRaw_t25761545 * __this, String_t* ___newContentType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
#define List_1__ctor_m2882708797(__this, method) ((  void (*) (List_1_t1293755103 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
#define List_1__ctor_m706204246(__this, method) ((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
extern "C"  Encoding_t1523322056 * Encoding_get_ASCII_m3595602635 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
#define Dictionary_2__ctor_m3302800229(__this, method) ((  void (*) (Dictionary_2_t1632706988 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m187286838(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1632706988 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Byte[] UnityEngine.WWWTranscoder::Decode(System.Byte[],System.Byte,System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* WWWTranscoder_Decode_m157051313 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_t4116647657* ___space2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
extern "C"  void MemoryStream__ctor_m2128850779 (MemoryStream_t94973147 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::ByteSubArrayEquals(System.Byte[],System.Int32,System.Byte[])
extern "C"  bool WWWTranscoder_ByteSubArrayEquals_m2163464440 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___array0, int32_t ___index1, ByteU5BU5D_t4116647657* ___comperand2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.WWWTranscoder::Hex2Byte(System.Byte[],System.Int32)
extern "C"  uint8_t WWWTranscoder_Hex2Byte_m4102152163 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___b0, int32_t ___offset1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWWForm::get_DefaultEncoding()
extern "C"  Encoding_t1523322056 * WWWForm_get_DefaultEncoding_m4131957975 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.UriKind)
extern "C"  void Uri__ctor_m3040793867 (Uri_t100236324 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C"  bool Uri_get_IsAbsoluteUri_m3666899587 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsoluteUri()
extern "C"  String_t* Uri_get_AbsoluteUri_m2582056986 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Uri,System.Uri)
extern "C"  void Uri__ctor_m253204164 (Uri_t100236324 * __this, Uri_t100236324 * p0, Uri_t100236324 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String)
extern "C"  void Uri__ctor_m800430703 (Uri_t100236324 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Uri,System.String)
extern "C"  void Uri__ctor_m4293005803 (Uri_t100236324 * __this, Uri_t100236324 * p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern "C"  bool Uri_op_Equality_m685520154 (RuntimeObject * __this /* static, unused */, Uri_t100236324 * p0, Uri_t100236324 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
extern "C"  bool Regex_IsMatch_m4067478295 (Regex_t3657309853 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Scheme()
extern "C"  String_t* Uri_get_Scheme_m2109479391 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngineInternal.WebRequestUtils::MakeUriString(System.Uri,System.String,System.Boolean)
extern "C"  String_t* WebRequestUtils_MakeUriString_m291605890 (RuntimeObject * __this /* static, unused */, Uri_t100236324 * ___targetUri0, String_t* ___targetUrl1, bool ___prependProtocol2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
extern "C"  bool String_StartsWith_m2640722675 (String_t* __this, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsLoopback()
extern "C"  bool Uri_get_IsLoopback_m2492530169 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_OriginalString()
extern "C"  String_t* Uri_get_OriginalString_m3715995233 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsolutePath()
extern "C"  String_t* Uri_get_AbsolutePath_m590948575 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Contains(System.String)
extern "C"  bool String_Contains_m1147431944 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngineInternal.WebRequestUtils::URLDecode(System.String)
extern "C"  String_t* WebRequestUtils_URLDecode_m2727298221 (RuntimeObject * __this /* static, unused */, String_t* ___encoded0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32)
extern "C"  void StringBuilder__ctor_m2502310956 (StringBuilder_t * __this, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_PathAndQuery()
extern "C"  String_t* Uri_get_PathAndQuery_m2396197970 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Fragment()
extern "C"  String_t* Uri_get_Fragment_m575158891 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::URLDecode(System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* WWWTranscoder_URLDecode_m3587034544 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___toEncode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern "C"  void Regex__ctor_m897876424 (Regex_t3657309853 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// Conversion methods for marshalling of: UnityEngine.Networking.CertificateHandler
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke(const CertificateHandler_t2739891000& unmarshaled, CertificateHandler_t2739891000_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke_back(const CertificateHandler_t2739891000_marshaled_pinvoke& marshaled, CertificateHandler_t2739891000& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.CertificateHandler
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke_cleanup(CertificateHandler_t2739891000_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.CertificateHandler
extern "C" void CertificateHandler_t2739891000_marshal_com(const CertificateHandler_t2739891000& unmarshaled, CertificateHandler_t2739891000_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void CertificateHandler_t2739891000_marshal_com_back(const CertificateHandler_t2739891000_marshaled_com& marshaled, CertificateHandler_t2739891000& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.CertificateHandler
extern "C" void CertificateHandler_t2739891000_marshal_com_cleanup(CertificateHandler_t2739891000_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.CertificateHandler::Release()
extern "C"  void CertificateHandler_Release_m648790222 (CertificateHandler_t2739891000 * __this, const RuntimeMethod* method)
{
	typedef void (*CertificateHandler_Release_m648790222_ftn) (CertificateHandler_t2739891000 *);
	static CertificateHandler_Release_m648790222_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CertificateHandler_Release_m648790222_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.CertificateHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.CertificateHandler::Finalize()
extern "C"  void CertificateHandler_Finalize_m2289088740 (CertificateHandler_t2739891000 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		CertificateHandler_Dispose_m2100863831(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[])
extern "C"  bool CertificateHandler_ValidateCertificate_m937187171 (CertificateHandler_t2739891000 * __this, ByteU5BU5D_t4116647657* ___certificateData0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificateNative(System.Byte[])
extern "C"  bool CertificateHandler_ValidateCertificateNative_m2315002656 (CertificateHandler_t2739891000 * __this, ByteU5BU5D_t4116647657* ___certificateData0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		ByteU5BU5D_t4116647657* L_0 = ___certificateData0;
		bool L_1 = VirtFuncInvoker1< bool, ByteU5BU5D_t4116647657* >::Invoke(5 /* System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[]) */, __this, L_0);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Networking.CertificateHandler::Dispose()
extern "C"  void CertificateHandler_Dispose_m2100863831 (CertificateHandler_t2739891000 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CertificateHandler_Dispose_m2100863831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		CertificateHandler_Release_m648790222(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0029:
	{
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
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandler
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke(const DownloadHandler_t2937767557& unmarshaled, DownloadHandler_t2937767557_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke_back(const DownloadHandler_t2937767557_marshaled_pinvoke& marshaled, DownloadHandler_t2937767557& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandler
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke_cleanup(DownloadHandler_t2937767557_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandler
extern "C" void DownloadHandler_t2937767557_marshal_com(const DownloadHandler_t2937767557& unmarshaled, DownloadHandler_t2937767557_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void DownloadHandler_t2937767557_marshal_com_back(const DownloadHandler_t2937767557_marshaled_com& marshaled, DownloadHandler_t2937767557& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandler
extern "C" void DownloadHandler_t2937767557_marshal_com_cleanup(DownloadHandler_t2937767557_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
extern "C"  void DownloadHandler__ctor_m2126376377 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandler::Release()
extern "C"  void DownloadHandler_Release_m3024555697 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	typedef void (*DownloadHandler_Release_m3024555697_ftn) (DownloadHandler_t2937767557 *);
	static DownloadHandler_Release_m3024555697_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_Release_m3024555697_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.DownloadHandler::Finalize()
extern "C"  void DownloadHandler_Finalize_m3135872287 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		DownloadHandler_Dispose_m2747726581(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
extern "C"  void DownloadHandler_Dispose_m2747726581 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DownloadHandler_Dispose_m2747726581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		DownloadHandler_Release_m3024555697(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0029:
	{
		return;
	}
}
// System.String UnityEngine.Networking.DownloadHandler::get_text()
extern "C"  String_t* DownloadHandler_get_text_m2427232382 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String UnityEngine.Networking.DownloadHandler::GetText() */, __this);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::GetData()
extern "C"  ByteU5BU5D_t4116647657* DownloadHandler_GetData_m364367605 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		V_0 = (ByteU5BU5D_t4116647657*)NULL;
		goto IL_0008;
	}

IL_0008:
	{
		ByteU5BU5D_t4116647657* L_0 = V_0;
		return L_0;
	}
}
// System.String UnityEngine.Networking.DownloadHandler::GetText()
extern "C"  String_t* DownloadHandler_GetText_m600283602 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DownloadHandler_GetText_m600283602_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(5 /* System.Byte[] UnityEngine.Networking.DownloadHandler::GetData() */, __this);
		V_0 = L_0;
		ByteU5BU5D_t4116647657* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_2 = V_0;
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		Encoding_t1523322056 * L_3 = DownloadHandler_GetTextEncoder_m3244408468(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_4 = V_0;
		ByteU5BU5D_t4116647657* L_5 = V_0;
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(21 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))));
		V_1 = L_6;
		goto IL_003a;
	}

IL_002e:
	{
		V_1 = _stringLiteral757602046;
		goto IL_003a;
	}

IL_003a:
	{
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.Text.Encoding UnityEngine.Networking.DownloadHandler::GetTextEncoder()
extern "C"  Encoding_t1523322056 * DownloadHandler_GetTextEncoder_m3244408468 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DownloadHandler_GetTextEncoder_m3244408468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	Encoding_t1523322056 * V_5 = NULL;
	ArgumentException_t132251570 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = DownloadHandler_GetContentType_m4249877960(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = String_IndexOf_m1298810678(L_3, _stringLiteral3515428721, 5, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)(-1))))
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = String_IndexOf_m2466398549(L_6, ((int32_t)61), L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) <= ((int32_t)(-1))))
		{
			goto IL_00af;
		}
	}
	{
		String_t* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		String_t* L_12 = String_Substring_m2848979100(L_10, ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13 = String_Trim_m923598732(L_12, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_14 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t3528271667* L_15 = L_14;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)39));
		CharU5BU5D_t3528271667* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)34));
		NullCheck(L_13);
		String_t* L_17 = String_Trim_m3384720403(L_13, L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18 = String_Trim_m923598732(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		String_t* L_19 = V_3;
		NullCheck(L_19);
		int32_t L_20 = String_IndexOf_m363431711(L_19, ((int32_t)59), /*hidden argument*/NULL);
		V_4 = L_20;
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) <= ((int32_t)(-1))))
		{
			goto IL_0080;
		}
	}
	{
		String_t* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		String_t* L_24 = String_Substring_m1610150815(L_22, 0, L_23, /*hidden argument*/NULL);
		V_3 = L_24;
	}

IL_0080:
	try
	{ // begin try (depth: 1)
		String_t* L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_26 = Encoding_GetEncoding_m2599798446(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		V_5 = L_26;
		goto IL_00bd;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_t132251570_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_008e;
		throw e;
	}

CATCH_008e:
	{ // begin catch(System.ArgumentException)
		V_6 = ((ArgumentException_t132251570 *)__exception_local);
		String_t* L_27 = V_3;
		ArgumentException_t132251570 * L_28 = V_6;
		NullCheck(L_28);
		String_t* L_29 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_28);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_30 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral463295005, L_27, L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		goto IL_00ae;
	} // end catch (depth: 1)

IL_00ae:
	{
	}

IL_00af:
	{
	}

IL_00b0:
	{
	}

IL_00b1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_31 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_5 = L_31;
		goto IL_00bd;
	}

IL_00bd:
	{
		Encoding_t1523322056 * L_32 = V_5;
		return L_32;
	}
}
// System.String UnityEngine.Networking.DownloadHandler::GetContentType()
extern "C"  String_t* DownloadHandler_GetContentType_m4249877960 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*DownloadHandler_GetContentType_m4249877960_ftn) (DownloadHandler_t2937767557 *);
	static DownloadHandler_GetContentType_m4249877960_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_GetContentType_m4249877960_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::GetContentType()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)
extern "C"  ByteU5BU5D_t4116647657* DownloadHandler_InternalGetByteArray_m4277508027 (RuntimeObject * __this /* static, unused */, DownloadHandler_t2937767557 * ___dh0, const RuntimeMethod* method)
{
	typedef ByteU5BU5D_t4116647657* (*DownloadHandler_InternalGetByteArray_m4277508027_ftn) (DownloadHandler_t2937767557 *);
	static DownloadHandler_InternalGetByteArray_m4277508027_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_InternalGetByteArray_m4277508027_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)");
	ByteU5BU5D_t4116647657* retVal = _il2cpp_icall_func(___dh0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
extern "C" void DownloadHandlerBuffer_t2928496527_marshal_pinvoke(const DownloadHandlerBuffer_t2928496527& unmarshaled, DownloadHandlerBuffer_t2928496527_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void DownloadHandlerBuffer_t2928496527_marshal_pinvoke_back(const DownloadHandlerBuffer_t2928496527_marshaled_pinvoke& marshaled, DownloadHandlerBuffer_t2928496527& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
extern "C" void DownloadHandlerBuffer_t2928496527_marshal_pinvoke_cleanup(DownloadHandlerBuffer_t2928496527_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
extern "C" void DownloadHandlerBuffer_t2928496527_marshal_com(const DownloadHandlerBuffer_t2928496527& unmarshaled, DownloadHandlerBuffer_t2928496527_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void DownloadHandlerBuffer_t2928496527_marshal_com_back(const DownloadHandlerBuffer_t2928496527_marshaled_com& marshaled, DownloadHandlerBuffer_t2928496527& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
extern "C" void DownloadHandlerBuffer_t2928496527_marshal_com_cleanup(DownloadHandlerBuffer_t2928496527_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
extern "C"  void DownloadHandlerBuffer__ctor_m914761499 (DownloadHandlerBuffer_t2928496527 * __this, const RuntimeMethod* method)
{
	{
		DownloadHandler__ctor_m2126376377(__this, /*hidden argument*/NULL);
		DownloadHandlerBuffer_InternalCreateBuffer_m301356089(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)
extern "C"  intptr_t DownloadHandlerBuffer_Create_m1196797347 (RuntimeObject * __this /* static, unused */, DownloadHandlerBuffer_t2928496527 * ___obj0, const RuntimeMethod* method)
{
	typedef intptr_t (*DownloadHandlerBuffer_Create_m1196797347_ftn) (DownloadHandlerBuffer_t2928496527 *);
	static DownloadHandlerBuffer_Create_m1196797347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandlerBuffer_Create_m1196797347_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)");
	intptr_t retVal = _il2cpp_icall_func(___obj0);
	return retVal;
}
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::InternalCreateBuffer()
extern "C"  void DownloadHandlerBuffer_InternalCreateBuffer_m301356089 (DownloadHandlerBuffer_t2928496527 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = DownloadHandlerBuffer_Create_m1196797347(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		((DownloadHandler_t2937767557 *)__this)->set_m_Ptr_0(L_0);
		return;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandlerBuffer::GetData()
extern "C"  ByteU5BU5D_t4116647657* DownloadHandlerBuffer_GetData_m752341367 (DownloadHandlerBuffer_t2928496527 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = DownloadHandlerBuffer_InternalGetData_m3771716959(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ByteU5BU5D_t4116647657* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandlerBuffer::InternalGetData()
extern "C"  ByteU5BU5D_t4116647657* DownloadHandlerBuffer_InternalGetData_m3771716959 (DownloadHandlerBuffer_t2928496527 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = DownloadHandler_InternalGetByteArray_m4277508027(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ByteU5BU5D_t4116647657* L_1 = V_0;
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






// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequest
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke(const UnityWebRequest_t463507806& unmarshaled, UnityWebRequest_t463507806_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL, NULL);
}
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke_back(const UnityWebRequest_t463507806_marshaled_pinvoke& marshaled, UnityWebRequest_t463507806& unmarshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequest
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke_cleanup(UnityWebRequest_t463507806_marshaled_pinvoke& marshaled)
{
}






// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequest
extern "C" void UnityWebRequest_t463507806_marshal_com(const UnityWebRequest_t463507806& unmarshaled, UnityWebRequest_t463507806_marshaled_com& marshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL, NULL);
}
extern "C" void UnityWebRequest_t463507806_marshal_com_back(const UnityWebRequest_t463507806_marshaled_com& marshaled, UnityWebRequest_t463507806& unmarshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequest
extern "C" void UnityWebRequest_t463507806_marshal_com_cleanup(UnityWebRequest_t463507806_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
extern "C"  void UnityWebRequest__ctor_m2386773268 (UnityWebRequest_t463507806 * __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = UnityWebRequest_Create_m1328190473(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Ptr_0(L_0);
		UnityWebRequest_InternalSetDefaults_m3669466854(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___url0;
		UnityWebRequest_set_url_m2541992937(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___method1;
		UnityWebRequest_set_method_m3969249710(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
extern "C"  String_t* UnityWebRequest_GetWebErrorString_m4076320575 (RuntimeObject * __this /* static, unused */, int32_t ___err0, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetWebErrorString_m4076320575_ftn) (int32_t);
	static UnityWebRequest_GetWebErrorString_m4076320575_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetWebErrorString_m4076320575_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)");
	String_t* retVal = _il2cpp_icall_func(___err0);
	return retVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeCertificateHandlerOnDispose()
extern "C"  bool UnityWebRequest_get_disposeCertificateHandlerOnDispose_m4051074453 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeCertificateHandlerOnDispose(System.Boolean)
extern "C"  void UnityWebRequest_set_disposeCertificateHandlerOnDispose_m4266558538 (UnityWebRequest_t463507806 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeDownloadHandlerOnDispose()
extern "C"  bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_m3413606992 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeDownloadHandlerOnDispose(System.Boolean)
extern "C"  void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m2026832119 (UnityWebRequest_t463507806 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeUploadHandlerOnDispose()
extern "C"  bool UnityWebRequest_get_disposeUploadHandlerOnDispose_m2375741633 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeUploadHandlerOnDispose(System.Boolean)
extern "C"  void UnityWebRequest_set_disposeUploadHandlerOnDispose_m2753289015 (UnityWebRequest_t463507806 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.IntPtr UnityEngine.Networking.UnityWebRequest::Create()
extern "C"  intptr_t UnityWebRequest_Create_m1328190473 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (*UnityWebRequest_Create_m1328190473_ftn) ();
	static UnityWebRequest_Create_m1328190473_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Create_m1328190473_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Create()");
	intptr_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::Release()
extern "C"  void UnityWebRequest_Release_m2347155176 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef void (*UnityWebRequest_Release_m2347155176_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_Release_m2347155176_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Release_m2347155176_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalDestroy()
extern "C"  void UnityWebRequest_InternalDestroy_m2954597795 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_InternalDestroy_m2954597795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		UnityWebRequest_Abort_m1490033122(__this, /*hidden argument*/NULL);
		UnityWebRequest_Release_m2347155176(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetDefaults()
extern "C"  void UnityWebRequest_InternalSetDefaults_m3669466854 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	{
		UnityWebRequest_set_disposeDownloadHandlerOnDispose_m2026832119(__this, (bool)1, /*hidden argument*/NULL);
		UnityWebRequest_set_disposeUploadHandlerOnDispose_m2753289015(__this, (bool)1, /*hidden argument*/NULL);
		UnityWebRequest_set_disposeCertificateHandlerOnDispose_m4266558538(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Finalize()
extern "C"  void UnityWebRequest_Finalize_m2219008825 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		UnityWebRequest_DisposeHandlers_m3575283268(__this, /*hidden argument*/NULL);
		UnityWebRequest_InternalDestroy_m2954597795(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x19, FINALLY_0012);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0012;
	}

FINALLY_0012:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(18)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(18)
	{
		IL2CPP_JUMP_TBL(0x19, IL_0019)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
extern "C"  void UnityWebRequest_Dispose_m3261105905 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	{
		UnityWebRequest_DisposeHandlers_m3575283268(__this, /*hidden argument*/NULL);
		UnityWebRequest_InternalDestroy_m2954597795(__this, /*hidden argument*/NULL);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::DisposeHandlers()
extern "C"  void UnityWebRequest_DisposeHandlers_m3575283268 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	DownloadHandler_t2937767557 * V_0 = NULL;
	UploadHandler_t2993558019 * V_1 = NULL;
	CertificateHandler_t2739891000 * V_2 = NULL;
	{
		bool L_0 = UnityWebRequest_get_disposeDownloadHandlerOnDispose_m3413606992(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		DownloadHandler_t2937767557 * L_1 = UnityWebRequest_get_downloadHandler_m534911913(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		DownloadHandler_t2937767557 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		DownloadHandler_t2937767557 * L_3 = V_0;
		NullCheck(L_3);
		DownloadHandler_Dispose_m2747726581(L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
	}

IL_0023:
	{
		bool L_4 = UnityWebRequest_get_disposeUploadHandlerOnDispose_m2375741633(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		UploadHandler_t2993558019 * L_5 = UnityWebRequest_get_uploadHandler_m3692520788(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		UploadHandler_t2993558019 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		UploadHandler_t2993558019 * L_7 = V_1;
		NullCheck(L_7);
		UploadHandler_Dispose_m3057340132(L_7, /*hidden argument*/NULL);
	}

IL_0044:
	{
	}

IL_0045:
	{
		bool L_8 = UnityWebRequest_get_disposeCertificateHandlerOnDispose_m4051074453(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0067;
		}
	}
	{
		CertificateHandler_t2739891000 * L_9 = UnityWebRequest_get_certificateHandler_m3453757623(__this, /*hidden argument*/NULL);
		V_2 = L_9;
		CertificateHandler_t2739891000 * L_10 = V_2;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		CertificateHandler_t2739891000 * L_11 = V_2;
		NullCheck(L_11);
		CertificateHandler_Dispose_m2100863831(L_11, /*hidden argument*/NULL);
	}

IL_0066:
	{
	}

IL_0067:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::BeginWebRequest()
extern "C"  UnityWebRequestAsyncOperation_t3852015985 * UnityWebRequest_BeginWebRequest_m464964044 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef UnityWebRequestAsyncOperation_t3852015985 * (*UnityWebRequest_BeginWebRequest_m464964044_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_BeginWebRequest_m464964044_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_BeginWebRequest_m464964044_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::BeginWebRequest()");
	UnityWebRequestAsyncOperation_t3852015985 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
extern "C"  UnityWebRequestAsyncOperation_t3852015985 * UnityWebRequest_SendWebRequest_m489860187 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	UnityWebRequestAsyncOperation_t3852015985 * V_0 = NULL;
	UnityWebRequestAsyncOperation_t3852015985 * V_1 = NULL;
	{
		UnityWebRequestAsyncOperation_t3852015985 * L_0 = UnityWebRequest_BeginWebRequest_m464964044(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		UnityWebRequestAsyncOperation_t3852015985 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		UnityWebRequestAsyncOperation_t3852015985 * L_2 = V_0;
		NullCheck(L_2);
		UnityWebRequestAsyncOperation_set_webRequest_m3712663211(L_2, __this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		UnityWebRequestAsyncOperation_t3852015985 * L_3 = V_0;
		V_1 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		UnityWebRequestAsyncOperation_t3852015985 * L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Abort()
extern "C"  void UnityWebRequest_Abort_m1490033122 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef void (*UnityWebRequest_Abort_m1490033122_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_Abort_m1490033122_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Abort_m1490033122_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Abort()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
extern "C"  int32_t UnityWebRequest_SetMethod_m3005196532 (UnityWebRequest_t463507806 * __this, int32_t ___methodType0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetMethod_m3005196532_ftn) (UnityWebRequest_t463507806 *, int32_t);
	static UnityWebRequest_SetMethod_m3005196532_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetMethod_m3005196532_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)");
	int32_t retVal = _il2cpp_icall_func(__this, ___methodType0);
	return retVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
extern "C"  void UnityWebRequest_InternalSetMethod_m287631745 (UnityWebRequest_t463507806 * __this, int32_t ___methodType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_InternalSetMethod_m287631745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = UnityWebRequest_get_isModifiable_m4181352937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral2024966745, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnityWebRequest_InternalSetMethod_m287631745_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_2 = ___methodType0;
		int32_t L_3 = UnityWebRequest_SetMethod_m3005196532(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		String_t* L_6 = UnityWebRequest_GetWebErrorString_m4076320575(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, UnityWebRequest_InternalSetMethod_m287631745_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)
extern "C"  int32_t UnityWebRequest_SetCustomMethod_m305650395 (UnityWebRequest_t463507806 * __this, String_t* ___customMethodName0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetCustomMethod_m305650395_ftn) (UnityWebRequest_t463507806 *, String_t*);
	static UnityWebRequest_SetCustomMethod_m305650395_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetCustomMethod_m305650395_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___customMethodName0);
	return retVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetCustomMethod(System.String)
extern "C"  void UnityWebRequest_InternalSetCustomMethod_m3670745235 (UnityWebRequest_t463507806 * __this, String_t* ___customMethodName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_InternalSetCustomMethod_m3670745235_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = UnityWebRequest_get_isModifiable_m4181352937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral2024966745, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnityWebRequest_InternalSetCustomMethod_m3670745235_RuntimeMethod_var);
	}

IL_0017:
	{
		String_t* L_2 = ___customMethodName0;
		int32_t L_3 = UnityWebRequest_SetCustomMethod_m305650395(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		String_t* L_6 = UnityWebRequest_GetWebErrorString_m4076320575(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, UnityWebRequest_InternalSetCustomMethod_m3670745235_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
extern "C"  void UnityWebRequest_set_method_m3969249710 (UnityWebRequest_t463507806 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_set_method_m3969249710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral3514720613, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, UnityWebRequest_set_method_m3969249710_RuntimeMethod_var);
	}

IL_0018:
	{
		String_t* L_3 = ___value0;
		NullCheck(L_3);
		String_t* L_4 = String_ToUpper_m3324454496(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		if (!L_5)
		{
			goto IL_009a;
		}
	}
	{
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m920492651(NULL /*static, unused*/, L_6, _stringLiteral1130393535, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m920492651(NULL /*static, unused*/, L_8, _stringLiteral45808443, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0076;
		}
	}
	{
		String_t* L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m920492651(NULL /*static, unused*/, L_10, _stringLiteral1131442134, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0082;
		}
	}
	{
		String_t* L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m920492651(NULL /*static, unused*/, L_12, _stringLiteral831347629, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_008e;
		}
	}
	{
		goto IL_009a;
	}

IL_006a:
	{
		UnityWebRequest_InternalSetMethod_m287631745(__this, 0, /*hidden argument*/NULL);
		goto IL_00ab;
	}

IL_0076:
	{
		UnityWebRequest_InternalSetMethod_m287631745(__this, 1, /*hidden argument*/NULL);
		goto IL_00ab;
	}

IL_0082:
	{
		UnityWebRequest_InternalSetMethod_m287631745(__this, 2, /*hidden argument*/NULL);
		goto IL_00ab;
	}

IL_008e:
	{
		UnityWebRequest_InternalSetMethod_m287631745(__this, 3, /*hidden argument*/NULL);
		goto IL_00ab;
	}

IL_009a:
	{
		String_t* L_14 = ___value0;
		NullCheck(L_14);
		String_t* L_15 = String_ToUpper_m3324454496(L_14, /*hidden argument*/NULL);
		UnityWebRequest_InternalSetCustomMethod_m3670745235(__this, L_15, /*hidden argument*/NULL);
		goto IL_00ab;
	}

IL_00ab:
	{
		return;
	}
}
// System.String UnityEngine.Networking.UnityWebRequest::get_url()
extern "C"  String_t* UnityWebRequest_get_url_m2568598920 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = UnityWebRequest_GetUrl_m3419782119(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_url(System.String)
extern "C"  void UnityWebRequest_set_url_m2541992937 (UnityWebRequest_t463507806 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_set_url_m2541992937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		V_0 = _stringLiteral2530579871;
		String_t* L_0 = ___value0;
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3541624225_il2cpp_TypeInfo_var);
		String_t* L_2 = WebRequestUtils_MakeInitialUrl_m973728695(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		UnityWebRequest_InternalSetUrl_m1036291515(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.UnityWebRequest::GetUrl()
extern "C"  String_t* UnityWebRequest_GetUrl_m3419782119 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetUrl_m3419782119_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_GetUrl_m3419782119_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetUrl_m3419782119_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetUrl()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)
extern "C"  int32_t UnityWebRequest_SetUrl_m4135786364 (UnityWebRequest_t463507806 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetUrl_m4135786364_ftn) (UnityWebRequest_t463507806 *, String_t*);
	static UnityWebRequest_SetUrl_m4135786364_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetUrl_m4135786364_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___url0);
	return retVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetUrl(System.String)
extern "C"  void UnityWebRequest_InternalSetUrl_m1036291515 (UnityWebRequest_t463507806 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_InternalSetUrl_m1036291515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = UnityWebRequest_get_isModifiable_m4181352937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral314995292, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnityWebRequest_InternalSetUrl_m1036291515_RuntimeMethod_var);
	}

IL_0017:
	{
		String_t* L_2 = ___url0;
		int32_t L_3 = UnityWebRequest_SetUrl_m4135786364(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		String_t* L_6 = UnityWebRequest_GetWebErrorString_m4076320575(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, UnityWebRequest_InternalSetUrl_m1036291515_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable()
extern "C"  bool UnityWebRequest_get_isModifiable_m4181352937 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef bool (*UnityWebRequest_get_isModifiable_m4181352937_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_get_isModifiable_m4181352937_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_isModifiable_m4181352937_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_isModifiable()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
extern "C"  bool UnityWebRequest_get_isDone_m1752128881 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef bool (*UnityWebRequest_get_isDone_m1752128881_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_get_isDone_m1752128881_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_isDone_m1752128881_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_isDone()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
extern "C"  bool UnityWebRequest_get_isNetworkError_m1231611882 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef bool (*UnityWebRequest_get_isNetworkError_m1231611882_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_get_isNetworkError_m1231611882_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_isNetworkError_m1231611882_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_isNetworkError()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetChunked(System.Boolean)
extern "C"  int32_t UnityWebRequest_SetChunked_m2819118383 (UnityWebRequest_t463507806 * __this, bool ___chunked0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetChunked_m2819118383_ftn) (UnityWebRequest_t463507806 *, bool);
	static UnityWebRequest_SetChunked_m2819118383_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetChunked_m2819118383_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetChunked(System.Boolean)");
	int32_t retVal = _il2cpp_icall_func(__this, ___chunked0);
	return retVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_chunkedTransfer(System.Boolean)
extern "C"  void UnityWebRequest_set_chunkedTransfer_m1735705240 (UnityWebRequest_t463507806 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_set_chunkedTransfer_m1735705240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = UnityWebRequest_get_isModifiable_m4181352937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral1510198755, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnityWebRequest_set_chunkedTransfer_m1735705240_RuntimeMethod_var);
	}

IL_0017:
	{
		bool L_2 = ___value0;
		int32_t L_3 = UnityWebRequest_SetChunked_m2819118383(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		String_t* L_6 = UnityWebRequest_GetWebErrorString_m4076320575(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, UnityWebRequest_set_chunkedTransfer_m1735705240_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)
extern "C"  int32_t UnityWebRequest_InternalSetRequestHeader_m2218760805 (UnityWebRequest_t463507806 * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_InternalSetRequestHeader_m2218760805_ftn) (UnityWebRequest_t463507806 *, String_t*, String_t*);
	static UnityWebRequest_InternalSetRequestHeader_m2218760805_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_InternalSetRequestHeader_m2218760805_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___name0, ___value1);
	return retVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
extern "C"  void UnityWebRequest_SetRequestHeader_m2927335855 (UnityWebRequest_t463507806 * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_SetRequestHeader_m2927335855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral3272455574, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, UnityWebRequest_SetRequestHeader_m2927335855_RuntimeMethod_var);
	}

IL_0017:
	{
		String_t* L_3 = ___value1;
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, _stringLiteral1361828523, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, UnityWebRequest_SetRequestHeader_m2927335855_RuntimeMethod_var);
	}

IL_0028:
	{
		bool L_5 = UnityWebRequest_get_isModifiable_m4181352937(__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003e;
		}
	}
	{
		InvalidOperationException_t56020091 * L_6 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_6, _stringLiteral3767907038, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, UnityWebRequest_SetRequestHeader_m2927335855_RuntimeMethod_var);
	}

IL_003e:
	{
		String_t* L_7 = ___name0;
		String_t* L_8 = ___value1;
		int32_t L_9 = UnityWebRequest_InternalSetRequestHeader_m2218760805(__this, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_11 = V_0;
		String_t* L_12 = UnityWebRequest_GetWebErrorString_m4076320575(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_13 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, UnityWebRequest_SetRequestHeader_m2927335855_RuntimeMethod_var);
	}

IL_0059:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)
extern "C"  int32_t UnityWebRequest_SetUploadHandler_m2465141380 (UnityWebRequest_t463507806 * __this, UploadHandler_t2993558019 * ___uh0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetUploadHandler_m2465141380_ftn) (UnityWebRequest_t463507806 *, UploadHandler_t2993558019 *);
	static UnityWebRequest_SetUploadHandler_m2465141380_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetUploadHandler_m2465141380_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)");
	int32_t retVal = _il2cpp_icall_func(__this, ___uh0);
	return retVal;
}
// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::get_uploadHandler()
extern "C"  UploadHandler_t2993558019 * UnityWebRequest_get_uploadHandler_m3692520788 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	UploadHandler_t2993558019 * V_0 = NULL;
	{
		UploadHandler_t2993558019 * L_0 = __this->get_m_UploadHandler_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		UploadHandler_t2993558019 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
extern "C"  void UnityWebRequest_set_uploadHandler_m54574009 (UnityWebRequest_t463507806 * __this, UploadHandler_t2993558019 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_set_uploadHandler_m54574009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = UnityWebRequest_get_isModifiable_m4181352937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral3211556917, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnityWebRequest_set_uploadHandler_m54574009_RuntimeMethod_var);
	}

IL_0017:
	{
		UploadHandler_t2993558019 * L_2 = ___value0;
		int32_t L_3 = UnityWebRequest_SetUploadHandler_m2465141380(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		String_t* L_6 = UnityWebRequest_GetWebErrorString_m4076320575(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, UnityWebRequest_set_uploadHandler_m54574009_RuntimeMethod_var);
	}

IL_0031:
	{
		UploadHandler_t2993558019 * L_8 = ___value0;
		__this->set_m_UploadHandler_2(L_8);
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)
extern "C"  int32_t UnityWebRequest_SetDownloadHandler_m2637095256 (UnityWebRequest_t463507806 * __this, DownloadHandler_t2937767557 * ___dh0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetDownloadHandler_m2637095256_ftn) (UnityWebRequest_t463507806 *, DownloadHandler_t2937767557 *);
	static UnityWebRequest_SetDownloadHandler_m2637095256_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetDownloadHandler_m2637095256_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)");
	int32_t retVal = _il2cpp_icall_func(__this, ___dh0);
	return retVal;
}
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
extern "C"  DownloadHandler_t2937767557 * UnityWebRequest_get_downloadHandler_m534911913 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	DownloadHandler_t2937767557 * V_0 = NULL;
	{
		DownloadHandler_t2937767557 * L_0 = __this->get_m_DownloadHandler_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		DownloadHandler_t2937767557 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
extern "C"  void UnityWebRequest_set_downloadHandler_m970510352 (UnityWebRequest_t463507806 * __this, DownloadHandler_t2937767557 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_set_downloadHandler_m970510352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = UnityWebRequest_get_isModifiable_m4181352937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral1287409439, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnityWebRequest_set_downloadHandler_m970510352_RuntimeMethod_var);
	}

IL_0017:
	{
		DownloadHandler_t2937767557 * L_2 = ___value0;
		int32_t L_3 = UnityWebRequest_SetDownloadHandler_m2637095256(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		String_t* L_6 = UnityWebRequest_GetWebErrorString_m4076320575(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, UnityWebRequest_set_downloadHandler_m970510352_RuntimeMethod_var);
	}

IL_0031:
	{
		DownloadHandler_t2937767557 * L_8 = ___value0;
		__this->set_m_DownloadHandler_1(L_8);
		return;
	}
}
// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::get_certificateHandler()
extern "C"  CertificateHandler_t2739891000 * UnityWebRequest_get_certificateHandler_m3453757623 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	CertificateHandler_t2739891000 * V_0 = NULL;
	{
		CertificateHandler_t2739891000 * L_0 = __this->get_m_CertificateHandler_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		CertificateHandler_t2739891000 * L_1 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
extern "C" void UnityWebRequestAsyncOperation_t3852015985_marshal_pinvoke(const UnityWebRequestAsyncOperation_t3852015985& unmarshaled, UnityWebRequestAsyncOperation_t3852015985_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL, NULL);
}
extern "C" void UnityWebRequestAsyncOperation_t3852015985_marshal_pinvoke_back(const UnityWebRequestAsyncOperation_t3852015985_marshaled_pinvoke& marshaled, UnityWebRequestAsyncOperation_t3852015985& unmarshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
extern "C" void UnityWebRequestAsyncOperation_t3852015985_marshal_pinvoke_cleanup(UnityWebRequestAsyncOperation_t3852015985_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
extern "C" void UnityWebRequestAsyncOperation_t3852015985_marshal_com(const UnityWebRequestAsyncOperation_t3852015985& unmarshaled, UnityWebRequestAsyncOperation_t3852015985_marshaled_com& marshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL, NULL);
}
extern "C" void UnityWebRequestAsyncOperation_t3852015985_marshal_com_back(const UnityWebRequestAsyncOperation_t3852015985_marshaled_com& marshaled, UnityWebRequestAsyncOperation_t3852015985& unmarshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
extern "C" void UnityWebRequestAsyncOperation_t3852015985_marshal_com_cleanup(UnityWebRequestAsyncOperation_t3852015985_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::.ctor()
extern "C"  void UnityWebRequestAsyncOperation__ctor_m1252495487 (UnityWebRequestAsyncOperation_t3852015985 * __this, const RuntimeMethod* method)
{
	{
		AsyncOperation__ctor_m410195587(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::set_webRequest(UnityEngine.Networking.UnityWebRequest)
extern "C"  void UnityWebRequestAsyncOperation_set_webRequest_m3712663211 (UnityWebRequestAsyncOperation_t3852015985 * __this, UnityWebRequest_t463507806 * ___value0, const RuntimeMethod* method)
{
	{
		UnityWebRequest_t463507806 * L_0 = ___value0;
		__this->set_U3CwebRequestU3Ek__BackingField_2(L_0);
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
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandler
extern "C" void UploadHandler_t2993558019_marshal_pinvoke(const UploadHandler_t2993558019& unmarshaled, UploadHandler_t2993558019_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void UploadHandler_t2993558019_marshal_pinvoke_back(const UploadHandler_t2993558019_marshaled_pinvoke& marshaled, UploadHandler_t2993558019& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandler
extern "C" void UploadHandler_t2993558019_marshal_pinvoke_cleanup(UploadHandler_t2993558019_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandler
extern "C" void UploadHandler_t2993558019_marshal_com(const UploadHandler_t2993558019& unmarshaled, UploadHandler_t2993558019_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void UploadHandler_t2993558019_marshal_com_back(const UploadHandler_t2993558019_marshaled_com& marshaled, UploadHandler_t2993558019& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandler
extern "C" void UploadHandler_t2993558019_marshal_com_cleanup(UploadHandler_t2993558019_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.UploadHandler::.ctor()
extern "C"  void UploadHandler__ctor_m1351468229 (UploadHandler_t2993558019 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::Release()
extern "C"  void UploadHandler_Release_m2289600429 (UploadHandler_t2993558019 * __this, const RuntimeMethod* method)
{
	typedef void (*UploadHandler_Release_m2289600429_ftn) (UploadHandler_t2993558019 *);
	static UploadHandler_Release_m2289600429_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UploadHandler_Release_m2289600429_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UploadHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.UploadHandler::Finalize()
extern "C"  void UploadHandler_Finalize_m3322774190 (UploadHandler_t2993558019 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		UploadHandler_Dispose_m3057340132(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::Dispose()
extern "C"  void UploadHandler_Dispose_m3057340132 (UploadHandler_t2993558019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UploadHandler_Dispose_m3057340132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		UploadHandler_Release_m2289600429(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0029:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::set_contentType(System.String)
extern "C"  void UploadHandler_set_contentType_m2709466885 (UploadHandler_t2993558019 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.Networking.UploadHandler::SetContentType(System.String) */, __this, L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::SetContentType(System.String)
extern "C"  void UploadHandler_SetContentType_m411406960 (UploadHandler_t2993558019 * __this, String_t* ___newContentType0, const RuntimeMethod* method)
{
	{
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
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandlerRaw
extern "C" void UploadHandlerRaw_t25761545_marshal_pinvoke(const UploadHandlerRaw_t25761545& unmarshaled, UploadHandlerRaw_t25761545_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void UploadHandlerRaw_t25761545_marshal_pinvoke_back(const UploadHandlerRaw_t25761545_marshaled_pinvoke& marshaled, UploadHandlerRaw_t25761545& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandlerRaw
extern "C" void UploadHandlerRaw_t25761545_marshal_pinvoke_cleanup(UploadHandlerRaw_t25761545_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandlerRaw
extern "C" void UploadHandlerRaw_t25761545_marshal_com(const UploadHandlerRaw_t25761545& unmarshaled, UploadHandlerRaw_t25761545_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void UploadHandlerRaw_t25761545_marshal_com_back(const UploadHandlerRaw_t25761545_marshaled_com& marshaled, UploadHandlerRaw_t25761545& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandlerRaw
extern "C" void UploadHandlerRaw_t25761545_marshal_com_cleanup(UploadHandlerRaw_t25761545_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
extern "C"  void UploadHandlerRaw__ctor_m1397254157 (UploadHandlerRaw_t25761545 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UploadHandlerRaw__ctor_m1397254157_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UploadHandler__ctor_m1351468229(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___data0;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral4274026319, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, UploadHandlerRaw__ctor_m1397254157_RuntimeMethod_var);
	}

IL_0020:
	{
		ByteU5BU5D_t4116647657* L_3 = ___data0;
		intptr_t L_4 = UploadHandlerRaw_Create_m2571854625(NULL /*static, unused*/, __this, L_3, /*hidden argument*/NULL);
		((UploadHandler_t2993558019 *)__this)->set_m_Ptr_0(L_4);
		return;
	}
}
// System.IntPtr UnityEngine.Networking.UploadHandlerRaw::Create(UnityEngine.Networking.UploadHandlerRaw,System.Byte[])
extern "C"  intptr_t UploadHandlerRaw_Create_m2571854625 (RuntimeObject * __this /* static, unused */, UploadHandlerRaw_t25761545 * ___self0, ByteU5BU5D_t4116647657* ___data1, const RuntimeMethod* method)
{
	typedef intptr_t (*UploadHandlerRaw_Create_m2571854625_ftn) (UploadHandlerRaw_t25761545 *, ByteU5BU5D_t4116647657*);
	static UploadHandlerRaw_Create_m2571854625_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UploadHandlerRaw_Create_m2571854625_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UploadHandlerRaw::Create(UnityEngine.Networking.UploadHandlerRaw,System.Byte[])");
	intptr_t retVal = _il2cpp_icall_func(___self0, ___data1);
	return retVal;
}
// System.Void UnityEngine.Networking.UploadHandlerRaw::InternalSetContentType(System.String)
extern "C"  void UploadHandlerRaw_InternalSetContentType_m1631554169 (UploadHandlerRaw_t25761545 * __this, String_t* ___newContentType0, const RuntimeMethod* method)
{
	typedef void (*UploadHandlerRaw_InternalSetContentType_m1631554169_ftn) (UploadHandlerRaw_t25761545 *, String_t*);
	static UploadHandlerRaw_InternalSetContentType_m1631554169_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UploadHandlerRaw_InternalSetContentType_m1631554169_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UploadHandlerRaw::InternalSetContentType(System.String)");
	_il2cpp_icall_func(__this, ___newContentType0);
}
// System.Void UnityEngine.Networking.UploadHandlerRaw::SetContentType(System.String)
extern "C"  void UploadHandlerRaw_SetContentType_m888678374 (UploadHandlerRaw_t25761545 * __this, String_t* ___newContentType0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___newContentType0;
		UploadHandlerRaw_InternalSetContentType_m1631554169(__this, L_0, /*hidden argument*/NULL);
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
// System.Void UnityEngine.WWWForm::.ctor()
extern "C"  void WWWForm__ctor_m2465700452 (WWWForm_t4064702195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWForm__ctor_m2465700452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__this->set_containsFiles_5((bool)0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		List_1_t1293755103 * L_0 = (List_1_t1293755103 *)il2cpp_codegen_object_new(List_1_t1293755103_il2cpp_TypeInfo_var);
		List_1__ctor_m2882708797(L_0, /*hidden argument*/List_1__ctor_m2882708797_RuntimeMethod_var);
		__this->set_formData_0(L_0);
		List_1_t3319525431 * L_1 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_1, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_fieldNames_1(L_1);
		List_1_t3319525431 * L_2 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_2, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_fileNames_2(L_2);
		List_1_t3319525431 * L_3 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_3, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_types_3(L_3);
		ByteU5BU5D_t4116647657* L_4 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)40));
		__this->set_boundary_4(L_4);
		V_0 = 0;
		goto IL_0080;
	}

IL_004e:
	{
		int32_t L_5 = Random_Range_m4054026115(NULL /*static, unused*/, ((int32_t)48), ((int32_t)110), /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)7));
	}

IL_0065:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)6));
	}

IL_0071:
	{
		ByteU5BU5D_t4116647657* L_10 = __this->get_boundary_4();
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)(((int32_t)((uint8_t)L_12))));
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0080:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)40))))
		{
			goto IL_004e;
		}
	}
	{
		return;
	}
}
// System.Text.Encoding UnityEngine.WWWForm::get_DefaultEncoding()
extern "C"  Encoding_t1523322056 * WWWForm_get_DefaultEncoding_m4131957975 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWForm_get_DefaultEncoding_m4131957975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Encoding_t1523322056 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_0 = Encoding_get_ASCII_m3595602635(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Encoding_t1523322056 * L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern "C"  Dictionary_2_t1632706988 * WWWForm_get_headers_m1854290957 (WWWForm_t4064702195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWForm_get_headers_m1854290957_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1632706988 * V_0 = NULL;
	Dictionary_2_t1632706988 * V_1 = NULL;
	{
		Dictionary_2_t1632706988 * L_0 = (Dictionary_2_t1632706988 *)il2cpp_codegen_object_new(Dictionary_2_t1632706988_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3302800229(L_0, /*hidden argument*/Dictionary_2__ctor_m3302800229_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = __this->get_containsFiles_5();
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		Dictionary_2_t1632706988 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_3 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_4 = __this->get_boundary_4();
		ByteU5BU5D_t4116647657* L_5 = __this->get_boundary_4();
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(21 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral587319919, L_6, _stringLiteral3452614526, /*hidden argument*/NULL);
		NullCheck(L_2);
		Dictionary_2_set_Item_m187286838(L_2, _stringLiteral2263792357, L_7, /*hidden argument*/Dictionary_2_set_Item_m187286838_RuntimeMethod_var);
		goto IL_005a;
	}

IL_004a:
	{
		Dictionary_2_t1632706988 * L_8 = V_0;
		NullCheck(L_8);
		Dictionary_2_set_Item_m187286838(L_8, _stringLiteral2263792357, _stringLiteral3776665136, /*hidden argument*/Dictionary_2_set_Item_m187286838_RuntimeMethod_var);
	}

IL_005a:
	{
		Dictionary_2_t1632706988 * L_9 = V_0;
		V_1 = L_9;
		goto IL_0061;
	}

IL_0061:
	{
		Dictionary_2_t1632706988 * L_10 = V_1;
		return L_10;
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
// System.Byte UnityEngine.WWWTranscoder::Hex2Byte(System.Byte[],System.Int32)
extern "C"  uint8_t WWWTranscoder_Hex2Byte_m4102152163 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___b0, int32_t ___offset1, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		V_0 = (uint8_t)0;
		int32_t L_0 = ___offset1;
		V_1 = L_0;
		goto IL_007a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)16))))));
		ByteU5BU5D_t4116647657* L_2 = ___b0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)48))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)48)));
		goto IL_005e;
	}

IL_002f:
	{
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)65))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)75))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)55)));
		goto IL_005e;
	}

IL_0049:
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)97))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)102))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)((int32_t)87)));
	}

IL_005e:
	{
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)15))))
		{
			goto IL_006f;
		}
	}
	{
		V_3 = (uint8_t)((int32_t)63);
		goto IL_008a;
	}

IL_006f:
	{
		uint8_t L_16 = V_0;
		int32_t L_17 = V_2;
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)(((int32_t)((uint8_t)L_17))))))));
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_007a:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ___offset1;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)2)))))
		{
			goto IL_000a;
		}
	}
	{
		uint8_t L_21 = V_0;
		V_3 = L_21;
		goto IL_008a;
	}

IL_008a:
	{
		uint8_t L_22 = V_3;
		return L_22;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::URLDecode(System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* WWWTranscoder_URLDecode_m3587034544 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___toEncode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_URLDecode_m3587034544_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___toEncode0;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->get_urlEscapeChar_2();
		ByteU5BU5D_t4116647657* L_2 = ((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->get_urlSpace_3();
		ByteU5BU5D_t4116647657* L_3 = WWWTranscoder_Decode_m157051313(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		ByteU5BU5D_t4116647657* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::ByteSubArrayEquals(System.Byte[],System.Int32,System.Byte[])
extern "C"  bool WWWTranscoder_ByteSubArrayEquals_m2163464440 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___array0, int32_t ___index1, ByteU5BU5D_t4116647657* ___comperand2, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___array0;
		NullCheck(L_0);
		int32_t L_1 = ___index1;
		ByteU5BU5D_t4116647657* L_2 = ___comperand2;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)L_1))) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))))
		{
			goto IL_0015;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0044;
	}

IL_0015:
	{
		V_1 = 0;
		goto IL_0034;
	}

IL_001c:
	{
		ByteU5BU5D_t4116647657* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = V_1;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5));
		uint8_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_t4116647657* L_8 = ___comperand2;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_7) == ((int32_t)L_11)))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0044;
	}

IL_0030:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_13 = V_1;
		ByteU5BU5D_t4116647657* L_14 = ___comperand2;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_0044;
	}

IL_0044:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Decode(System.Byte[],System.Byte,System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* WWWTranscoder_Decode_m157051313 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_t4116647657* ___space2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_Decode_m157051313_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t94973147 * V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ByteU5BU5D_t4116647657* L_0 = ___input0;
		NullCheck(L_0);
		MemoryStream_t94973147 * L_1 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2128850779(L_1, (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0077;
		}

IL_0012:
		{
			ByteU5BU5D_t4116647657* L_2 = ___input0;
			int32_t L_3 = V_1;
			ByteU5BU5D_t4116647657* L_4 = ___space2;
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
			bool L_5 = WWWTranscoder_ByteSubArrayEquals_m2163464440(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0037;
			}
		}

IL_0020:
		{
			int32_t L_6 = V_1;
			ByteU5BU5D_t4116647657* L_7 = ___space2;
			NullCheck(L_7);
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))), (int32_t)1))));
			MemoryStream_t94973147 * L_8 = V_0;
			NullCheck(L_8);
			VirtActionInvoker1< uint8_t >::Invoke(19 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_8, (uint8_t)((int32_t)32));
			goto IL_0072;
		}

IL_0037:
		{
			ByteU5BU5D_t4116647657* L_9 = ___input0;
			int32_t L_10 = V_1;
			NullCheck(L_9);
			int32_t L_11 = L_10;
			uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			uint8_t L_13 = ___escapeChar1;
			if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
			{
				goto IL_0067;
			}
		}

IL_0040:
		{
			int32_t L_14 = V_1;
			ByteU5BU5D_t4116647657* L_15 = ___input0;
			NullCheck(L_15);
			if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)2))) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
			{
				goto IL_0067;
			}
		}

IL_004b:
		{
			int32_t L_16 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
			MemoryStream_t94973147 * L_17 = V_0;
			ByteU5BU5D_t4116647657* L_18 = ___input0;
			int32_t L_19 = V_1;
			int32_t L_20 = L_19;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
			uint8_t L_21 = WWWTranscoder_Hex2Byte_m4102152163(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
			NullCheck(L_17);
			VirtActionInvoker1< uint8_t >::Invoke(19 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_17, L_21);
			goto IL_0072;
		}

IL_0067:
		{
			MemoryStream_t94973147 * L_22 = V_0;
			ByteU5BU5D_t4116647657* L_23 = ___input0;
			int32_t L_24 = V_1;
			NullCheck(L_23);
			int32_t L_25 = L_24;
			uint8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
			NullCheck(L_22);
			VirtActionInvoker1< uint8_t >::Invoke(19 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_22, L_26);
		}

IL_0072:
		{
			int32_t L_27 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		}

IL_0077:
		{
			int32_t L_28 = V_1;
			ByteU5BU5D_t4116647657* L_29 = ___input0;
			NullCheck(L_29);
			if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
			{
				goto IL_0012;
			}
		}

IL_0080:
		{
			MemoryStream_t94973147 * L_30 = V_0;
			NullCheck(L_30);
			ByteU5BU5D_t4116647657* L_31 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(25 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_30);
			V_2 = L_31;
			IL2CPP_LEAVE(0x99, FINALLY_008c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008c;
	}

FINALLY_008c:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t94973147 * L_32 = V_0;
			if (!L_32)
			{
				goto IL_0098;
			}
		}

IL_0092:
		{
			MemoryStream_t94973147 * L_33 = V_0;
			NullCheck(L_33);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_33);
		}

IL_0098:
		{
			IL2CPP_END_FINALLY(140)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(140)
	{
		IL2CPP_JUMP_TBL(0x99, IL_0099)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0099:
	{
		ByteU5BU5D_t4116647657* L_34 = V_2;
		return L_34;
	}
}
// System.Void UnityEngine.WWWTranscoder::.cctor()
extern "C"  void WWWTranscoder__cctor_m1887474915 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder__cctor_m1887474915_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_t1523322056 * L_0 = WWWForm_get_DefaultEncoding_m4131957975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_1 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteral598647136);
		((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->set_ucHexChars_0(L_1);
		Encoding_t1523322056 * L_2 = WWWForm_get_DefaultEncoding_m4131957975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_3 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, _stringLiteral3445932352);
		((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->set_lcHexChars_1(L_3);
		((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->set_urlEscapeChar_2((uint8_t)((int32_t)37));
		ByteU5BU5D_t4116647657* L_4 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_t4116647657* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)43));
		((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->set_urlSpace_3(L_5);
		Encoding_t1523322056 * L_6 = WWWForm_get_DefaultEncoding_m4131957975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_t4116647657* L_7 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, _stringLiteral3074512661);
		((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->set_dataSpace_4(L_7);
		Encoding_t1523322056 * L_8 = WWWForm_get_DefaultEncoding_m4131957975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		ByteU5BU5D_t4116647657* L_9 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_8, _stringLiteral1153672764);
		((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->set_urlForbidden_5(L_9);
		((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->set_qpEscapeChar_6((uint8_t)((int32_t)61));
		ByteU5BU5D_t4116647657* L_10 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_t4116647657* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)95));
		((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->set_qpSpace_7(L_11);
		Encoding_t1523322056 * L_12 = WWWForm_get_DefaultEncoding_m4131957975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_t4116647657* L_13 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, _stringLiteral3256060902);
		((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->set_qpForbidden_8(L_13);
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
// System.String UnityEngineInternal.WebRequestUtils::RedirectTo(System.String,System.String)
extern "C"  String_t* WebRequestUtils_RedirectTo_m55747000 (RuntimeObject * __this /* static, unused */, String_t* ___baseUri0, String_t* ___redirectUri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils_RedirectTo_m55747000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t100236324 * V_0 = NULL;
	String_t* V_1 = NULL;
	Uri_t100236324 * V_2 = NULL;
	Uri_t100236324 * V_3 = NULL;
	{
		String_t* L_0 = ___redirectUri1;
		NullCheck(L_0);
		Il2CppChar L_1 = String_get_Chars_m2986988803(L_0, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = ___redirectUri1;
		Uri_t100236324 * L_3 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m3040793867(L_3, L_2, 2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0024;
	}

IL_001c:
	{
		String_t* L_4 = ___redirectUri1;
		Uri_t100236324 * L_5 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m3040793867(L_5, L_4, 0, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0024:
	{
		Uri_t100236324 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = Uri_get_IsAbsoluteUri_m3666899587(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		Uri_t100236324 * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = Uri_get_AbsoluteUri_m2582056986(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_0057;
	}

IL_003b:
	{
		String_t* L_10 = ___baseUri0;
		Uri_t100236324 * L_11 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m3040793867(L_11, L_10, 1, /*hidden argument*/NULL);
		V_2 = L_11;
		Uri_t100236324 * L_12 = V_2;
		Uri_t100236324 * L_13 = V_0;
		Uri_t100236324 * L_14 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m253204164(L_14, L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		Uri_t100236324 * L_15 = V_3;
		NullCheck(L_15);
		String_t* L_16 = Uri_get_AbsoluteUri_m2582056986(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		goto IL_0057;
	}

IL_0057:
	{
		String_t* L_17 = V_1;
		return L_17;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::MakeInitialUrl(System.String,System.String)
extern "C"  String_t* WebRequestUtils_MakeInitialUrl_m973728695 (RuntimeObject * __this /* static, unused */, String_t* ___targetUrl0, String_t* ___localUrl1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils_MakeInitialUrl_m973728695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Uri_t100236324 * V_1 = NULL;
	Uri_t100236324 * V_2 = NULL;
	FormatException_t154580423 * V_3 = NULL;
	FormatException_t154580423 * V_4 = NULL;
	String_t* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)0;
		String_t* L_0 = ___localUrl1;
		Uri_t100236324 * L_1 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m800430703(L_1, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		V_2 = (Uri_t100236324 *)NULL;
		String_t* L_2 = ___targetUrl0;
		NullCheck(L_2);
		Il2CppChar L_3 = String_get_Chars_m2986988803(L_2, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0026;
		}
	}
	{
		Uri_t100236324 * L_4 = V_1;
		String_t* L_5 = ___targetUrl0;
		Uri_t100236324 * L_6 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m4293005803(L_6, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		V_0 = (bool)1;
	}

IL_0026:
	{
		Uri_t100236324 * L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		bool L_8 = Uri_op_Equality_m685520154(NULL /*static, unused*/, L_7, (Uri_t100236324 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3541624225_il2cpp_TypeInfo_var);
		Regex_t3657309853 * L_9 = ((WebRequestUtils_t3541624225_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_t3541624225_il2cpp_TypeInfo_var))->get_domainRegex_0();
		String_t* L_10 = ___targetUrl0;
		NullCheck(L_9);
		bool L_11 = Regex_IsMatch_m4067478295(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		Uri_t100236324 * L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13 = Uri_get_Scheme_m2109479391(L_12, /*hidden argument*/NULL);
		String_t* L_14 = ___targetUrl0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m3755062657(NULL /*static, unused*/, L_13, _stringLiteral1057238085, L_14, /*hidden argument*/NULL);
		___targetUrl0 = L_15;
		V_0 = (bool)1;
	}

IL_0059:
	{
		V_3 = (FormatException_t154580423 *)NULL;
	}

IL_005b:
	try
	{ // begin try (depth: 1)
		{
			Uri_t100236324 * L_16 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
			bool L_17 = Uri_op_Equality_m685520154(NULL /*static, unused*/, L_16, (Uri_t100236324 *)NULL, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_007d;
			}
		}

IL_0068:
		{
			String_t* L_18 = ___targetUrl0;
			NullCheck(L_18);
			Il2CppChar L_19 = String_get_Chars_m2986988803(L_18, 0, /*hidden argument*/NULL);
			if ((((int32_t)L_19) == ((int32_t)((int32_t)46))))
			{
				goto IL_007d;
			}
		}

IL_0076:
		{
			String_t* L_20 = ___targetUrl0;
			Uri_t100236324 * L_21 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
			Uri__ctor_m800430703(L_21, L_20, /*hidden argument*/NULL);
			V_2 = L_21;
		}

IL_007d:
		{
			goto IL_008f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (FormatException_t154580423_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0083;
		throw e;
	}

CATCH_0083:
	{ // begin catch(System.FormatException)
		V_4 = ((FormatException_t154580423 *)__exception_local);
		FormatException_t154580423 * L_22 = V_4;
		V_3 = L_22;
		goto IL_008f;
	} // end catch (depth: 1)

IL_008f:
	{
		Uri_t100236324 * L_23 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		bool L_24 = Uri_op_Equality_m685520154(NULL /*static, unused*/, L_23, (Uri_t100236324 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00b0;
		}
	}

IL_009b:
	try
	{ // begin try (depth: 1)
		Uri_t100236324 * L_25 = V_1;
		String_t* L_26 = ___targetUrl0;
		Uri_t100236324 * L_27 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m4293005803(L_27, L_25, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		V_0 = (bool)1;
		goto IL_00b0;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (FormatException_t154580423_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00ac;
		throw e;
	}

CATCH_00ac:
	{ // begin catch(System.FormatException)
		FormatException_t154580423 * L_28 = V_3;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, NULL, WebRequestUtils_MakeInitialUrl_m973728695_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_00b0:
	{
		Uri_t100236324 * L_29 = V_2;
		String_t* L_30 = ___targetUrl0;
		bool L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3541624225_il2cpp_TypeInfo_var);
		String_t* L_32 = WebRequestUtils_MakeUriString_m291605890(NULL /*static, unused*/, L_29, L_30, L_31, /*hidden argument*/NULL);
		V_5 = L_32;
		goto IL_00bf;
	}

IL_00bf:
	{
		String_t* L_33 = V_5;
		return L_33;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::MakeUriString(System.Uri,System.String,System.Boolean)
extern "C"  String_t* WebRequestUtils_MakeUriString_m291605890 (RuntimeObject * __this /* static, unused */, Uri_t100236324 * ___targetUri0, String_t* ___targetUrl1, bool ___prependProtocol2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils_MakeUriString_m291605890_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		String_t* L_0 = ___targetUrl1;
		NullCheck(L_0);
		bool L_1 = String_StartsWith_m2640722675(L_0, _stringLiteral4054833267, 5, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0081;
		}
	}
	{
		Uri_t100236324 * L_2 = ___targetUri0;
		NullCheck(L_2);
		bool L_3 = Uri_get_IsLoopback_m2492530169(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		Uri_t100236324 * L_4 = ___targetUri0;
		NullCheck(L_4);
		String_t* L_5 = Uri_get_OriginalString_m3715995233(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0163;
	}

IL_002a:
	{
		Uri_t100236324 * L_6 = ___targetUri0;
		NullCheck(L_6);
		String_t* L_7 = Uri_get_AbsolutePath_m590948575(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		String_t* L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = String_Contains_m1147431944(L_8, _stringLiteral3452614523, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3541624225_il2cpp_TypeInfo_var);
		String_t* L_11 = WebRequestUtils_URLDecode_m2727298221(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
	}

IL_0048:
	{
		String_t* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_14 = V_1;
		NullCheck(L_14);
		Il2CppChar L_15 = String_get_Chars_m2986988803(L_14, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_15) == ((int32_t)((int32_t)47))))
		{
			goto IL_0070;
		}
	}
	{
		Il2CppChar L_16 = ((Il2CppChar)((int32_t)47));
		RuntimeObject * L_17 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m904156431(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
	}

IL_0070:
	{
		String_t* L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4054833267, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_0163;
	}

IL_0081:
	{
		String_t* L_22 = ___targetUrl1;
		NullCheck(L_22);
		bool L_23 = String_Contains_m1147431944(L_22, _stringLiteral3452614523, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_009d;
		}
	}
	{
		Uri_t100236324 * L_24 = ___targetUri0;
		NullCheck(L_24);
		String_t* L_25 = Uri_get_OriginalString_m3715995233(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		goto IL_0163;
	}

IL_009d:
	{
		Uri_t100236324 * L_26 = ___targetUri0;
		NullCheck(L_26);
		String_t* L_27 = Uri_get_Scheme_m2109479391(L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		bool L_28 = ___prependProtocol2;
		if (L_28)
		{
			goto IL_0157;
		}
	}
	{
		String_t* L_29 = ___targetUrl1;
		NullCheck(L_29);
		int32_t L_30 = String_get_Length_m3847582255(L_29, /*hidden argument*/NULL);
		String_t* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m3847582255(L_31, /*hidden argument*/NULL);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)2)))))
		{
			goto IL_0157;
		}
	}
	{
		String_t* L_33 = ___targetUrl1;
		String_t* L_34 = V_2;
		NullCheck(L_34);
		int32_t L_35 = String_get_Length_m3847582255(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		Il2CppChar L_36 = String_get_Chars_m2986988803(L_33, ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_36) == ((int32_t)((int32_t)47))))
		{
			goto IL_0157;
		}
	}
	{
		String_t* L_37 = V_2;
		String_t* L_38 = ___targetUrl1;
		NullCheck(L_38);
		int32_t L_39 = String_get_Length_m3847582255(L_38, /*hidden argument*/NULL);
		StringBuilder_t * L_40 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2502310956(L_40, L_37, L_39, /*hidden argument*/NULL);
		V_3 = L_40;
		StringBuilder_t * L_41 = V_3;
		NullCheck(L_41);
		StringBuilder_Append_m2383614642(L_41, ((int32_t)58), /*hidden argument*/NULL);
		String_t* L_42 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_43 = String_op_Equality_m920492651(NULL /*static, unused*/, L_42, _stringLiteral1390680534, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0131;
		}
	}
	{
		Uri_t100236324 * L_44 = ___targetUri0;
		NullCheck(L_44);
		String_t* L_45 = Uri_get_AbsolutePath_m590948575(L_44, /*hidden argument*/NULL);
		V_4 = L_45;
		String_t* L_46 = V_4;
		NullCheck(L_46);
		bool L_47 = String_Contains_m1147431944(L_46, _stringLiteral3452614523, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_011c;
		}
	}
	{
		String_t* L_48 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3541624225_il2cpp_TypeInfo_var);
		String_t* L_49 = WebRequestUtils_URLDecode_m2727298221(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		V_4 = L_49;
	}

IL_011c:
	{
		StringBuilder_t * L_50 = V_3;
		String_t* L_51 = V_4;
		NullCheck(L_50);
		StringBuilder_Append_m1965104174(L_50, L_51, /*hidden argument*/NULL);
		StringBuilder_t * L_52 = V_3;
		NullCheck(L_52);
		String_t* L_53 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_52);
		V_0 = L_53;
		goto IL_0163;
	}

IL_0131:
	{
		StringBuilder_t * L_54 = V_3;
		Uri_t100236324 * L_55 = ___targetUri0;
		NullCheck(L_55);
		String_t* L_56 = Uri_get_PathAndQuery_m2396197970(L_55, /*hidden argument*/NULL);
		NullCheck(L_54);
		StringBuilder_Append_m1965104174(L_54, L_56, /*hidden argument*/NULL);
		StringBuilder_t * L_57 = V_3;
		Uri_t100236324 * L_58 = ___targetUri0;
		NullCheck(L_58);
		String_t* L_59 = Uri_get_Fragment_m575158891(L_58, /*hidden argument*/NULL);
		NullCheck(L_57);
		StringBuilder_Append_m1965104174(L_57, L_59, /*hidden argument*/NULL);
		StringBuilder_t * L_60 = V_3;
		NullCheck(L_60);
		String_t* L_61 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_60);
		V_0 = L_61;
		goto IL_0163;
	}

IL_0157:
	{
		Uri_t100236324 * L_62 = ___targetUri0;
		NullCheck(L_62);
		String_t* L_63 = Uri_get_AbsoluteUri_m2582056986(L_62, /*hidden argument*/NULL);
		V_0 = L_63;
		goto IL_0163;
	}

IL_0163:
	{
		String_t* L_64 = V_0;
		return L_64;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::URLDecode(System.String)
extern "C"  String_t* WebRequestUtils_URLDecode_m2727298221 (RuntimeObject * __this /* static, unused */, String_t* ___encoded0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils_URLDecode_m2727298221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_0 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___encoded0;
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_2 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		ByteU5BU5D_t4116647657* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_4 = WWWTranscoder_URLDecode_m3587034544(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Encoding_t1523322056 * L_5 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_6 = V_1;
		NullCheck(L_5);
		String_t* L_7 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(22 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_5, L_6);
		V_2 = L_7;
		goto IL_0025;
	}

IL_0025:
	{
		String_t* L_8 = V_2;
		return L_8;
	}
}
// System.Void UnityEngineInternal.WebRequestUtils::.cctor()
extern "C"  void WebRequestUtils__cctor_m4190982137 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils__cctor_m4190982137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Regex_t3657309853 * L_0 = (Regex_t3657309853 *)il2cpp_codegen_object_new(Regex_t3657309853_il2cpp_TypeInfo_var);
		Regex__ctor_m897876424(L_0, _stringLiteral97523668, /*hidden argument*/NULL);
		((WebRequestUtils_t3541624225_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_t3541624225_il2cpp_TypeInfo_var))->set_domainRegex_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
