#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct ISerializer_1_tFD39EE629A32ADBBBDF5F10DF23819C0199DD265;
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5;
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C;
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B;
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF;
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74;
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5;
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73;
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056;
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E;
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct FlatSharpInternalException_t582A03DA9A8F1C29DF1CCDA3DAEC2EC0CADC1877;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IInputBuffer_t14A70FD163319CA055DA912C0D7A845CFA9B8F3F;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3;
struct PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132;
struct MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019;
struct MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB;

IL2CPP_EXTERN_C RuntimeClass* FlatSharpInternalException_t582A03DA9A8F1C29DF1CCDA3DAEC2EC0CADC1877_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputBuffer_t14A70FD163319CA055DA912C0D7A845CFA9B8F3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral20CC088A70C197F88C7FC66E07386B7D7649711B;
IL2CPP_EXTERN_C String_t* _stringLiteral53274B0F35D438E1870D80F75958B231A6109456;
IL2CPP_EXTERN_C String_t* _stringLiteral98E8AE90FD7B225CAF3203EE20E341DDF7B43931;
IL2CPP_EXTERN_C const RuntimeMethod* FlatSharpInternal_AssertSizeOf_TisPolySpatialParticleCurveMode_tEC2D959B1CBDF1E002B8BCD490601297311C8D92_mD981008B8110C6DDC0B22EE2ACB33A77AE8FAFCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m610B098B008105D72394F56BF309D3A9F0F12ABC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E  : public RuntimeObject
{
};
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array;
	int32_t ____offset;
	int32_t ____count;
};
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___memory;
};
struct ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_marshaled_pinvoke
{
	Il2CppSafeArray* ___memory;
};
struct ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_marshaled_com
{
	Il2CppSafeArray* ___memory;
};
struct ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 
{
	ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* ___pointer;
};
struct ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_marshaled_pinvoke
{
	ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* ___pointer;
};
struct ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_marshaled_com
{
	ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* ___pointer;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C 
{
	MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* ___pointer;
};
struct MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_marshaled_pinvoke
{
	MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* ___pointer;
};
struct MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_marshaled_com
{
	MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* ___pointer;
};
struct ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 
{
	MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* ___pointer;
};
struct ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_marshaled_pinvoke
{
	MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* ___pointer;
};
struct ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_marshaled_com
{
	MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* ___pointer;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
#pragma pack(push, tp, 1)
struct VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint16_t ___offset0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint16_t ___offset0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2_OffsetPadding[2];
					uint16_t ___offset2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2_OffsetPadding_forAlignmentOnly[2];
					uint16_t ___offset2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4_OffsetPadding[4];
					uint16_t ___offset4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4_OffsetPadding_forAlignmentOnly[4];
					uint16_t ___offset4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset6_OffsetPadding[6];
					uint16_t ___offset6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset6_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___offset6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset8_OffsetPadding[8];
					uint16_t ___offset8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset8_OffsetPadding_forAlignmentOnly[8];
					uint16_t ___offset8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset10_OffsetPadding[10];
					uint16_t ___offset10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset10_OffsetPadding_forAlignmentOnly[10];
					uint16_t ___offset10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset12_OffsetPadding[12];
					uint16_t ___offset12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset12_OffsetPadding_forAlignmentOnly[12];
					uint16_t ___offset12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset14_OffsetPadding[14];
					uint16_t ___offset14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset14_OffsetPadding_forAlignmentOnly[14];
					uint16_t ___offset14_forAlignmentOnly;
				};
			};
		};
		uint8_t VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67__padding[16];
	};
};
#pragma pack(pop, tp)
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___bytes;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___bytes_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___value;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___value_forAlignmentOnly;
		};
	};
};
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct FlatBufferDeserializationOption_tB957A515173AD5B19DF2CBBD617732622867EA06 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct PolySpatialParticleCurveMode_tEC2D959B1CBDF1E002B8BCD490601297311C8D92 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132  : public RuntimeObject
{
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment;
};
struct MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019  : public RuntimeObject
{
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___memory;
	bool ___isPinned;
};
struct MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB  : public RuntimeObject
{
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___memory;
	bool ___isPinned;
};
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 
{
	int32_t ___U3CDeserializationOptionU3Ek__BackingField;
};
struct FlatSharpInternalException_t582A03DA9A8F1C29DF1CCDA3DAEC2EC0CADC1877  : public Exception_t
{
};
struct NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3  : public Exception_t
{
};
struct PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE  : public RuntimeObject
{
	int32_t ___U3CModeU3Ek__BackingField;
	float ___U3CCurveMultiplierU3Ek__BackingField;
	float ___U3CMinValueU3Ek__BackingField;
	float ___U3CMaxValueU3Ek__BackingField;
	int32_t ___U3CMinCurveStartIndexU3Ek__BackingField;
	int32_t ___U3CMinCurveLengthU3Ek__BackingField;
	int32_t ___U3CMaxCurveStartIndexU3Ek__BackingField;
	int32_t ___U3CMaxCurveLengthU3Ek__BackingField;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5  : public PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE
{
	bool _____isRoot;
	MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C _____buffer;
	int32_t _____offset;
	int16_t _____remainingDepth;
	VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 _____vtable;
};
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C  : public PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE
{
	bool _____isRoot;
	RuntimeObject* _____buffer;
	int32_t _____offset;
	int16_t _____remainingDepth;
	VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 _____vtable;
};
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B  : public PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE
{
	bool _____isRoot;
	ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 _____buffer;
	int32_t _____offset;
	int16_t _____remainingDepth;
	VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 _____vtable;
};
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF : public PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE {};
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74  : public PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE
{
	bool _____isRoot;
	ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F _____buffer;
	int32_t _____offset;
	int16_t _____remainingDepth;
	VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 _____vtable;
	uint8_t _____mask0;
	int32_t _____index0Value;
	float _____index1Value;
	float _____index2Value;
	float _____index3Value;
	int32_t _____index4Value;
	int32_t _____index5Value;
	int32_t _____index6Value;
	int32_t _____index7Value;
};
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5  : public PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE
{
	bool _____isRoot;
	ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 _____buffer;
	int32_t _____offset;
	int16_t _____remainingDepth;
	VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 _____vtable;
	uint8_t _____mask0;
	int32_t _____index0Value;
	float _____index1Value;
	float _____index2Value;
	float _____index3Value;
	int32_t _____index4Value;
	int32_t _____index5Value;
	int32_t _____index6Value;
	int32_t _____index7Value;
};
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73  : public PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE
{
	bool _____isRoot;
	MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C _____buffer;
	int32_t _____offset;
	int16_t _____remainingDepth;
	VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 _____vtable;
	uint8_t _____mask0;
	int32_t _____index0Value;
	float _____index1Value;
	float _____index2Value;
	float _____index3Value;
	int32_t _____index4Value;
	int32_t _____index5Value;
	int32_t _____index6Value;
	int32_t _____index7Value;
};
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056  : public PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE
{
	bool _____isRoot;
	RuntimeObject* _____buffer;
	int32_t _____offset;
	int16_t _____remainingDepth;
	VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 _____vtable;
	uint8_t _____mask0;
	int32_t _____index0Value;
	float _____index1Value;
	float _____index2Value;
	float _____index3Value;
	int32_t _____index4Value;
	int32_t _____index5Value;
	int32_t _____index6Value;
	int32_t _____index7Value;
};
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E  : public PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE
{
	bool _____isRoot;
	ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 _____buffer;
	int32_t _____offset;
	int16_t _____remainingDepth;
	VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 _____vtable;
	uint8_t _____mask0;
	int32_t _____index0Value;
	float _____index1Value;
	float _____index2Value;
	float _____index3Value;
	int32_t _____index4Value;
	int32_t _____index5Value;
	int32_t _____index6Value;
	int32_t _____index7Value;
};
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B : public PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE {};
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	bool ___IsLittleEndian;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_StaticFields
{
	RuntimeObject* ___U3CSerializerU3Ek__BackingField;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5_StaticFields
{
	FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 _____CtorContext;
};
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C_StaticFields
{
	FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 _____CtorContext;
};
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B_StaticFields
{
	FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 _____CtorContext;
};
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF_StaticFields
{
	FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 _____CtorContext;
};
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74_StaticFields
{
	FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 _____CtorContext;
};
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5_StaticFields
{
	FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 _____CtorContext;
};
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73_StaticFields
{
	FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 _____CtorContext;
};
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056_StaticFields
{
	FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 _____CtorContext;
};
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E_StaticFields
{
	FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 _____CtorContext;
};
struct tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B_StaticFields
{
	FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 _____CtorContext;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__ctor_mB82C0C795B2BF7418EF1E5EBBE6C0ABBD1E3621F_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_Initialize_m79BC696C78B3CDAE9F0A2EEEFF124E4F25A1AF26_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VTable8_Create_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mB6EC50B337D1D2768FF506191C0477D837CA42F7_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex0Value_m8315D4CB5700ADF1D06EE29E26B26E7BBB5158EA_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex1Value_m6741FA02BFB5462FB0237AEC21FE6A29F114116C_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex2Value_m2526E9DE5DE6EFFCB4DA71516A5AF2A50205BF24_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex3Value_m07714638084C25C71FC14FD1F21D83DFF51CE783_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex4Value_m0E335B4721C87D782F04021EFC1BAC3035C7EFA8_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex5Value_mD755F33456CD4FC98A05DABF48CFF3DDE762367F_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex6Value_m5B1EB8ECA467D5DA34ECC15E9E82B03C90B46A1A_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex7Value_mC7A2E832DE3700911D0CB9FF89BF7473DBC14A63_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_gshared_inline (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* __this, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m2C344214BC420B37101187EB00F13127BCB25EF3_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBEB7F70B072D95203A9BFCCF5302DB56706393EC_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__ctor_m41854DFE9C028850E22E57858EE8173F858C3D81_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_Initialize_m7A65D3F4133A8FB401B5659612472F5BBF36287F_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VTable8_Create_TisRuntimeObject_m06E9A19CB9E3E47A11CA330CACBBB27DE5B3C7C4_gshared_inline (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex0Value_mC9D71510978ED43F17FE0B4E3999D51E4DE1D08E_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex1Value_mD8D4F0AAB29FE369DB0DCF18B7F522D5EE23C892_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex2Value_m9D4D3C274A51900952EA14B47627C7DFB5FCCEAB_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex3Value_mC58584A05DDC24DCB2A061B387BDD1636F624559_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex4Value_m17D2980E1C08C39B2D79BB2E409A49899C7A3C71_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex5Value_m01E5BB2AA95FB5A28B378043D1AC7A7864D7B0B9_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex6Value_m328DD4626B3BB8330DC55A713F5DB2322BE997A2_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex7Value_mFF03F0682493BB9F860FDB8DA79246E1EBDC2436_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_gshared_inline (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* __this, RuntimeObject* ___0_buffer, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Helpers_Parse_TisRuntimeObject_m51AE93C469DF7CF18C82F17D6EA066C477BF4F05_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Helpers_Parse_TisRuntimeObject_mE5EC898BB21BD768FFFECCCD0E95882A78D79A36_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__ctor_mF21C87C95D8A9E0B07E4453F212404361B60DBA1_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_Initialize_m3115160D3580E62708F6F1E3A2AF3EEFF3B2157C_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VTable8_Create_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mC6114ACC0E0DF0D0365F1F2DBA49E4716E6A5778_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex0Value_mE3F24321FFFF33DCD1334FF3356E1848ADBF6019_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex1Value_mDC9C58FB9B51B71EDAEC0CF33694E7DFCFF2CFF6_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex2Value_mF992E2C73BD03C57F98AA35A5F4111739EEDACD4_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex3Value_mC3E895F8B714A62C27F7DFBBFA630448E8CA3051_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex4Value_m73CC2875639B5802041069F652BF7333F85379B5_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex5Value_mCC020D0728A57DF259E45C93AFA05875CCB50B4B_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex6Value_mC17799FC6F82380551873D961DB23455EB149946_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex7Value_m69BEA55C05778A0BC699D9506E4DC4BD266F8D2A_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_gshared_inline (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m405627FB0B74E409E6AB090822A3ED1228935C8F_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m1A901A0081B729E0014E3C83B6533366CFC0FDEB_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m419D91D88FC64012EDDE40C6869BA208E8A55E82_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_m3884A8E8C4D8C9F71AE41BBB842161343823A1F2_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VTable8_Create_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m81B56CF63EB1EE66E22D78820F58BACC7B7C327D_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_mE6B8AD447E24EF00C9783A2DB0607791900F419A_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m4BB3FD775F1E21102AE26788FAC31BD38A8A59AE_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_m78B679AE12682AE8F24C62417BA63C1499F05D62_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m7BB9F98270BB31C793FCDB4E619602A3C919F0A5_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_m4567256315ED416D626620ECE79D064668DAC02D_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_m06CAEF0DA412CD037C02D4897273D538C4BED22A_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_mB55CB6B620B129B3532F40E3D288966595DE57CD_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m971D1439AED638DE5CB8AF33AF81B2A6C965E95E_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VTable8_OffsetOf_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m4D4A3A69A509F633209BCD24BB7FD49DFD663DFB_gshared_inline (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* __this, ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m9214EBC37733EF24E31274C04B9B183FC76C0136_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mE596CEE1DF90342E1B7CBB225C038DC2563A16C7_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mB3657149B90584F39B270C8A07A807FFBEAFD0FF_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m3A01F0038BED8A34DA76CB410D26A9BAE13F1058_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_m5AEC8B1910BD4E817FCC950A68D63309C8DFF6AA_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VTable8_Create_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_m6BF974CCA1DF16BF714794B5C9E29E8870418F88_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_m97E3F8624D2DBAF15D01AA5B62C4407ABB7934BE_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m373A1AC726FB9979164FDA2AC26645621E2FE168_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_m584FA74A708E2B12A9E3ADD0D9C701B471074EC7_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m4F69BD4968C63BA0480FA00850E4C48482E6A825_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_mC3524B1A43520159819E4FA9618615C0B67CC1EB_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_m8370537C9C425FCC8F7A0BDE281DE5D90C0F8C15_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_m105455FA3954AD9AEC8742628E8326B43CC533F9_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m9EF31FCB408B7B25EE353D7FBF9B9F8C20792693_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VTable8_OffsetOf_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mBF94885680411962959F363F4EA93C280C273C85_gshared_inline (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* __this, ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_m85502A0D9C32850B9DE0B94EFCD07D9C7D4CD160_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mB9B32E4C15BAF9D3054B1483A9B4BAA10A451F1D_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mFF8B2625B845E2F98FBAD80EEA8CB1AE01309A52_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m935D954F463EBD9E3C1FA4C5956C964A4C2469ED_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_mB4293BE295CB6B5F814C67EB6C2F32E57E9395F0_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_mC3D16CB2930EEDB41C9D4C1982631B7AA86C4EA0_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m5EA3939E3AFDB7310F3CCC7568566BF0ACE17D16_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_m9B7092836E0A4945343778D37B1BA5F385A87372_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m7A4642823EE58C90778605D251CE6262A78B02F2_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_mBFFC77C6C0CA5BEDADB485A8881E039229458A3D_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_mD9912BDF4195AA4A4973A570BBE9BD7D80BC5D24_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_m159F152A52BD965B6C184464FA56B0A5BC5C2AEF_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m8C3D6A8AF8CA3C2EE5E9DDF05B94FD578777B9B6_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m62969793CE87EF3CCFFAE213400D805611AB4EF9_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_mB4CCD88BAF398D9C3F14415527D83BAC3FFD2F9B_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_m8744F389186E5EE3FBF3078BA28AE15B5DAECFE6_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m36E3FC84713EC152680DFFB77CB80FC4DAE2774F_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_mD8299F9C5E2974331A980E48AE5ABE6349BED27E_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m89D7E6223240F6B4E8E1E7935F9EDC0A4AFE7E9F_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_m64C04981C8018613B12315DCDC80F0585ECD6AB1_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_m51CA9E2040E842AD136E18B90A5469A3FF99B100_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_mFC34D403D2C3ECE93B9BFC534C8CF1B9714DECC5_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m39059DDABB572164F6091FD2F061C09F771A0B61_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_mB2A2EECDB60B0FF4E08A8E8440342B0615181EEB_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_mF8EFE0266D22D98F56D3DA10806136920DADA7C3_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_mE04FE810D3453C1F1D1C15DEA1A3904472ED8F0F_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m6F8E6FB706E22C38615C0253FD7F20A340B62792_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_mF73EAB2893A0A68AFA4A82F49C9F7BCB99457FBB_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m5ACC49D1B1A629A36257103F41BA983D03CFEF58_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_mB61882D1E5B7429F87A200496A7FD72164F7C4C2_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_mA2A1B9BDBB8B246AE8B27A21DC04DB91EA6E2BFD_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_mDB0702BCA9D87063956E015D26368FB51CED7F62_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_mAEAD4FA22CDE7F7A9F668D57A57C1AA0D5CF98BB_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void VTable8_CreateLittleEndian_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mEB829AEE4E415D0BEFB3E11656272B1B9E3EED37_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void VTable8_CreateBigEndian_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mE7CCEB494269F8AA70097F3D269950C318972FCE_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlatSharpInternal_AssertSizeOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m8895611A3612CEF72DC5892221E104FFB7678FEA_gshared_inline (int32_t ___0_expectedSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void VTable8_CreateLittleEndian_TisRuntimeObject_m037A21DD16361C36CEB43BE56A74158E5D149E84_gshared (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void VTable8_CreateBigEndian_TisRuntimeObject_mF19F4EBA65320466BE9B26DC52118A5BE91D55F1_gshared (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void VTable8_CreateLittleEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m7689924C97013DC39962DF6BE6DDC22011387E18_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void VTable8_CreateBigEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m830F453D73DBEDB3224825D31AC06E683FB4BFD1_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void VTable8_CreateLittleEndian_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mA0E3F68506B58297B40088F3873C8EB12E287035_gshared (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void VTable8_CreateBigEndian_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mE312CAF84CEF567571E7EFE61FF3C8A4041113FE_gshared (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void VTable8_CreateLittleEndian_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_m6ED0613C8F5C84AAEF7CD9828F608F510BA2D0C2_gshared (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void VTable8_CreateBigEndian_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mECC45EC0CAE5344392101C8A23E6D56CDEF71CCC_gshared (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_gshared_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_gshared_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_segment, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryMarshal_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m610B098B008105D72394F56BF309D3A9F0F12ABC_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) ;

inline void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__ctor_mB82C0C795B2BF7418EF1E5EBBE6C0ABBD1E3621F_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5*, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__ctor_mB82C0C795B2BF7418EF1E5EBBE6C0ABBD1E3621F_gshared_inline)(__this, method);
}
inline void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_Initialize_m79BC696C78B3CDAE9F0A2EEEFF124E4F25A1AF26_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5*, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_Initialize_m79BC696C78B3CDAE9F0A2EEEFF124E4F25A1AF26_gshared_inline)(__this, ___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolySpatialParticleMinMaxCurve__ctor_m2716B1247C150EDAD03E363F68B8354E658DB2F6 (PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE* __this, FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 ___0_context, const RuntimeMethod* method) ;
inline void VTable8_Create_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mB6EC50B337D1D2768FF506191C0477D837CA42F7_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*, const RuntimeMethod*))VTable8_Create_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mB6EC50B337D1D2768FF506191C0477D837CA42F7_gshared_inline)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolySpatialParticleMinMaxCurve_OnFlatSharpDeserialized_m5F9157B76FFF12D6AD91CCE8F74F2E1760E637ED (PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE* __this, FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 ___0_context, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex0Value_m8315D4CB5700ADF1D06EE29E26B26E7BBB5158EA_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex0Value_m8315D4CB5700ADF1D06EE29E26B26E7BBB5158EA_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* __this, const RuntimeMethod* method) ;
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex1Value_m6741FA02BFB5462FB0237AEC21FE6A29F114116C_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex1Value_m6741FA02BFB5462FB0237AEC21FE6A29F114116C_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex2Value_m2526E9DE5DE6EFFCB4DA71516A5AF2A50205BF24_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex2Value_m2526E9DE5DE6EFFCB4DA71516A5AF2A50205BF24_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex3Value_m07714638084C25C71FC14FD1F21D83DFF51CE783_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex3Value_m07714638084C25C71FC14FD1F21D83DFF51CE783_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex4Value_m0E335B4721C87D782F04021EFC1BAC3035C7EFA8_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex4Value_m0E335B4721C87D782F04021EFC1BAC3035C7EFA8_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex5Value_mD755F33456CD4FC98A05DABF48CFF3DDE762367F_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex5Value_mD755F33456CD4FC98A05DABF48CFF3DDE762367F_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex6Value_m5B1EB8ECA467D5DA34ECC15E9E82B03C90B46A1A_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex6Value_m5B1EB8ECA467D5DA34ECC15E9E82B03C90B46A1A_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex7Value_mC7A2E832DE3700911D0CB9FF89BF7473DBC14A63_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex7Value_mC7A2E832DE3700911D0CB9FF89BF7473DBC14A63_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* __this, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, const RuntimeMethod*))VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_gshared_inline)(__this, ___0_buffer, ___1_index, method);
}
inline int32_t Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m2C344214BC420B37101187EB00F13127BCB25EF3_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, int16_t, const RuntimeMethod*))Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m2C344214BC420B37101187EB00F13127BCB25EF3_gshared_inline)(___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline float Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBEB7F70B072D95203A9BFCCF5302DB56706393EC_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, int16_t, const RuntimeMethod*))Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBEB7F70B072D95203A9BFCCF5302DB56706393EC_gshared_inline)(___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline int32_t Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, int16_t, const RuntimeMethod*))Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_gshared_inline)(___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline (FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9* __this, int32_t ___0_deserializationOption, const RuntimeMethod* method) ;
inline void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__ctor_m41854DFE9C028850E22E57858EE8173F858C3D81_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C*, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__ctor_m41854DFE9C028850E22E57858EE8173F858C3D81_gshared_inline)(__this, method);
}
inline void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_Initialize_m7A65D3F4133A8FB401B5659612472F5BBF36287F_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C*, RuntimeObject*, int32_t, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_Initialize_m7A65D3F4133A8FB401B5659612472F5BBF36287F_gshared_inline)(__this, ___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline void VTable8_Create_TisRuntimeObject_m06E9A19CB9E3E47A11CA330CACBBB27DE5B3C7C4_inline (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*, const RuntimeMethod*))VTable8_Create_TisRuntimeObject_m06E9A19CB9E3E47A11CA330CACBBB27DE5B3C7C4_gshared_inline)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex0Value_mC9D71510978ED43F17FE0B4E3999D51E4DE1D08E_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex0Value_mC9D71510978ED43F17FE0B4E3999D51E4DE1D08E_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex1Value_mD8D4F0AAB29FE369DB0DCF18B7F522D5EE23C892_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (RuntimeObject*, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex1Value_mD8D4F0AAB29FE369DB0DCF18B7F522D5EE23C892_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex2Value_m9D4D3C274A51900952EA14B47627C7DFB5FCCEAB_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (RuntimeObject*, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex2Value_m9D4D3C274A51900952EA14B47627C7DFB5FCCEAB_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex3Value_mC58584A05DDC24DCB2A061B387BDD1636F624559_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (RuntimeObject*, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex3Value_mC58584A05DDC24DCB2A061B387BDD1636F624559_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex4Value_m17D2980E1C08C39B2D79BB2E409A49899C7A3C71_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex4Value_m17D2980E1C08C39B2D79BB2E409A49899C7A3C71_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex5Value_m01E5BB2AA95FB5A28B378043D1AC7A7864D7B0B9_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex5Value_m01E5BB2AA95FB5A28B378043D1AC7A7864D7B0B9_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex6Value_m328DD4626B3BB8330DC55A713F5DB2322BE997A2_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex6Value_m328DD4626B3BB8330DC55A713F5DB2322BE997A2_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex7Value_mFF03F0682493BB9F860FDB8DA79246E1EBDC2436_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex7Value_mFF03F0682493BB9F860FDB8DA79246E1EBDC2436_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* __this, RuntimeObject* ___0_buffer, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*, RuntimeObject*, int32_t, const RuntimeMethod*))VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_gshared_inline)(__this, ___0_buffer, ___1_index, method);
}
inline int32_t Helpers_Parse_TisRuntimeObject_m51AE93C469DF7CF18C82F17D6EA066C477BF4F05_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, int32_t, int16_t, const RuntimeMethod*))Helpers_Parse_TisRuntimeObject_m51AE93C469DF7CF18C82F17D6EA066C477BF4F05_gshared_inline)(___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline float Helpers_Parse_TisRuntimeObject_mE5EC898BB21BD768FFFECCCD0E95882A78D79A36_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (RuntimeObject*, int32_t, int16_t, const RuntimeMethod*))Helpers_Parse_TisRuntimeObject_mE5EC898BB21BD768FFFECCCD0E95882A78D79A36_gshared_inline)(___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline int32_t Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, int32_t, int16_t, const RuntimeMethod*))Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_gshared_inline)(___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__ctor_mF21C87C95D8A9E0B07E4453F212404361B60DBA1_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B*, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__ctor_mF21C87C95D8A9E0B07E4453F212404361B60DBA1_gshared_inline)(__this, method);
}
inline void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_Initialize_m3115160D3580E62708F6F1E3A2AF3EEFF3B2157C_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B*, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_Initialize_m3115160D3580E62708F6F1E3A2AF3EEFF3B2157C_gshared_inline)(__this, ___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline void VTable8_Create_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mC6114ACC0E0DF0D0365F1F2DBA49E4716E6A5778_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*, const RuntimeMethod*))VTable8_Create_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mC6114ACC0E0DF0D0365F1F2DBA49E4716E6A5778_gshared_inline)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex0Value_mE3F24321FFFF33DCD1334FF3356E1848ADBF6019_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex0Value_mE3F24321FFFF33DCD1334FF3356E1848ADBF6019_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex1Value_mDC9C58FB9B51B71EDAEC0CF33694E7DFCFF2CFF6_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex1Value_mDC9C58FB9B51B71EDAEC0CF33694E7DFCFF2CFF6_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex2Value_mF992E2C73BD03C57F98AA35A5F4111739EEDACD4_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex2Value_mF992E2C73BD03C57F98AA35A5F4111739EEDACD4_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex3Value_mC3E895F8B714A62C27F7DFBBFA630448E8CA3051_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex3Value_mC3E895F8B714A62C27F7DFBBFA630448E8CA3051_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex4Value_m73CC2875639B5802041069F652BF7333F85379B5_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex4Value_m73CC2875639B5802041069F652BF7333F85379B5_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex5Value_mCC020D0728A57DF259E45C93AFA05875CCB50B4B_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex5Value_mCC020D0728A57DF259E45C93AFA05875CCB50B4B_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex6Value_mC17799FC6F82380551873D961DB23455EB149946_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex6Value_mC17799FC6F82380551873D961DB23455EB149946_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex7Value_m69BEA55C05778A0BC699D9506E4DC4BD266F8D2A_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex7Value_m69BEA55C05778A0BC699D9506E4DC4BD266F8D2A_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, const RuntimeMethod*))VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_gshared_inline)(__this, ___0_buffer, ___1_index, method);
}
inline int32_t Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m405627FB0B74E409E6AB090822A3ED1228935C8F_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, int16_t, const RuntimeMethod*))Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m405627FB0B74E409E6AB090822A3ED1228935C8F_gshared_inline)(___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline float Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m1A901A0081B729E0014E3C83B6533366CFC0FDEB_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, int16_t, const RuntimeMethod*))Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m1A901A0081B729E0014E3C83B6533366CFC0FDEB_gshared_inline)(___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline int32_t Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, int16_t, const RuntimeMethod*))Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_gshared_inline)(___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m419D91D88FC64012EDDE40C6869BA208E8A55E82_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74*, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m419D91D88FC64012EDDE40C6869BA208E8A55E82_gshared_inline)(__this, method);
}
inline void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_m3884A8E8C4D8C9F71AE41BBB842161343823A1F2_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74*, ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F, int32_t, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_m3884A8E8C4D8C9F71AE41BBB842161343823A1F2_gshared_inline)(__this, ___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline void VTable8_Create_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m81B56CF63EB1EE66E22D78820F58BACC7B7C327D_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*, const RuntimeMethod*))VTable8_Create_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m81B56CF63EB1EE66E22D78820F58BACC7B7C327D_gshared_inline)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_mE6B8AD447E24EF00C9783A2DB0607791900F419A_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_mE6B8AD447E24EF00C9783A2DB0607791900F419A_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m4BB3FD775F1E21102AE26788FAC31BD38A8A59AE_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m4BB3FD775F1E21102AE26788FAC31BD38A8A59AE_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_m78B679AE12682AE8F24C62417BA63C1499F05D62_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_m78B679AE12682AE8F24C62417BA63C1499F05D62_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m7BB9F98270BB31C793FCDB4E619602A3C919F0A5_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m7BB9F98270BB31C793FCDB4E619602A3C919F0A5_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_m4567256315ED416D626620ECE79D064668DAC02D_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_m4567256315ED416D626620ECE79D064668DAC02D_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_m06CAEF0DA412CD037C02D4897273D538C4BED22A_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_m06CAEF0DA412CD037C02D4897273D538C4BED22A_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_mB55CB6B620B129B3532F40E3D288966595DE57CD_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_mB55CB6B620B129B3532F40E3D288966595DE57CD_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m971D1439AED638DE5CB8AF33AF81B2A6C965E95E_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m971D1439AED638DE5CB8AF33AF81B2A6C965E95E_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t VTable8_OffsetOf_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m4D4A3A69A509F633209BCD24BB7FD49DFD663DFB_inline (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* __this, ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*, ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F, int32_t, const RuntimeMethod*))VTable8_OffsetOf_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m4D4A3A69A509F633209BCD24BB7FD49DFD663DFB_gshared_inline)(__this, ___0_buffer, ___1_index, method);
}
inline int32_t Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m9214EBC37733EF24E31274C04B9B183FC76C0136_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F, int32_t, int16_t, const RuntimeMethod*))Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m9214EBC37733EF24E31274C04B9B183FC76C0136_gshared_inline)(___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline float Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mE596CEE1DF90342E1B7CBB225C038DC2563A16C7_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F, int32_t, int16_t, const RuntimeMethod*))Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mE596CEE1DF90342E1B7CBB225C038DC2563A16C7_gshared_inline)(___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline int32_t Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mB3657149B90584F39B270C8A07A807FFBEAFD0FF_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F, int32_t, int16_t, const RuntimeMethod*))Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mB3657149B90584F39B270C8A07A807FFBEAFD0FF_gshared_inline)(___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m3A01F0038BED8A34DA76CB410D26A9BAE13F1058_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5*, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m3A01F0038BED8A34DA76CB410D26A9BAE13F1058_gshared_inline)(__this, method);
}
inline void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_m5AEC8B1910BD4E817FCC950A68D63309C8DFF6AA_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5*, ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562, int32_t, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_m5AEC8B1910BD4E817FCC950A68D63309C8DFF6AA_gshared_inline)(__this, ___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline void VTable8_Create_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_m6BF974CCA1DF16BF714794B5C9E29E8870418F88_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*, const RuntimeMethod*))VTable8_Create_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_m6BF974CCA1DF16BF714794B5C9E29E8870418F88_gshared_inline)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_m97E3F8624D2DBAF15D01AA5B62C4407ABB7934BE_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_m97E3F8624D2DBAF15D01AA5B62C4407ABB7934BE_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m373A1AC726FB9979164FDA2AC26645621E2FE168_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m373A1AC726FB9979164FDA2AC26645621E2FE168_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_m584FA74A708E2B12A9E3ADD0D9C701B471074EC7_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_m584FA74A708E2B12A9E3ADD0D9C701B471074EC7_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m4F69BD4968C63BA0480FA00850E4C48482E6A825_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m4F69BD4968C63BA0480FA00850E4C48482E6A825_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_mC3524B1A43520159819E4FA9618615C0B67CC1EB_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_mC3524B1A43520159819E4FA9618615C0B67CC1EB_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_m8370537C9C425FCC8F7A0BDE281DE5D90C0F8C15_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_m8370537C9C425FCC8F7A0BDE281DE5D90C0F8C15_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_m105455FA3954AD9AEC8742628E8326B43CC533F9_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_m105455FA3954AD9AEC8742628E8326B43CC533F9_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m9EF31FCB408B7B25EE353D7FBF9B9F8C20792693_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m9EF31FCB408B7B25EE353D7FBF9B9F8C20792693_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t VTable8_OffsetOf_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mBF94885680411962959F363F4EA93C280C273C85_inline (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* __this, ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*, ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562, int32_t, const RuntimeMethod*))VTable8_OffsetOf_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mBF94885680411962959F363F4EA93C280C273C85_gshared_inline)(__this, ___0_buffer, ___1_index, method);
}
inline int32_t Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_m85502A0D9C32850B9DE0B94EFCD07D9C7D4CD160_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562, int32_t, int16_t, const RuntimeMethod*))Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_m85502A0D9C32850B9DE0B94EFCD07D9C7D4CD160_gshared_inline)(___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline float Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mB9B32E4C15BAF9D3054B1483A9B4BAA10A451F1D_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562, int32_t, int16_t, const RuntimeMethod*))Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mB9B32E4C15BAF9D3054B1483A9B4BAA10A451F1D_gshared_inline)(___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline int32_t Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mFF8B2625B845E2F98FBAD80EEA8CB1AE01309A52_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562, int32_t, int16_t, const RuntimeMethod*))Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mFF8B2625B845E2F98FBAD80EEA8CB1AE01309A52_gshared_inline)(___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m935D954F463EBD9E3C1FA4C5956C964A4C2469ED_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73*, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m935D954F463EBD9E3C1FA4C5956C964A4C2469ED_gshared_inline)(__this, method);
}
inline void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_mB4293BE295CB6B5F814C67EB6C2F32E57E9395F0_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73*, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_mB4293BE295CB6B5F814C67EB6C2F32E57E9395F0_gshared_inline)(__this, ___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_mC3D16CB2930EEDB41C9D4C1982631B7AA86C4EA0_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_mC3D16CB2930EEDB41C9D4C1982631B7AA86C4EA0_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m5EA3939E3AFDB7310F3CCC7568566BF0ACE17D16_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m5EA3939E3AFDB7310F3CCC7568566BF0ACE17D16_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_m9B7092836E0A4945343778D37B1BA5F385A87372_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_m9B7092836E0A4945343778D37B1BA5F385A87372_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m7A4642823EE58C90778605D251CE6262A78B02F2_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m7A4642823EE58C90778605D251CE6262A78B02F2_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_mBFFC77C6C0CA5BEDADB485A8881E039229458A3D_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_mBFFC77C6C0CA5BEDADB485A8881E039229458A3D_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_mD9912BDF4195AA4A4973A570BBE9BD7D80BC5D24_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_mD9912BDF4195AA4A4973A570BBE9BD7D80BC5D24_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_m159F152A52BD965B6C184464FA56B0A5BC5C2AEF_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_m159F152A52BD965B6C184464FA56B0A5BC5C2AEF_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m8C3D6A8AF8CA3C2EE5E9DDF05B94FD578777B9B6_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m8C3D6A8AF8CA3C2EE5E9DDF05B94FD578777B9B6_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m62969793CE87EF3CCFFAE213400D805611AB4EF9_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056*, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m62969793CE87EF3CCFFAE213400D805611AB4EF9_gshared_inline)(__this, method);
}
inline void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_mB4CCD88BAF398D9C3F14415527D83BAC3FFD2F9B_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056*, RuntimeObject*, int32_t, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_mB4CCD88BAF398D9C3F14415527D83BAC3FFD2F9B_gshared_inline)(__this, ___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_m8744F389186E5EE3FBF3078BA28AE15B5DAECFE6_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_m8744F389186E5EE3FBF3078BA28AE15B5DAECFE6_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m36E3FC84713EC152680DFFB77CB80FC4DAE2774F_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (RuntimeObject*, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m36E3FC84713EC152680DFFB77CB80FC4DAE2774F_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_mD8299F9C5E2974331A980E48AE5ABE6349BED27E_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (RuntimeObject*, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_mD8299F9C5E2974331A980E48AE5ABE6349BED27E_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m89D7E6223240F6B4E8E1E7935F9EDC0A4AFE7E9F_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (RuntimeObject*, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m89D7E6223240F6B4E8E1E7935F9EDC0A4AFE7E9F_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_m64C04981C8018613B12315DCDC80F0585ECD6AB1_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_m64C04981C8018613B12315DCDC80F0585ECD6AB1_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_m51CA9E2040E842AD136E18B90A5469A3FF99B100_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_m51CA9E2040E842AD136E18B90A5469A3FF99B100_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_mFC34D403D2C3ECE93B9BFC534C8CF1B9714DECC5_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_mFC34D403D2C3ECE93B9BFC534C8CF1B9714DECC5_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m39059DDABB572164F6091FD2F061C09F771A0B61_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m39059DDABB572164F6091FD2F061C09F771A0B61_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_mB2A2EECDB60B0FF4E08A8E8440342B0615181EEB_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E*, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_mB2A2EECDB60B0FF4E08A8E8440342B0615181EEB_gshared_inline)(__this, method);
}
inline void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_mF8EFE0266D22D98F56D3DA10806136920DADA7C3_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E*, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_mF8EFE0266D22D98F56D3DA10806136920DADA7C3_gshared_inline)(__this, ___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_mE04FE810D3453C1F1D1C15DEA1A3904472ED8F0F_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_mE04FE810D3453C1F1D1C15DEA1A3904472ED8F0F_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m6F8E6FB706E22C38615C0253FD7F20A340B62792_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m6F8E6FB706E22C38615C0253FD7F20A340B62792_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_mF73EAB2893A0A68AFA4A82F49C9F7BCB99457FBB_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_mF73EAB2893A0A68AFA4A82F49C9F7BCB99457FBB_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m5ACC49D1B1A629A36257103F41BA983D03CFEF58_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  float (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m5ACC49D1B1A629A36257103F41BA983D03CFEF58_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_mB61882D1E5B7429F87A200496A7FD72164F7C4C2_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_mB61882D1E5B7429F87A200496A7FD72164F7C4C2_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_mA2A1B9BDBB8B246AE8B27A21DC04DB91EA6E2BFD_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_mA2A1B9BDBB8B246AE8B27A21DC04DB91EA6E2BFD_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_mDB0702BCA9D87063956E015D26368FB51CED7F62_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_mDB0702BCA9D87063956E015D26368FB51CED7F62_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_mAEAD4FA22CDE7F7A9F668D57A57C1AA0D5CF98BB_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t, const RuntimeMethod*))tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_mAEAD4FA22CDE7F7A9F668D57A57C1AA0D5CF98BB_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline void VTable8_CreateLittleEndian_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mEB829AEE4E415D0BEFB3E11656272B1B9E3EED37 (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*, const RuntimeMethod*))VTable8_CreateLittleEndian_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mEB829AEE4E415D0BEFB3E11656272B1B9E3EED37_gshared)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline void VTable8_CreateBigEndian_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mE7CCEB494269F8AA70097F3D269950C318972FCE (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*, const RuntimeMethod*))VTable8_CreateBigEndian_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mE7CCEB494269F8AA70097F3D269950C318972FCE_gshared)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline void FlatSharpInternal_AssertSizeOf_TisPolySpatialParticleCurveMode_tEC2D959B1CBDF1E002B8BCD490601297311C8D92_mD981008B8110C6DDC0B22EE2ACB33A77AE8FAFCC_inline (int32_t ___0_expectedSize, const RuntimeMethod* method)
{
	((  void (*) (int32_t, const RuntimeMethod*))FlatSharpInternal_AssertSizeOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m8895611A3612CEF72DC5892221E104FFB7678FEA_gshared_inline)(___0_expectedSize, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MemoryInputBuffer_ReadFloat_mE14AA2102E038B4F1EFDB62E542175F4F71D807D_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryInputBuffer_ReadInt_m9C14BEA8289A5075368F08DEC78C43E3F13D0B8F_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
inline void VTable8_CreateLittleEndian_TisRuntimeObject_m037A21DD16361C36CEB43BE56A74158E5D149E84 (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*, const RuntimeMethod*))VTable8_CreateLittleEndian_TisRuntimeObject_m037A21DD16361C36CEB43BE56A74158E5D149E84_gshared)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline void VTable8_CreateBigEndian_TisRuntimeObject_mF19F4EBA65320466BE9B26DC52118A5BE91D55F1 (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*, const RuntimeMethod*))VTable8_CreateBigEndian_TisRuntimeObject_mF19F4EBA65320466BE9B26DC52118A5BE91D55F1_gshared)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline void VTable8_CreateLittleEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m7689924C97013DC39962DF6BE6DDC22011387E18 (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*, const RuntimeMethod*))VTable8_CreateLittleEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m7689924C97013DC39962DF6BE6DDC22011387E18_gshared)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline void VTable8_CreateBigEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m830F453D73DBEDB3224825D31AC06E683FB4BFD1 (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*, const RuntimeMethod*))VTable8_CreateBigEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m830F453D73DBEDB3224825D31AC06E683FB4BFD1_gshared)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ReadOnlyMemoryInputBuffer_ReadFloat_m7B47901E475D0552B0A0EDE09DE783842F74BF0F_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyMemoryInputBuffer_ReadInt_m8A10C08D7D59D34CB8E64ADFD4BCC78E981D2F64_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
inline void VTable8_CreateLittleEndian_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mA0E3F68506B58297B40088F3873C8EB12E287035 (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*, const RuntimeMethod*))VTable8_CreateLittleEndian_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mA0E3F68506B58297B40088F3873C8EB12E287035_gshared)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline void VTable8_CreateBigEndian_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mE312CAF84CEF567571E7EFE61FF3C8A4041113FE (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*, const RuntimeMethod*))VTable8_CreateBigEndian_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mE312CAF84CEF567571E7EFE61FF3C8A4041113FE_gshared)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ArrayInputBuffer_ReadFloat_m9B0FF87A5566AC4B5C07F53D1E0125E9DEFCD2DD_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArrayInputBuffer_ReadInt_m8798ED218FA815A8FA0FAF9B47D6FDFA056F0AD0_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
inline void VTable8_CreateLittleEndian_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_m6ED0613C8F5C84AAEF7CD9828F608F510BA2D0C2 (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*, const RuntimeMethod*))VTable8_CreateLittleEndian_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_m6ED0613C8F5C84AAEF7CD9828F608F510BA2D0C2_gshared)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline void VTable8_CreateBigEndian_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mECC45EC0CAE5344392101C8A23E6D56CDEF71CCC (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*, const RuntimeMethod*))VTable8_CreateBigEndian_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mECC45EC0CAE5344392101C8A23E6D56CDEF71CCC_gshared)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ArraySegmentInputBuffer_ReadFloat_m06E15A309EA25FC6EF488FA845130DA282612254_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegmentInputBuffer_ReadInt_m4F323987A5C2D1F29D8A6CD37E259EBC50306C0F_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, const RuntimeMethod*))Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline)(__this, method);
}
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, int32_t, const RuntimeMethod*))Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline)(__this, ___0_start, method);
}
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared)(___0_span, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ScalarSpanReader_ReadFloat_m32F827D9BF154056E0D037EBF64A022D78946EDA_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScalarSpanReader_ReadInt_mE9DF8741A87BC7857ED46834E76D7AE354FCCFF1_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) ;
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*, const RuntimeMethod*))ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_gshared_inline)(__this, method);
}
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline)(__this, ___0_start, method);
}
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_gshared_inline)(___0_array, method);
}
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_segment, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, const RuntimeMethod*))MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_gshared_inline)(___0_segment, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatSharpInternalException__ctor_m98D1ACB853DD1A7DFF9C2F12F4EDC1E448BDA500 (FlatSharpInternalException_t582A03DA9A8F1C29DF1CCDA3DAEC2EC0CADC1877* __this, String_t* ___0_message, String_t* ___1_memberName, String_t* ___2_fileName, int32_t ___3_lineNumber, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ScalarSpanReader_ReadUInt_m5A2AA7E6CF46CE633A8F4CC1ABDE9E465C37A948_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BinaryPrimitives_ReadInt32LittleEndian_m8FF3A5E10E26FEC7EA2FF160B17D0BB51B4A8AC5_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) ;
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, int32_t, int32_t, const RuntimeMethod*))Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline)(__this, ___0_start, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline)(__this, ___0_start, ___1_length, method);
}
inline void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline)(__this, ___0_array, method);
}
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline)(__this, method);
}
inline int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline)(__this, method);
}
inline int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReadUInt32LittleEndian_m1D2A6AA323C53D511E84C677D1F8F17077F3B070_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) ;
inline int32_t MemoryMarshal_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m610B098B008105D72394F56BF309D3A9F0F12ABC_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m610B098B008105D72394F56BF309D3A9F0F12ABC_gshared_inline)(___0_source, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BinaryPrimitives_ReverseEndianness_mF7B5C36D507C0D85537E18A1141554A99093BD78_inline (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
inline uint32_t MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_gshared_inline)(___0_source, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline (uint32_t ___0_value, const RuntimeMethod* method) ;
inline int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared)(___0_span, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_GetOrCreate_mCAF75D45413B97188B41E97DDB1EA2B1BF34495E_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* L_0 = (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__ctor_mB82C0C795B2BF7418EF1E5EBBE6C0ABBD1E3621F_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* L_1 = L_0;
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_2 = ___0_buffer;
		int32_t L_3 = ___1_offset;
		int16_t L_4 = ___2_remainingDepth;
		NullCheck(L_1);
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_Initialize_m79BC696C78B3CDAE9F0A2EEEFF124E4F25A1AF26_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__ctor_mB82C0C795B2BF7418EF1E5EBBE6C0ABBD1E3621F_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		PolySpatialParticleMinMaxCurve__ctor_m2716B1247C150EDAD03E363F68B8354E658DB2F6((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_Initialize_m79BC696C78B3CDAE9F0A2EEEFF124E4F25A1AF26_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->_____buffer))->___pointer), (void*)NULL);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)(&__this->_____vtable);
		VTable8_Create_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mB6EC50B337D1D2768FF506191C0477D837CA42F7_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this);
		PolySpatialParticleMinMaxCurve_OnFlatSharpDeserialized_m5F9157B76FFF12D6AD91CCE8F74F2E1760E637ED((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReturnToPool_m31A8EFC9BA14A3C6499E0991B36000A8F3FF6321_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, bool ___0_unsafeForce, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_TableOrStructType_m714CDD3FAF8A9208471AAF707AC1F3298AD4CF7B_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_DeserializationContext_m391EED77ABDDB36529B546FB5B95BC0B67A61F53_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_InputBuffer_m4B08F410F4E0698C7C96922FC2D7EFFC539B11B3_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, const RuntimeMethod* method) 
{
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = __this->_____buffer;
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_CanSerializeWithMemoryCopy_mFAB2D68A358032022D3D4E32C369A92D0211DC5F_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_get_IsRoot_m2C315666F25F54DCF04AA338167D5BDBEAD6975F_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->_____isRoot;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_set_IsRoot_m0A65B03B5E944EC5B78DF54CD02712EC16A916A4_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->_____isRoot = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_Mode_mF28285FA5EA5A26051B09ACE44FC145B7D82D3BC_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, const RuntimeMethod* method) 
{
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex0Value_m8315D4CB5700ADF1D06EE29E26B26E7BBB5158EA_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_Mode_mE162C894E70A637259AAB7B4B066F0C143B6DD0A_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_CurveMultiplier_mF403B8C8E2C46D3C0CDD7B041C08B52F25FCA837_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, const RuntimeMethod* method) 
{
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex1Value_m6741FA02BFB5462FB0237AEC21FE6A29F114116C_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_CurveMultiplier_m23158FF6458A47C5534822DBF7FE8E59694A7DBD_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MinValue_m3F71C7294834F3A12098900365D2D87AE110CF7B_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, const RuntimeMethod* method) 
{
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex2Value_m2526E9DE5DE6EFFCB4DA71516A5AF2A50205BF24_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MinValue_m96C47DCB3425C892059A745B53073FDB6425F121_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MaxValue_mCECCA6AFC64FA00344B52BC6301FBFA11530D8F5_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, const RuntimeMethod* method) 
{
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex3Value_m07714638084C25C71FC14FD1F21D83DFF51CE783_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MaxValue_mDD37282328D6A01FC0F025853C7D809CD30AC7F0_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MinCurveStartIndex_m264C7537B825895FA16D45C35D42CD381AA95097_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, const RuntimeMethod* method) 
{
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex4Value_m0E335B4721C87D782F04021EFC1BAC3035C7EFA8_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MinCurveStartIndex_m13634E1ABD5788CF23951538D4590EB911028730_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MinCurveLength_m8DE48989E929D36BE31ECC975523DED9D13F62CC_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, const RuntimeMethod* method) 
{
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex5Value_mD755F33456CD4FC98A05DABF48CFF3DDE762367F_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MinCurveLength_mD8924F69D622D262150E756D1E57E3313E75B4AB_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MaxCurveStartIndex_m7284A33B248D7DBBB42F278EDBBDAB3BE0EE2356_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, const RuntimeMethod* method) 
{
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex6Value_m5B1EB8ECA467D5DA34ECC15E9E82B03C90B46A1A_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MaxCurveStartIndex_mE871C605D68C7440D3B0837B2172DB854915DF5E_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MaxCurveLength_m53F15F61071EA195EEF1065EC0ADDA64B5F98ECB_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, const RuntimeMethod* method) 
{
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex7Value_mC7A2E832DE3700911D0CB9FF89BF7473DBC14A63_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MaxCurveLength_m977DAA3770E6D97BB99FAE1DB10ECFBDCFE352CE_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex0Value_m8315D4CB5700ADF1D06EE29E26B26E7BBB5158EA_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m2C344214BC420B37101187EB00F13127BCB25EF3_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex1Value_m6741FA02BFB5462FB0237AEC21FE6A29F114116C_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBEB7F70B072D95203A9BFCCF5302DB56706393EC_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex2Value_m2526E9DE5DE6EFFCB4DA71516A5AF2A50205BF24_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBEB7F70B072D95203A9BFCCF5302DB56706393EC_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex3Value_m07714638084C25C71FC14FD1F21D83DFF51CE783_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBEB7F70B072D95203A9BFCCF5302DB56706393EC_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex4Value_m0E335B4721C87D782F04021EFC1BAC3035C7EFA8_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex5Value_mD755F33456CD4FC98A05DABF48CFF3DDE762367F_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex6Value_m5B1EB8ECA467D5DA34ECC15E9E82B03C90B46A1A_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex7Value_mC7A2E832DE3700911D0CB9FF89BF7473DBC14A63_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__cctor_m964E41E0115147F8AAA07F15649E055B13B4AFCB_gshared (const RuntimeMethod* method) 
{
	{
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline((&L_0), (int32_t)0, NULL);
		((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->_____CtorContext = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_GetOrCreate_m6AFF7C04E85241B4AF616472F576BBDDF186419E_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* L_0 = (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__ctor_m41854DFE9C028850E22E57858EE8173F858C3D81_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* L_1 = L_0;
		RuntimeObject* L_2 = ___0_buffer;
		int32_t L_3 = ___1_offset;
		int16_t L_4 = ___2_remainingDepth;
		NullCheck(L_1);
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_Initialize_m7A65D3F4133A8FB401B5659612472F5BBF36287F_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__ctor_m41854DFE9C028850E22E57858EE8173F858C3D81_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		PolySpatialParticleMinMaxCurve__ctor_m2716B1247C150EDAD03E363F68B8354E658DB2F6((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_Initialize_m7A65D3F4133A8FB401B5659612472F5BBF36287F_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____buffer), (void*)L_0);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		RuntimeObject* L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)(&__this->_____vtable);
		VTable8_Create_TisRuntimeObject_m06E9A19CB9E3E47A11CA330CACBBB27DE5B3C7C4_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this);
		PolySpatialParticleMinMaxCurve_OnFlatSharpDeserialized_m5F9157B76FFF12D6AD91CCE8F74F2E1760E637ED((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReturnToPool_mD93C0AD60FFF33207A92804D138E0B844C61DFF4_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, bool ___0_unsafeForce, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_TableOrStructType_m2EA406BB46AF7150231079E5FE6A97A5336B8F18_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_DeserializationContext_m682296F239283FDDE11637136093C51EEA886C4F_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_InputBuffer_mC8DBBF8FC7D1979F9B2997592370D25A43141B1E_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->_____buffer;
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_CanSerializeWithMemoryCopy_mAF40315EC8CDD1386D997EF9A008C994523F587E_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_get_IsRoot_m947AB96C354C7151F1E062C6F7C5689D2627C126_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->_____isRoot;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_set_IsRoot_mCBBBB693883E5DEAB4AFC8BED4D58A306486737D_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->_____isRoot = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_Mode_m2A1F6B15A6E6481D500E64A0BC644BF89C956090_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex0Value_mC9D71510978ED43F17FE0B4E3999D51E4DE1D08E_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_Mode_m95C08D016CC5B954A11D64A4F1227A3EB10A1191_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_CurveMultiplier_m4505DB5ABF63BF30C024DFC4BF9DF9D5C29BC0F0_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex1Value_mD8D4F0AAB29FE369DB0DCF18B7F522D5EE23C892_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_CurveMultiplier_m1DDFCA4F2CEAF8125318A89259D2FA48FBE7C689_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MinValue_m48D1E0FD88F90DEF14B0C4871B3BB7EA414A3009_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex2Value_m9D4D3C274A51900952EA14B47627C7DFB5FCCEAB_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MinValue_mCFD07775942648B31250FA196AACA249267092D6_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MaxValue_m443A91792740BC0A26556788EA0993F02B3ABF6B_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex3Value_mC58584A05DDC24DCB2A061B387BDD1636F624559_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MaxValue_m85A545F84A71D5E732DB5600C2A6078941DF0515_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MinCurveStartIndex_m9FBD55C20BFDE017E26E855EBDB6F5323EB3FD54_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex4Value_m17D2980E1C08C39B2D79BB2E409A49899C7A3C71_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MinCurveStartIndex_m0027FEAE94177435624F4C67FAE5A2EB6B84973B_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MinCurveLength_m875046BD8A9F718C620704977950DB929D9DAE32_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex5Value_m01E5BB2AA95FB5A28B378043D1AC7A7864D7B0B9_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MinCurveLength_mF520294CE858D139BCA2881BD245A6EC479CE5DC_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MaxCurveStartIndex_mC6BD8C2A27FE868D682F06E418CD4F611F177817_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex6Value_m328DD4626B3BB8330DC55A713F5DB2322BE997A2_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MaxCurveStartIndex_m49E77020FDC51F6C93863C84BC2401093A828944_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MaxCurveLength_m03BE47F087D3AF4DD627E569D2EF62E364425225_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex7Value_mFF03F0682493BB9F860FDB8DA79246E1EBDC2436_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MaxCurveLength_mABE00EC6CD936784FEA0D50855C06016841B7C63_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex0Value_mC9D71510978ED43F17FE0B4E3999D51E4DE1D08E_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_m51AE93C469DF7CF18C82F17D6EA066C477BF4F05_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex1Value_mD8D4F0AAB29FE369DB0DCF18B7F522D5EE23C892_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mE5EC898BB21BD768FFFECCCD0E95882A78D79A36_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex2Value_m9D4D3C274A51900952EA14B47627C7DFB5FCCEAB_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mE5EC898BB21BD768FFFECCCD0E95882A78D79A36_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex3Value_mC58584A05DDC24DCB2A061B387BDD1636F624559_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mE5EC898BB21BD768FFFECCCD0E95882A78D79A36_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex4Value_m17D2980E1C08C39B2D79BB2E409A49899C7A3C71_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex5Value_m01E5BB2AA95FB5A28B378043D1AC7A7864D7B0B9_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex6Value_m328DD4626B3BB8330DC55A713F5DB2322BE997A2_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex7Value_mFF03F0682493BB9F860FDB8DA79246E1EBDC2436_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__cctor_m54EE61FBE419492C44BE45E21996787DEEDF951A_gshared (const RuntimeMethod* method) 
{
	{
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline((&L_0), (int32_t)0, NULL);
		((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->_____CtorContext = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_GetOrCreate_mB8A92E331B08F8C7C69425879CC74D7E5C7C689B_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* L_0 = (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__ctor_mF21C87C95D8A9E0B07E4453F212404361B60DBA1_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* L_1 = L_0;
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_2 = ___0_buffer;
		int32_t L_3 = ___1_offset;
		int16_t L_4 = ___2_remainingDepth;
		NullCheck(L_1);
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_Initialize_m3115160D3580E62708F6F1E3A2AF3EEFF3B2157C_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__ctor_mF21C87C95D8A9E0B07E4453F212404361B60DBA1_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		PolySpatialParticleMinMaxCurve__ctor_m2716B1247C150EDAD03E363F68B8354E658DB2F6((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_Initialize_m3115160D3580E62708F6F1E3A2AF3EEFF3B2157C_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->_____buffer))->___pointer), (void*)NULL);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)(&__this->_____vtable);
		VTable8_Create_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mC6114ACC0E0DF0D0365F1F2DBA49E4716E6A5778_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this);
		PolySpatialParticleMinMaxCurve_OnFlatSharpDeserialized_m5F9157B76FFF12D6AD91CCE8F74F2E1760E637ED((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReturnToPool_m56A29776245D4021B009E6B52436A3318556F545_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, bool ___0_unsafeForce, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_TableOrStructType_m8842853C1B7DD69DA3CA7A9B3277AD048A329538_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_DeserializationContext_mA488C3C544B5E48AF70DE7751DF1CC4987D93891_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_InputBuffer_m9621928146BFF9F55D1587CD7077C191E4FAAEF8_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = __this->_____buffer;
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_CanSerializeWithMemoryCopy_mC3E7B8DEB0CBBFF2632D96CC576E9C28E0A5881E_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_get_IsRoot_mEB17D475455BBF2FA88F2C131576F24EB8E6CC3B_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->_____isRoot;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_set_IsRoot_mA4B3A9E8A5F94F95B2D74BDA301C46C17DA62151_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->_____isRoot = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_Mode_m076600C13EC0D9337342098F2276B2AEB99705D1_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex0Value_mE3F24321FFFF33DCD1334FF3356E1848ADBF6019_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_Mode_mD5A39108773FDBA1E2ED9B02DF2F89DC7DAC783C_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_CurveMultiplier_mB4707D157AFAC60270A373BB46A82C1EDB9CFE31_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex1Value_mDC9C58FB9B51B71EDAEC0CF33694E7DFCFF2CFF6_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_CurveMultiplier_mA4AE68FC1853C8D5374103204055E2B4E6C87558_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MinValue_m40D108CDAA806CC3316B1F5F28501C350A77DC91_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex2Value_mF992E2C73BD03C57F98AA35A5F4111739EEDACD4_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MinValue_m1028432E3AA6482ADD3D1ECC24BC85AA244DC1BD_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MaxValue_m65B0DE07EFE6342C7256D8596768ADC60A9EE8BA_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex3Value_mC3E895F8B714A62C27F7DFBBFA630448E8CA3051_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MaxValue_mC18CA08D64E1C55B4AC238099011654B6E54E501_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MinCurveStartIndex_m5DB5927FA4F9B5DA37DBA8D616A1DE0982764876_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex4Value_m73CC2875639B5802041069F652BF7333F85379B5_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MinCurveStartIndex_mECE0077ED00A90AB8BD3C50922F66FC48C268634_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MinCurveLength_mC958624BB691E521E5C0C74554886860BDA98EC1_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex5Value_mCC020D0728A57DF259E45C93AFA05875CCB50B4B_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MinCurveLength_m997B062C340008BDF0A66108A2C598417132CA0D_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MaxCurveStartIndex_m44E6592A93F0309E2FB726066D9035853B8F119F_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex6Value_mC17799FC6F82380551873D961DB23455EB149946_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MaxCurveStartIndex_m2F7DD2F514E012FA2098EA1C6A1768390F96B84B_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MaxCurveLength_m24CD139A3F7F0A9738DAFFC84D483B8BD759831F_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = __this->_____buffer;
		int32_t L_1 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = __this->_____vtable;
		int16_t L_3 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_4;
		L_4 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex7Value_m69BEA55C05778A0BC699D9506E4DC4BD266F8D2A_inline(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MaxCurveLength_m6F1961D6BF27193C22469179D527A32650C65B47_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex0Value_mE3F24321FFFF33DCD1334FF3356E1848ADBF6019_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m405627FB0B74E409E6AB090822A3ED1228935C8F_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex1Value_mDC9C58FB9B51B71EDAEC0CF33694E7DFCFF2CFF6_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m1A901A0081B729E0014E3C83B6533366CFC0FDEB_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex2Value_mF992E2C73BD03C57F98AA35A5F4111739EEDACD4_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m1A901A0081B729E0014E3C83B6533366CFC0FDEB_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex3Value_mC3E895F8B714A62C27F7DFBBFA630448E8CA3051_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m1A901A0081B729E0014E3C83B6533366CFC0FDEB_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex4Value_m73CC2875639B5802041069F652BF7333F85379B5_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex5Value_mCC020D0728A57DF259E45C93AFA05875CCB50B4B_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex6Value_mC17799FC6F82380551873D961DB23455EB149946_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex7Value_m69BEA55C05778A0BC699D9506E4DC4BD266F8D2A_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__cctor_m06F227B674687F7684584A310FD354EB1448AC5E_gshared (const RuntimeMethod* method) 
{
	{
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline((&L_0), (int32_t)0, NULL);
		((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->_____CtorContext = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_GetOrCreate_m75DA2C8B9898F1737E2DC9BB1DA5CD08162F570F_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
	{
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* L_0 = (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* L_1 = L_0;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_3 = ___1_offset;
		int16_t L_4 = ___2_remainingDepth;
		NullCheck(L_1);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_2: *(void**)L_2), L_3, L_4);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__ctor_m15D797DBD987895D2B715B57576EDC35B7AB741E_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		PolySpatialParticleMinMaxCurve__ctor_m2716B1247C150EDAD03E363F68B8354E658DB2F6((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_Initialize_m83945CF8D05A8635C13432802833B8131D604509_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_0, SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_1 = ___1_offset;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_1);
		int16_t L_2 = ___2_remainingDepth;
		il2cpp_codegen_write_instance_field_data<int16_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_2);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_4 = ___1_offset;
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_3: *(void**)L_3), L_4, (((VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_5 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this);
		PolySpatialParticleMinMaxCurve_OnFlatSharpDeserialized_m5F9157B76FFF12D6AD91CCE8F74F2E1760E637ED((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReturnToPool_mF10CA11DE86594EE7268B5405D0F0FF87E27FACA_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, bool ___0_unsafeForce, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_TableOrStructType_m13ADB9E5BF705BF783B2EEE33241F2D2F84FDF23_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_DeserializationContext_m586D7C867291DFB323A080C968D55D94E8678F8A_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_InputBuffer_m3EB21A9BFD73DE602DBDF41A7C6F4CBEBD2097F8_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_CanSerializeWithMemoryCopy_mCE64E771B12BB5BCA445B194061D9E4B85E8F952_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_get_IsRoot_m3190CDA916D670078013F5EF834575E67A71126C_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_set_IsRoot_m2455E88338DD6D6D3A15927831E1011AAC26972F_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_Mode_m1FB7744EA3758F45A0BF9475A0642300D003DA9C_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = *(VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int16_t L_3 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_4;
		L_4 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericAny, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_0: *(void**)L_0), L_1, L_2, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_Mode_m7C56F401CA6D7EE477ADF764FE61F7482B98AD30_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_CurveMultiplier_m6E88D097736C5E493F6632FB177D4020B761FCB3_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = *(VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int16_t L_3 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_4;
		L_4 = InvokerFuncInvoker4< float, Il2CppFullySharedGenericAny, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_0: *(void**)L_0), L_1, L_2, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_CurveMultiplier_mD9354958576325AE5E23E229F68E4F2ABFC1DE7D_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MinValue_m158C9B7560EABE6B84D938D59E4BBF069A536CA7_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = *(VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int16_t L_3 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_4;
		L_4 = InvokerFuncInvoker4< float, Il2CppFullySharedGenericAny, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_0: *(void**)L_0), L_1, L_2, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MinValue_m77C463545AEB17DBEB6F1E84BEF49CD27E0D5064_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MaxValue_mBCDF7FC3C237DEFA77EA72D6977FA5A1C6BE5CFA_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = *(VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int16_t L_3 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_4;
		L_4 = InvokerFuncInvoker4< float, Il2CppFullySharedGenericAny, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_0: *(void**)L_0), L_1, L_2, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MaxValue_mCAF6B008AEF966732D934D2CCD3C16758965296B_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MinCurveStartIndex_m7763FA7B2B45D04C9B121864CDAC22FD48EDA2EC_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = *(VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int16_t L_3 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_4;
		L_4 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericAny, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_0: *(void**)L_0), L_1, L_2, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MinCurveStartIndex_m5A481F1A8A80D2195145E9BE6DA26246975A17AF_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MinCurveLength_m63E74F81FC98FC6ED6F9D64E95DD947B81B51358_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = *(VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int16_t L_3 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_4;
		L_4 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericAny, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_0: *(void**)L_0), L_1, L_2, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MinCurveLength_m695F7912AD17D4D261C061F6576C752AC8FB0F77_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MaxCurveStartIndex_m3787EF559097489D2CCEE180CB6A695C14853270_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = *(VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int16_t L_3 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_4;
		L_4 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericAny, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_0: *(void**)L_0), L_1, L_2, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MaxCurveStartIndex_m57B4A392A7748A1E937CC2AE6E2B99E7E34FD4AA_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_get_MaxCurveLength_m582789C30F44D203CBDC4FF17F2C28308A95C0C6_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_2 = *(VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int16_t L_3 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_4;
		L_4 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericAny, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_0: *(void**)L_0), L_1, L_2, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_set_MaxCurveLength_m7D179483F34262DA09CAA725F558AEC0293D799B_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex0Value_m743C53C128E803FAC176F3AF2F835FCCF094722B_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), (&___2_vtable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_0: *(void**)L_0), 0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny, int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6, L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex1Value_mE193C3122D8DC78EEC629F3E8E6E971A11DBF2D3_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), (&___2_vtable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_0: *(void**)L_0), 1);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = InvokerFuncInvoker3< float, Il2CppFullySharedGenericAny, int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6, L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex2Value_mF695FD667707F41C4A9255865282771994E5AEF2_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), (&___2_vtable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_0: *(void**)L_0), 2);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = InvokerFuncInvoker3< float, Il2CppFullySharedGenericAny, int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6, L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex3Value_m727AB374D9F9762FE944DDC844A969135140B8AC_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), (&___2_vtable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_0: *(void**)L_0), 3);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = InvokerFuncInvoker3< float, Il2CppFullySharedGenericAny, int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6, L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex4Value_mF5C34CB1C0F10BDEF04096BC6A969E3687B28FF6_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), (&___2_vtable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_0: *(void**)L_0), 4);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny, int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6, L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex5Value_m2C7FAE6CDDCCAF90CFEC0420CAD4CF0971CD4D1F_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), (&___2_vtable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_0: *(void**)L_0), 5);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny, int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6, L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex6Value_mD7F9124935AA7E1DDD389B5962B59382BA08F305_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), (&___2_vtable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_0: *(void**)L_0), 6);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny, int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6, L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex7Value_mE8BD1458DDAE310998FD52C5F848790C26A18821_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), (&___2_vtable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_0: *(void**)L_0), 7);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t81DA6DF998AF2AE7205C38E883346D22D5879E49);
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny, int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6, L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__cctor_m1DDF61FF9101833710FEEB77C983B7A4A2E7F3FF_gshared (const RuntimeMethod* method) 
{
	{
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline((&L_0), (int32_t)0, NULL);
		((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_tBE7A3ED9DCE89B73858973B3D888E4D49CAD7ECF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->_____CtorContext = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_GetOrCreate_m4D2441C14190C208B4AF31E7E4FC5ACC59EAA54D_gshared (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* L_0 = (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m419D91D88FC64012EDDE40C6869BA208E8A55E82_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* L_1 = L_0;
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_2 = ___0_buffer;
		int32_t L_3 = ___1_offset;
		int16_t L_4 = ___2_remainingDepth;
		NullCheck(L_1);
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_m3884A8E8C4D8C9F71AE41BBB842161343823A1F2_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m419D91D88FC64012EDDE40C6869BA208E8A55E82_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		PolySpatialParticleMinMaxCurve__ctor_m2716B1247C150EDAD03E363F68B8354E658DB2F6((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_m3884A8E8C4D8C9F71AE41BBB842161343823A1F2_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->_____buffer))->___memory), (void*)NULL);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)(&__this->_____vtable);
		VTable8_Create_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m81B56CF63EB1EE66E22D78820F58BACC7B7C327D_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this);
		PolySpatialParticleMinMaxCurve_OnFlatSharpDeserialized_m5F9157B76FFF12D6AD91CCE8F74F2E1760E637ED((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReturnToPool_mC6441C97481CFE42389C17296459DE386A9B5E80_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, bool ___0_unsafeForce, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_TableOrStructType_mD9E6F6844C1E7F8D317C87D1C1F70ECF07419089_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_DeserializationContext_mA4EE12A16A039546DA297FDF2EE2F68955C60108_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_InputBuffer_m498FC7F682E6A337DE7614D93D646ECF3BD8232C_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, const RuntimeMethod* method) 
{
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = __this->_____buffer;
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_CanSerializeWithMemoryCopy_m12577B6F6859E67A252BE621E96789DC673C6E11_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_get_IsRoot_m52D21F212C9C428AD1EBCA24F69A6906A51B5C99_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->_____isRoot;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_set_IsRoot_m4280D5F8A52354F49C91ADE9263A0A1697DA2947_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->_____isRoot = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_Mode_m2913AF3B1696DF3787F870F4E96DB741E1F7302F_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&1)))
		{
			goto IL_003c;
		}
	}
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_mE6B8AD447E24EF00C9783A2DB0607791900F419A_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->_____index0Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|1))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|1)));
	}

