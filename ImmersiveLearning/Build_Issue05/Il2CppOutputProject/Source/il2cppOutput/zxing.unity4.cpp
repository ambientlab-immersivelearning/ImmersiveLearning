#include "il2cpp-config.h"

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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<ZXing.ResultMetadataType,System.Object>[]
struct EntryU5BU5D_tE56EFFEC128612A22828D934F682B6E649148B0B;
// System.Collections.Generic.Dictionary`2/KeyCollection<ZXing.ResultMetadataType,System.Object>
struct KeyCollection_t412BE7A77529E26F6467F1299F5E43356D45962D;
// System.Collections.Generic.Dictionary`2/ValueCollection<ZXing.ResultMetadataType,System.Object>
struct ValueCollection_t3A465987709A60A04A4D06062FAE7B1DE1291071;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t0D7F3A50EB302696E4E5A19D582D99A8C7F70060;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.Dictionary`2<ZXing.ResultMetadataType,System.Object>
struct Dictionary_2_t05C5F0C5CA43D61CE93AA0566C15D4EA2FEBFB3D;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_tB98F995F5FB82E9782BDBC6F11E725B1497AC3D0;
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>
struct IDictionary_2_t37DBC0FC08A7E94A82F1AE0ADE0633356ECBA591;
// System.Collections.Generic.IEqualityComparer`1<ZXing.ResultMetadataType>
struct IEqualityComparer_1_t016AAF20316E05BC26232B756A115A1F900306B5;
// System.Collections.Generic.IList`1<System.Byte[]>
struct IList_1_t13FC8DDD64CE94DE3CBEC298F2B8296C9D977C4D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// ZXing.BaseLuminanceSource
struct BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D;
// ZXing.Binarizer
struct Binarizer_t5A3E6C2071EB51B5FE3D4FA8628BE911D18F8F74;
// ZXing.BinaryBitmap
struct BinaryBitmap_t80AA18B285BEB0FC11E59B73030141FBC215E40F;
// ZXing.Common.BitMatrix
struct BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA;
// ZXing.Common.DecoderResult
struct DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F;
// ZXing.Common.DetectorResult
struct DetectorResult_tA8DF6FA9D3338258E768DD74F2389794BBDFD673;
// ZXing.Common.ReedSolomon.ReedSolomonDecoder
struct ReedSolomonDecoder_t7E07B55F2DA1E34C48D8C721D2727D292A342CDC;
// ZXing.LuminanceSource
struct LuminanceSource_tF16355B47DAC39E1C1477B0659BE81DE5A4FD1AA;
// ZXing.QrCode.Internal.Decoder
struct Decoder_t50A72A1C6D89DF26E309DA696AE1AB986E77DE63;
// ZXing.QrCode.Internal.Detector
struct Detector_t3B66BB8D49D654A6D242700AB9DEB79F157EC46D;
// ZXing.QrCode.Internal.QRCodeDecoderMetaData
struct QRCodeDecoderMetaData_tCBE7F356162BBA2B2DF1BEA0805F0863397EF9F5;
// ZXing.QrCode.Internal.Version/ECB
struct ECB_t7F59726849A48A28E73E974747BA9E9A3EC83283;
// ZXing.QrCode.Internal.Version/ECB[]
struct ECBU5BU5D_t3326C5424FB7C8B0182393984ED40579116B6348;
// ZXing.QrCode.Internal.Version/ECBlocks
struct ECBlocks_tF359633AAD62370B51EB3791E407EC09D9FE121C;
// ZXing.QrCode.QRCodeReader
struct QRCodeReader_tA900E6A7803ABDD3FBA363F1924877C2CFCE815E;
// ZXing.RGBLuminanceSource
struct RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821;
// ZXing.ReaderException
struct ReaderException_t2B1A89EE1332FB339477D390EDA7BE8B54505F2D;
// ZXing.Result
struct Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747;
// ZXing.ResultPoint
struct ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9;
// ZXing.ResultPointCallback
struct ResultPointCallback_t941F57827AF0D668BC86B735E568769DFBD0895E;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitmapFormat_t881ACA6E2C9EDC718460E9F3BB026D2CDD39AE63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decoder_t50A72A1C6D89DF26E309DA696AE1AB986E77DE63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Detector_t3B66BB8D49D654A6D242700AB9DEB79F157EC46D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t05C5F0C5CA43D61CE93AA0566C15D4EA2FEBFB3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t37DBC0FC08A7E94A82F1AE0ADE0633356ECBA591_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tB98F995F5FB82E9782BDBC6F11E725B1497AC3D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t847DB220EB430082EFB0599A659C95E05A338A96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tBD8F42BE3C2E330468ADAC7260BD4B439DDE0513_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QRCodeDecoderMetaData_tCBE7F356162BBA2B2DF1BEA0805F0863397EF9F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QRCodeReader_tA900E6A7803ABDD3FBA363F1924877C2CFCE815E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01ED402893C393E07386B7F4D569A8309F7D04DB;
IL2CPP_EXTERN_C String_t* _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441;
IL2CPP_EXTERN_C String_t* _stringLiteral2BC4C8FD0FB3A85EC7917189A70A8D32B582649C;
IL2CPP_EXTERN_C String_t* _stringLiteral6AB2A5D1FE0A10CB014FC4303709BA72103C7CD0;
IL2CPP_EXTERN_C String_t* _stringLiteral73B510530C105E99912FD6A18D21B1529132AFDC;
IL2CPP_EXTERN_C String_t* _stringLiteralB661E01FEDC0E9FBFA5ABFBBADB9F86FF2BF414D;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m63367166196CC90718626643793416F6A9A206D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m14E83278C7BD3868524F3E162392DF95A0A86EBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7FD03A3DDDB46CAAA928823518FCD99F5559C727_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RGBLuminanceSource_CalculateLuminance_m176132C10FBE814B9BBFC03D9EBDCE643C1DA8E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RGBLuminanceSource_DetermineBitmapFormat_m5D90E7B34222734E607B8DD7E1DB48064859AECD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Result__ctor_mE1D02333FA41981FF66BC480E6D849B1D08D702A_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t QRCodeReader__cctor_m0CD5F8FA307B10649A385EA3AF5E528860EB4DCF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t QRCodeReader__ctor_mACBE349FA0B5A1B4CAD266DBD8539416A386B84D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t QRCodeReader_decode_mAA82798F878C5AA71041F9F5F59A3A16AAE27034_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t QRCodeReader_extractPureBits_mAA4E1C9450979D4BCC920DE5DED6C7DF1BD9BB51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RGBLuminanceSource_CalculateLuminance_m176132C10FBE814B9BBFC03D9EBDCE643C1DA8E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RGBLuminanceSource_CreateLuminanceSource_m7C6F0F5FC190FB9CA285AE53C99A82CF027263F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RGBLuminanceSource_DetermineBitmapFormat_m5D90E7B34222734E607B8DD7E1DB48064859AECD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReaderException__ctor_mF114032874C24D033D37ABDA6C4A6D5281CE3533_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ResultPoint_Equals_m13891C24069DE0A5DCF407F1682CD1C13AFA07EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ResultPoint_ToString_mA8B18D2E7E879371C7DB1F13AA8A94DAD689B581_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ResultPoint__ctor_m7D9E6CCE09DE661927DFEFBE6823D42A1C9EDD4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Result_ToString_mAF7B057F54FC01B452339A6049CE0AF50E1B5B38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Result__ctor_m9AF06E666395813A7423F0B502842248AF017DB2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Result__ctor_mE1D02333FA41981FF66BC480E6D849B1D08D702A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Result__ctor_mE868CD95AEFDE2FA5FFA3B60209D681FC0DBFCD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Result_addResultPoints_mC2E27E0919810FA99A67D71D980E4420C33BE384_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Result_putAllMetadata_m5F8DAA4477175321B7263FF19ED1F516BFC559F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Result_putMetadata_m26B965175F132CBF9863FAB846D56515E8D5452C_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct ECBU5BU5D_t3326C5424FB7C8B0182393984ED40579116B6348;
struct ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<ZXing.ResultMetadataType,System.Object>
struct  Dictionary_2_t05C5F0C5CA43D61CE93AA0566C15D4EA2FEBFB3D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE56EFFEC128612A22828D934F682B6E649148B0B* ___entries_1;
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
	KeyCollection_t412BE7A77529E26F6467F1299F5E43356D45962D * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3A465987709A60A04A4D06062FAE7B1DE1291071 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t05C5F0C5CA43D61CE93AA0566C15D4EA2FEBFB3D, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t05C5F0C5CA43D61CE93AA0566C15D4EA2FEBFB3D, ___entries_1)); }
	inline EntryU5BU5D_tE56EFFEC128612A22828D934F682B6E649148B0B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE56EFFEC128612A22828D934F682B6E649148B0B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE56EFFEC128612A22828D934F682B6E649148B0B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t05C5F0C5CA43D61CE93AA0566C15D4EA2FEBFB3D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t05C5F0C5CA43D61CE93AA0566C15D4EA2FEBFB3D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t05C5F0C5CA43D61CE93AA0566C15D4EA2FEBFB3D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t05C5F0C5CA43D61CE93AA0566C15D4EA2FEBFB3D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t05C5F0C5CA43D61CE93AA0566C15D4EA2FEBFB3D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t05C5F0C5CA43D61CE93AA0566C15D4EA2FEBFB3D, ___keys_7)); }
	inline KeyCollection_t412BE7A77529E26F6467F1299F5E43356D45962D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t412BE7A77529E26F6467F1299F5E43356D45962D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t412BE7A77529E26F6467F1299F5E43356D45962D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t05C5F0C5CA43D61CE93AA0566C15D4EA2FEBFB3D, ___values_8)); }
	inline ValueCollection_t3A465987709A60A04A4D06062FAE7B1DE1291071 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3A465987709A60A04A4D06062FAE7B1DE1291071 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3A465987709A60A04A4D06062FAE7B1DE1291071 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t05C5F0C5CA43D61CE93AA0566C15D4EA2FEBFB3D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};

// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
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
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
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
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// ZXing.BinaryBitmap
struct  BinaryBitmap_t80AA18B285BEB0FC11E59B73030141FBC215E40F  : public RuntimeObject
{
public:
	// ZXing.Binarizer ZXing.BinaryBitmap::binarizer
	Binarizer_t5A3E6C2071EB51B5FE3D4FA8628BE911D18F8F74 * ___binarizer_0;
	// ZXing.Common.BitMatrix ZXing.BinaryBitmap::matrix
	BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * ___matrix_1;

public:
	inline static int32_t get_offset_of_binarizer_0() { return static_cast<int32_t>(offsetof(BinaryBitmap_t80AA18B285BEB0FC11E59B73030141FBC215E40F, ___binarizer_0)); }
	inline Binarizer_t5A3E6C2071EB51B5FE3D4FA8628BE911D18F8F74 * get_binarizer_0() const { return ___binarizer_0; }
	inline Binarizer_t5A3E6C2071EB51B5FE3D4FA8628BE911D18F8F74 ** get_address_of_binarizer_0() { return &___binarizer_0; }
	inline void set_binarizer_0(Binarizer_t5A3E6C2071EB51B5FE3D4FA8628BE911D18F8F74 * value)
	{
		___binarizer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___binarizer_0), (void*)value);
	}

	inline static int32_t get_offset_of_matrix_1() { return static_cast<int32_t>(offsetof(BinaryBitmap_t80AA18B285BEB0FC11E59B73030141FBC215E40F, ___matrix_1)); }
	inline BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * get_matrix_1() const { return ___matrix_1; }
	inline BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA ** get_address_of_matrix_1() { return &___matrix_1; }
	inline void set_matrix_1(BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * value)
	{
		___matrix_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___matrix_1), (void*)value);
	}
};


// ZXing.Common.BitMatrix
struct  BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA  : public RuntimeObject
{
public:
	// System.Int32 ZXing.Common.BitMatrix::width
	int32_t ___width_0;
	// System.Int32 ZXing.Common.BitMatrix::height
	int32_t ___height_1;
	// System.Int32 ZXing.Common.BitMatrix::rowSize
	int32_t ___rowSize_2;
	// System.Int32[] ZXing.Common.BitMatrix::bits
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___bits_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_rowSize_2() { return static_cast<int32_t>(offsetof(BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA, ___rowSize_2)); }
	inline int32_t get_rowSize_2() const { return ___rowSize_2; }
	inline int32_t* get_address_of_rowSize_2() { return &___rowSize_2; }
	inline void set_rowSize_2(int32_t value)
	{
		___rowSize_2 = value;
	}