IL_003c:
	{
		int32_t L_7 = __this->_____index0Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_Mode_mBB2B14FB69086D3FF6BDB3E70C691759C123C924_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_CurveMultiplier_mAE8E4607BB4FDCB06910C0021F6EA613B1829E32_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&2)))
		{
			goto IL_003c;
		}
	}
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m4BB3FD775F1E21102AE26788FAC31BD38A8A59AE_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->_____index1Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|2))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|2)));
	}

IL_003c:
	{
		float L_7 = __this->_____index1Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_CurveMultiplier_m24FF6F97373D38CF43AC34F1C99F6F044B7BE0C0_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MinValue_mC8AC91127A279B658D7C8D70C2D3EC313B61DCA7_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&4)))
		{
			goto IL_003c;
		}
	}
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_m78B679AE12682AE8F24C62417BA63C1499F05D62_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->_____index2Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|4))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|4)));
	}

IL_003c:
	{
		float L_7 = __this->_____index2Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MinValue_m5E3923E2042EB59FB1C2EADEF7EA0183A922126C_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MaxValue_m1D502148F4A60B88373E0395CB6D1A90739EACE8_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&8)))
		{
			goto IL_003c;
		}
	}
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m7BB9F98270BB31C793FCDB4E619602A3C919F0A5_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->_____index3Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|8))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|8)));
	}