	inline static int32_t get_offset_of_bits_3() { return static_cast<int32_t>(offsetof(BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA, ___bits_3)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_bits_3() const { return ___bits_3; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_bits_3() { return &___bits_3; }
	inline void set_bits_3(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___bits_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bits_3), (void*)value);
	}
};


// ZXing.Common.DecoderResult
struct  DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F  : public RuntimeObject
{
public:
	// System.Byte[] ZXing.Common.DecoderResult::<RawBytes>k__BackingField
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___U3CRawBytesU3Ek__BackingField_0;
	// System.Int32 ZXing.Common.DecoderResult::<NumBits>k__BackingField
	int32_t ___U3CNumBitsU3Ek__BackingField_1;
	// System.String ZXing.Common.DecoderResult::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
	// System.Collections.Generic.IList`1<System.Byte[]> ZXing.Common.DecoderResult::<ByteSegments>k__BackingField
	RuntimeObject* ___U3CByteSegmentsU3Ek__BackingField_3;
	// System.String ZXing.Common.DecoderResult::<ECLevel>k__BackingField
	String_t* ___U3CECLevelU3Ek__BackingField_4;
	// System.Int32 ZXing.Common.DecoderResult::<ErrorsCorrected>k__BackingField
	int32_t ___U3CErrorsCorrectedU3Ek__BackingField_5;
	// System.Int32 ZXing.Common.DecoderResult::<StructuredAppendSequenceNumber>k__BackingField
	int32_t ___U3CStructuredAppendSequenceNumberU3Ek__BackingField_6;
	// System.Int32 ZXing.Common.DecoderResult::<Erasures>k__BackingField
	int32_t ___U3CErasuresU3Ek__BackingField_7;
	// System.Int32 ZXing.Common.DecoderResult::<StructuredAppendParity>k__BackingField
	int32_t ___U3CStructuredAppendParityU3Ek__BackingField_8;
	// System.Object ZXing.Common.DecoderResult::<Other>k__BackingField
	RuntimeObject * ___U3COtherU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CRawBytesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F, ___U3CRawBytesU3Ek__BackingField_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_U3CRawBytesU3Ek__BackingField_0() const { return ___U3CRawBytesU3Ek__BackingField_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_U3CRawBytesU3Ek__BackingField_0() { return &___U3CRawBytesU3Ek__BackingField_0; }
	inline void set_U3CRawBytesU3Ek__BackingField_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___U3CRawBytesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRawBytesU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNumBitsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F, ___U3CNumBitsU3Ek__BackingField_1)); }
	inline int32_t get_U3CNumBitsU3Ek__BackingField_1() const { return ___U3CNumBitsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CNumBitsU3Ek__BackingField_1() { return &___U3CNumBitsU3Ek__BackingField_1; }
	inline void set_U3CNumBitsU3Ek__BackingField_1(int32_t value)
	{
		___U3CNumBitsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F, ___U3CTextU3Ek__BackingField_2)); }
	inline String_t* get_U3CTextU3Ek__BackingField_2() const { return ___U3CTextU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_2() { return &___U3CTextU3Ek__BackingField_2; }
	inline void set_U3CTextU3Ek__BackingField_2(String_t* value)
	{
		___U3CTextU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTextU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CByteSegmentsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F, ___U3CByteSegmentsU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CByteSegmentsU3Ek__BackingField_3() const { return ___U3CByteSegmentsU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CByteSegmentsU3Ek__BackingField_3() { return &___U3CByteSegmentsU3Ek__BackingField_3; }
	inline void set_U3CByteSegmentsU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CByteSegmentsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CByteSegmentsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CECLevelU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F, ___U3CECLevelU3Ek__BackingField_4)); }
	inline String_t* get_U3CECLevelU3Ek__BackingField_4() const { return ___U3CECLevelU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CECLevelU3Ek__BackingField_4() { return &___U3CECLevelU3Ek__BackingField_4; }
	inline void set_U3CECLevelU3Ek__BackingField_4(String_t* value)
	{
		___U3CECLevelU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CECLevelU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CErrorsCorrectedU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F, ___U3CErrorsCorrectedU3Ek__BackingField_5)); }
	inline int32_t get_U3CErrorsCorrectedU3Ek__BackingField_5() const { return ___U3CErrorsCorrectedU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CErrorsCorrectedU3Ek__BackingField_5() { return &___U3CErrorsCorrectedU3Ek__BackingField_5; }
	inline void set_U3CErrorsCorrectedU3Ek__BackingField_5(int32_t value)
	{
		___U3CErrorsCorrectedU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CStructuredAppendSequenceNumberU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F, ___U3CStructuredAppendSequenceNumberU3Ek__BackingField_6)); }
	inline int32_t get_U3CStructuredAppendSequenceNumberU3Ek__BackingField_6() const { return ___U3CStructuredAppendSequenceNumberU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CStructuredAppendSequenceNumberU3Ek__BackingField_6() { return &___U3CStructuredAppendSequenceNumberU3Ek__BackingField_6; }
	inline void set_U3CStructuredAppendSequenceNumberU3Ek__BackingField_6(int32_t value)
	{
		___U3CStructuredAppendSequenceNumberU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CErasuresU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F, ___U3CErasuresU3Ek__BackingField_7)); }
	inline int32_t get_U3CErasuresU3Ek__BackingField_7() const { return ___U3CErasuresU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CErasuresU3Ek__BackingField_7() { return &___U3CErasuresU3Ek__BackingField_7; }
	inline void set_U3CErasuresU3Ek__BackingField_7(int32_t value)
	{
		___U3CErasuresU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CStructuredAppendParityU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F, ___U3CStructuredAppendParityU3Ek__BackingField_8)); }
	inline int32_t get_U3CStructuredAppendParityU3Ek__BackingField_8() const { return ___U3CStructuredAppendParityU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CStructuredAppendParityU3Ek__BackingField_8() { return &___U3CStructuredAppendParityU3Ek__BackingField_8; }
	inline void set_U3CStructuredAppendParityU3Ek__BackingField_8(int32_t value)
	{
		___U3CStructuredAppendParityU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3COtherU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F, ___U3COtherU3Ek__BackingField_9)); }
	inline RuntimeObject * get_U3COtherU3Ek__BackingField_9() const { return ___U3COtherU3Ek__BackingField_9; }
	inline RuntimeObject ** get_address_of_U3COtherU3Ek__BackingField_9() { return &___U3COtherU3Ek__BackingField_9; }
	inline void set_U3COtherU3Ek__BackingField_9(RuntimeObject * value)
	{
		___U3COtherU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COtherU3Ek__BackingField_9), (void*)value);
	}
};


// ZXing.Common.DetectorResult
struct  DetectorResult_tA8DF6FA9D3338258E768DD74F2389794BBDFD673  : public RuntimeObject
{
public:
	// ZXing.Common.BitMatrix ZXing.Common.DetectorResult::<Bits>k__BackingField
	BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * ___U3CBitsU3Ek__BackingField_0;
	// ZXing.ResultPoint[] ZXing.Common.DetectorResult::<Points>k__BackingField
	ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* ___U3CPointsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CBitsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DetectorResult_tA8DF6FA9D3338258E768DD74F2389794BBDFD673, ___U3CBitsU3Ek__BackingField_0)); }
	inline BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * get_U3CBitsU3Ek__BackingField_0() const { return ___U3CBitsU3Ek__BackingField_0; }
	inline BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA ** get_address_of_U3CBitsU3Ek__BackingField_0() { return &___U3CBitsU3Ek__BackingField_0; }
	inline void set_U3CBitsU3Ek__BackingField_0(BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * value)
	{
		___U3CBitsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBitsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPointsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DetectorResult_tA8DF6FA9D3338258E768DD74F2389794BBDFD673, ___U3CPointsU3Ek__BackingField_1)); }
	inline ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* get_U3CPointsU3Ek__BackingField_1() const { return ___U3CPointsU3Ek__BackingField_1; }
	inline ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9** get_address_of_U3CPointsU3Ek__BackingField_1() { return &___U3CPointsU3Ek__BackingField_1; }
	inline void set_U3CPointsU3Ek__BackingField_1(ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* value)
	{
		___U3CPointsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointsU3Ek__BackingField_1), (void*)value);
	}
};


// ZXing.LuminanceSource
struct  LuminanceSource_tF16355B47DAC39E1C1477B0659BE81DE5A4FD1AA  : public RuntimeObject
{
public:
	// System.Int32 ZXing.LuminanceSource::width
	int32_t ___width_0;
	// System.Int32 ZXing.LuminanceSource::height
	int32_t ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(LuminanceSource_tF16355B47DAC39E1C1477B0659BE81DE5A4FD1AA, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(LuminanceSource_tF16355B47DAC39E1C1477B0659BE81DE5A4FD1AA, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}
};


// ZXing.QrCode.Internal.Decoder
struct  Decoder_t50A72A1C6D89DF26E309DA696AE1AB986E77DE63  : public RuntimeObject
{
public:
	// ZXing.Common.ReedSolomon.ReedSolomonDecoder ZXing.QrCode.Internal.Decoder::rsDecoder
	ReedSolomonDecoder_t7E07B55F2DA1E34C48D8C721D2727D292A342CDC * ___rsDecoder_0;

public:
	inline static int32_t get_offset_of_rsDecoder_0() { return static_cast<int32_t>(offsetof(Decoder_t50A72A1C6D89DF26E309DA696AE1AB986E77DE63, ___rsDecoder_0)); }
	inline ReedSolomonDecoder_t7E07B55F2DA1E34C48D8C721D2727D292A342CDC * get_rsDecoder_0() const { return ___rsDecoder_0; }
	inline ReedSolomonDecoder_t7E07B55F2DA1E34C48D8C721D2727D292A342CDC ** get_address_of_rsDecoder_0() { return &___rsDecoder_0; }
	inline void set_rsDecoder_0(ReedSolomonDecoder_t7E07B55F2DA1E34C48D8C721D2727D292A342CDC * value)
	{
		___rsDecoder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rsDecoder_0), (void*)value);
	}
};


// ZXing.QrCode.Internal.Detector
struct  Detector_t3B66BB8D49D654A6D242700AB9DEB79F157EC46D  : public RuntimeObject
{
public:
	// ZXing.Common.BitMatrix ZXing.QrCode.Internal.Detector::image
	BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * ___image_0;
	// ZXing.ResultPointCallback ZXing.QrCode.Internal.Detector::resultPointCallback
	ResultPointCallback_t941F57827AF0D668BC86B735E568769DFBD0895E * ___resultPointCallback_1;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(Detector_t3B66BB8D49D654A6D242700AB9DEB79F157EC46D, ___image_0)); }
	inline BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * get_image_0() const { return ___image_0; }
	inline BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA ** get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * value)
	{
		___image_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_0), (void*)value);
	}

	inline static int32_t get_offset_of_resultPointCallback_1() { return static_cast<int32_t>(offsetof(Detector_t3B66BB8D49D654A6D242700AB9DEB79F157EC46D, ___resultPointCallback_1)); }
	inline ResultPointCallback_t941F57827AF0D668BC86B735E568769DFBD0895E * get_resultPointCallback_1() const { return ___resultPointCallback_1; }
	inline ResultPointCallback_t941F57827AF0D668BC86B735E568769DFBD0895E ** get_address_of_resultPointCallback_1() { return &___resultPointCallback_1; }
	inline void set_resultPointCallback_1(ResultPointCallback_t941F57827AF0D668BC86B735E568769DFBD0895E * value)
	{
		___resultPointCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultPointCallback_1), (void*)value);
	}
};


// ZXing.QrCode.Internal.QRCodeDecoderMetaData
struct  QRCodeDecoderMetaData_tCBE7F356162BBA2B2DF1BEA0805F0863397EF9F5  : public RuntimeObject
{
public:
	// System.Boolean ZXing.QrCode.Internal.QRCodeDecoderMetaData::mirrored
	bool ___mirrored_0;

public:
	inline static int32_t get_offset_of_mirrored_0() { return static_cast<int32_t>(offsetof(QRCodeDecoderMetaData_tCBE7F356162BBA2B2DF1BEA0805F0863397EF9F5, ___mirrored_0)); }
	inline bool get_mirrored_0() const { return ___mirrored_0; }
	inline bool* get_address_of_mirrored_0() { return &___mirrored_0; }
	inline void set_mirrored_0(bool value)
	{
		___mirrored_0 = value;
	}
};


// ZXing.QrCode.Internal.Version_ECB
struct  ECB_t7F59726849A48A28E73E974747BA9E9A3EC83283  : public RuntimeObject
{
public:
	// System.Int32 ZXing.QrCode.Internal.Version_ECB::count
	int32_t ___count_0;
	// System.Int32 ZXing.QrCode.Internal.Version_ECB::dataCodewords
	int32_t ___dataCodewords_1;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ECB_t7F59726849A48A28E73E974747BA9E9A3EC83283, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_dataCodewords_1() { return static_cast<int32_t>(offsetof(ECB_t7F59726849A48A28E73E974747BA9E9A3EC83283, ___dataCodewords_1)); }
	inline int32_t get_dataCodewords_1() const { return ___dataCodewords_1; }
	inline int32_t* get_address_of_dataCodewords_1() { return &___dataCodewords_1; }
	inline void set_dataCodewords_1(int32_t value)
	{
		___dataCodewords_1 = value;
	}
};


// ZXing.QrCode.Internal.Version_ECBlocks
struct  ECBlocks_tF359633AAD62370B51EB3791E407EC09D9FE121C  : public RuntimeObject
{
public:
	// System.Int32 ZXing.QrCode.Internal.Version_ECBlocks::ecCodewordsPerBlock
	int32_t ___ecCodewordsPerBlock_0;
	// ZXing.QrCode.Internal.Version_ECB[] ZXing.QrCode.Internal.Version_ECBlocks::ecBlocks
	ECBU5BU5D_t3326C5424FB7C8B0182393984ED40579116B6348* ___ecBlocks_1;

public:
	inline static int32_t get_offset_of_ecCodewordsPerBlock_0() { return static_cast<int32_t>(offsetof(ECBlocks_tF359633AAD62370B51EB3791E407EC09D9FE121C, ___ecCodewordsPerBlock_0)); }
	inline int32_t get_ecCodewordsPerBlock_0() const { return ___ecCodewordsPerBlock_0; }
	inline int32_t* get_address_of_ecCodewordsPerBlock_0() { return &___ecCodewordsPerBlock_0; }
	inline void set_ecCodewordsPerBlock_0(int32_t value)
	{
		___ecCodewordsPerBlock_0 = value;
	}

	inline static int32_t get_offset_of_ecBlocks_1() { return static_cast<int32_t>(offsetof(ECBlocks_tF359633AAD62370B51EB3791E407EC09D9FE121C, ___ecBlocks_1)); }
	inline ECBU5BU5D_t3326C5424FB7C8B0182393984ED40579116B6348* get_ecBlocks_1() const { return ___ecBlocks_1; }
	inline ECBU5BU5D_t3326C5424FB7C8B0182393984ED40579116B6348** get_address_of_ecBlocks_1() { return &___ecBlocks_1; }
	inline void set_ecBlocks_1(ECBU5BU5D_t3326C5424FB7C8B0182393984ED40579116B6348* value)
	{
		___ecBlocks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ecBlocks_1), (void*)value);
	}
};


// ZXing.QrCode.QRCodeReader
struct  QRCodeReader_tA900E6A7803ABDD3FBA363F1924877C2CFCE815E  : public RuntimeObject
{
public:
	// ZXing.QrCode.Internal.Decoder ZXing.QrCode.QRCodeReader::decoder
	Decoder_t50A72A1C6D89DF26E309DA696AE1AB986E77DE63 * ___decoder_1;

public:
	inline static int32_t get_offset_of_decoder_1() { return static_cast<int32_t>(offsetof(QRCodeReader_tA900E6A7803ABDD3FBA363F1924877C2CFCE815E, ___decoder_1)); }
	inline Decoder_t50A72A1C6D89DF26E309DA696AE1AB986E77DE63 * get_decoder_1() const { return ___decoder_1; }
	inline Decoder_t50A72A1C6D89DF26E309DA696AE1AB986E77DE63 ** get_address_of_decoder_1() { return &___decoder_1; }
	inline void set_decoder_1(Decoder_t50A72A1C6D89DF26E309DA696AE1AB986E77DE63 * value)
	{
		___decoder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_1), (void*)value);
	}
};

struct QRCodeReader_tA900E6A7803ABDD3FBA363F1924877C2CFCE815E_StaticFields
{
public:
	// ZXing.ResultPoint[] ZXing.QrCode.QRCodeReader::NO_POINTS
	ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* ___NO_POINTS_0;

public:
	inline static int32_t get_offset_of_NO_POINTS_0() { return static_cast<int32_t>(offsetof(QRCodeReader_tA900E6A7803ABDD3FBA363F1924877C2CFCE815E_StaticFields, ___NO_POINTS_0)); }
	inline ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* get_NO_POINTS_0() const { return ___NO_POINTS_0; }
	inline ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9** get_address_of_NO_POINTS_0() { return &___NO_POINTS_0; }
	inline void set_NO_POINTS_0(ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* value)
	{
		___NO_POINTS_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NO_POINTS_0), (void*)value);
	}
};


// ZXing.ResultPoint
struct  ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9  : public RuntimeObject
{
public:
	// System.Single ZXing.ResultPoint::x
	float ___x_0;
	// System.Single ZXing.ResultPoint::y
	float ___y_1;
	// System.Byte[] ZXing.ResultPoint::bytesX
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytesX_2;
	// System.Byte[] ZXing.ResultPoint::bytesY
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytesY_3;
	// System.String ZXing.ResultPoint::toString
	String_t* ___toString_4;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_bytesX_2() { return static_cast<int32_t>(offsetof(ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9, ___bytesX_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_bytesX_2() const { return ___bytesX_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_bytesX_2() { return &___bytesX_2; }
	inline void set_bytesX_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___bytesX_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bytesX_2), (void*)value);
	}

	inline static int32_t get_offset_of_bytesY_3() { return static_cast<int32_t>(offsetof(ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9, ___bytesY_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_bytesY_3() const { return ___bytesY_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_bytesY_3() { return &___bytesY_3; }
	inline void set_bytesY_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___bytesY_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bytesY_3), (void*)value);
	}

	inline static int32_t get_offset_of_toString_4() { return static_cast<int32_t>(offsetof(ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9, ___toString_4)); }
	inline String_t* get_toString_4() const { return ___toString_4; }
	inline String_t** get_address_of_toString_4() { return &___toString_4; }
	inline void set_toString_4(String_t* value)
	{
		___toString_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toString_4), (void*)value);
	}
};