IL_003c:
	{
		float L_7 = __this->_____index3Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MaxValue_m9649C52CE057A739BFA22842F5D4DCC46277ED09_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MinCurveStartIndex_mB0EE42700FBF3614051974F3A2B706CF481C9D38_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&((int32_t)16))))
		{
			goto IL_003e;
		}
	}
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_m4567256315ED416D626620ECE79D064668DAC02D_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->_____index4Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)16)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)16))));
	}

IL_003e:
	{
		int32_t L_7 = __this->_____index4Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MinCurveStartIndex_m8D0273683AB0B8D2C4B4827C775D2E40CE0B686B_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MinCurveLength_m1D339832C88DC78352584F0515E0A31E767B5340_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&((int32_t)32))))
		{
			goto IL_003e;
		}
	}
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_m06CAEF0DA412CD037C02D4897273D538C4BED22A_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		__this->_____index5Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)32)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)32))));
	}

IL_003e:
	{
		int32_t L_7 = __this->_____index5Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MinCurveLength_m4D03D69E37C6A28411E5502C1D2F7C445F19C3F7_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MaxCurveStartIndex_mD74EEFA1A0B98E7BB20946A65BA9B5D1B6E9F541_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&((int32_t)64))))
		{
			goto IL_003e;
		}
	}
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_mB55CB6B620B129B3532F40E3D288966595DE57CD_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		__this->_____index6Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)64)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)64))));
	}