// ZXing.SupportClass
struct  SupportClass_t69CFC3A5D88580FE7343B4F0FC434C59D4888F80  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// ZXing.BaseLuminanceSource
struct  BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D  : public LuminanceSource_tF16355B47DAC39E1C1477B0659BE81DE5A4FD1AA
{
public:
	// System.Byte[] ZXing.BaseLuminanceSource::luminances
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___luminances_2;

public:
	inline static int32_t get_offset_of_luminances_2() { return static_cast<int32_t>(offsetof(BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D, ___luminances_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_luminances_2() const { return ___luminances_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_luminances_2() { return &___luminances_2; }
	inline void set_luminances_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___luminances_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___luminances_2), (void*)value);
	}
};


// ZXing.ReaderException
struct  ReaderException_t2B1A89EE1332FB339477D390EDA7BE8B54505F2D  : public Exception_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ZXing.BarcodeFormat
struct  BarcodeFormat_t6B01D7D150459F069D3323F6841F39538D644C51 
{
public:
	// System.Int32 ZXing.BarcodeFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BarcodeFormat_t6B01D7D150459F069D3323F6841F39538D644C51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ZXing.DecodeHintType
struct  DecodeHintType_tBEF9965D8AD3A84284B834CE5C48BB0C09E61A8E 
{
public:
	// System.Int32 ZXing.DecodeHintType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DecodeHintType_tBEF9965D8AD3A84284B834CE5C48BB0C09E61A8E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ZXing.RGBLuminanceSource
struct  RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821  : public BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D
{
public:

public:
};


// ZXing.RGBLuminanceSource_BitmapFormat
struct  BitmapFormat_t881ACA6E2C9EDC718460E9F3BB026D2CDD39AE63 
{
public:
	// System.Int32 ZXing.RGBLuminanceSource_BitmapFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BitmapFormat_t881ACA6E2C9EDC718460E9F3BB026D2CDD39AE63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ZXing.ResultMetadataType
struct  ResultMetadataType_t63138DF5E09ECA261D5944C078B9DEFFDEC6944F 
{
public:
	// System.Int32 ZXing.ResultMetadataType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResultMetadataType_t63138DF5E09ECA261D5944C078B9DEFFDEC6944F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>
struct  KeyValuePair_2_t69CC9209E494AB6BA5729796FBBBAFB5F933F3F0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t69CC9209E494AB6BA5729796FBBBAFB5F933F3F0, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t69CC9209E494AB6BA5729796FBBBAFB5F933F3F0, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>
struct  KeyValuePair_2_tA545A4C7ACE6BEAF153E413517051765E5A7E356 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA545A4C7ACE6BEAF153E413517051765E5A7E356, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA545A4C7ACE6BEAF153E413517051765E5A7E356, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// ZXing.Result
struct  Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747  : public RuntimeObject
{
public:
	// System.String ZXing.Result::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_0;
	// System.Byte[] ZXing.Result::<RawBytes>k__BackingField
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___U3CRawBytesU3Ek__BackingField_1;
	// ZXing.ResultPoint[] ZXing.Result::<ResultPoints>k__BackingField
	ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* ___U3CResultPointsU3Ek__BackingField_2;
	// ZXing.BarcodeFormat ZXing.Result::<BarcodeFormat>k__BackingField
	int32_t ___U3CBarcodeFormatU3Ek__BackingField_3;
	// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::<ResultMetadata>k__BackingField
	RuntimeObject* ___U3CResultMetadataU3Ek__BackingField_4;
	// System.Int64 ZXing.Result::<Timestamp>k__BackingField
	int64_t ___U3CTimestampU3Ek__BackingField_5;
	// System.Int32 ZXing.Result::<NumBits>k__BackingField
	int32_t ___U3CNumBitsU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747, ___U3CTextU3Ek__BackingField_0)); }
	inline String_t* get_U3CTextU3Ek__BackingField_0() const { return ___U3CTextU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_0() { return &___U3CTextU3Ek__BackingField_0; }
	inline void set_U3CTextU3Ek__BackingField_0(String_t* value)
	{
		___U3CTextU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTextU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRawBytesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747, ___U3CRawBytesU3Ek__BackingField_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_U3CRawBytesU3Ek__BackingField_1() const { return ___U3CRawBytesU3Ek__BackingField_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_U3CRawBytesU3Ek__BackingField_1() { return &___U3CRawBytesU3Ek__BackingField_1; }
	inline void set_U3CRawBytesU3Ek__BackingField_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___U3CRawBytesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRawBytesU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultPointsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747, ___U3CResultPointsU3Ek__BackingField_2)); }
	inline ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* get_U3CResultPointsU3Ek__BackingField_2() const { return ___U3CResultPointsU3Ek__BackingField_2; }
	inline ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9** get_address_of_U3CResultPointsU3Ek__BackingField_2() { return &___U3CResultPointsU3Ek__BackingField_2; }
	inline void set_U3CResultPointsU3Ek__BackingField_2(ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* value)
	{
		___U3CResultPointsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultPointsU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBarcodeFormatU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747, ___U3CBarcodeFormatU3Ek__BackingField_3)); }
	inline int32_t get_U3CBarcodeFormatU3Ek__BackingField_3() const { return ___U3CBarcodeFormatU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CBarcodeFormatU3Ek__BackingField_3() { return &___U3CBarcodeFormatU3Ek__BackingField_3; }
	inline void set_U3CBarcodeFormatU3Ek__BackingField_3(int32_t value)
	{
		___U3CBarcodeFormatU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CResultMetadataU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747, ___U3CResultMetadataU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CResultMetadataU3Ek__BackingField_4() const { return ___U3CResultMetadataU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CResultMetadataU3Ek__BackingField_4() { return &___U3CResultMetadataU3Ek__BackingField_4; }
	inline void set_U3CResultMetadataU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CResultMetadataU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultMetadataU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTimestampU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747, ___U3CTimestampU3Ek__BackingField_5)); }
	inline int64_t get_U3CTimestampU3Ek__BackingField_5() const { return ___U3CTimestampU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CTimestampU3Ek__BackingField_5() { return &___U3CTimestampU3Ek__BackingField_5; }
	inline void set_U3CTimestampU3Ek__BackingField_5(int64_t value)
	{
		___U3CTimestampU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CNumBitsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747, ___U3CNumBitsU3Ek__BackingField_6)); }
	inline int32_t get_U3CNumBitsU3Ek__BackingField_6() const { return ___U3CNumBitsU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CNumBitsU3Ek__BackingField_6() { return &___U3CNumBitsU3Ek__BackingField_6; }
	inline void set_U3CNumBitsU3Ek__BackingField_6(int32_t value)
	{
		___U3CNumBitsU3Ek__BackingField_6 = value;
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// ZXing.ResultPointCallback
struct  ResultPointCallback_t941F57827AF0D668BC86B735E568769DFBD0895E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// ZXing.QrCode.Internal.Version_ECB[]
struct ECBU5BU5D_t3326C5424FB7C8B0182393984ED40579116B6348  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ECB_t7F59726849A48A28E73E974747BA9E9A3EC83283 * m_Items[1];

public:
	inline ECB_t7F59726849A48A28E73E974747BA9E9A3EC83283 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ECB_t7F59726849A48A28E73E974747BA9E9A3EC83283 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ECB_t7F59726849A48A28E73E974747BA9E9A3EC83283 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ECB_t7F59726849A48A28E73E974747BA9E9A3EC83283 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ECB_t7F59726849A48A28E73E974747BA9E9A3EC83283 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ECB_t7F59726849A48A28E73E974747BA9E9A3EC83283 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * m_Items[1];

public:
	inline ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
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
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
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


// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m80B728B0F4A8176CF1F62C2768D31E6F7838B232_gshared (Dictionary_2_t0D7F3A50EB302696E4E5A19D582D99A8C7F70060 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mA8A2FCE1CFBAE74E590972FDE70563F1A295871C_gshared (KeyValuePair_2_t69CC9209E494AB6BA5729796FBBBAFB5F933F3F0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mACFF50732053ECFDF29B6D3F394985BEE3B94A7A_gshared (KeyValuePair_2_t69CC9209E494AB6BA5729796FBBBAFB5F933F3F0 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// ZXing.Common.BitMatrix ZXing.BinaryBitmap::get_BlackMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * BinaryBitmap_get_BlackMatrix_m454ACAE90CD2F26ED42ED6F1818AE62BF69DCEB3 (BinaryBitmap_t80AA18B285BEB0FC11E59B73030141FBC215E40F * __this, const RuntimeMethod* method);
// ZXing.Common.BitMatrix ZXing.QrCode.QRCodeReader::extractPureBits(ZXing.Common.BitMatrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * QRCodeReader_extractPureBits_mAA4E1C9450979D4BCC920DE5DED6C7DF1BD9BB51 (BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * ___image0, const RuntimeMethod* method);
// ZXing.Common.DecoderResult ZXing.QrCode.Internal.Decoder::decode(ZXing.Common.BitMatrix,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * Decoder_decode_mB82326EC3CB856EF0CA397C9BF97B5A249696598 (Decoder_t50A72A1C6D89DF26E309DA696AE1AB986E77DE63 * __this, BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * ___bits0, RuntimeObject* ___hints1, const RuntimeMethod* method);
// System.Void ZXing.QrCode.Internal.Detector::.ctor(ZXing.Common.BitMatrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector__ctor_mD366287910B6823B673856821FE7D54CA087543C (Detector_t3B66BB8D49D654A6D242700AB9DEB79F157EC46D * __this, BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * ___image0, const RuntimeMethod* method);
// ZXing.Common.BitMatrix ZXing.Common.DetectorResult::get_Bits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * DetectorResult_get_Bits_m5F239BC2CC1037273C83C1129A0A2BD27AF751C6 (DetectorResult_tA8DF6FA9D3338258E768DD74F2389794BBDFD673 * __this, const RuntimeMethod* method);
// ZXing.ResultPoint[] ZXing.Common.DetectorResult::get_Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* DetectorResult_get_Points_m067758D03AAE823BE03AEA788F77B8C0BB430AA5 (DetectorResult_tA8DF6FA9D3338258E768DD74F2389794BBDFD673 * __this, const RuntimeMethod* method);
// System.Object ZXing.Common.DecoderResult::get_Other()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DecoderResult_get_Other_m618FA4A4D600C6134EF11CCCFF555C6C7914E7C1 (DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * __this, const RuntimeMethod* method);
// System.Void ZXing.QrCode.Internal.QRCodeDecoderMetaData::applyMirroredCorrection(ZXing.ResultPoint[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeDecoderMetaData_applyMirroredCorrection_m7BB4BB5D98551677FBE589EE6E6E18750C3DF0DC (QRCodeDecoderMetaData_tCBE7F356162BBA2B2DF1BEA0805F0863397EF9F5 * __this, ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* ___points0, const RuntimeMethod* method);
// System.String ZXing.Common.DecoderResult::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DecoderResult_get_Text_m389CA2A6637AF59CDF2EEDBAC20C66361994BD9A (DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * __this, const RuntimeMethod* method);
// System.Byte[] ZXing.Common.DecoderResult::get_RawBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* DecoderResult_get_RawBytes_mA0077576C31C674E5F5CCE283B485A9782103DB9 (DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * __this, const RuntimeMethod* method);
// System.Void ZXing.Result::.ctor(System.String,System.Byte[],ZXing.ResultPoint[],ZXing.BarcodeFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_m9AF06E666395813A7423F0B502842248AF017DB2 (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, String_t* ___text0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rawBytes1, ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* ___resultPoints2, int32_t ___format3, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<System.Byte[]> ZXing.Common.DecoderResult::get_ByteSegments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DecoderResult_get_ByteSegments_m0954763CF7DEE90CA9B1FF9368D32122EC5A9975 (DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * __this, const RuntimeMethod* method);
// System.Void ZXing.Result::putMetadata(ZXing.ResultMetadataType,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_putMetadata_m26B965175F132CBF9863FAB846D56515E8D5452C (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, int32_t ___type0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.String ZXing.Common.DecoderResult::get_ECLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DecoderResult_get_ECLevel_mB1F33C27FE4EF563E5598BA96202FE4CFAF740E4 (DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * __this, const RuntimeMethod* method);
// System.Boolean ZXing.Common.DecoderResult::get_StructuredAppend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DecoderResult_get_StructuredAppend_m5DD73FAB2C19A90747959576441256840ED32FDC (DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * __this, const RuntimeMethod* method);
// System.Int32 ZXing.Common.DecoderResult::get_StructuredAppendSequenceNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecoderResult_get_StructuredAppendSequenceNumber_mF4BD576CA5E8409132F8E95801205938D605B85D (DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * __this, const RuntimeMethod* method);
// System.Int32 ZXing.Common.DecoderResult::get_StructuredAppendParity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecoderResult_get_StructuredAppendParity_mB326C33D3D3285FD4AAF3F4E250BA3581A759C51 (DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * __this, const RuntimeMethod* method);
// System.Int32[] ZXing.Common.BitMatrix::getTopLeftOnBit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* BitMatrix_getTopLeftOnBit_m407A28B7DAFAF8789E4C9EE04C3CD67A7D02D0AB (BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * __this, const RuntimeMethod* method);
// System.Int32[] ZXing.Common.BitMatrix::getBottomRightOnBit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* BitMatrix_getBottomRightOnBit_m3B82EDCDC2E331AC76625F14F2E265939896BAF4 (BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * __this, const RuntimeMethod* method);
// System.Boolean ZXing.QrCode.QRCodeReader::moduleSize(System.Int32[],ZXing.Common.BitMatrix,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QRCodeReader_moduleSize_m0D30AAC8F9506605D703BE5396BFC11E22AEF86C (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___leftTopBlack0, BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * ___image1, float* ___msize2, const RuntimeMethod* method);
// System.Int32 ZXing.Common.BitMatrix::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitMatrix_get_Width_mF11FA55D8CF16E6194DB3A01B36ECE2B4B7D227B (BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * __this, const RuntimeMethod* method);
// System.Void ZXing.Common.BitMatrix::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitMatrix__ctor_m6CAE224F55DEA444BA745B27F97BE5E347598753 (BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Boolean ZXing.Common.BitMatrix::get_Item(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitMatrix_get_Item_mB5E579355866A51916A01FCF85BD445F15A55865 (BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void ZXing.Common.BitMatrix::set_Item(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitMatrix_set_Item_m0ED143B0A6F01FA4CD3FBFFE0408850AEC223A45 (BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * __this, int32_t ___x0, int32_t ___y1, bool ___value2, const RuntimeMethod* method);
// System.Int32 ZXing.Common.BitMatrix::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitMatrix_get_Height_mF33E064CD68D2D6713A15EE2EC03182C597F3F73 (BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * __this, const RuntimeMethod* method);
// System.Void ZXing.QrCode.Internal.Decoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_mF0955B09203C9B343CFF02E5B45F971A30F8EF9C (Decoder_t50A72A1C6D89DF26E309DA696AE1AB986E77DE63 * __this, const RuntimeMethod* method);
// System.Void ZXing.BaseLuminanceSource::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseLuminanceSource__ctor_m251CE985750BB81CB73F3FAB6BDA210C92D303CB (BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminance(System.Byte[],ZXing.RGBLuminanceSource/BitmapFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminance_m176132C10FBE814B9BBFC03D9EBDCE643C1DA8E5 (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbRawBytes0, int32_t ___bitmapFormat1, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource__ctor_m3E52A219F34F2FB24D216730CA7D6317E3BABA88 (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* p0, const RuntimeMethod* method);
// ZXing.RGBLuminanceSource/BitmapFormat ZXing.RGBLuminanceSource::DetermineBitmapFormat(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RGBLuminanceSource_DetermineBitmapFormat_m5D90E7B34222734E607B8DD7E1DB48064859AECD (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbRawBytes0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353 (RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB24(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB24_m5F8F6EE8813B18F064588469CFFF964D1A0F9BD7 (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGR24(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGR24_mCDD34B9E110FFBF48C5A96C3F7D1DE114433553E (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB32_m3C13504D7158359F8DB730011E43E3D3917B529E (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGR32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGR32_m55532764A76AC9246C755C9280E9F68EBA9F5513 (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGBA32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGBA32_mF19AE7C6A8FBA88FCF27F281529E94CF83A0455D (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceARGB32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceARGB32_mEE12E6711CE0E3653EE65FCE0CA4357C95FB753E (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGRA32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGRA32_m65B5C1DFFF6598A1A506AB2AD77B7733D76D4761 (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB565(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB565_mA3F4F8073BD472FC43BE44B3413541B7D57810B9 (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgb565RawData0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1 (Exception_t * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2 (const RuntimeMethod* method);
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, const RuntimeMethod* method);
// System.Void ZXing.Result::.ctor(System.String,System.Byte[],System.Int32,ZXing.ResultPoint[],ZXing.BarcodeFormat,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_mE1D02333FA41981FF66BC480E6D849B1D08D702A (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, String_t* ___text0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rawBytes1, int32_t ___numBits2, ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* ___resultPoints3, int32_t ___format4, int64_t ___timestamp5, const RuntimeMethod* method);
// System.Void ZXing.Result::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_set_Text_m3D350C6BC68B77494E693D58CE42F3E03910E1E9 (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void ZXing.Result::set_RawBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_set_RawBytes_m15BF69594615CE2E2A2243F86F8973E6932A5640 (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, const RuntimeMethod* method);
// System.Void ZXing.Result::set_NumBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_set_NumBits_mE57E53435BB8A537FA5FF803C2C308F22C7E0CEC (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ZXing.Result::set_ResultPoints(ZXing.ResultPoint[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_set_ResultPoints_m55BA7262A67C694773909E9BA4DC4B26207F47B3 (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* ___value0, const RuntimeMethod* method);
// System.Void ZXing.Result::set_BarcodeFormat(ZXing.BarcodeFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_set_BarcodeFormat_mE879B14699E064C8D2C46FBD15350B92D84A6100 (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ZXing.Result::set_ResultMetadata(System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_set_ResultMetadata_m8CB58E39A1816FEA3F0A9EE17AD5F351BAA7F94A (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void ZXing.Result::set_Timestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_set_Timestamp_m0B1E7867110942F25D062CA844CD6FDB815755DA (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::get_ResultMetadata()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Result_get_ResultMetadata_mAA35EC4BD99DD27CCC7E55D6EF5DB4EEEC8BA41F (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ZXing.ResultMetadataType,System.Object>::.ctor()
inline void Dictionary_2__ctor_m63367166196CC90718626643793416F6A9A206D6 (Dictionary_2_t05C5F0C5CA43D61CE93AA0566C15D4EA2FEBFB3D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t05C5F0C5CA43D61CE93AA0566C15D4EA2FEBFB3D *, const RuntimeMethod*))Dictionary_2__ctor_m80B728B0F4A8176CF1F62C2768D31E6F7838B232_gshared)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m14E83278C7BD3868524F3E162392DF95A0A86EBE (KeyValuePair_2_tA545A4C7ACE6BEAF153E413517051765E5A7E356 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tA545A4C7ACE6BEAF153E413517051765E5A7E356 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mA8A2FCE1CFBAE74E590972FDE70563F1A295871C_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m7FD03A3DDDB46CAAA928823518FCD99F5559C727 (KeyValuePair_2_tA545A4C7ACE6BEAF153E413517051765E5A7E356 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tA545A4C7ACE6BEAF153E413517051765E5A7E356 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mACFF50732053ECFDF29B6D3F394985BEE3B94A7A_gshared)(__this, method);
}
// ZXing.ResultPoint[] ZXing.Result::get_ResultPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* Result_get_ResultPoints_mC0DA57A5351BDDFED3CD7E440DABDDEE70E36D7D (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6 (RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.String ZXing.Result::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Result_get_Text_mD426CE8B3E2D3F404681DCE557FF1D7E7B50D213 (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, const RuntimeMethod* method);
// System.Byte[] ZXing.Result::get_RawBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Result_get_RawBytes_mC28B8DEE39D417640788096F58DF0AC15C4ACCAD (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* BitConverter_GetBytes_m5795DECB822051D8BBF3EA92DD3B2372E017ADAF (float p0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentUICulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_CurrentUICulture_mE132DCAF12CBF24E1FC0AF90BB6F33739F416487 (const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m687321E402DD050F3B06D9DD12B7F96CCF51A480 (StringBuilder_t * __this, RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p2, const RuntimeMethod* method);
// System.Single ZXing.ResultPoint::distance(ZXing.ResultPoint,ZXing.ResultPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ResultPoint_distance_mF0365513B3B9D337D5AB50A1DEF16CBF12142254 (ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * ___pattern10, ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * ___pattern21, const RuntimeMethod* method);
// System.Single ZXing.ResultPoint::crossProductZ(ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ResultPoint_crossProductZ_m5D6DF11BBCB7B57D622FB4AABEFDAB9A2366047C (ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * ___pointA0, ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * ___pointB1, ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * ___pointC2, const RuntimeMethod* method);
// System.Single ZXing.Common.Detector.MathUtils::distance(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtils_distance_m9A6FDB5AFA8D79C7C0A67B33BA73574753006304 (float ___aX0, float ___aY1, float ___bX2, float ___bY3, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.QrCode.Internal.Version_ECB::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ECB__ctor_m9B6EC511D2CCB771B417C07E1331BB6551B168D3 (ECB_t7F59726849A48A28E73E974747BA9E9A3EC83283 * __this, int32_t ___count0, int32_t ___dataCodewords1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___count0;
		__this->set_count_0(L_0);
		int32_t L_1 = ___dataCodewords1;
		__this->set_dataCodewords_1(L_1);
		return;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version_ECB::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECB_get_Count_mB62A8CAB6FA4AE9191627D83941C04116C54E7F8 (ECB_t7F59726849A48A28E73E974747BA9E9A3EC83283 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_count_0();
		return L_0;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version_ECB::get_DataCodewords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECB_get_DataCodewords_mC91450978A11A5FB4EC5C914883AAFF770A04A33 (ECB_t7F59726849A48A28E73E974747BA9E9A3EC83283 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_dataCodewords_1();
		return L_0;
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
// System.Void ZXing.QrCode.Internal.Version_ECBlocks::.ctor(System.Int32,ZXing.QrCode.Internal.Version_ECB[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ECBlocks__ctor_m6F74EF7B5FF8B22C43EB245388AC280B8BEC43B5 (ECBlocks_tF359633AAD62370B51EB3791E407EC09D9FE121C * __this, int32_t ___ecCodewordsPerBlock0, ECBU5BU5D_t3326C5424FB7C8B0182393984ED40579116B6348* ___ecBlocks1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___ecCodewordsPerBlock0;
		__this->set_ecCodewordsPerBlock_0(L_0);
		ECBU5BU5D_t3326C5424FB7C8B0182393984ED40579116B6348* L_1 = ___ecBlocks1;
		__this->set_ecBlocks_1(L_1);
		return;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version_ECBlocks::get_ECCodewordsPerBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECBlocks_get_ECCodewordsPerBlock_m4DBDCB46DB20C6890C400ABB7FA643C1CC5EEB7B (ECBlocks_tF359633AAD62370B51EB3791E407EC09D9FE121C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_ecCodewordsPerBlock_0();
		return L_0;
	}
}
// ZXing.QrCode.Internal.Version_ECB[] ZXing.QrCode.Internal.Version_ECBlocks::getECBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECBU5BU5D_t3326C5424FB7C8B0182393984ED40579116B6348* ECBlocks_getECBlocks_m3CDD0525B4C6A070B26F213B3A20891E81CDDC80 (ECBlocks_tF359633AAD62370B51EB3791E407EC09D9FE121C * __this, const RuntimeMethod* method)
{
	{
		ECBU5BU5D_t3326C5424FB7C8B0182393984ED40579116B6348* L_0 = __this->get_ecBlocks_1();
		return L_0;
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
// ZXing.Result ZXing.QrCode.QRCodeReader::decode(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * QRCodeReader_decode_mAA82798F878C5AA71041F9F5F59A3A16AAE27034 (QRCodeReader_tA900E6A7803ABDD3FBA363F1924877C2CFCE815E * __this, BinaryBitmap_t80AA18B285BEB0FC11E59B73030141FBC215E40F * ___image0, RuntimeObject* ___hints1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QRCodeReader_decode_mAA82798F878C5AA71041F9F5F59A3A16AAE27034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * V_0 = NULL;
	ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* V_1 = NULL;
	BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * V_2 = NULL;
	DetectorResult_tA8DF6FA9D3338258E768DD74F2389794BBDFD673 * V_3 = NULL;
	QRCodeDecoderMetaData_tCBE7F356162BBA2B2DF1BEA0805F0863397EF9F5 * V_4 = NULL;
	Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	String_t* V_7 = NULL;
	{
		BinaryBitmap_t80AA18B285BEB0FC11E59B73030141FBC215E40F * L_0 = ___image0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		BinaryBitmap_t80AA18B285BEB0FC11E59B73030141FBC215E40F * L_1 = ___image0;
		NullCheck(L_1);
		BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * L_2 = BinaryBitmap_get_BlackMatrix_m454ACAE90CD2F26ED42ED6F1818AE62BF69DCEB3(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 *)NULL;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___hints1;
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_4 = ___hints1;
		NullCheck(L_4);
		bool L_5 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>::ContainsKey(!0) */, IDictionary_2_tB98F995F5FB82E9782BDBC6F11E725B1497AC3D0_il2cpp_TypeInfo_var, L_4, 1);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		BinaryBitmap_t80AA18B285BEB0FC11E59B73030141FBC215E40F * L_6 = ___image0;
		NullCheck(L_6);
		BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * L_7 = BinaryBitmap_get_BlackMatrix_m454ACAE90CD2F26ED42ED6F1818AE62BF69DCEB3(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(QRCodeReader_tA900E6A7803ABDD3FBA363F1924877C2CFCE815E_il2cpp_TypeInfo_var);
		BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * L_8 = QRCodeReader_extractPureBits_mAA4E1C9450979D4BCC920DE5DED6C7DF1BD9BB51(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * L_9 = V_2;
		if (L_9)
		{
			goto IL_002a;
		}
	}
	{
		return (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 *)NULL;
	}

IL_002a:
	{
		Decoder_t50A72A1C6D89DF26E309DA696AE1AB986E77DE63 * L_10 = __this->get_decoder_1();
		BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * L_11 = V_2;
		RuntimeObject* L_12 = ___hints1;
		NullCheck(L_10);
		DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * L_13 = Decoder_decode_mB82326EC3CB856EF0CA397C9BF97B5A249696598(L_10, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		IL2CPP_RUNTIME_CLASS_INIT(QRCodeReader_tA900E6A7803ABDD3FBA363F1924877C2CFCE815E_il2cpp_TypeInfo_var);
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_14 = ((QRCodeReader_tA900E6A7803ABDD3FBA363F1924877C2CFCE815E_StaticFields*)il2cpp_codegen_static_fields_for(QRCodeReader_tA900E6A7803ABDD3FBA363F1924877C2CFCE815E_il2cpp_TypeInfo_var))->get_NO_POINTS_0();
		V_1 = L_14;
		goto IL_0071;
	}

IL_0040:
	{
		BinaryBitmap_t80AA18B285BEB0FC11E59B73030141FBC215E40F * L_15 = ___image0;
		NullCheck(L_15);
		BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * L_16 = BinaryBitmap_get_BlackMatrix_m454ACAE90CD2F26ED42ED6F1818AE62BF69DCEB3(L_15, /*hidden argument*/NULL);
		Detector_t3B66BB8D49D654A6D242700AB9DEB79F157EC46D * L_17 = (Detector_t3B66BB8D49D654A6D242700AB9DEB79F157EC46D *)il2cpp_codegen_object_new(Detector_t3B66BB8D49D654A6D242700AB9DEB79F157EC46D_il2cpp_TypeInfo_var);
		Detector__ctor_mD366287910B6823B673856821FE7D54CA087543C(L_17, L_16, /*hidden argument*/NULL);
		RuntimeObject* L_18 = ___hints1;
		NullCheck(L_17);
		DetectorResult_tA8DF6FA9D3338258E768DD74F2389794BBDFD673 * L_19 = VirtFuncInvoker1< DetectorResult_tA8DF6FA9D3338258E768DD74F2389794BBDFD673 *, RuntimeObject* >::Invoke(4 /* ZXing.Common.DetectorResult ZXing.QrCode.Internal.Detector::detect(System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>) */, L_17, L_18);
		V_3 = L_19;
		DetectorResult_tA8DF6FA9D3338258E768DD74F2389794BBDFD673 * L_20 = V_3;
		if (L_20)
		{
			goto IL_0057;
		}
	}
	{
		return (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 *)NULL;
	}

IL_0057:
	{
		Decoder_t50A72A1C6D89DF26E309DA696AE1AB986E77DE63 * L_21 = __this->get_decoder_1();
		DetectorResult_tA8DF6FA9D3338258E768DD74F2389794BBDFD673 * L_22 = V_3;
		NullCheck(L_22);
		BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * L_23 = DetectorResult_get_Bits_m5F239BC2CC1037273C83C1129A0A2BD27AF751C6(L_22, /*hidden argument*/NULL);
		RuntimeObject* L_24 = ___hints1;
		NullCheck(L_21);
		DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * L_25 = Decoder_decode_mB82326EC3CB856EF0CA397C9BF97B5A249696598(L_21, L_23, L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		DetectorResult_tA8DF6FA9D3338258E768DD74F2389794BBDFD673 * L_26 = V_3;
		NullCheck(L_26);
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_27 = DetectorResult_get_Points_m067758D03AAE823BE03AEA788F77B8C0BB430AA5(L_26, /*hidden argument*/NULL);
		V_1 = L_27;
	}

IL_0071:
	{
		DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * L_28 = V_0;
		if (L_28)
		{
			goto IL_0076;
		}
	}
	{
		return (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 *)NULL;
	}

IL_0076:
	{
		DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * L_29 = V_0;
		NullCheck(L_29);
		RuntimeObject * L_30 = DecoderResult_get_Other_m618FA4A4D600C6134EF11CCCFF555C6C7914E7C1(L_29, /*hidden argument*/NULL);
		V_4 = ((QRCodeDecoderMetaData_tCBE7F356162BBA2B2DF1BEA0805F0863397EF9F5 *)IsInstSealed((RuntimeObject*)L_30, QRCodeDecoderMetaData_tCBE7F356162BBA2B2DF1BEA0805F0863397EF9F5_il2cpp_TypeInfo_var));
		QRCodeDecoderMetaData_tCBE7F356162BBA2B2DF1BEA0805F0863397EF9F5 * L_31 = V_4;
		if (!L_31)
		{
			goto IL_008f;
		}
	}
	{
		QRCodeDecoderMetaData_tCBE7F356162BBA2B2DF1BEA0805F0863397EF9F5 * L_32 = V_4;
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_33 = V_1;
		NullCheck(L_32);
		QRCodeDecoderMetaData_applyMirroredCorrection_m7BB4BB5D98551677FBE589EE6E6E18750C3DF0DC(L_32, L_33, /*hidden argument*/NULL);
	}

IL_008f:
	{
		DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * L_34 = V_0;
		NullCheck(L_34);
		String_t* L_35 = DecoderResult_get_Text_m389CA2A6637AF59CDF2EEDBAC20C66361994BD9A(L_34, /*hidden argument*/NULL);
		DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * L_36 = V_0;
		NullCheck(L_36);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_37 = DecoderResult_get_RawBytes_mA0077576C31C674E5F5CCE283B485A9782103DB9(L_36, /*hidden argument*/NULL);
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_38 = V_1;
		Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * L_39 = (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 *)il2cpp_codegen_object_new(Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747_il2cpp_TypeInfo_var);
		Result__ctor_m9AF06E666395813A7423F0B502842248AF017DB2(L_39, L_35, L_37, L_38, ((int32_t)2048), /*hidden argument*/NULL);
		V_5 = L_39;
		DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * L_40 = V_0;
		NullCheck(L_40);
		RuntimeObject* L_41 = DecoderResult_get_ByteSegments_m0954763CF7DEE90CA9B1FF9368D32122EC5A9975(L_40, /*hidden argument*/NULL);
		V_6 = L_41;
		RuntimeObject* L_42 = V_6;
		if (!L_42)
		{
			goto IL_00be;
		}
	}
	{
		Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * L_43 = V_5;
		RuntimeObject* L_44 = V_6;
		NullCheck(L_43);
		Result_putMetadata_m26B965175F132CBF9863FAB846D56515E8D5452C(L_43, 2, L_44, /*hidden argument*/NULL);
	}

IL_00be:
	{
		DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * L_45 = V_0;
		NullCheck(L_45);
		String_t* L_46 = DecoderResult_get_ECLevel_mB1F33C27FE4EF563E5598BA96202FE4CFAF740E4(L_45, /*hidden argument*/NULL);
		V_7 = L_46;
		String_t* L_47 = V_7;
		if (!L_47)
		{
			goto IL_00d4;
		}
	}
	{
		Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * L_48 = V_5;
		String_t* L_49 = V_7;
		NullCheck(L_48);
		Result_putMetadata_m26B965175F132CBF9863FAB846D56515E8D5452C(L_48, 3, L_49, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * L_50 = V_0;
		NullCheck(L_50);
		bool L_51 = DecoderResult_get_StructuredAppend_m5DD73FAB2C19A90747959576441256840ED32FDC(L_50, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_0103;
		}
	}
	{
		Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * L_52 = V_5;
		DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * L_53 = V_0;
		NullCheck(L_53);
		int32_t L_54 = DecoderResult_get_StructuredAppendSequenceNumber_mF4BD576CA5E8409132F8E95801205938D605B85D(L_53, /*hidden argument*/NULL);
		int32_t L_55 = L_54;
		RuntimeObject * L_56 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_55);
		NullCheck(L_52);
		Result_putMetadata_m26B965175F132CBF9863FAB846D56515E8D5452C(L_52, 8, L_56, /*hidden argument*/NULL);
		Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * L_57 = V_5;
		DecoderResult_t7AE1D29F05FE30AE3F907D51F10AA16BF0D8440F * L_58 = V_0;
		NullCheck(L_58);
		int32_t L_59 = DecoderResult_get_StructuredAppendParity_mB326C33D3D3285FD4AAF3F4E250BA3581A759C51(L_58, /*hidden argument*/NULL);
		int32_t L_60 = L_59;
		RuntimeObject * L_61 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_60);
		NullCheck(L_57);
		Result_putMetadata_m26B965175F132CBF9863FAB846D56515E8D5452C(L_57, ((int32_t)9), L_61, /*hidden argument*/NULL);
	}

IL_0103:
	{
		Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * L_62 = V_5;
		return L_62;
	}
}
// System.Void ZXing.QrCode.QRCodeReader::reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeReader_reset_mC994681DF420FC2C76FD4CF8E0E84F7D7E84F89D (QRCodeReader_tA900E6A7803ABDD3FBA363F1924877C2CFCE815E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// ZXing.Common.BitMatrix ZXing.QrCode.QRCodeReader::extractPureBits(ZXing.Common.BitMatrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * QRCodeReader_extractPureBits_mAA4E1C9450979D4BCC920DE5DED6C7DF1BD9BB51 (BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * ___image0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QRCodeReader_extractPureBits_mAA4E1C9450979D4BCC920DE5DED6C7DF1BD9BB51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_0 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_1 = NULL;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * L_0 = ___image0;
		NullCheck(L_0);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = BitMatrix_getTopLeftOnBit_m407A28B7DAFAF8789E4C9EE04C3CD67A7D02D0AB(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * L_2 = ___image0;
		NullCheck(L_2);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_3 = BitMatrix_getBottomRightOnBit_m3B82EDCDC2E331AC76625F14F2E265939896BAF4(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_5 = V_1;
		if (L_5)
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA *)NULL;
	}

IL_0016:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_6 = V_0;
		BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * L_7 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(QRCodeReader_tA900E6A7803ABDD3FBA363F1924877C2CFCE815E_il2cpp_TypeInfo_var);
		bool L_8 = QRCodeReader_moduleSize_m0D30AAC8F9506605D703BE5396BFC11E22AEF86C(L_6, L_7, (float*)(&V_2), /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0023;
		}
	}
	{
		return (BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA *)NULL;
	}

IL_0023:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 1;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = 1;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = 0;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = 0;
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		int32_t L_21 = V_5;
		int32_t L_22 = V_6;
		if ((((int32_t)L_21) >= ((int32_t)L_22)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0043;
		}
	}

IL_0041:
	{
		return (BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA *)NULL;
	}

IL_0043:
	{
		int32_t L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = V_6;
		int32_t L_28 = V_5;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)L_26))) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)L_28)))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_29 = V_5;
		int32_t L_30 = V_4;
		int32_t L_31 = V_3;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_31))));
		int32_t L_32 = V_6;
		BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * L_33 = ___image0;
		NullCheck(L_33);
		int32_t L_34 = BitMatrix_get_Width_mF11FA55D8CF16E6194DB3A01B36ECE2B4B7D227B(L_33, /*hidden argument*/NULL);
		if ((((int32_t)L_32) < ((int32_t)L_34)))
		{
			goto IL_0063;
		}
	}
	{
		return (BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA *)NULL;
	}

IL_0063:
	{
		int32_t L_35 = V_6;
		int32_t L_36 = V_5;
		float L_37 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_38 = bankers_round((((double)((double)((float)((float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)L_36)), (int32_t)1)))))/(float)L_37))))));
		V_7 = (((int32_t)((int32_t)L_38)));
		int32_t L_39 = V_4;
		int32_t L_40 = V_3;
		float L_41 = V_2;
		double L_42 = bankers_round((((double)((double)((float)((float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_40)), (int32_t)1)))))/(float)L_41))))));
		V_8 = (((int32_t)((int32_t)L_42)));
		int32_t L_43 = V_7;
		if ((((int32_t)L_43) <= ((int32_t)0)))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_44 = V_8;
		if ((((int32_t)L_44) > ((int32_t)0)))
		{
			goto IL_0094;
		}
	}

IL_0092:
	{
		return (BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA *)NULL;
	}

IL_0094:
	{
		int32_t L_45 = V_8;
		int32_t L_46 = V_7;
		if ((((int32_t)L_45) == ((int32_t)L_46)))
		{
			goto IL_009c;
		}
	}
	{
		return (BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA *)NULL;
	}

IL_009c:
	{
		float L_47 = V_2;
		V_9 = (((int32_t)((int32_t)((float)((float)L_47/(float)(2.0f))))));
		int32_t L_48 = V_3;
		int32_t L_49 = V_9;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)L_49));
		int32_t L_50 = V_5;
		int32_t L_51 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)L_51));
		int32_t L_52 = V_5;
		int32_t L_53 = V_7;
		float L_54 = V_2;
		int32_t L_55 = V_6;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)1))))), (float)L_54))))))), (int32_t)L_55));
		int32_t L_56 = V_10;
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_57 = V_10;
		int32_t L_58 = V_9;
		if ((((int32_t)L_57) <= ((int32_t)L_58)))
		{
			goto IL_00cf;
		}
	}
	{
		return (BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA *)NULL;
	}

IL_00cf:
	{
		int32_t L_59 = V_5;
		int32_t L_60 = V_10;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)L_60));
	}

IL_00d6:
	{
		int32_t L_61 = V_3;
		int32_t L_62 = V_8;
		float L_63 = V_2;
		int32_t L_64 = V_4;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_62, (int32_t)1))))), (float)L_63))))))), (int32_t)L_64));
		int32_t L_65 = V_11;
		if ((((int32_t)L_65) <= ((int32_t)0)))
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_66 = V_11;
		int32_t L_67 = V_9;
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_00f2;
		}
	}
	{
		return (BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA *)NULL;
	}

IL_00f2:
	{
		int32_t L_68 = V_3;
		int32_t L_69 = V_11;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_68, (int32_t)L_69));
	}

IL_00f7:
	{
		int32_t L_70 = V_7;
		int32_t L_71 = V_8;
		BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * L_72 = (BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA *)il2cpp_codegen_object_new(BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA_il2cpp_TypeInfo_var);
		BitMatrix__ctor_m6CAE224F55DEA444BA745B27F97BE5E347598753(L_72, L_70, L_71, /*hidden argument*/NULL);
		V_12 = L_72;
		V_13 = 0;
		goto IL_0147;
	}

IL_0107:
	{
		int32_t L_73 = V_3;
		int32_t L_74 = V_13;
		float L_75 = V_2;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)L_74))), (float)L_75)))))));
		V_15 = 0;
		goto IL_013b;
	}

IL_0116:
	{
		BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * L_76 = ___image0;
		int32_t L_77 = V_5;
		int32_t L_78 = V_15;
		float L_79 = V_2;
		int32_t L_80 = V_14;
		NullCheck(L_76);
		bool L_81 = BitMatrix_get_Item_mB5E579355866A51916A01FCF85BD445F15A55865(L_76, ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)L_78))), (float)L_79))))))), L_80, /*hidden argument*/NULL);
		if (!L_81)
		{
			goto IL_0135;
		}
	}
	{
		BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * L_82 = V_12;
		int32_t L_83 = V_15;
		int32_t L_84 = V_13;
		NullCheck(L_82);
		BitMatrix_set_Item_m0ED143B0A6F01FA4CD3FBFFE0408850AEC223A45(L_82, L_83, L_84, (bool)1, /*hidden argument*/NULL);
	}

IL_0135:
	{
		int32_t L_85 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
	}

IL_013b:
	{
		int32_t L_86 = V_15;
		int32_t L_87 = V_7;
		if ((((int32_t)L_86) < ((int32_t)L_87)))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_88 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1));
	}