IL_003e:
	{
		int32_t L_7 = __this->_____index6Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MaxCurveStartIndex_m2FED1274D1A19AEC07DACCF3A756330D3B7FACAE_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MaxCurveLength_m2974ADD3DC78118BB1BE0FEB569819C95C1AA7BA_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&((int32_t)128))))
		{
			goto IL_0044;
		}
	}
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m971D1439AED638DE5CB8AF33AF81B2A6C965E95E_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		__this->_____index7Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)128)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)128))));
	}

IL_0044:
	{
		int32_t L_7 = __this->_____index7Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MaxCurveLength_m6BBFB9E6928E976EE88730CA6444B9CD7A43DE15_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_mE6B8AD447E24EF00C9783A2DB0607791900F419A_gshared (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m4D4A3A69A509F633209BCD24BB7FD49DFD663DFB_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m9214EBC37733EF24E31274C04B9B183FC76C0136_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m4BB3FD775F1E21102AE26788FAC31BD38A8A59AE_gshared (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m4D4A3A69A509F633209BCD24BB7FD49DFD663DFB_inline((&___2_vtable), L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mE596CEE1DF90342E1B7CBB225C038DC2563A16C7_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_m78B679AE12682AE8F24C62417BA63C1499F05D62_gshared (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m4D4A3A69A509F633209BCD24BB7FD49DFD663DFB_inline((&___2_vtable), L_0, 2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mE596CEE1DF90342E1B7CBB225C038DC2563A16C7_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m7BB9F98270BB31C793FCDB4E619602A3C919F0A5_gshared (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m4D4A3A69A509F633209BCD24BB7FD49DFD663DFB_inline((&___2_vtable), L_0, 3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mE596CEE1DF90342E1B7CBB225C038DC2563A16C7_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_m4567256315ED416D626620ECE79D064668DAC02D_gshared (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m4D4A3A69A509F633209BCD24BB7FD49DFD663DFB_inline((&___2_vtable), L_0, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mB3657149B90584F39B270C8A07A807FFBEAFD0FF_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_m06CAEF0DA412CD037C02D4897273D538C4BED22A_gshared (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m4D4A3A69A509F633209BCD24BB7FD49DFD663DFB_inline((&___2_vtable), L_0, 5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mB3657149B90584F39B270C8A07A807FFBEAFD0FF_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_mB55CB6B620B129B3532F40E3D288966595DE57CD_gshared (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m4D4A3A69A509F633209BCD24BB7FD49DFD663DFB_inline((&___2_vtable), L_0, 6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mB3657149B90584F39B270C8A07A807FFBEAFD0FF_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m971D1439AED638DE5CB8AF33AF81B2A6C965E95E_gshared (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m4D4A3A69A509F633209BCD24BB7FD49DFD663DFB_inline((&___2_vtable), L_0, 7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mB3657149B90584F39B270C8A07A807FFBEAFD0FF_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__cctor_mC22E9F68DE068D2FAE24D7BFBF2A25B5F8EC5A11_gshared (const RuntimeMethod* method) 
{
	{
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline((&L_0), (int32_t)1, NULL);
		((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->_____CtorContext = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_GetOrCreate_mB2F6E0B3276BCEF642AF2CBE77733B69DB35938D_gshared (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* L_0 = (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m3A01F0038BED8A34DA76CB410D26A9BAE13F1058_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* L_1 = L_0;
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_2 = ___0_buffer;
		int32_t L_3 = ___1_offset;
		int16_t L_4 = ___2_remainingDepth;
		NullCheck(L_1);
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_m5AEC8B1910BD4E817FCC950A68D63309C8DFF6AA_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m3A01F0038BED8A34DA76CB410D26A9BAE13F1058_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		PolySpatialParticleMinMaxCurve__ctor_m2716B1247C150EDAD03E363F68B8354E658DB2F6((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_m5AEC8B1910BD4E817FCC950A68D63309C8DFF6AA_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->_____buffer))->___pointer), (void*)NULL);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)(&__this->_____vtable);
		VTable8_Create_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_m6BF974CCA1DF16BF714794B5C9E29E8870418F88_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this);
		PolySpatialParticleMinMaxCurve_OnFlatSharpDeserialized_m5F9157B76FFF12D6AD91CCE8F74F2E1760E637ED((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReturnToPool_m1E84698A4D22E497200FB0E7500AEF4277C10B95_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, bool ___0_unsafeForce, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_TableOrStructType_mFAB44E4CA85A0B21142C929966E718EA42634658_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_DeserializationContext_mA5DD71767E8F8B08CDEDF6EB08D24BA8B9BBDB9C_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_InputBuffer_m1452BCB51D28F236AC1831162432FAE38C17A477_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, const RuntimeMethod* method) 
{
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = __this->_____buffer;
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_CanSerializeWithMemoryCopy_mBAFBF3073217CB377019DEBA4196F813B07E9E84_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_get_IsRoot_m4CDA77200A0F2303B9DB317B203A6FF13AD082D2_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->_____isRoot;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_set_IsRoot_mCBD85CB85BBAE97AC94293AEABAA897D989982BB_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->_____isRoot = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_Mode_m0D3FD32012303F8C7653914E2782FCED4D77D2B7_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&1)))
		{
			goto IL_003c;
		}
	}
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_m97E3F8624D2DBAF15D01AA5B62C4407ABB7934BE_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->_____index0Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|1))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|1)));
	}

IL_003c:
	{
		int32_t L_7 = __this->_____index0Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_Mode_mE7A0D20793DA2D0311C3DB548B5A3507F83E9388_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_CurveMultiplier_m797C0C6C3118DDE4668FB70F6B7119099A84A618_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&2)))
		{
			goto IL_003c;
		}
	}
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m373A1AC726FB9979164FDA2AC26645621E2FE168_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->_____index1Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|2))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|2)));
	}

IL_003c:
	{
		float L_7 = __this->_____index1Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_CurveMultiplier_mEA42A0CD5A2BD70D2699A393B60580995E9975EC_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MinValue_mD9DE2169A5A2B5EDDF0DE6E10DC02CEB7215CD00_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&4)))
		{
			goto IL_003c;
		}
	}
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_m584FA74A708E2B12A9E3ADD0D9C701B471074EC7_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->_____index2Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|4))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|4)));
	}

IL_003c:
	{
		float L_7 = __this->_____index2Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MinValue_m25B9AC0761FF55062B6987BA97D9115389891B48_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MaxValue_m0F6594696068E451664C6673F15187567DA7BEBB_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&8)))
		{
			goto IL_003c;
		}
	}
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m4F69BD4968C63BA0480FA00850E4C48482E6A825_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->_____index3Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|8))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|8)));
	}

IL_003c:
	{
		float L_7 = __this->_____index3Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MaxValue_m6BD469A57F0EB73561B26D1BD4BEB472EA464F33_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MinCurveStartIndex_m926446A6ECCED3580951787D7723DDB7F3B0C8DC_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&((int32_t)16))))
		{
			goto IL_003e;
		}
	}
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_mC3524B1A43520159819E4FA9618615C0B67CC1EB_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->_____index4Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)16)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)16))));
	}

IL_003e:
	{
		int32_t L_7 = __this->_____index4Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MinCurveStartIndex_m6519D9A6DF0981AB6448DB680188B5639C004415_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MinCurveLength_mBEC58580D7FA3ACAE104A91DC97F1B61C68E4A5A_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&((int32_t)32))))
		{
			goto IL_003e;
		}
	}
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_m8370537C9C425FCC8F7A0BDE281DE5D90C0F8C15_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		__this->_____index5Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)32)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)32))));
	}

IL_003e:
	{
		int32_t L_7 = __this->_____index5Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MinCurveLength_mF2C7135C24E09CAD2D32B1284093F79B48533B5B_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MaxCurveStartIndex_mB10A97FE95C0ED506036D139C6543A0D5A019BF1_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&((int32_t)64))))
		{
			goto IL_003e;
		}
	}
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_m105455FA3954AD9AEC8742628E8326B43CC533F9_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		__this->_____index6Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)64)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)64))));
	}

IL_003e:
	{
		int32_t L_7 = __this->_____index6Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MaxCurveStartIndex_mF04D8B9E71C9D9F83D290C52E59D63532CC3FD67_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MaxCurveLength_m2A57F7B71C346E89BA08C1DA8296E0E7A086158D_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&((int32_t)128))))
		{
			goto IL_0044;
		}
	}
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m9EF31FCB408B7B25EE353D7FBF9B9F8C20792693_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		__this->_____index7Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)128)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)128))));
	}

IL_0044:
	{
		int32_t L_7 = __this->_____index7Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MaxCurveLength_m7E8DF7B3C6548445B0F96C3BDF1E68E1F8E39761_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_m97E3F8624D2DBAF15D01AA5B62C4407ABB7934BE_gshared (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mBF94885680411962959F363F4EA93C280C273C85_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_m85502A0D9C32850B9DE0B94EFCD07D9C7D4CD160_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m373A1AC726FB9979164FDA2AC26645621E2FE168_gshared (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mBF94885680411962959F363F4EA93C280C273C85_inline((&___2_vtable), L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mB9B32E4C15BAF9D3054B1483A9B4BAA10A451F1D_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_m584FA74A708E2B12A9E3ADD0D9C701B471074EC7_gshared (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mBF94885680411962959F363F4EA93C280C273C85_inline((&___2_vtable), L_0, 2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mB9B32E4C15BAF9D3054B1483A9B4BAA10A451F1D_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m4F69BD4968C63BA0480FA00850E4C48482E6A825_gshared (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mBF94885680411962959F363F4EA93C280C273C85_inline((&___2_vtable), L_0, 3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mB9B32E4C15BAF9D3054B1483A9B4BAA10A451F1D_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_mC3524B1A43520159819E4FA9618615C0B67CC1EB_gshared (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mBF94885680411962959F363F4EA93C280C273C85_inline((&___2_vtable), L_0, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mFF8B2625B845E2F98FBAD80EEA8CB1AE01309A52_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_m8370537C9C425FCC8F7A0BDE281DE5D90C0F8C15_gshared (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mBF94885680411962959F363F4EA93C280C273C85_inline((&___2_vtable), L_0, 5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mFF8B2625B845E2F98FBAD80EEA8CB1AE01309A52_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_m105455FA3954AD9AEC8742628E8326B43CC533F9_gshared (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mBF94885680411962959F363F4EA93C280C273C85_inline((&___2_vtable), L_0, 6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mFF8B2625B845E2F98FBAD80EEA8CB1AE01309A52_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m9EF31FCB408B7B25EE353D7FBF9B9F8C20792693_gshared (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mBF94885680411962959F363F4EA93C280C273C85_inline((&___2_vtable), L_0, 7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mFF8B2625B845E2F98FBAD80EEA8CB1AE01309A52_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__cctor_m99F14942E0F9F112A8F42379B573ECAE0426FB8D_gshared (const RuntimeMethod* method) 
{
	{
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline((&L_0), (int32_t)1, NULL);
		((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->_____CtorContext = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_GetOrCreate_mCF8D1B70DA2EC19032B2D74998EE6E7BCFB4F7D8_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* L_0 = (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m935D954F463EBD9E3C1FA4C5956C964A4C2469ED_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* L_1 = L_0;
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_2 = ___0_buffer;
		int32_t L_3 = ___1_offset;
		int16_t L_4 = ___2_remainingDepth;
		NullCheck(L_1);
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_mB4293BE295CB6B5F814C67EB6C2F32E57E9395F0_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m935D954F463EBD9E3C1FA4C5956C964A4C2469ED_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		PolySpatialParticleMinMaxCurve__ctor_m2716B1247C150EDAD03E363F68B8354E658DB2F6((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_mB4293BE295CB6B5F814C67EB6C2F32E57E9395F0_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->_____buffer))->___pointer), (void*)NULL);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)(&__this->_____vtable);
		VTable8_Create_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mB6EC50B337D1D2768FF506191C0477D837CA42F7_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this);
		PolySpatialParticleMinMaxCurve_OnFlatSharpDeserialized_m5F9157B76FFF12D6AD91CCE8F74F2E1760E637ED((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReturnToPool_m34027D49FE859814BE5AC1B298C1FAF15B718B32_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, bool ___0_unsafeForce, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_TableOrStructType_m7A05EEEA7E166D9FE3A574BAAE7EB8D320653299_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_DeserializationContext_mC04C9E00090221A1BD69617ED4B81F64FA4F666D_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_InputBuffer_mB01E833F84A19FA8E144BD390CD0E85ED2D01D55_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, const RuntimeMethod* method) 
{
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = __this->_____buffer;
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_CanSerializeWithMemoryCopy_m33A304D2914DF5C207421F8B17467DF6772AC549_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_get_IsRoot_m4AE5602C14B5794231EDD9BD4483AC2710968DB7_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->_____isRoot;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_set_IsRoot_mF81B760A5D80180E493D2CC8ABB2DBE63EEFC872_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->_____isRoot = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_Mode_mB7F61C531849BD8A685D4E650C3AD17BB40B24E3_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&1)))
		{
			goto IL_003c;
		}
	}
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_mC3D16CB2930EEDB41C9D4C1982631B7AA86C4EA0_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->_____index0Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|1))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|1)));
	}

IL_003c:
	{
		int32_t L_7 = __this->_____index0Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_Mode_mA4F639D36D4E009B8F6D94F545D7648A82C82FB0_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_CurveMultiplier_mBBA7D79F5BE34C62EE19AD09DC0DA31E88FAA03A_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&2)))
		{
			goto IL_003c;
		}
	}
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m5EA3939E3AFDB7310F3CCC7568566BF0ACE17D16_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->_____index1Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|2))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|2)));
	}

IL_003c:
	{
		float L_7 = __this->_____index1Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_CurveMultiplier_m11EED76AC18BE50B75E87035C86505868629BC90_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MinValue_m8060B4E0545DDCEA55A13B7C0D5A9919DFEFA5D6_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&4)))
		{
			goto IL_003c;
		}
	}
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_m9B7092836E0A4945343778D37B1BA5F385A87372_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->_____index2Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|4))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|4)));
	}

IL_003c:
	{
		float L_7 = __this->_____index2Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MinValue_m7E9BBA3AA2906DC24148A0871F60C2F3A122E890_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MaxValue_m704C3E9373CB69149F19728B2FA8EB58687692C9_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&8)))
		{
			goto IL_003c;
		}
	}
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m7A4642823EE58C90778605D251CE6262A78B02F2_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->_____index3Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|8))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|8)));
	}

IL_003c:
	{
		float L_7 = __this->_____index3Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MaxValue_mD5CFCEDC6CB205B2E2B21AA6EA1C20B69172E642_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MinCurveStartIndex_m5314DFF8395B2529526D1DDEECC8BB05A2BF7AD0_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&((int32_t)16))))
		{
			goto IL_003e;
		}
	}
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_mBFFC77C6C0CA5BEDADB485A8881E039229458A3D_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->_____index4Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)16)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)16))));
	}

IL_003e:
	{
		int32_t L_7 = __this->_____index4Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MinCurveStartIndex_m96B28743A8FA25868320323DEC310F3D6AA758C5_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MinCurveLength_m029BDBD664F62E7E08F2B483281154182BED5EEB_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&((int32_t)32))))
		{
			goto IL_003e;
		}
	}
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_mD9912BDF4195AA4A4973A570BBE9BD7D80BC5D24_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		__this->_____index5Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)32)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)32))));
	}

IL_003e:
	{
		int32_t L_7 = __this->_____index5Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MinCurveLength_mCD2B3964BC075B2061D0BABA2345F48FCFC5DEA7_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MaxCurveStartIndex_mE88341175A356047DB413980A26506F822FB3371_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&((int32_t)64))))
		{
			goto IL_003e;
		}
	}
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_m159F152A52BD965B6C184464FA56B0A5BC5C2AEF_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		__this->_____index6Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)64)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)64))));
	}

IL_003e:
	{
		int32_t L_7 = __this->_____index6Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MaxCurveStartIndex_mCC62C152EEBE457F213D80FEA48DF0C8BB1BD6C6_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MaxCurveLength_mCE37ADAE8C131D4447ABD1DA68F2F61B788C80CD_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&((int32_t)128))))
		{
			goto IL_0044;
		}
	}
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m8C3D6A8AF8CA3C2EE5E9DDF05B94FD578777B9B6_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		__this->_____index7Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)128)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)128))));
	}

IL_0044:
	{
		int32_t L_7 = __this->_____index7Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MaxCurveLength_m21D1BFE0807CCC8814A66E84116200D00833B07E_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_mC3D16CB2930EEDB41C9D4C1982631B7AA86C4EA0_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m2C344214BC420B37101187EB00F13127BCB25EF3_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m5EA3939E3AFDB7310F3CCC7568566BF0ACE17D16_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBEB7F70B072D95203A9BFCCF5302DB56706393EC_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_m9B7092836E0A4945343778D37B1BA5F385A87372_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBEB7F70B072D95203A9BFCCF5302DB56706393EC_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m7A4642823EE58C90778605D251CE6262A78B02F2_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBEB7F70B072D95203A9BFCCF5302DB56706393EC_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_mBFFC77C6C0CA5BEDADB485A8881E039229458A3D_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_mD9912BDF4195AA4A4973A570BBE9BD7D80BC5D24_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_m159F152A52BD965B6C184464FA56B0A5BC5C2AEF_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m8C3D6A8AF8CA3C2EE5E9DDF05B94FD578777B9B6_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__cctor_mAC3D78FA6219350E15E20BCDB4C5A06FD494D6D6_gshared (const RuntimeMethod* method) 
{
	{
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline((&L_0), (int32_t)1, NULL);
		((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->_____CtorContext = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_GetOrCreate_m79EC76478208BF2D7A71D9D46461F55416A0F272_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* L_0 = (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m62969793CE87EF3CCFFAE213400D805611AB4EF9_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* L_1 = L_0;
		RuntimeObject* L_2 = ___0_buffer;
		int32_t L_3 = ___1_offset;
		int16_t L_4 = ___2_remainingDepth;
		NullCheck(L_1);
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_mB4CCD88BAF398D9C3F14415527D83BAC3FFD2F9B_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m62969793CE87EF3CCFFAE213400D805611AB4EF9_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		PolySpatialParticleMinMaxCurve__ctor_m2716B1247C150EDAD03E363F68B8354E658DB2F6((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_mB4CCD88BAF398D9C3F14415527D83BAC3FFD2F9B_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____buffer), (void*)L_0);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		RuntimeObject* L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)(&__this->_____vtable);
		VTable8_Create_TisRuntimeObject_m06E9A19CB9E3E47A11CA330CACBBB27DE5B3C7C4_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this);
		PolySpatialParticleMinMaxCurve_OnFlatSharpDeserialized_m5F9157B76FFF12D6AD91CCE8F74F2E1760E637ED((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReturnToPool_mB64E48D77F7C045168D44FBF8E21F1FD8887B67F_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, bool ___0_unsafeForce, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_TableOrStructType_m847DEB185AF84A43594044BA1830A9FF89C63E05_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_DeserializationContext_m0D8BF517AF0A563C97A9E149F89A4D4018C9FA28_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_InputBuffer_mF9B7CDD74527B615D03CC0F1B02240E916BFDF4D_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->_____buffer;
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_CanSerializeWithMemoryCopy_mA2E8A6E34AF39844C2C6AF7107A657CA47A1A425_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_get_IsRoot_m70DD5A537CCC187C2D20A684C63851B76EEA9704_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->_____isRoot;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_set_IsRoot_mEFFBEC650EBB6A5ADA7D5A5E0A0134158EB3711A_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->_____isRoot = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_Mode_mE3A2EC91F700A9F46B589A1E6F70F6F6F3706399_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&1)))
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_m8744F389186E5EE3FBF3078BA28AE15B5DAECFE6_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->_____index0Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|1))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|1)));
	}

IL_003c:
	{
		int32_t L_7 = __this->_____index0Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_Mode_m98EE0AD0EC9594D8E90228586DF82B261044D8CF_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_CurveMultiplier_m1AF0725F9F714CBA6A850D69BF8CC3E3C53A468A_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&2)))
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m36E3FC84713EC152680DFFB77CB80FC4DAE2774F_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->_____index1Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|2))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|2)));
	}

IL_003c:
	{
		float L_7 = __this->_____index1Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_CurveMultiplier_mD2BF670EFBEF9744704513ABA1C525533D9BFD63_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MinValue_m9185C5786A1EC61A226FA173281B0CE9BED21A8B_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&4)))
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_mD8299F9C5E2974331A980E48AE5ABE6349BED27E_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->_____index2Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|4))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|4)));
	}

IL_003c:
	{
		float L_7 = __this->_____index2Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MinValue_mB5E424247661B24072B338068219E8B6A48B1347_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MaxValue_mC01BD9814E0E7612F5446063DDEBADFD44E23F87_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&8)))
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m89D7E6223240F6B4E8E1E7935F9EDC0A4AFE7E9F_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->_____index3Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|8))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|8)));
	}

IL_003c:
	{
		float L_7 = __this->_____index3Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MaxValue_m0837A5424A2C403FB0CE5399A786F4E5C1B4373E_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MinCurveStartIndex_m9F57EA3E7370F7208F8BB2FEF6AF643EB1AA113F_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&((int32_t)16))))
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject* L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_m64C04981C8018613B12315DCDC80F0585ECD6AB1_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->_____index4Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)16)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)16))));
	}

IL_003e:
	{
		int32_t L_7 = __this->_____index4Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MinCurveStartIndex_mC7356B92B932E1A6C2A4381C25F5DE4C0C2F2DC2_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MinCurveLength_mA094A45680C45835718C84B82DF28416266D9041_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&((int32_t)32))))
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject* L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_m51CA9E2040E842AD136E18B90A5469A3FF99B100_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		__this->_____index5Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)32)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)32))));
	}

IL_003e:
	{
		int32_t L_7 = __this->_____index5Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MinCurveLength_m7A17439F9FC1998CF4911191F6EB85D12FEE19C8_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MaxCurveStartIndex_m1F9283C6A3F16889F89D24DDC7A30E5852FCCE63_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&((int32_t)64))))
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject* L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_mFC34D403D2C3ECE93B9BFC534C8CF1B9714DECC5_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		__this->_____index6Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)64)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)64))));
	}

IL_003e:
	{
		int32_t L_7 = __this->_____index6Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MaxCurveStartIndex_mE3C1791B3D637FE5C69ABADE59E22314FD31E61C_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MaxCurveLength_m3CABC196CF0D8DB8410A944B67D20CCD43557291_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&((int32_t)128))))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m39059DDABB572164F6091FD2F061C09F771A0B61_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		__this->_____index7Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)128)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)128))));
	}

IL_0044:
	{
		int32_t L_7 = __this->_____index7Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MaxCurveLength_m935CBBB732603A9518C65CF80D82372EF1079BC2_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_m8744F389186E5EE3FBF3078BA28AE15B5DAECFE6_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_m51AE93C469DF7CF18C82F17D6EA066C477BF4F05_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m36E3FC84713EC152680DFFB77CB80FC4DAE2774F_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mE5EC898BB21BD768FFFECCCD0E95882A78D79A36_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_mD8299F9C5E2974331A980E48AE5ABE6349BED27E_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mE5EC898BB21BD768FFFECCCD0E95882A78D79A36_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m89D7E6223240F6B4E8E1E7935F9EDC0A4AFE7E9F_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mE5EC898BB21BD768FFFECCCD0E95882A78D79A36_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_m64C04981C8018613B12315DCDC80F0585ECD6AB1_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_m51CA9E2040E842AD136E18B90A5469A3FF99B100_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_mFC34D403D2C3ECE93B9BFC534C8CF1B9714DECC5_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m39059DDABB572164F6091FD2F061C09F771A0B61_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__cctor_m87E3DEB2920510C2CBDB95378EB2C453D35712FF_gshared (const RuntimeMethod* method) 
{
	{
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline((&L_0), (int32_t)1, NULL);
		((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->_____CtorContext = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_GetOrCreate_mC7486AFA8286355A13A2DE8DC752ABC42EFB44B9_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* L_0 = (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_mB2A2EECDB60B0FF4E08A8E8440342B0615181EEB_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* L_1 = L_0;
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_2 = ___0_buffer;
		int32_t L_3 = ___1_offset;
		int16_t L_4 = ___2_remainingDepth;
		NullCheck(L_1);
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_mF8EFE0266D22D98F56D3DA10806136920DADA7C3_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_mB2A2EECDB60B0FF4E08A8E8440342B0615181EEB_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		PolySpatialParticleMinMaxCurve__ctor_m2716B1247C150EDAD03E363F68B8354E658DB2F6((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_mF8EFE0266D22D98F56D3DA10806136920DADA7C3_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->_____buffer))->___pointer), (void*)NULL);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)(&__this->_____vtable);
		VTable8_Create_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mC6114ACC0E0DF0D0365F1F2DBA49E4716E6A5778_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this);
		PolySpatialParticleMinMaxCurve_OnFlatSharpDeserialized_m5F9157B76FFF12D6AD91CCE8F74F2E1760E637ED((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReturnToPool_m436FF912D56C24FAF87A1D15FE39AD2C35CA5608_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, bool ___0_unsafeForce, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_TableOrStructType_m76554CCE3AC29EFB8A415A38565082376D00DB47_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_DeserializationContext_m19CA5898E7D5F6DE1F158DBB93B6CAB6CD955B3C_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_InputBuffer_m6FB16E1A973F6E15D642F0F78A7B3AB6BBB6E8BC_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = __this->_____buffer;
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_CanSerializeWithMemoryCopy_m905C007E24C28F53FDB124FC980A5A1F765BD020_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_get_IsRoot_m0AB1443A18B90EF3872C5AA87A7028296C2E0D97_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->_____isRoot;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_set_IsRoot_mBC052650C3FC06DB08C94B32C55FE2F95E31C253_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->_____isRoot = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_Mode_mCB195666AFEC8854667BC92C0A0659FEF9E6F1D7_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&1)))
		{
			goto IL_003c;
		}
	}
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_mE04FE810D3453C1F1D1C15DEA1A3904472ED8F0F_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->_____index0Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|1))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|1)));
	}