IL_0147:
	{
		int32_t L_89 = V_13;
		int32_t L_90 = V_8;
		if ((((int32_t)L_89) < ((int32_t)L_90)))
		{
			goto IL_0107;
		}
	}
	{
		BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * L_91 = V_12;
		return L_91;
	}
}
// System.Boolean ZXing.QrCode.QRCodeReader::moduleSize(System.Int32[],ZXing.Common.BitMatrix,System.SingleU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QRCodeReader_moduleSize_m0D30AAC8F9506605D703BE5396BFC11E22AEF86C (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___leftTopBlack0, BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * ___image1, float* ___msize2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * L_0 = ___image1;
		NullCheck(L_0);
		int32_t L_1 = BitMatrix_get_Height_mF33E064CD68D2D6713A15EE2EC03182C597F3F73(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * L_2 = ___image1;
		NullCheck(L_2);
		int32_t L_3 = BitMatrix_get_Width_mF11FA55D8CF16E6194DB3A01B36ECE2B4B7D227B(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = ___leftTopBlack0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		int32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_7 = ___leftTopBlack0;
		NullCheck(L_7);
		int32_t L_8 = 1;
		int32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		V_4 = (bool)1;
		V_5 = 0;
		goto IL_0043;
	}

IL_001e:
	{
		bool L_10 = V_4;
		BitMatrix_t603A558C22BA7CDB3D44CC07B52DC93F6DC024EA * L_11 = ___image1;
		int32_t L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_11);
		bool L_14 = BitMatrix_get_Item_mB5E579355866A51916A01FCF85BD445F15A55865(L_11, L_12, L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_10) == ((int32_t)L_14)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_15 = V_5;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		V_5 = L_16;
		if ((((int32_t)L_16) == ((int32_t)5)))
		{
			goto IL_004b;
		}
	}
	{
		bool L_17 = V_4;
		V_4 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
	}

IL_003b:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_20 = V_2;
		int32_t L_21 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001e;
		}
	}

IL_004b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_1;
		if ((((int32_t)L_24) == ((int32_t)L_25)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_26 = V_3;
		int32_t L_27 = V_0;
		if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
		{
			goto IL_005c;
		}
	}

IL_0053:
	{
		float* L_28 = ___msize2;
		*((float*)L_28) = (float)(0.0f);
		return (bool)0;
	}

IL_005c:
	{
		float* L_29 = ___msize2;
		int32_t L_30 = V_2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_31 = ___leftTopBlack0;
		NullCheck(L_31);
		int32_t L_32 = 0;
		int32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		*((float*)L_29) = (float)((float)((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_33)))))/(float)(7.0f)));
		return (bool)1;
	}
}
// System.Void ZXing.QrCode.QRCodeReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeReader__ctor_mACBE349FA0B5A1B4CAD266DBD8539416A386B84D (QRCodeReader_tA900E6A7803ABDD3FBA363F1924877C2CFCE815E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QRCodeReader__ctor_mACBE349FA0B5A1B4CAD266DBD8539416A386B84D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decoder_t50A72A1C6D89DF26E309DA696AE1AB986E77DE63 * L_0 = (Decoder_t50A72A1C6D89DF26E309DA696AE1AB986E77DE63 *)il2cpp_codegen_object_new(Decoder_t50A72A1C6D89DF26E309DA696AE1AB986E77DE63_il2cpp_TypeInfo_var);
		Decoder__ctor_mF0955B09203C9B343CFF02E5B45F971A30F8EF9C(L_0, /*hidden argument*/NULL);
		__this->set_decoder_1(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.QrCode.QRCodeReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeReader__cctor_m0CD5F8FA307B10649A385EA3AF5E528860EB4DCF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QRCodeReader__cctor_m0CD5F8FA307B10649A385EA3AF5E528860EB4DCF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_0 = (ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9*)(ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9*)SZArrayNew(ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9_il2cpp_TypeInfo_var, (uint32_t)0);
		((QRCodeReader_tA900E6A7803ABDD3FBA363F1924877C2CFCE815E_StaticFields*)il2cpp_codegen_static_fields_for(QRCodeReader_tA900E6A7803ABDD3FBA363F1924877C2CFCE815E_il2cpp_TypeInfo_var))->set_NO_POINTS_0(L_0);
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
// System.Void ZXing.RGBLuminanceSource::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource__ctor_m3E52A219F34F2FB24D216730CA7D6317E3BABA88 (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		BaseLuminanceSource__ctor_m251CE985750BB81CB73F3FAB6BDA210C92D303CB(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::.ctor(System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource_BitmapFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource__ctor_m5F5A26DF23C3187F0132ADB98B08125F45953653 (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbRawBytes0, int32_t ___width1, int32_t ___height2, int32_t ___bitmapFormat3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width1;
		int32_t L_1 = ___height2;
		BaseLuminanceSource__ctor_m251CE985750BB81CB73F3FAB6BDA210C92D303CB(__this, L_0, L_1, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___rgbRawBytes0;
		int32_t L_3 = ___bitmapFormat3;
		RGBLuminanceSource_CalculateLuminance_m176132C10FBE814B9BBFC03D9EBDCE643C1DA8E5(__this, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// ZXing.LuminanceSource ZXing.RGBLuminanceSource::CreateLuminanceSource(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LuminanceSource_tF16355B47DAC39E1C1477B0659BE81DE5A4FD1AA * RGBLuminanceSource_CreateLuminanceSource_m7C6F0F5FC190FB9CA285AE53C99A82CF027263F6 (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___newLuminances0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RGBLuminanceSource_CreateLuminanceSource_m7C6F0F5FC190FB9CA285AE53C99A82CF027263F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * V_0 = NULL;
	{
		int32_t L_0 = ___width1;
		int32_t L_1 = ___height2;
		RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * L_2 = (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 *)il2cpp_codegen_object_new(RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821_il2cpp_TypeInfo_var);
		RGBLuminanceSource__ctor_m3E52A219F34F2FB24D216730CA7D6317E3BABA88(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * L_3 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___newLuminances0;
		NullCheck(L_3);
		((BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D *)L_3)->set_luminances_2(L_4);
		RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * L_5 = V_0;
		return L_5;
	}
}
// ZXing.RGBLuminanceSource_BitmapFormat ZXing.RGBLuminanceSource::DetermineBitmapFormat(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RGBLuminanceSource_DetermineBitmapFormat_m5D90E7B34222734E607B8DD7E1DB48064859AECD (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbRawBytes0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RGBLuminanceSource_DetermineBitmapFormat_m5D90E7B34222734E607B8DD7E1DB48064859AECD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___width1;
		int32_t L_1 = ___height2;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___rgbRawBytes0;
		NullCheck(L_2);
		int32_t L_3 = V_0;
		V_1 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))/(int32_t)L_3));
		int32_t L_4 = V_1;
		V_2 = L_4;
		int32_t L_5 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_002a;
			}
			case 3:
			{
				goto IL_002c;
			}
		}
	}
	{
		goto IL_002e;
	}

IL_0026:
	{
		return (int32_t)(1);
	}

IL_0028:
	{
		return (int32_t)(8);
	}

IL_002a:
	{
		return (int32_t)(2);
	}

IL_002c:
	{
		return (int32_t)(3);
	}

IL_002e:
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_6 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_6, _stringLiteral01ED402893C393E07386B7F4D569A8309F7D04DB, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, RGBLuminanceSource_DetermineBitmapFormat_m5D90E7B34222734E607B8DD7E1DB48064859AECD_RuntimeMethod_var);
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminance(System.Byte[],ZXing.RGBLuminanceSource_BitmapFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminance_m176132C10FBE814B9BBFC03D9EBDCE643C1DA8E5 (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbRawBytes0, int32_t ___bitmapFormat1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RGBLuminanceSource_CalculateLuminance_m176132C10FBE814B9BBFC03D9EBDCE643C1DA8E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B6_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B6_1 = NULL;
	int32_t G_B6_2 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B6_3 = NULL;
	int32_t G_B5_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B5_1 = NULL;
	int32_t G_B5_2 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B5_3 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B7_2 = NULL;
	int32_t G_B7_3 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B7_4 = NULL;
	{
		int32_t L_0 = ___bitmapFormat1;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___rgbRawBytes0;
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 ZXing.LuminanceSource::get_Width() */, __this);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 ZXing.LuminanceSource::get_Height() */, __this);
		int32_t L_4 = RGBLuminanceSource_DetermineBitmapFormat_m5D90E7B34222734E607B8DD7E1DB48064859AECD(L_1, L_2, L_3, /*hidden argument*/NULL);
		___bitmapFormat1 = L_4;
	}

IL_0017:
	{
		int32_t L_5 = ___bitmapFormat1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_0070;
			}
			case 2:
			{
				goto IL_0080;
			}
			case 3:
			{
				goto IL_0098;
			}
			case 4:
			{
				goto IL_0078;
			}
			case 5:
			{
				goto IL_0088;
			}
			case 6:
			{
				goto IL_00a0;
			}
			case 7:
			{
				goto IL_00a8;
			}
			case 8:
			{
				goto IL_0090;
			}
		}
	}
	{
		goto IL_00b0;
	}

IL_0047:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = ___rgbRawBytes0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ((BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D *)__this)->get_luminances_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ___rgbRawBytes0;
		NullCheck(L_9);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ((BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D *)__this)->get_luminances_2();
		NullCheck(L_10);
		G_B5_0 = 0;
		G_B5_1 = L_8;
		G_B5_2 = 0;
		G_B5_3 = L_7;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			G_B6_0 = 0;
			G_B6_1 = L_8;
			G_B6_2 = 0;
			G_B6_3 = L_7;
			goto IL_0067;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = ((BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D *)__this)->get_luminances_2();
		NullCheck(L_11);
		G_B7_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		G_B7_4 = G_B5_3;
		goto IL_006a;
	}

IL_0067:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = ___rgbRawBytes0;
		NullCheck(L_12);
		G_B7_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))));
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		G_B7_4 = G_B6_3;
	}

IL_006a:
	{
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)G_B7_4, G_B7_3, (RuntimeArray *)(RuntimeArray *)G_B7_2, G_B7_1, G_B7_0, /*hidden argument*/NULL);
		return;
	}

IL_0070:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceRGB24_m5F8F6EE8813B18F064588469CFFF964D1A0F9BD7(__this, L_13, /*hidden argument*/NULL);
		return;
	}

IL_0078:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceBGR24_mCDD34B9E110FFBF48C5A96C3F7D1DE114433553E(__this, L_14, /*hidden argument*/NULL);
		return;
	}

IL_0080:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceRGB32_m3C13504D7158359F8DB730011E43E3D3917B529E(__this, L_15, /*hidden argument*/NULL);
		return;
	}

IL_0088:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceBGR32_m55532764A76AC9246C755C9280E9F68EBA9F5513(__this, L_16, /*hidden argument*/NULL);
		return;
	}

IL_0090:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceRGBA32_mF19AE7C6A8FBA88FCF27F281529E94CF83A0455D(__this, L_17, /*hidden argument*/NULL);
		return;
	}

IL_0098:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceARGB32_mEE12E6711CE0E3653EE65FCE0CA4357C95FB753E(__this, L_18, /*hidden argument*/NULL);
		return;
	}

IL_00a0:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceBGRA32_m65B5C1DFFF6598A1A506AB2AD77B7733D76D4761(__this, L_19, /*hidden argument*/NULL);
		return;
	}

IL_00a8:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceRGB565_mA3F4F8073BD472FC43BE44B3413541B7D57810B9(__this, L_20, /*hidden argument*/NULL);
		return;
	}

IL_00b0:
	{
		int32_t L_21 = ___bitmapFormat1;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(BitmapFormat_t881ACA6E2C9EDC718460E9F3BB026D2CDD39AE63_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_23);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_25 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_25, _stringLiteralB661E01FEDC0E9FBFA5ABFBBADB9F86FF2BF414D, L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, NULL, RGBLuminanceSource_CalculateLuminance_m176132C10FBE814B9BBFC03D9EBDCE643C1DA8E5_RuntimeMethod_var);
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB565(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB565_mA3F4F8073BD472FC43BE44B3413541B7D57810B9 (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgb565RawData0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0090;
	}

IL_0009:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___rgb565RawData0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_2 = L_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___rgb565RawData0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		uint8_t L_8 = V_2;
		V_4 = ((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)));
		uint8_t L_9 = V_2;
		uint8_t L_10 = V_3;
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)224)))>>(int32_t)5))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_10&(int32_t)3))<<(int32_t)3))))&(int32_t)((int32_t)31)));
		uint8_t L_11 = V_3;
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_11>>(int32_t)2))&(int32_t)((int32_t)31)));
		int32_t L_12 = V_6;
		V_7 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)((int32_t)527))), (int32_t)((int32_t)23)))>>(int32_t)6));
		int32_t L_13 = V_5;
		V_8 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)((int32_t)527))), (int32_t)((int32_t)23)))>>(int32_t)6));
		int32_t L_14 = V_4;
		V_9 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)((int32_t)527))), (int32_t)((int32_t)23)))>>(int32_t)6));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = ((BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D *)__this)->get_luminances_2();
		int32_t L_16 = V_0;
		int32_t L_17 = V_7;
		int32_t L_18 = V_8;
		int32_t L_19 = V_9;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_17)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_18)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_19))))>>(int32_t)((int32_t)16)))))));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)2));
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0090:
	{
		int32_t L_22 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = ___rgb565RawData0;
		NullCheck(L_23);
		if ((((int32_t)L_22) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_24 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_25 = ((BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D *)__this)->get_luminances_2();
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))))
		{
			goto IL_0009;
		}
	}