IL_003c:
	{
		int32_t L_7 = __this->_____index0Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_Mode_mE064FE267A90DB509C98812CEE5B6372B08D0EA5_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_CurveMultiplier_mBB823A02C40F6ABAC692EE13F2FC5F6D40D0F5FB_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&2)))
		{
			goto IL_003c;
		}
	}
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m6F8E6FB706E22C38615C0253FD7F20A340B62792_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->_____index1Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|2))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|2)));
	}

IL_003c:
	{
		float L_7 = __this->_____index1Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_CurveMultiplier_m7DAC559648C6ABC27B198359B0551DA5C27DC47E_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MinValue_mFF8BE5B316B944F4ED571B66A07DA7FD203ED407_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&4)))
		{
			goto IL_003c;
		}
	}
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_mF73EAB2893A0A68AFA4A82F49C9F7BCB99457FBB_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->_____index2Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|4))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|4)));
	}

IL_003c:
	{
		float L_7 = __this->_____index2Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MinValue_m8D1CFCB2098A88BE518AFBB8E00BF945A4E680D7_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MaxValue_m433A31F2FF52CE3D6E4C7C4924990DDCF17D8BCB_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&8)))
		{
			goto IL_003c;
		}
	}
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m5ACC49D1B1A629A36257103F41BA983D03CFEF58_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->_____index3Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|8))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|8)));
	}

IL_003c:
	{
		float L_7 = __this->_____index3Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MaxValue_mF27397DD0834DA683A755CB07DA884503F7944E6_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MinCurveStartIndex_m77B5B57F62EFD90BD795C42FCF65091CC7AC349B_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&((int32_t)16))))
		{
			goto IL_003e;
		}
	}
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_mB61882D1E5B7429F87A200496A7FD72164F7C4C2_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->_____index4Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)16)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)16))));
	}

IL_003e:
	{
		int32_t L_7 = __this->_____index4Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MinCurveStartIndex_m4DC3A0CD339D77F3DA44F51DCF206ED3D1AB1385_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MinCurveLength_mE3A9C894A0EEE9E29D1A52F88B6C655C7A0AC948_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&((int32_t)32))))
		{
			goto IL_003e;
		}
	}
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_mA2A1B9BDBB8B246AE8B27A21DC04DB91EA6E2BFD_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		__this->_____index5Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)32)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)32))));
	}

IL_003e:
	{
		int32_t L_7 = __this->_____index5Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MinCurveLength_m557A79E2E6C40DB60B3B72867572517801D8F344_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MaxCurveStartIndex_m724167549D899841C95079D0185C0ADC2AE68DC6_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&((int32_t)64))))
		{
			goto IL_003e;
		}
	}
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_mDB0702BCA9D87063956E015D26368FB51CED7F62_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		__this->_____index6Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)64)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)64))));
	}

IL_003e:
	{
		int32_t L_7 = __this->_____index6Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MaxCurveStartIndex_m3089C0684BE4700E6E49BD3B8EF4D8C864DD25EA_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MaxCurveLength_mBCB52BBDF3EA8D27E643C2CCC33CE96E39A51A00_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&((int32_t)128))))
		{
			goto IL_0044;
		}
	}
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_mAEAD4FA22CDE7F7A9F668D57A57C1AA0D5CF98BB_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		__this->_____index7Value = L_5;
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)128)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)128))));
	}

IL_0044:
	{
		int32_t L_7 = __this->_____index7Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MaxCurveLength_m588956CD2756BB2B6251A6684C33C32B0A330B2C_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_mE04FE810D3453C1F1D1C15DEA1A3904472ED8F0F_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m405627FB0B74E409E6AB090822A3ED1228935C8F_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m6F8E6FB706E22C38615C0253FD7F20A340B62792_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m1A901A0081B729E0014E3C83B6533366CFC0FDEB_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_mF73EAB2893A0A68AFA4A82F49C9F7BCB99457FBB_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m1A901A0081B729E0014E3C83B6533366CFC0FDEB_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m5ACC49D1B1A629A36257103F41BA983D03CFEF58_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m1A901A0081B729E0014E3C83B6533366CFC0FDEB_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_mB61882D1E5B7429F87A200496A7FD72164F7C4C2_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_mA2A1B9BDBB8B246AE8B27A21DC04DB91EA6E2BFD_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_mDB0702BCA9D87063956E015D26368FB51CED7F62_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_mAEAD4FA22CDE7F7A9F668D57A57C1AA0D5CF98BB_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__cctor_m37BD80EE4372DD79EE00EF3E550B3CE315134AC1_gshared (const RuntimeMethod* method) 
{
	{
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline((&L_0), (int32_t)1, NULL);
		((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->_____CtorContext = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_GetOrCreate_m5A2C035142B0225F0350A46632A2BB44A741A71A_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
	{
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* L_0 = (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* L_1 = L_0;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_3 = ___1_offset;
		int16_t L_4 = ___2_remainingDepth;
		NullCheck(L_1);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_2: *(void**)L_2), L_3, L_4);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m2DB41C027701AAA793E6B4195B6D5EC4FA347CBF_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		PolySpatialParticleMinMaxCurve__ctor_m2716B1247C150EDAD03E363F68B8354E658DB2F6((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_m45F3E77BFD17EC9C2EA2A248B2345C59303AB2F6_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_0, SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_1 = ___1_offset;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_1);
		int16_t L_2 = ___2_remainingDepth;
		il2cpp_codegen_write_instance_field_data<int16_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_2);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_4 = ___1_offset;
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_3: *(void**)L_3), L_4, (((VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_5 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this);
		PolySpatialParticleMinMaxCurve_OnFlatSharpDeserialized_m5F9157B76FFF12D6AD91CCE8F74F2E1760E637ED((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReturnToPool_m2A3A57AD6AB0EBC9E1A4E5C022955B6F7D1CF230_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, bool ___0_unsafeForce, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_TableOrStructType_mAA998581D7C1BAB04ABB1E8C07EDCCDEFFC83F51_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_DeserializationContext_mBBDF346926BC39DC759A77940DB090E1E35A308D_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_InputBuffer_m2EAC1D9C278AD704274FD261105D8613DD5CE0CB_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_CanSerializeWithMemoryCopy_mBA03B56C1A9F4BFB58ABA387A3F4ECE6047A7FCC_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_get_IsRoot_m33F5BF4C14EEC7211B77470A6B97E23A823C291F_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_set_IsRoot_mE160859A962BAD9B78D4A27CE763813D5EB542F5_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_Mode_m7954186016CA79A2B07D43F193F040FBC72864B0_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if (((int32_t)((int32_t)L_0&1)))
		{
			goto IL_003c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = *(VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int16_t L_4 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericAny, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_1: *(void**)L_1), L_2, L_3, L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_5);
		uint8_t L_6 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if ((int64_t)(((int32_t)((int32_t)L_6|1))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), ((uint8_t)((int32_t)((int32_t)L_6|1))));
	}

IL_003c:
	{
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_Mode_m79783BAE01AAD824F3D17B38038E20E1F741EB94_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_CurveMultiplier_m6CFB90193D688A3D23A13C2264B2257AA8E2E75A_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if (((int32_t)((int32_t)L_0&2)))
		{
			goto IL_003c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = *(VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int16_t L_4 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_5;
		L_5 = InvokerFuncInvoker4< float, Il2CppFullySharedGenericAny, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_1: *(void**)L_1), L_2, L_3, L_4);
		il2cpp_codegen_write_instance_field_data<float>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_5);
		uint8_t L_6 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if ((int64_t)(((int32_t)((int32_t)L_6|2))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), ((uint8_t)((int32_t)((int32_t)L_6|2))));
	}

IL_003c:
	{
		float L_7 = *(float*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_CurveMultiplier_mA501DC77B925361CA14EE5F2EA6FA38D123DA25C_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MinValue_m121303438FEBF8960969CEF7A01ADD8A551002D2_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if (((int32_t)((int32_t)L_0&4)))
		{
			goto IL_003c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = *(VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int16_t L_4 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_5;
		L_5 = InvokerFuncInvoker4< float, Il2CppFullySharedGenericAny, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_1: *(void**)L_1), L_2, L_3, L_4);
		il2cpp_codegen_write_instance_field_data<float>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_5);
		uint8_t L_6 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if ((int64_t)(((int32_t)((int32_t)L_6|4))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), ((uint8_t)((int32_t)((int32_t)L_6|4))));
	}

IL_003c:
	{
		float L_7 = *(float*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MinValue_m11FD665E98A2832E02F1538B10B83CFEC3F12973_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MaxValue_mF56B8B1048D10186E1DD01AAB6A0255F5D44CEA6_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if (((int32_t)((int32_t)L_0&8)))
		{
			goto IL_003c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = *(VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int16_t L_4 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_5;
		L_5 = InvokerFuncInvoker4< float, Il2CppFullySharedGenericAny, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_1: *(void**)L_1), L_2, L_3, L_4);
		il2cpp_codegen_write_instance_field_data<float>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_5);
		uint8_t L_6 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if ((int64_t)(((int32_t)((int32_t)L_6|8))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), ((uint8_t)((int32_t)((int32_t)L_6|8))));
	}

IL_003c:
	{
		float L_7 = *(float*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MaxValue_m5209BE502A13A26EFD002971BB9BE8BD78AF60F3_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MinCurveStartIndex_mF785A757CAC49DB21CAC32BAC3D1E4288EDFABA0_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if (((int32_t)((int32_t)L_0&((int32_t)16))))
		{
			goto IL_003e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = *(VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int16_t L_4 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericAny, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_1: *(void**)L_1), L_2, L_3, L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_5);
		uint8_t L_6 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)16)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)16)))));
	}

IL_003e:
	{
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MinCurveStartIndex_m2937DBB8FFC21F0BE0E6E33C70E1A04339073E4B_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MinCurveLength_m55D74C6D6E0EF93E003642C23146C75B7D918957_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if (((int32_t)((int32_t)L_0&((int32_t)32))))
		{
			goto IL_003e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = *(VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int16_t L_4 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericAny, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_1: *(void**)L_1), L_2, L_3, L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_5);
		uint8_t L_6 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)32)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)32)))));
	}

IL_003e:
	{
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MinCurveLength_mF68A5EAB5C0E6F6A711266B9109F074723021A1B_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MaxCurveStartIndex_mB72CE49A5A5657899B16E77C17BABCA93A4AA39F_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if (((int32_t)((int32_t)L_0&((int32_t)64))))
		{
			goto IL_003e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = *(VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int16_t L_4 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericAny, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_1: *(void**)L_1), L_2, L_3, L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_5);
		uint8_t L_6 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)64)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)64)))));
	}

IL_003e:
	{
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MaxCurveStartIndex_m21866DDF673BED5142B09CEE15F8A87CFD8BE8E1_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_get_MaxCurveLength_mA3A21EB2E2DACD735D855C7A891F1CDA326743E8_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if (((int32_t)((int32_t)L_0&((int32_t)128))))
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 L_3 = *(VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int16_t L_4 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		int32_t L_5;
		L_5 = InvokerFuncInvoker4< int32_t, Il2CppFullySharedGenericAny, int32_t, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_1: *(void**)L_1), L_2, L_3, L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_5);
		uint8_t L_6 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if ((int64_t)(((int32_t)((int32_t)L_6|((int32_t)128)))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), ((uint8_t)((int32_t)((int32_t)L_6|((int32_t)128)))));
	}