IL_00a4:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB24(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB24_m5F8F6EE8813B18F064588469CFFF964D1A0F9BD7 (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0047;
	}

IL_0006:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = ((BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D *)__this)->get_luminances_2();
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		int32_t L_19 = V_4;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_17)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_18)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_19))))>>(int32_t)((int32_t)16)))))));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_21 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = ___rgbRawBytes0;
		NullCheck(L_22);
		if ((((int32_t)L_21) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_23 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = ((BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D *)__this)->get_luminances_2();
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_0058:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGR24(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGR24_mCDD34B9E110FFBF48C5A96C3F7D1DE114433553E (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0047;
	}

IL_0006:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = ((BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D *)__this)->get_luminances_2();
		int32_t L_16 = V_1;
		int32_t L_17 = V_4;
		int32_t L_18 = V_3;
		int32_t L_19 = V_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_17)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_18)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_19))))>>(int32_t)((int32_t)16)))))));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_21 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = ___rgbRawBytes0;
		NullCheck(L_22);
		if ((((int32_t)L_21) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_23 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = ((BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D *)__this)->get_luminances_2();
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_0058:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB32_m3C13504D7158359F8DB730011E43E3D3917B529E (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_004b;
	}

IL_0006:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = ((BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D *)__this)->get_luminances_2();
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		int32_t L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_18)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_19)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_20))))>>(int32_t)((int32_t)16)))))));
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_004b:
	{
		int32_t L_22 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = ___rgbRawBytes0;
		NullCheck(L_23);
		if ((((int32_t)L_22) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_24 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_25 = ((BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D *)__this)->get_luminances_2();
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_005c:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGR32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGR32_m55532764A76AC9246C755C9280E9F68EBA9F5513 (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_004b;
	}

IL_0006:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = ((BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D *)__this)->get_luminances_2();
		int32_t L_17 = V_1;
		int32_t L_18 = V_4;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_18)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_19)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_20))))>>(int32_t)((int32_t)16)))))));
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_004b:
	{
		int32_t L_22 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = ___rgbRawBytes0;
		NullCheck(L_23);
		if ((((int32_t)L_22) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_24 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_25 = ((BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D *)__this)->get_luminances_2();
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_005c:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGRA32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGRA32_m65B5C1DFFF6598A1A506AB2AD77B7733D76D4761 (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_006b;
	}

IL_0006:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = ___rgbRawBytes0;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_5 = L_19;
		uint8_t L_20 = V_4;
		uint8_t L_21 = V_3;
		uint8_t L_22 = V_2;
		V_6 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_20)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_21)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_22))))>>(int32_t)((int32_t)16))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = ((BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D *)__this)->get_luminances_2();
		int32_t L_24 = V_1;
		uint8_t L_25 = V_6;
		uint8_t L_26 = V_5;
		uint8_t L_27 = V_5;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26))>>(int32_t)8)), (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)255), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)255), (int32_t)L_27))))>>(int32_t)8))))))));
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_29 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = ___rgbRawBytes0;
		NullCheck(L_30);
		if ((((int32_t)L_29) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_31 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_32 = ((BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D *)__this)->get_luminances_2();
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_007c:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGBA32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGBA32_mF19AE7C6A8FBA88FCF27F281529E94CF83A0455D (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_006b;
	}

IL_0006:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = ___rgbRawBytes0;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_5 = L_19;
		uint8_t L_20 = V_2;
		uint8_t L_21 = V_3;
		uint8_t L_22 = V_4;
		V_6 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_20)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_21)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_22))))>>(int32_t)((int32_t)16))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = ((BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D *)__this)->get_luminances_2();
		int32_t L_24 = V_1;
		uint8_t L_25 = V_6;
		uint8_t L_26 = V_5;
		uint8_t L_27 = V_5;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26))>>(int32_t)8)), (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)255), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)255), (int32_t)L_27))))>>(int32_t)8))))))));
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_29 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = ___rgbRawBytes0;
		NullCheck(L_30);
		if ((((int32_t)L_29) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_31 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_32 = ((BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D *)__this)->get_luminances_2();
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_007c:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceARGB32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceARGB32_mEE12E6711CE0E3653EE65FCE0CA4357C95FB753E (RGBLuminanceSource_t2D44C0CA461B5E5C11DB8B10EFE87623BEC0C821 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_006a;
	}

IL_0006:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = ___rgbRawBytes0;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_5 = L_19;
		uint8_t L_20 = V_3;
		uint8_t L_21 = V_4;
		uint8_t L_22 = V_5;
		V_6 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_20)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_21)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_22))))>>(int32_t)((int32_t)16))))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = ((BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D *)__this)->get_luminances_2();
		int32_t L_24 = V_1;
		uint8_t L_25 = V_6;
		uint8_t L_26 = V_2;
		uint8_t L_27 = V_2;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26))>>(int32_t)8)), (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)255), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)255), (int32_t)L_27))))>>(int32_t)8))))))));
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_006a:
	{
		int32_t L_29 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = ___rgbRawBytes0;
		NullCheck(L_30);
		if ((((int32_t)L_29) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))))
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_31 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_32 = ((BaseLuminanceSource_t9BF2D6C74077402C58C9A5179F09FAEAFA53654D *)__this)->get_luminances_2();
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_007b:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.ReaderException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderException__ctor_mF114032874C24D033D37ABDA6C4A6D5281CE3533 (ReaderException_t2B1A89EE1332FB339477D390EDA7BE8B54505F2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReaderException__ctor_mF114032874C24D033D37ABDA6C4A6D5281CE3533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1(__this, /*hidden argument*/NULL);
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
// System.String ZXing.Result::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Result_get_Text_mD426CE8B3E2D3F404681DCE557FF1D7E7B50D213 (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTextU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ZXing.Result::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_set_Text_m3D350C6BC68B77494E693D58CE42F3E03910E1E9 (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTextU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Byte[] ZXing.Result::get_RawBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Result_get_RawBytes_mC28B8DEE39D417640788096F58DF0AC15C4ACCAD (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_U3CRawBytesU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void ZXing.Result::set_RawBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_set_RawBytes_m15BF69594615CE2E2A2243F86F8973E6932A5640 (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___value0;
		__this->set_U3CRawBytesU3Ek__BackingField_1(L_0);
		return;
	}
}
// ZXing.ResultPoint[] ZXing.Result::get_ResultPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* Result_get_ResultPoints_mC0DA57A5351BDDFED3CD7E440DABDDEE70E36D7D (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, const RuntimeMethod* method)
{
	{
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_0 = __this->get_U3CResultPointsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ZXing.Result::set_ResultPoints(ZXing.ResultPoint[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_set_ResultPoints_m55BA7262A67C694773909E9BA4DC4B26207F47B3 (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* ___value0, const RuntimeMethod* method)
{
	{
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_0 = ___value0;
		__this->set_U3CResultPointsU3Ek__BackingField_2(L_0);
		return;
	}
}
// ZXing.BarcodeFormat ZXing.Result::get_BarcodeFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Result_get_BarcodeFormat_m4363F3E4017061C950E0F257CE073D4D5DD6D124 (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CBarcodeFormatU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ZXing.Result::set_BarcodeFormat(ZXing.BarcodeFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_set_BarcodeFormat_mE879B14699E064C8D2C46FBD15350B92D84A6100 (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CBarcodeFormatU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::get_ResultMetadata()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Result_get_ResultMetadata_mAA35EC4BD99DD27CCC7E55D6EF5DB4EEEC8BA41F (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CResultMetadataU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ZXing.Result::set_ResultMetadata(System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_set_ResultMetadata_m8CB58E39A1816FEA3F0A9EE17AD5F351BAA7F94A (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CResultMetadataU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void ZXing.Result::set_Timestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_set_Timestamp_m0B1E7867110942F25D062CA844CD6FDB815755DA (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CTimestampU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void ZXing.Result::set_NumBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_set_NumBits_mE57E53435BB8A537FA5FF803C2C308F22C7E0CEC (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CNumBitsU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void ZXing.Result::.ctor(System.String,System.Byte[],ZXing.ResultPoint[],ZXing.BarcodeFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_m9AF06E666395813A7423F0B502842248AF017DB2 (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, String_t* ___text0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rawBytes1, ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* ___resultPoints2, int32_t ___format3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Result__ctor_m9AF06E666395813A7423F0B502842248AF017DB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * G_B2_2 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * G_B3_3 = NULL;
	{
		String_t* L_0 = ___text0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___rawBytes1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___rawBytes1;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (!L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___rawBytes1;
		NullCheck(L_3);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)8, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_000e:
	{
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_4 = ___resultPoints2;
		int32_t L_5 = ___format3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_6 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_0 = L_6;
		int64_t L_7 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(G_B3_3);
		Result__ctor_mE1D02333FA41981FF66BC480E6D849B1D08D702A(G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_4, L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.Result::.ctor(System.String,System.Byte[],System.Int32,ZXing.ResultPoint[],ZXing.BarcodeFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_mE868CD95AEFDE2FA5FFA3B60209D681FC0DBFCD7 (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, String_t* ___text0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rawBytes1, int32_t ___numBits2, ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* ___resultPoints3, int32_t ___format4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Result__ctor_mE868CD95AEFDE2FA5FFA3B60209D681FC0DBFCD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___text0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___rawBytes1;
		int32_t L_2 = ___numBits2;
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_3 = ___resultPoints3;
		int32_t L_4 = ___format4;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_5 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_0 = L_5;
		int64_t L_6 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_0), /*hidden argument*/NULL);
		Result__ctor_mE1D02333FA41981FF66BC480E6D849B1D08D702A(__this, L_0, L_1, L_2, L_3, L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.Result::.ctor(System.String,System.Byte[],System.Int32,ZXing.ResultPoint[],ZXing.BarcodeFormat,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_mE1D02333FA41981FF66BC480E6D849B1D08D702A (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, String_t* ___text0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rawBytes1, int32_t ___numBits2, ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* ___resultPoints3, int32_t ___format4, int64_t ___timestamp5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Result__ctor_mE1D02333FA41981FF66BC480E6D849B1D08D702A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___rawBytes1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, _stringLiteral2BC4C8FD0FB3A85EC7917189A70A8D32B582649C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Result__ctor_mE1D02333FA41981FF66BC480E6D849B1D08D702A_RuntimeMethod_var);
	}

IL_0017:
	{
		String_t* L_3 = ___text0;
		Result_set_Text_m3D350C6BC68B77494E693D58CE42F3E03910E1E9(__this, L_3, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___rawBytes1;
		Result_set_RawBytes_m15BF69594615CE2E2A2243F86F8973E6932A5640(__this, L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___numBits2;
		Result_set_NumBits_mE57E53435BB8A537FA5FF803C2C308F22C7E0CEC(__this, L_5, /*hidden argument*/NULL);
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_6 = ___resultPoints3;
		Result_set_ResultPoints_m55BA7262A67C694773909E9BA4DC4B26207F47B3(__this, L_6, /*hidden argument*/NULL);
		int32_t L_7 = ___format4;
		Result_set_BarcodeFormat_mE879B14699E064C8D2C46FBD15350B92D84A6100(__this, L_7, /*hidden argument*/NULL);
		Result_set_ResultMetadata_m8CB58E39A1816FEA3F0A9EE17AD5F351BAA7F94A(__this, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		int64_t L_8 = ___timestamp5;
		Result_set_Timestamp_m0B1E7867110942F25D062CA844CD6FDB815755DA(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.Result::putMetadata(ZXing.ResultMetadataType,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_putMetadata_m26B965175F132CBF9863FAB846D56515E8D5452C (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, int32_t ___type0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Result_putMetadata_m26B965175F132CBF9863FAB846D56515E8D5452C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = Result_get_ResultMetadata_mAA35EC4BD99DD27CCC7E55D6EF5DB4EEEC8BA41F(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Dictionary_2_t05C5F0C5CA43D61CE93AA0566C15D4EA2FEBFB3D * L_1 = (Dictionary_2_t05C5F0C5CA43D61CE93AA0566C15D4EA2FEBFB3D *)il2cpp_codegen_object_new(Dictionary_2_t05C5F0C5CA43D61CE93AA0566C15D4EA2FEBFB3D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m63367166196CC90718626643793416F6A9A206D6(L_1, /*hidden argument*/Dictionary_2__ctor_m63367166196CC90718626643793416F6A9A206D6_RuntimeMethod_var);
		Result_set_ResultMetadata_m8CB58E39A1816FEA3F0A9EE17AD5F351BAA7F94A(__this, L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		RuntimeObject* L_2 = Result_get_ResultMetadata_mAA35EC4BD99DD27CCC7E55D6EF5DB4EEEC8BA41F(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___type0;
		RuntimeObject * L_4 = ___value1;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>::set_Item(!0,!1) */, IDictionary_2_t37DBC0FC08A7E94A82F1AE0ADE0633356ECBA591_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		return;
	}
}
// System.Void ZXing.Result::putAllMetadata(System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_putAllMetadata_m5F8DAA4477175321B7263FF19ED1F516BFC559F5 (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, RuntimeObject* ___metadata0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Result_putAllMetadata_m5F8DAA4477175321B7263FF19ED1F516BFC559F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tA545A4C7ACE6BEAF153E413517051765E5A7E356  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___metadata0;
		if (!L_0)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_1 = Result_get_ResultMetadata_mAA35EC4BD99DD27CCC7E55D6EF5DB4EEEC8BA41F(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_2 = ___metadata0;
		Result_set_ResultMetadata_m8CB58E39A1816FEA3F0A9EE17AD5F351BAA7F94A(__this, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___metadata0;
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>>::GetEnumerator() */, IEnumerable_1_t847DB220EB430082EFB0599A659C95E05A338A96_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003c;
		}

IL_001c:
		{
			RuntimeObject* L_5 = V_1;
			NullCheck(L_5);
			KeyValuePair_2_tA545A4C7ACE6BEAF153E413517051765E5A7E356  L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tA545A4C7ACE6BEAF153E413517051765E5A7E356  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>>::get_Current() */, IEnumerator_1_tBD8F42BE3C2E330468ADAC7260BD4B439DDE0513_il2cpp_TypeInfo_var, L_5);
			V_0 = L_6;
			RuntimeObject* L_7 = Result_get_ResultMetadata_mAA35EC4BD99DD27CCC7E55D6EF5DB4EEEC8BA41F(__this, /*hidden argument*/NULL);
			int32_t L_8 = KeyValuePair_2_get_Key_m14E83278C7BD3868524F3E162392DF95A0A86EBE((KeyValuePair_2_tA545A4C7ACE6BEAF153E413517051765E5A7E356 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m14E83278C7BD3868524F3E162392DF95A0A86EBE_RuntimeMethod_var);
			RuntimeObject * L_9 = KeyValuePair_2_get_Value_m7FD03A3DDDB46CAAA928823518FCD99F5559C727((KeyValuePair_2_tA545A4C7ACE6BEAF153E413517051765E5A7E356 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m7FD03A3DDDB46CAAA928823518FCD99F5559C727_RuntimeMethod_var);
			NullCheck(L_7);
			InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>::set_Item(!0,!1) */, IDictionary_2_t37DBC0FC08A7E94A82F1AE0ADE0633356ECBA591_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		}

IL_003c:
		{
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_001c;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_1;
			if (!L_12)
			{
				goto IL_004f;
			}
		}

IL_0049:
		{
			RuntimeObject* L_13 = V_1;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_13);
		}

IL_004f:
		{
			IL2CPP_RESET_LEAVE(0x50);
			IL2CPP_END_FINALLY(70)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0050:
	{
		return;
	}
}
// System.Void ZXing.Result::addResultPoints(ZXing.ResultPoint[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_addResultPoints_mC2E27E0919810FA99A67D71D980E4420C33BE384 (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* ___newPoints0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Result_addResultPoints_mC2E27E0919810FA99A67D71D980E4420C33BE384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* V_0 = NULL;
	ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* V_1 = NULL;
	{
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_0 = Result_get_ResultPoints_mC0DA57A5351BDDFED3CD7E440DABDDEE70E36D7D(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_1 = V_0;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_2 = ___newPoints0;
		Result_set_ResultPoints_m55BA7262A67C694773909E9BA4DC4B26207F47B3(__this, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0012:
	{
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_3 = ___newPoints0;
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_4 = ___newPoints0;
		NullCheck(L_4);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_5 = V_0;
		NullCheck(L_5);
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_6 = ___newPoints0;
		NullCheck(L_6);
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_7 = (ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9*)(ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9*)SZArrayNew(ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))), (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))));
		V_1 = L_7;
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_8 = V_0;
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_9 = V_1;
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_10 = V_0;
		NullCheck(L_10);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_8, 0, (RuntimeArray *)(RuntimeArray *)L_9, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))), /*hidden argument*/NULL);
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_11 = ___newPoints0;
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_12 = V_1;
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_13 = V_0;
		NullCheck(L_13);
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_14 = ___newPoints0;
		NullCheck(L_14);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_11, 0, (RuntimeArray *)(RuntimeArray *)L_12, (((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))), (((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))), /*hidden argument*/NULL);
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_15 = V_1;
		Result_set_ResultPoints_m55BA7262A67C694773909E9BA4DC4B26207F47B3(__this, L_15, /*hidden argument*/NULL);
	}

IL_0049:
	{
		return;
	}
}
// System.String ZXing.Result::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Result_ToString_mAF7B057F54FC01B452339A6049CE0AF50E1B5B38 (Result_t8E14E95EF4EA363935C1FF76C72FD23DD4B36747 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Result_ToString_mAF7B057F54FC01B452339A6049CE0AF50E1B5B38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Result_get_Text_mD426CE8B3E2D3F404681DCE557FF1D7E7B50D213(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = Result_get_RawBytes_mC28B8DEE39D417640788096F58DF0AC15C4ACCAD(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = (((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))));
		RuntimeObject * L_3 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441, L_3, _stringLiteral73B510530C105E99912FD6A18D21B1529132AFDC, /*hidden argument*/NULL);
		return L_4;
	}

IL_0025:
	{
		String_t* L_5 = Result_get_Text_mD426CE8B3E2D3F404681DCE557FF1D7E7B50D213(__this, /*hidden argument*/NULL);
		return L_5;
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
// System.Void ZXing.ResultPoint::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultPoint__ctor_m7D9E6CCE09DE661927DFEFBE6823D42A1C9EDD4F (ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResultPoint__ctor_m7D9E6CCE09DE661927DFEFBE6823D42A1C9EDD4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		float L_2 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = BitConverter_GetBytes_m5795DECB822051D8BBF3EA92DD3B2372E017ADAF(L_2, /*hidden argument*/NULL);
		__this->set_bytesX_2(L_3);
		float L_4 = ___y1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = BitConverter_GetBytes_m5795DECB822051D8BBF3EA92DD3B2372E017ADAF(L_4, /*hidden argument*/NULL);
		__this->set_bytesY_3(L_5);
		return;
	}
}
// System.Single ZXing.ResultPoint::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ResultPoint_get_X_m2AA66157D9CE51D5CC766E63BFB6F586517243B4 (ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_x_0();
		return L_0;
	}
}
// System.Single ZXing.ResultPoint::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ResultPoint_get_Y_m208951DFD565C1F3960D4651FCFA0BDFAA192EEC (ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_y_1();
		return L_0;
	}
}
// System.Boolean ZXing.ResultPoint::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResultPoint_Equals_m13891C24069DE0A5DCF407F1682CD1C13AFA07EC (ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResultPoint_Equals_m13891C24069DE0A5DCF407F1682CD1C13AFA07EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		V_0 = ((ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 *)IsInstClass((RuntimeObject*)L_0, ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9_il2cpp_TypeInfo_var));
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		float L_2 = __this->get_x_0();
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_3 = V_0;
		NullCheck(L_3);
		float L_4 = L_3->get_x_0();
		if ((!(((float)L_2) == ((float)L_4))))
		{
			goto IL_0029;
		}
	}
	{
		float L_5 = __this->get_y_1();
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_6 = V_0;
		NullCheck(L_6);
		float L_7 = L_6->get_y_1();
		return (bool)((((float)L_5) == ((float)L_7))? 1 : 0);
	}

IL_0029:
	{
		return (bool)0;
	}
}
// System.Int32 ZXing.ResultPoint::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResultPoint_GetHashCode_m19C3CDAF5C1C9E54A0D292E94B24B619995A2640 (ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_bytesX_2();
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get_bytesX_2();
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get_bytesX_2();
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = __this->get_bytesX_2();
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = __this->get_bytesY_3();
		NullCheck(L_12);
		int32_t L_13 = 0;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = __this->get_bytesY_3();
		NullCheck(L_15);
		int32_t L_16 = 1;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = __this->get_bytesY_3();
		NullCheck(L_18);
		int32_t L_19 = 2;
		uint8_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = __this->get_bytesY_3();
		NullCheck(L_21);
		int32_t L_22 = 3;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)31), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)24))), (int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)16))))), (int32_t)((int32_t)((int32_t)L_8<<(int32_t)8)))), (int32_t)L_11)))), (int32_t)((int32_t)((int32_t)L_14<<(int32_t)((int32_t)24))))), (int32_t)((int32_t)((int32_t)L_17<<(int32_t)((int32_t)16))))), (int32_t)((int32_t)((int32_t)L_20<<(int32_t)8)))), (int32_t)L_23));
	}
}
// System.String ZXing.ResultPoint::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResultPoint_ToString_mA8B18D2E7E879371C7DB1F13AA8A94DAD689B581 (ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResultPoint_ToString_mA8B18D2E7E879371C7DB1F13AA8A94DAD689B581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	{
		String_t* L_0 = __this->get_toString_4();
		if (L_0)
		{
			goto IL_0051;
		}
	}
	{
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956(L_1, ((int32_t)25), /*hidden argument*/NULL);
		V_0 = L_1;
		StringBuilder_t * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_3 = CultureInfo_get_CurrentUICulture_mE132DCAF12CBF24E1FC0AF90BB6F33739F416487(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		V_1 = L_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = V_1;
		float L_6 = __this->get_x_0();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = V_1;
		float L_10 = __this->get_y_1();
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = V_1;
		NullCheck(L_2);
		StringBuilder_AppendFormat_m687321E402DD050F3B06D9DD12B7F96CCF51A480(L_2, L_3, _stringLiteral6AB2A5D1FE0A10CB014FC4303709BA72103C7CD0, L_13, /*hidden argument*/NULL);
		StringBuilder_t * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		__this->set_toString_4(L_15);
	}

IL_0051:
	{
		String_t* L_16 = __this->get_toString_4();
		return L_16;
	}
}
// System.Void ZXing.ResultPoint::orderBestPatterns(ZXing.ResultPoint[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultPoint_orderBestPatterns_m9C68836985DAD64F76473AE9D6CE3FD80E5ABCD1 (ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* ___patterns0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * V_3 = NULL;
	ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * V_4 = NULL;
	ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * V_5 = NULL;
	ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * V_6 = NULL;
	{
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_0 = ___patterns0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_3 = ___patterns0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		float L_6 = ResultPoint_distance_mF0365513B3B9D337D5AB50A1DEF16CBF12142254(L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_7 = ___patterns0;
		NullCheck(L_7);
		int32_t L_8 = 1;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_10 = ___patterns0;
		NullCheck(L_10);
		int32_t L_11 = 2;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		float L_13 = ResultPoint_distance_mF0365513B3B9D337D5AB50A1DEF16CBF12142254(L_9, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_14 = ___patterns0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_17 = ___patterns0;
		NullCheck(L_17);
		int32_t L_18 = 2;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		float L_20 = ResultPoint_distance_mF0365513B3B9D337D5AB50A1DEF16CBF12142254(L_16, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		float L_21 = V_1;
		float L_22 = V_0;
		if ((!(((float)L_21) >= ((float)L_22))))
		{
			goto IL_003c;
		}
	}
	{
		float L_23 = V_1;
		float L_24 = V_2;
		if ((!(((float)L_23) >= ((float)L_24))))
		{
			goto IL_003c;
		}
	}
	{
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_25 = ___patterns0;
		NullCheck(L_25);
		int32_t L_26 = 0;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_4 = L_27;
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_28 = ___patterns0;
		NullCheck(L_28);
		int32_t L_29 = 1;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_3 = L_30;
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_31 = ___patterns0;
		NullCheck(L_31);
		int32_t L_32 = 2;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_5 = L_33;
		goto IL_0062;
	}

IL_003c:
	{
		float L_34 = V_2;
		float L_35 = V_1;
		if ((!(((float)L_34) >= ((float)L_35))))
		{
			goto IL_0054;
		}
	}
	{
		float L_36 = V_2;
		float L_37 = V_0;
		if ((!(((float)L_36) >= ((float)L_37))))
		{
			goto IL_0054;
		}
	}
	{
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_38 = ___patterns0;
		NullCheck(L_38);
		int32_t L_39 = 1;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_4 = L_40;
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_41 = ___patterns0;
		NullCheck(L_41);
		int32_t L_42 = 0;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_3 = L_43;
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_44 = ___patterns0;
		NullCheck(L_44);
		int32_t L_45 = 2;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_5 = L_46;
		goto IL_0062;
	}

IL_0054:
	{
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_47 = ___patterns0;
		NullCheck(L_47);
		int32_t L_48 = 2;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_4 = L_49;
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_50 = ___patterns0;
		NullCheck(L_50);
		int32_t L_51 = 0;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_3 = L_52;
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_53 = ___patterns0;
		NullCheck(L_53);
		int32_t L_54 = 1;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_5 = L_55;
	}

IL_0062:
	{
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_56 = V_3;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_57 = V_4;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_58 = V_5;
		float L_59 = ResultPoint_crossProductZ_m5D6DF11BBCB7B57D622FB4AABEFDAB9A2366047C(L_56, L_57, L_58, /*hidden argument*/NULL);
		if ((!(((float)L_59) < ((float)(0.0f)))))
		{
			goto IL_007d;
		}
	}
	{
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_60 = V_3;
		V_6 = L_60;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_61 = V_5;
		V_3 = L_61;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_62 = V_6;
		V_5 = L_62;
	}

IL_007d:
	{
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_63 = ___patterns0;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_64 = V_3;
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_64);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 *)L_64);
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_65 = ___patterns0;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_66 = V_4;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 *)L_66);
		ResultPointU5BU5D_tD34B3D8777FBC76DC8674A4F91CE2641B8A4DBF9* L_67 = ___patterns0;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_68 = V_5;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_68);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 *)L_68);
		return;
	}
}
// System.Single ZXing.ResultPoint::distance(ZXing.ResultPoint,ZXing.ResultPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ResultPoint_distance_mF0365513B3B9D337D5AB50A1DEF16CBF12142254 (ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * ___pattern10, ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * ___pattern21, const RuntimeMethod* method)
{
	{
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_0 = ___pattern10;
		NullCheck(L_0);
		float L_1 = L_0->get_x_0();
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_2 = ___pattern10;
		NullCheck(L_2);
		float L_3 = L_2->get_y_1();
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_4 = ___pattern21;
		NullCheck(L_4);
		float L_5 = L_4->get_x_0();
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_6 = ___pattern21;
		NullCheck(L_6);
		float L_7 = L_6->get_y_1();
		float L_8 = MathUtils_distance_m9A6FDB5AFA8D79C7C0A67B33BA73574753006304(L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Single ZXing.ResultPoint::crossProductZ(ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ResultPoint_crossProductZ_m5D6DF11BBCB7B57D622FB4AABEFDAB9A2366047C (ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * ___pointA0, ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * ___pointB1, ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * ___pointC2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_0 = ___pointB1;
		NullCheck(L_0);
		float L_1 = L_0->get_x_0();
		V_0 = L_1;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_2 = ___pointB1;
		NullCheck(L_2);
		float L_3 = L_2->get_y_1();
		V_1 = L_3;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_4 = ___pointC2;
		NullCheck(L_4);
		float L_5 = L_4->get_x_0();
		float L_6 = V_0;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_7 = ___pointA0;
		NullCheck(L_7);
		float L_8 = L_7->get_y_1();
		float L_9 = V_1;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_10 = ___pointC2;
		NullCheck(L_10);
		float L_11 = L_10->get_y_1();
		float L_12 = V_1;
		ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * L_13 = ___pointA0;
		NullCheck(L_13);
		float L_14 = L_13->get_x_0();
		float L_15 = V_0;
		return ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_6)), (float)((float)il2cpp_codegen_subtract((float)L_8, (float)L_9)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_11, (float)L_12)), (float)((float)il2cpp_codegen_subtract((float)L_14, (float)L_15))))));
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
// System.Void ZXing.ResultPointCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultPointCallback__ctor_mB88C1172038480BDD79AB2ADC93CA06481142890 (ResultPointCallback_t941F57827AF0D668BC86B735E568769DFBD0895E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ZXing.ResultPointCallback::Invoke(ZXing.ResultPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultPointCallback_Invoke_m674870BF84FC0E7ECDC52AC6C955C9363F456CD5 (ResultPointCallback_t941F57827AF0D668BC86B735E568769DFBD0895E * __this, ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * ___point0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___point0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___point0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___point0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___point0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___point0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___point0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___point0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___point0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * >::Invoke(targetMethod, targetThis, ___point0);
					else
						GenericVirtActionInvoker1< ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * >::Invoke(targetMethod, targetThis, ___point0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___point0);
					else
						VirtActionInvoker1< ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___point0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___point0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ZXing.ResultPointCallback::BeginInvoke(ZXing.ResultPoint,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResultPointCallback_BeginInvoke_mBD09836B7B0B08B0C7E4C8926E5ED13A9B0C39B3 (ResultPointCallback_t941F57827AF0D668BC86B735E568769DFBD0895E * __this, ResultPoint_t97971694BAB23B3E6F591F99C3B7C2C4FD840DE9 * ___point0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___point0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void ZXing.ResultPointCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultPointCallback_EndInvoke_m05CFC9944A9564B0C1D551DA8F59822F48636ECC (ResultPointCallback_t941F57827AF0D668BC86B735E568769DFBD0895E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Int32 ZXing.SupportClass::bitCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportClass_bitCount_m14CF7D936990057807F471CF39E513AC4FA1143C (int32_t ___n0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		int32_t L_0 = ___n0;
		int32_t L_1 = ___n0;
		___n0 = ((int32_t)((int32_t)L_0&(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1))));
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_000f:
	{
		int32_t L_3 = ___n0;
		if (L_3)
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