IL_0044:
	{
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_set_MaxCurveLength_m767DAF05DE2AD73FC66EC6D34FAF37EC194D1453_gshared (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_mA5BD0FB211B72E30D360DC73E14E7823761894CF_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), (&___2_vtable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_0: *(void**)L_0), 0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny, int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6, L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_mDD66722D101559E7C858AD12EAEA8C01DE5BF527_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), (&___2_vtable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_0: *(void**)L_0), 1);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = InvokerFuncInvoker3< float, Il2CppFullySharedGenericAny, int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6, L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_mDFABCB29935271F34BAA2214D44DA62D1C08686F_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), (&___2_vtable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_0: *(void**)L_0), 2);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = InvokerFuncInvoker3< float, Il2CppFullySharedGenericAny, int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6, L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m2D3E97F147BE66CFA04CA222F7E48F8FF7AB19E4_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), (&___2_vtable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_0: *(void**)L_0), 3);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = InvokerFuncInvoker3< float, Il2CppFullySharedGenericAny, int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6, L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_mD05DB30C847D5355DC8EC9510F46102B2A918A5F_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), (&___2_vtable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_0: *(void**)L_0), 4);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny, int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6, L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_mE3975F5044BF45AB204374A8D8B83649CACB67A7_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), (&___2_vtable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_0: *(void**)L_0), 5);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny, int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6, L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_mFCF510760EFA1810BEC6628F1E505DD5E5D0DDE4_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), (&___2_vtable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_0: *(void**)L_0), 6);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny, int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6, L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m523B75F04843C5EA2765C909FCE3A2CD291844AF_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), (&___2_vtable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_0: *(void**)L_0), 7);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t7EF15820080B4834232F7C73C9C97DBA87C75E62);
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny, int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6, L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__cctor_mF1EAABB61B7375BD8BCF0B4DFBCEE9D30534379E_gshared (const RuntimeMethod* method) 
{
	{
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline((&L_0), (int32_t)1, NULL);
		((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tC4B3DC31D946EB9FB6D4D199B7F98BC6063A1E9B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->_____CtorContext = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline (FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9* __this, int32_t ___0_deserializationOption, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_deserializationOption;
		__this->___U3CDeserializationOptionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__ctor_mB82C0C795B2BF7418EF1E5EBBE6C0ABBD1E3621F_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		PolySpatialParticleMinMaxCurve__ctor_m2716B1247C150EDAD03E363F68B8354E658DB2F6((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_Initialize_m79BC696C78B3CDAE9F0A2EEEFF124E4F25A1AF26_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5* __this, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->_____buffer))->___pointer), (void*)NULL);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)(&__this->_____vtable);
		VTable8_Create_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mB6EC50B337D1D2768FF506191C0477D837CA42F7_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t7C051AE419941A15C1F40DE4D7BF9C90C5F233D5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this);
		PolySpatialParticleMinMaxCurve_OnFlatSharpDeserialized_m5F9157B76FFF12D6AD91CCE8F74F2E1760E637ED((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VTable8_Create_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mB6EC50B337D1D2768FF506191C0477D837CA42F7_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		if (!il2cpp_codegen_is_little_endian())
		{
			goto IL_0010;
		}
	}
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_inputBuffer;
		int32_t L_1 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_2 = ___2_item;
		VTable8_CreateLittleEndian_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mEB829AEE4E415D0BEFB3E11656272B1B9E3EED37(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0010:
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_3 = ___0_inputBuffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = ___2_item;
		VTable8_CreateBigEndian_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mE7CCEB494269F8AA70097F3D269950C318972FCE(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex0Value_m8315D4CB5700ADF1D06EE29E26B26E7BBB5158EA_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m2C344214BC420B37101187EB00F13127BCB25EF3_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex1Value_m6741FA02BFB5462FB0237AEC21FE6A29F114116C_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBEB7F70B072D95203A9BFCCF5302DB56706393EC_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex2Value_m2526E9DE5DE6EFFCB4DA71516A5AF2A50205BF24_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBEB7F70B072D95203A9BFCCF5302DB56706393EC_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex3Value_m07714638084C25C71FC14FD1F21D83DFF51CE783_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBEB7F70B072D95203A9BFCCF5302DB56706393EC_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex4Value_m0E335B4721C87D782F04021EFC1BAC3035C7EFA8_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex5Value_mD755F33456CD4FC98A05DABF48CFF3DDE762367F_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex6Value_m5B1EB8ECA467D5DA34ECC15E9E82B03C90B46A1A_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex7Value_mC7A2E832DE3700911D0CB9FF89BF7473DBC14A63_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_gshared_inline (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* __this, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_index;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_003d;
			}
			case 4:
			{
				goto IL_0044;
			}
			case 5:
			{
				goto IL_004b;
			}
			case 6:
			{
				goto IL_0052;
			}
			case 7:
			{
				goto IL_0059;
			}
		}
	}
	{
		goto IL_0060;
	}

IL_0028:
	{
		uint16_t L_1 = __this->___offset0;
		return (int32_t)L_1;
	}

IL_002f:
	{
		uint16_t L_2 = __this->___offset2;
		return (int32_t)L_2;
	}

IL_0036:
	{
		uint16_t L_3 = __this->___offset4;
		return (int32_t)L_3;
	}

IL_003d:
	{
		uint16_t L_4 = __this->___offset6;
		return (int32_t)L_4;
	}

IL_0044:
	{
		uint16_t L_5 = __this->___offset8;
		return (int32_t)L_5;
	}

IL_004b:
	{
		uint16_t L_6 = __this->___offset10;
		return (int32_t)L_6;
	}

IL_0052:
	{
		uint16_t L_7 = __this->___offset12;
		return (int32_t)L_7;
	}

IL_0059:
	{
		uint16_t L_8 = __this->___offset14;
		return (int32_t)L_8;
	}

IL_0060:
	{
		return 0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m2C344214BC420B37101187EB00F13127BCB25EF3_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlatSharpInternal_AssertSizeOf_TisPolySpatialParticleCurveMode_tEC2D959B1CBDF1E002B8BCD490601297311C8D92_mD981008B8110C6DDC0B22EE2ACB33A77AE8FAFCC_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		FlatSharpInternal_AssertSizeOf_TisPolySpatialParticleCurveMode_tEC2D959B1CBDF1E002B8BCD490601297311C8D92_mD981008B8110C6DDC0B22EE2ACB33A77AE8FAFCC_inline(4, FlatSharpInternal_AssertSizeOf_TisPolySpatialParticleCurveMode_tEC2D959B1CBDF1E002B8BCD490601297311C8D92_mD981008B8110C6DDC0B22EE2ACB33A77AE8FAFCC_RuntimeMethod_var);
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1 = ___1_offset;
		int16_t L_2 = ___2_remainingDepth;
		int32_t L_3;
		L_3 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_inline(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return (int32_t)(L_3);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBEB7F70B072D95203A9BFCCF5302DB56706393EC_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___1_offset;
		float L_1;
		L_1 = MemoryInputBuffer_ReadFloat_mE14AA2102E038B4F1EFDB62E542175F4F71D807D_inline((&___0_buffer), L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___1_offset;
		int32_t L_1;
		L_1 = MemoryInputBuffer_ReadInt_m9C14BEA8289A5075368F08DEC78C43E3F13D0B8F_inline((&___0_buffer), L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__ctor_m41854DFE9C028850E22E57858EE8173F858C3D81_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		PolySpatialParticleMinMaxCurve__ctor_m2716B1247C150EDAD03E363F68B8354E658DB2F6((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_Initialize_m7A65D3F4133A8FB401B5659612472F5BBF36287F_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C* __this, RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____buffer), (void*)L_0);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		RuntimeObject* L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)(&__this->_____vtable);
		VTable8_Create_TisRuntimeObject_m06E9A19CB9E3E47A11CA330CACBBB27DE5B3C7C4_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t4F85AAD5BF2BBF56DAC1958D71D331EA39D2785C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this);
		PolySpatialParticleMinMaxCurve_OnFlatSharpDeserialized_m5F9157B76FFF12D6AD91CCE8F74F2E1760E637ED((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VTable8_Create_TisRuntimeObject_m06E9A19CB9E3E47A11CA330CACBBB27DE5B3C7C4_gshared_inline (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		if (!il2cpp_codegen_is_little_endian())
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject* L_0 = ___0_inputBuffer;
		int32_t L_1 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_2 = ___2_item;
		VTable8_CreateLittleEndian_TisRuntimeObject_m037A21DD16361C36CEB43BE56A74158E5D149E84(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0010:
	{
		RuntimeObject* L_3 = ___0_inputBuffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = ___2_item;
		VTable8_CreateBigEndian_TisRuntimeObject_mF19F4EBA65320466BE9B26DC52118A5BE91D55F1(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex0Value_mC9D71510978ED43F17FE0B4E3999D51E4DE1D08E_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_m51AE93C469DF7CF18C82F17D6EA066C477BF4F05_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex1Value_mD8D4F0AAB29FE369DB0DCF18B7F522D5EE23C892_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mE5EC898BB21BD768FFFECCCD0E95882A78D79A36_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex2Value_m9D4D3C274A51900952EA14B47627C7DFB5FCCEAB_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mE5EC898BB21BD768FFFECCCD0E95882A78D79A36_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex3Value_mC58584A05DDC24DCB2A061B387BDD1636F624559_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mE5EC898BB21BD768FFFECCCD0E95882A78D79A36_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex4Value_m17D2980E1C08C39B2D79BB2E409A49899C7A3C71_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex5Value_m01E5BB2AA95FB5A28B378043D1AC7A7864D7B0B9_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex6Value_m328DD4626B3BB8330DC55A713F5DB2322BE997A2_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex7Value_mFF03F0682493BB9F860FDB8DA79246E1EBDC2436_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_gshared_inline (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* __this, RuntimeObject* ___0_buffer, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_index;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_003d;
			}
			case 4:
			{
				goto IL_0044;
			}
			case 5:
			{
				goto IL_004b;
			}
			case 6:
			{
				goto IL_0052;
			}
			case 7:
			{
				goto IL_0059;
			}
		}
	}
	{
		goto IL_0060;
	}

IL_0028:
	{
		uint16_t L_1 = __this->___offset0;
		return (int32_t)L_1;
	}

IL_002f:
	{
		uint16_t L_2 = __this->___offset2;
		return (int32_t)L_2;
	}

IL_0036:
	{
		uint16_t L_3 = __this->___offset4;
		return (int32_t)L_3;
	}

IL_003d:
	{
		uint16_t L_4 = __this->___offset6;
		return (int32_t)L_4;
	}

IL_0044:
	{
		uint16_t L_5 = __this->___offset8;
		return (int32_t)L_5;
	}

IL_004b:
	{
		uint16_t L_6 = __this->___offset10;
		return (int32_t)L_6;
	}

IL_0052:
	{
		uint16_t L_7 = __this->___offset12;
		return (int32_t)L_7;
	}

IL_0059:
	{
		uint16_t L_8 = __this->___offset14;
		return (int32_t)L_8;
	}

IL_0060:
	{
		return 0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Helpers_Parse_TisRuntimeObject_m51AE93C469DF7CF18C82F17D6EA066C477BF4F05_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlatSharpInternal_AssertSizeOf_TisPolySpatialParticleCurveMode_tEC2D959B1CBDF1E002B8BCD490601297311C8D92_mD981008B8110C6DDC0B22EE2ACB33A77AE8FAFCC_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		FlatSharpInternal_AssertSizeOf_TisPolySpatialParticleCurveMode_tEC2D959B1CBDF1E002B8BCD490601297311C8D92_mD981008B8110C6DDC0B22EE2ACB33A77AE8FAFCC_inline(4, FlatSharpInternal_AssertSizeOf_TisPolySpatialParticleCurveMode_tEC2D959B1CBDF1E002B8BCD490601297311C8D92_mD981008B8110C6DDC0B22EE2ACB33A77AE8FAFCC_RuntimeMethod_var);
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1 = ___1_offset;
		int16_t L_2 = ___2_remainingDepth;
		int32_t L_3;
		L_3 = Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_inline(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return (int32_t)(L_3);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Helpers_Parse_TisRuntimeObject_mE5EC898BB21BD768FFFECCCD0E95882A78D79A36_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputBuffer_t14A70FD163319CA055DA912C0D7A845CFA9B8F3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___1_offset;
		NullCheck((RuntimeObject*)(___0_buffer));
		float L_1;
		L_1 = InterfaceFuncInvoker1< float, int32_t >::Invoke(11, IInputBuffer_t14A70FD163319CA055DA912C0D7A845CFA9B8F3F_il2cpp_TypeInfo_var, (RuntimeObject*)(___0_buffer), L_0);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputBuffer_t14A70FD163319CA055DA912C0D7A845CFA9B8F3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___1_offset;
		NullCheck((RuntimeObject*)(___0_buffer));
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(8, IInputBuffer_t14A70FD163319CA055DA912C0D7A845CFA9B8F3F_il2cpp_TypeInfo_var, (RuntimeObject*)(___0_buffer), L_0);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1__ctor_mF21C87C95D8A9E0B07E4453F212404361B60DBA1_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		PolySpatialParticleMinMaxCurve__ctor_m2716B1247C150EDAD03E363F68B8354E658DB2F6((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_Initialize_m3115160D3580E62708F6F1E3A2AF3EEFF3B2157C_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->_____buffer))->___pointer), (void*)NULL);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)(&__this->_____vtable);
		VTable8_Create_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mC6114ACC0E0DF0D0365F1F2DBA49E4716E6A5778_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_t2F67D3E299009D94239DD50C76E79181520CB26B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this);
		PolySpatialParticleMinMaxCurve_OnFlatSharpDeserialized_m5F9157B76FFF12D6AD91CCE8F74F2E1760E637ED((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VTable8_Create_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mC6114ACC0E0DF0D0365F1F2DBA49E4716E6A5778_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		if (!il2cpp_codegen_is_little_endian())
		{
			goto IL_0010;
		}
	}
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_inputBuffer;
		int32_t L_1 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_2 = ___2_item;
		VTable8_CreateLittleEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m7689924C97013DC39962DF6BE6DDC22011387E18(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0010:
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_3 = ___0_inputBuffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = ___2_item;
		VTable8_CreateBigEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m830F453D73DBEDB3224825D31AC06E683FB4BFD1(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex0Value_mE3F24321FFFF33DCD1334FF3356E1848ADBF6019_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m405627FB0B74E409E6AB090822A3ED1228935C8F_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex1Value_mDC9C58FB9B51B71EDAEC0CF33694E7DFCFF2CFF6_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m1A901A0081B729E0014E3C83B6533366CFC0FDEB_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex2Value_mF992E2C73BD03C57F98AA35A5F4111739EEDACD4_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m1A901A0081B729E0014E3C83B6533366CFC0FDEB_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex3Value_mC3E895F8B714A62C27F7DFBBFA630448E8CA3051_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m1A901A0081B729E0014E3C83B6533366CFC0FDEB_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex4Value_m73CC2875639B5802041069F652BF7333F85379B5_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex5Value_mCC020D0728A57DF259E45C93AFA05875CCB50B4B_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex6Value_mC17799FC6F82380551873D961DB23455EB149946_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Lazy_1_ReadIndex7Value_m69BEA55C05778A0BC699D9506E4DC4BD266F8D2A_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_gshared_inline (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_index;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_003d;
			}
			case 4:
			{
				goto IL_0044;
			}
			case 5:
			{
				goto IL_004b;
			}
			case 6:
			{
				goto IL_0052;
			}
			case 7:
			{
				goto IL_0059;
			}
		}
	}
	{
		goto IL_0060;
	}

IL_0028:
	{
		uint16_t L_1 = __this->___offset0;
		return (int32_t)L_1;
	}

IL_002f:
	{
		uint16_t L_2 = __this->___offset2;
		return (int32_t)L_2;
	}

IL_0036:
	{
		uint16_t L_3 = __this->___offset4;
		return (int32_t)L_3;
	}

IL_003d:
	{
		uint16_t L_4 = __this->___offset6;
		return (int32_t)L_4;
	}

IL_0044:
	{
		uint16_t L_5 = __this->___offset8;
		return (int32_t)L_5;
	}

IL_004b:
	{
		uint16_t L_6 = __this->___offset10;
		return (int32_t)L_6;
	}

IL_0052:
	{
		uint16_t L_7 = __this->___offset12;
		return (int32_t)L_7;
	}

IL_0059:
	{
		uint16_t L_8 = __this->___offset14;
		return (int32_t)L_8;
	}

IL_0060:
	{
		return 0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m405627FB0B74E409E6AB090822A3ED1228935C8F_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlatSharpInternal_AssertSizeOf_TisPolySpatialParticleCurveMode_tEC2D959B1CBDF1E002B8BCD490601297311C8D92_mD981008B8110C6DDC0B22EE2ACB33A77AE8FAFCC_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		FlatSharpInternal_AssertSizeOf_TisPolySpatialParticleCurveMode_tEC2D959B1CBDF1E002B8BCD490601297311C8D92_mD981008B8110C6DDC0B22EE2ACB33A77AE8FAFCC_inline(4, FlatSharpInternal_AssertSizeOf_TisPolySpatialParticleCurveMode_tEC2D959B1CBDF1E002B8BCD490601297311C8D92_mD981008B8110C6DDC0B22EE2ACB33A77AE8FAFCC_RuntimeMethod_var);
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1 = ___1_offset;
		int16_t L_2 = ___2_remainingDepth;
		int32_t L_3;
		L_3 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_inline(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return (int32_t)(L_3);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m1A901A0081B729E0014E3C83B6533366CFC0FDEB_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___1_offset;
		float L_1;
		L_1 = ReadOnlyMemoryInputBuffer_ReadFloat_m7B47901E475D0552B0A0EDE09DE783842F74BF0F_inline((&___0_buffer), L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___1_offset;
		int32_t L_1;
		L_1 = ReadOnlyMemoryInputBuffer_ReadInt_m8A10C08D7D59D34CB8E64ADFD4BCC78E981D2F64_inline((&___0_buffer), L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m419D91D88FC64012EDDE40C6869BA208E8A55E82_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		PolySpatialParticleMinMaxCurve__ctor_m2716B1247C150EDAD03E363F68B8354E658DB2F6((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_m3884A8E8C4D8C9F71AE41BBB842161343823A1F2_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74* __this, ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->_____buffer))->___memory), (void*)NULL);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)(&__this->_____vtable);
		VTable8_Create_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m81B56CF63EB1EE66E22D78820F58BACC7B7C327D_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tB4FB8376C317B6F017863A729A5875AFAAD9AC74_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this);
		PolySpatialParticleMinMaxCurve_OnFlatSharpDeserialized_m5F9157B76FFF12D6AD91CCE8F74F2E1760E637ED((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VTable8_Create_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m81B56CF63EB1EE66E22D78820F58BACC7B7C327D_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		if (!il2cpp_codegen_is_little_endian())
		{
			goto IL_0010;
		}
	}
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = ___0_inputBuffer;
		int32_t L_1 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_2 = ___2_item;
		VTable8_CreateLittleEndian_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mA0E3F68506B58297B40088F3873C8EB12E287035(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0010:
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_3 = ___0_inputBuffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = ___2_item;
		VTable8_CreateBigEndian_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mE312CAF84CEF567571E7EFE61FF3C8A4041113FE(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_mE6B8AD447E24EF00C9783A2DB0607791900F419A_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m4D4A3A69A509F633209BCD24BB7FD49DFD663DFB_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m9214EBC37733EF24E31274C04B9B183FC76C0136_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m4BB3FD775F1E21102AE26788FAC31BD38A8A59AE_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m4D4A3A69A509F633209BCD24BB7FD49DFD663DFB_inline((&___2_vtable), L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mE596CEE1DF90342E1B7CBB225C038DC2563A16C7_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_m78B679AE12682AE8F24C62417BA63C1499F05D62_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m4D4A3A69A509F633209BCD24BB7FD49DFD663DFB_inline((&___2_vtable), L_0, 2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mE596CEE1DF90342E1B7CBB225C038DC2563A16C7_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m7BB9F98270BB31C793FCDB4E619602A3C919F0A5_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m4D4A3A69A509F633209BCD24BB7FD49DFD663DFB_inline((&___2_vtable), L_0, 3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mE596CEE1DF90342E1B7CBB225C038DC2563A16C7_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_m4567256315ED416D626620ECE79D064668DAC02D_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m4D4A3A69A509F633209BCD24BB7FD49DFD663DFB_inline((&___2_vtable), L_0, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mB3657149B90584F39B270C8A07A807FFBEAFD0FF_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_m06CAEF0DA412CD037C02D4897273D538C4BED22A_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m4D4A3A69A509F633209BCD24BB7FD49DFD663DFB_inline((&___2_vtable), L_0, 5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mB3657149B90584F39B270C8A07A807FFBEAFD0FF_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_mB55CB6B620B129B3532F40E3D288966595DE57CD_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m4D4A3A69A509F633209BCD24BB7FD49DFD663DFB_inline((&___2_vtable), L_0, 6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mB3657149B90584F39B270C8A07A807FFBEAFD0FF_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m971D1439AED638DE5CB8AF33AF81B2A6C965E95E_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m4D4A3A69A509F633209BCD24BB7FD49DFD663DFB_inline((&___2_vtable), L_0, 7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mB3657149B90584F39B270C8A07A807FFBEAFD0FF_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VTable8_OffsetOf_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m4D4A3A69A509F633209BCD24BB7FD49DFD663DFB_gshared_inline (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* __this, ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_index;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_003d;
			}
			case 4:
			{
				goto IL_0044;
			}
			case 5:
			{
				goto IL_004b;
			}
			case 6:
			{
				goto IL_0052;
			}
			case 7:
			{
				goto IL_0059;
			}
		}
	}
	{
		goto IL_0060;
	}

IL_0028:
	{
		uint16_t L_1 = __this->___offset0;
		return (int32_t)L_1;
	}

IL_002f:
	{
		uint16_t L_2 = __this->___offset2;
		return (int32_t)L_2;
	}

IL_0036:
	{
		uint16_t L_3 = __this->___offset4;
		return (int32_t)L_3;
	}

IL_003d:
	{
		uint16_t L_4 = __this->___offset6;
		return (int32_t)L_4;
	}

IL_0044:
	{
		uint16_t L_5 = __this->___offset8;
		return (int32_t)L_5;
	}

IL_004b:
	{
		uint16_t L_6 = __this->___offset10;
		return (int32_t)L_6;
	}

IL_0052:
	{
		uint16_t L_7 = __this->___offset12;
		return (int32_t)L_7;
	}

IL_0059:
	{
		uint16_t L_8 = __this->___offset14;
		return (int32_t)L_8;
	}

IL_0060:
	{
		return 0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_m9214EBC37733EF24E31274C04B9B183FC76C0136_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlatSharpInternal_AssertSizeOf_TisPolySpatialParticleCurveMode_tEC2D959B1CBDF1E002B8BCD490601297311C8D92_mD981008B8110C6DDC0B22EE2ACB33A77AE8FAFCC_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		FlatSharpInternal_AssertSizeOf_TisPolySpatialParticleCurveMode_tEC2D959B1CBDF1E002B8BCD490601297311C8D92_mD981008B8110C6DDC0B22EE2ACB33A77AE8FAFCC_inline(4, FlatSharpInternal_AssertSizeOf_TisPolySpatialParticleCurveMode_tEC2D959B1CBDF1E002B8BCD490601297311C8D92_mD981008B8110C6DDC0B22EE2ACB33A77AE8FAFCC_RuntimeMethod_var);
		ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F L_0 = ___0_buffer;
		int32_t L_1 = ___1_offset;
		int16_t L_2 = ___2_remainingDepth;
		int32_t L_3;
		L_3 = Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mB3657149B90584F39B270C8A07A807FFBEAFD0FF_inline(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return (int32_t)(L_3);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mE596CEE1DF90342E1B7CBB225C038DC2563A16C7_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___1_offset;
		float L_1;
		L_1 = ArrayInputBuffer_ReadFloat_m9B0FF87A5566AC4B5C07F53D1E0125E9DEFCD2DD_inline((&___0_buffer), L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Helpers_Parse_TisArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_mB3657149B90584F39B270C8A07A807FFBEAFD0FF_gshared_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___1_offset;
		int32_t L_1;
		L_1 = ArrayInputBuffer_ReadInt_m8798ED218FA815A8FA0FAF9B47D6FDFA056F0AD0_inline((&___0_buffer), L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m3A01F0038BED8A34DA76CB410D26A9BAE13F1058_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		PolySpatialParticleMinMaxCurve__ctor_m2716B1247C150EDAD03E363F68B8354E658DB2F6((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_m5AEC8B1910BD4E817FCC950A68D63309C8DFF6AA_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5* __this, ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->_____buffer))->___pointer), (void*)NULL);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)(&__this->_____vtable);
		VTable8_Create_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_m6BF974CCA1DF16BF714794B5C9E29E8870418F88_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t2E79A777CC1921F0FE1D926CF8BA0D02C2B2B0F5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this);
		PolySpatialParticleMinMaxCurve_OnFlatSharpDeserialized_m5F9157B76FFF12D6AD91CCE8F74F2E1760E637ED((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VTable8_Create_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_m6BF974CCA1DF16BF714794B5C9E29E8870418F88_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_inputBuffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* ___2_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		if (!il2cpp_codegen_is_little_endian())
		{
			goto IL_0010;
		}
	}
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = ___0_inputBuffer;
		int32_t L_1 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_2 = ___2_item;
		VTable8_CreateLittleEndian_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_m6ED0613C8F5C84AAEF7CD9828F608F510BA2D0C2(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0010:
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_3 = ___0_inputBuffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = ___2_item;
		VTable8_CreateBigEndian_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mECC45EC0CAE5344392101C8A23E6D56CDEF71CCC(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_m97E3F8624D2DBAF15D01AA5B62C4407ABB7934BE_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mBF94885680411962959F363F4EA93C280C273C85_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_m85502A0D9C32850B9DE0B94EFCD07D9C7D4CD160_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m373A1AC726FB9979164FDA2AC26645621E2FE168_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mBF94885680411962959F363F4EA93C280C273C85_inline((&___2_vtable), L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mB9B32E4C15BAF9D3054B1483A9B4BAA10A451F1D_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_m584FA74A708E2B12A9E3ADD0D9C701B471074EC7_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mBF94885680411962959F363F4EA93C280C273C85_inline((&___2_vtable), L_0, 2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mB9B32E4C15BAF9D3054B1483A9B4BAA10A451F1D_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m4F69BD4968C63BA0480FA00850E4C48482E6A825_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mBF94885680411962959F363F4EA93C280C273C85_inline((&___2_vtable), L_0, 3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mB9B32E4C15BAF9D3054B1483A9B4BAA10A451F1D_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_mC3524B1A43520159819E4FA9618615C0B67CC1EB_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mBF94885680411962959F363F4EA93C280C273C85_inline((&___2_vtable), L_0, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mFF8B2625B845E2F98FBAD80EEA8CB1AE01309A52_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_m8370537C9C425FCC8F7A0BDE281DE5D90C0F8C15_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mBF94885680411962959F363F4EA93C280C273C85_inline((&___2_vtable), L_0, 5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mFF8B2625B845E2F98FBAD80EEA8CB1AE01309A52_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_m105455FA3954AD9AEC8742628E8326B43CC533F9_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mBF94885680411962959F363F4EA93C280C273C85_inline((&___2_vtable), L_0, 6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mFF8B2625B845E2F98FBAD80EEA8CB1AE01309A52_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m9EF31FCB408B7B25EE353D7FBF9B9F8C20792693_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mBF94885680411962959F363F4EA93C280C273C85_inline((&___2_vtable), L_0, 7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mFF8B2625B845E2F98FBAD80EEA8CB1AE01309A52_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VTable8_OffsetOf_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mBF94885680411962959F363F4EA93C280C273C85_gshared_inline (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* __this, ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_index;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_003d;
			}
			case 4:
			{
				goto IL_0044;
			}
			case 5:
			{
				goto IL_004b;
			}
			case 6:
			{
				goto IL_0052;
			}
			case 7:
			{
				goto IL_0059;
			}
		}
	}
	{
		goto IL_0060;
	}

IL_0028:
	{
		uint16_t L_1 = __this->___offset0;
		return (int32_t)L_1;
	}

IL_002f:
	{
		uint16_t L_2 = __this->___offset2;
		return (int32_t)L_2;
	}

IL_0036:
	{
		uint16_t L_3 = __this->___offset4;
		return (int32_t)L_3;
	}

IL_003d:
	{
		uint16_t L_4 = __this->___offset6;
		return (int32_t)L_4;
	}

IL_0044:
	{
		uint16_t L_5 = __this->___offset8;
		return (int32_t)L_5;
	}

IL_004b:
	{
		uint16_t L_6 = __this->___offset10;
		return (int32_t)L_6;
	}

IL_0052:
	{
		uint16_t L_7 = __this->___offset12;
		return (int32_t)L_7;
	}

IL_0059:
	{
		uint16_t L_8 = __this->___offset14;
		return (int32_t)L_8;
	}

IL_0060:
	{
		return 0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_m85502A0D9C32850B9DE0B94EFCD07D9C7D4CD160_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlatSharpInternal_AssertSizeOf_TisPolySpatialParticleCurveMode_tEC2D959B1CBDF1E002B8BCD490601297311C8D92_mD981008B8110C6DDC0B22EE2ACB33A77AE8FAFCC_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		FlatSharpInternal_AssertSizeOf_TisPolySpatialParticleCurveMode_tEC2D959B1CBDF1E002B8BCD490601297311C8D92_mD981008B8110C6DDC0B22EE2ACB33A77AE8FAFCC_inline(4, FlatSharpInternal_AssertSizeOf_TisPolySpatialParticleCurveMode_tEC2D959B1CBDF1E002B8BCD490601297311C8D92_mD981008B8110C6DDC0B22EE2ACB33A77AE8FAFCC_RuntimeMethod_var);
		ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 L_0 = ___0_buffer;
		int32_t L_1 = ___1_offset;
		int16_t L_2 = ___2_remainingDepth;
		int32_t L_3;
		L_3 = Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mFF8B2625B845E2F98FBAD80EEA8CB1AE01309A52_inline(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return (int32_t)(L_3);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mB9B32E4C15BAF9D3054B1483A9B4BAA10A451F1D_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___1_offset;
		float L_1;
		L_1 = ArraySegmentInputBuffer_ReadFloat_m06E15A309EA25FC6EF488FA845130DA282612254_inline((&___0_buffer), L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Helpers_Parse_TisArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_mFF8B2625B845E2F98FBAD80EEA8CB1AE01309A52_gshared_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___1_offset;
		int32_t L_1;
		L_1 = ArraySegmentInputBuffer_ReadInt_m4F323987A5C2D1F29D8A6CD37E259EBC50306C0F_inline((&___0_buffer), L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m935D954F463EBD9E3C1FA4C5956C964A4C2469ED_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		PolySpatialParticleMinMaxCurve__ctor_m2716B1247C150EDAD03E363F68B8354E658DB2F6((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_mB4293BE295CB6B5F814C67EB6C2F32E57E9395F0_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73* __this, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->_____buffer))->___pointer), (void*)NULL);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)(&__this->_____vtable);
		VTable8_Create_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mB6EC50B337D1D2768FF506191C0477D837CA42F7_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t90A2CBE11176474EFF88EC0FAE6DAA2F3EF9AC73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this);
		PolySpatialParticleMinMaxCurve_OnFlatSharpDeserialized_m5F9157B76FFF12D6AD91CCE8F74F2E1760E637ED((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_mC3D16CB2930EEDB41C9D4C1982631B7AA86C4EA0_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m2C344214BC420B37101187EB00F13127BCB25EF3_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m5EA3939E3AFDB7310F3CCC7568566BF0ACE17D16_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBEB7F70B072D95203A9BFCCF5302DB56706393EC_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_m9B7092836E0A4945343778D37B1BA5F385A87372_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBEB7F70B072D95203A9BFCCF5302DB56706393EC_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m7A4642823EE58C90778605D251CE6262A78B02F2_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBEB7F70B072D95203A9BFCCF5302DB56706393EC_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_mBFFC77C6C0CA5BEDADB485A8881E039229458A3D_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_mD9912BDF4195AA4A4973A570BBE9BD7D80BC5D24_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_m159F152A52BD965B6C184464FA56B0A5BC5C2AEF_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m8C3D6A8AF8CA3C2EE5E9DDF05B94FD578777B9B6_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mCF077FA1E6F98900EAA647DEB70860D21A614BDB_inline((&___2_vtable), L_0, 7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m73F712D061564595A6658420976811B71D342859_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_m62969793CE87EF3CCFFAE213400D805611AB4EF9_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		PolySpatialParticleMinMaxCurve__ctor_m2716B1247C150EDAD03E363F68B8354E658DB2F6((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_mB4CCD88BAF398D9C3F14415527D83BAC3FFD2F9B_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056* __this, RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____buffer), (void*)L_0);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		RuntimeObject* L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)(&__this->_____vtable);
		VTable8_Create_TisRuntimeObject_m06E9A19CB9E3E47A11CA330CACBBB27DE5B3C7C4_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_tD63C4325E2CE260220CFBA4EB05C3EE05E022056_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this);
		PolySpatialParticleMinMaxCurve_OnFlatSharpDeserialized_m5F9157B76FFF12D6AD91CCE8F74F2E1760E637ED((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_m8744F389186E5EE3FBF3078BA28AE15B5DAECFE6_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_m51AE93C469DF7CF18C82F17D6EA066C477BF4F05_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m36E3FC84713EC152680DFFB77CB80FC4DAE2774F_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mE5EC898BB21BD768FFFECCCD0E95882A78D79A36_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_mD8299F9C5E2974331A980E48AE5ABE6349BED27E_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mE5EC898BB21BD768FFFECCCD0E95882A78D79A36_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m89D7E6223240F6B4E8E1E7935F9EDC0A4AFE7E9F_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mE5EC898BB21BD768FFFECCCD0E95882A78D79A36_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_m64C04981C8018613B12315DCDC80F0585ECD6AB1_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_m51CA9E2040E842AD136E18B90A5469A3FF99B100_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_mFC34D403D2C3ECE93B9BFC534C8CF1B9714DECC5_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_m39059DDABB572164F6091FD2F061C09F771A0B61_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisRuntimeObject_m52EC4C13CD0764297B15E2777DE92A7DFED9B6B5_inline((&___2_vtable), L_0, 7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisRuntimeObject_mBA77ECD457D8D834504213232E52F754ABEC9027_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1__ctor_mB2A2EECDB60B0FF4E08A8E8440342B0615181EEB_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE_il2cpp_TypeInfo_var);
		PolySpatialParticleMinMaxCurve__ctor_m2716B1247C150EDAD03E363F68B8354E658DB2F6((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_Initialize_mF8EFE0266D22D98F56D3DA10806136920DADA7C3_gshared_inline (tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->_____buffer))->___pointer), (void*)NULL);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67* L_5 = (VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67*)(&__this->_____vtable);
		VTable8_Create_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mC6114ACC0E0DF0D0365F1F2DBA49E4716E6A5778_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_t8EB23F53FB842D05326315FE5DAFEBC84CADED8E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this);
		PolySpatialParticleMinMaxCurve_OnFlatSharpDeserialized_m5F9157B76FFF12D6AD91CCE8F74F2E1760E637ED((PolySpatialParticleMinMaxCurve_t079916C1C06870DBF8704E249B6E2608C6565ECE*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex0Value_mE04FE810D3453C1F1D1C15DEA1A3904472ED8F0F_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m405627FB0B74E409E6AB090822A3ED1228935C8F_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex1Value_m6F8E6FB706E22C38615C0253FD7F20A340B62792_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m1A901A0081B729E0014E3C83B6533366CFC0FDEB_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex2Value_mF73EAB2893A0A68AFA4A82F49C9F7BCB99457FBB_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m1A901A0081B729E0014E3C83B6533366CFC0FDEB_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex3Value_m5ACC49D1B1A629A36257103F41BA983D03CFEF58_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (0.0f);
	}

IL_0013:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		float L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m1A901A0081B729E0014E3C83B6533366CFC0FDEB_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex4Value_mB61882D1E5B7429F87A200496A7FD72164F7C4C2_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex5Value_mA2A1B9BDBB8B246AE8B27A21DC04DB91EA6E2BFD_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex6Value_mDB0702BCA9D87063956E015D26368FB51CED7F62_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tableReader_fdb3f8c4ed76426db21b050d2cef6d62_Progressive_1_ReadIndex7Value_mAEAD4FA22CDE7F7A9F668D57A57C1AA0D5CF98BB_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable8_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m8062C39706ABDEFBF2888829D914133F37EA8E46_inline((&___2_vtable), L_0, 7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		int32_t L_8;
		L_8 = Helpers_Parse_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mF2B33416B27B843EC0049906876F30313B69AD55_inline(L_5, L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MemoryInputBuffer_ReadFloat_mE14AA2102E038B4F1EFDB62E542175F4F71D807D_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		float L_6;
		L_6 = ScalarSpanReader_ReadFloat_m32F827D9BF154056E0D037EBF64A022D78946EDA_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryInputBuffer_ReadInt_m9C14BEA8289A5075368F08DEC78C43E3F13D0B8F_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int32_t L_6;
		L_6 = ScalarSpanReader_ReadInt_mE9DF8741A87BC7857ED46834E76D7AE354FCCFF1_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ReadOnlyMemoryInputBuffer_ReadFloat_m7B47901E475D0552B0A0EDE09DE783842F74BF0F_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		float L_5;
		L_5 = ScalarSpanReader_ReadFloat_m32F827D9BF154056E0D037EBF64A022D78946EDA_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyMemoryInputBuffer_ReadInt_m8A10C08D7D59D34CB8E64ADFD4BCC78E981D2F64_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		int32_t L_5;
		L_5 = ScalarSpanReader_ReadInt_mE9DF8741A87BC7857ED46834E76D7AE354FCCFF1_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ArrayInputBuffer_ReadFloat_m9B0FF87A5566AC4B5C07F53D1E0125E9DEFCD2DD_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		float L_5;
		L_5 = ScalarSpanReader_ReadFloat_m32F827D9BF154056E0D037EBF64A022D78946EDA_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArrayInputBuffer_ReadInt_m8798ED218FA815A8FA0FAF9B47D6FDFA056F0AD0_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int32_t L_5;
		L_5 = ScalarSpanReader_ReadInt_mE9DF8741A87BC7857ED46834E76D7AE354FCCFF1_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ArraySegmentInputBuffer_ReadFloat_m06E15A309EA25FC6EF488FA845130DA282612254_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		float L_6;
		L_6 = ScalarSpanReader_ReadFloat_m32F827D9BF154056E0D037EBF64A022D78946EDA_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegmentInputBuffer_ReadInt_m4F323987A5C2D1F29D8A6CD37E259EBC50306C0F_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int32_t L_6;
		L_6 = ScalarSpanReader_ReadInt_mE9DF8741A87BC7857ED46834E76D7AE354FCCFF1_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlatSharpInternal_AssertSizeOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m8895611A3612CEF72DC5892221E104FFB7678FEA_gshared_inline (int32_t ___0_expectedSize, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<int32_t>();
		int32_t L_1 = ___0_expectedSize;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0043;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(26, L_3);
		int32_t L_5 = ___0_expectedSize;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int32_t>();
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral53274B0F35D438E1870D80F75958B231A6109456)), (RuntimeObject*)L_4, L_7, L_10, NULL);
		FlatSharpInternalException_t582A03DA9A8F1C29DF1CCDA3DAEC2EC0CADC1877* L_12 = (FlatSharpInternalException_t582A03DA9A8F1C29DF1CCDA3DAEC2EC0CADC1877*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlatSharpInternalException_t582A03DA9A8F1C29DF1CCDA3DAEC2EC0CADC1877_il2cpp_TypeInfo_var)));
		FlatSharpInternalException__ctor_m98D1ACB853DD1A7DFF9C2F12F4EDC1E448BDA500(L_12, L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral98E8AE90FD7B225CAF3203EE20E341DDF7B43931)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral20CC088A70C197F88C7FC66E07386B7D7649711B)), ((int32_t)57), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0043:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ScalarSpanReader_ReadFloat_m32F827D9BF154056E0D037EBF64A022D78946EDA_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6));
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_span;
		uint32_t L_1;
		L_1 = ScalarSpanReader_ReadUInt_m5A2AA7E6CF46CE633A8F4CC1ABDE9E465C37A948_inline(L_0, NULL);
		(&V_0)->___bytes = L_1;
		FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6 L_2 = V_0;
		float L_3 = L_2.___value;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScalarSpanReader_ReadInt_mE9DF8741A87BC7857ED46834E76D7AE354FCCFF1_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_span;
		int32_t L_1;
		L_1 = BinaryPrimitives_ReadInt32LittleEndian_m8FF3A5E10E26FEC7EA2FF160B17D0BB51B4A8AC5_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		int32_t L_0 = __this->____index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20))));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(4, ((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20))));
		V_0 = L_2;
		int32_t L_3 = __this->____index;
		int32_t L_4 = __this->____length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_5;
	}

IL_0034:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 14)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_11 = __this->____object;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var));
		String_t* L_12 = V_1;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_13 = V_1;
		NullCheck(L_13);
		Il2CppChar* L_14;
		L_14 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_13, NULL);
		uint8_t* L_15;
		L_15 = il2cpp_unsafe_as_ref<uint8_t>(L_14);
		String_t* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_18), L_15, L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		V_0 = L_18;
		int32_t L_19 = __this->____index;
		int32_t L_20 = __this->____length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_21;
		L_21 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_21;
	}

IL_0089:
	{
		RuntimeObject* L_22 = __this->____object;
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_23 = __this->____object;
		int32_t L_24 = __this->____index;
		int32_t L_25 = __this->____length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_26), ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_23, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))), L_24, ((int32_t)(L_25&((int32_t)2147483647LL))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		return L_26;
	}

IL_00b4:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_27 = V_0;
		return L_27;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_gshared_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15))));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(4, ((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15))));
		V_0 = L_2;
		int32_t L_3 = __this->____index;
		int32_t L_4 = __this->____length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6;
		L_6 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_6;
	}

IL_0039:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_008e;
		}
	}
	{
		RuntimeObject* L_12 = __this->____object;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_12, String_t_il2cpp_TypeInfo_var));
		String_t* L_13 = V_1;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_14 = V_1;
		NullCheck(L_14);
		Il2CppChar* L_15;
		L_15 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_14, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_as_ref<uint8_t>(L_15);
		String_t* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_19;
		memset((&L_19), 0, sizeof(L_19));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_19), L_16, L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		V_2 = L_19;
		int32_t L_20 = __this->____index;
		int32_t L_21 = __this->____length;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_22;
		L_22 = ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline((&V_2), L_20, L_21, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		return L_22;
	}

IL_008e:
	{
		RuntimeObject* L_23 = __this->____object;
		if (!L_23)
		{
			goto IL_00b9;
		}
	}
	{
		RuntimeObject* L_24 = __this->____object;
		int32_t L_25 = __this->____index;
		int32_t L_26 = __this->____length;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_27;
		memset((&L_27), 0, sizeof(L_27));
		ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline((&L_27), ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_24, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))), L_25, ((int32_t)(L_26&((int32_t)2147483647LL))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		return L_27;
	}

IL_00b9:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_28 = V_2;
		return L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_gshared_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_segment, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___0_segment), il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_1;
		L_1 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___0_segment), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_2;
		L_2 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___0_segment), il2cpp_rgctx_method(method->rgctx_data, 5));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ScalarSpanReader_ReadUInt_m5A2AA7E6CF46CE633A8F4CC1ABDE9E465C37A948_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_span;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReadUInt32LittleEndian_m1D2A6AA323C53D511E84C677D1F8F17077F3B070_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BinaryPrimitives_ReadInt32LittleEndian_m8FF3A5E10E26FEC7EA2FF160B17D0BB51B4A8AC5_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m610B098B008105D72394F56BF309D3A9F0F12ABC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_source;
		int32_t L_1;
		L_1 = MemoryMarshal_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m610B098B008105D72394F56BF309D3A9F0F12ABC_inline(L_0, MemoryMarshal_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m610B098B008105D72394F56BF309D3A9F0F12ABC_RuntimeMethod_var);
		V_0 = L_1;
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_mF7B5C36D507C0D85537E18A1141554A99093BD78_inline(L_2, NULL);
		V_0 = L_3;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		int32_t L_12 = ___1_start;
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_add<uint8_t,int32_t>(L_11, L_12);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_start;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint8_t>(L_9);
		int32_t L_11 = ___1_start;
		uint8_t* L_12;
		L_12 = il2cpp_unsafe_add<uint8_t,int32_t>(L_10, L_11);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_13;
		memset((&L_13), 0, sizeof(L_13));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_13), L_12);
		__this->____pointer = L_13;
		int32_t L_14 = ___2_length;
		__this->____length = L_14;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0037;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____array;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____offset;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReadUInt32LittleEndian_m1D2A6AA323C53D511E84C677D1F8F17077F3B070_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_source;
		uint32_t L_1;
		L_1 = MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_inline(L_0, MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_RuntimeMethod_var);
		V_0 = L_1;
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_0015;
		}
	}
	{
		uint32_t L_2 = V_0;
		uint32_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline(L_2, NULL);
		V_0 = L_3;
	}

IL_0015:
	{
		uint32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BinaryPrimitives_ReverseEndianness_mF7B5C36D507C0D85537E18A1141554A99093BD78_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryMarshal_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m610B098B008105D72394F56BF309D3A9F0F12ABC_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<int32_t>();
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_source), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)28), NULL);
	}

IL_002b:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2 = ___0_source;
		uint8_t* L_3;
		L_3 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_2, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		int32_t L_4;
		L_4 = il2cpp_unsafe_read_unaligned<int32_t>(L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline (uint32_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___0_value;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)16711935)));
		uint32_t L_1 = ___0_value;
		V_1 = ((int32_t)((int32_t)L_1&((int32_t)-16711936)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((uint32_t)L_2>>8))|((int32_t)((int32_t)L_3<<((int32_t)24))))), ((int32_t)(((int32_t)((int32_t)L_4<<8))|((int32_t)((uint32_t)L_5>>((int32_t)24)))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint32_t>();
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_source), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)28), NULL);
	}

IL_002b:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2 = ___0_source;
		uint8_t* L_3;
		L_3 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_2, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		uint32_t L_4;
		L_4 = il2cpp_unsafe_read_unaligned<uint32_t>(L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
