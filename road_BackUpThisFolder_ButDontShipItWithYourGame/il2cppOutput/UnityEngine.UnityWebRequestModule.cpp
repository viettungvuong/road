﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.String
struct String_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0202811166757AF262261201E48B89F6244FAE6C;
IL2CPP_EXTERN_C String_t* _stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05;
IL2CPP_EXTERN_C String_t* _stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
IL2CPP_EXTERN_C String_t* _stringLiteral2D237ADC0A2A1323199D8ECEAF721FC4EA117317;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84;
IL2CPP_EXTERN_C String_t* _stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F;
IL2CPP_EXTERN_C String_t* _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteralA3EDB257239BA23A2B3196FB9697A402B943583D;
IL2CPP_EXTERN_C String_t* _stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralD65B2B7CE306C7EE6A36785EB8503CD74EEACADF;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke;;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke;;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke;;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t42F165DEA2597BD5AB2C914FCF80349ECF878162 
{
};
struct Il2CppArrayBounds;

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045  : public RuntimeObject
{
};

struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields
{
	// System.Byte[] UnityEngine.WWWForm::dDash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dDash_0;
	// System.Byte[] UnityEngine.WWWForm::crlf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___crlf_1;
	// System.Byte[] UnityEngine.WWWForm::contentTypeHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___contentTypeHeader_2;
	// System.Byte[] UnityEngine.WWWForm::dispositionHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dispositionHeader_3;
	// System.Byte[] UnityEngine.WWWForm::endQuote
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___endQuote_4;
	// System.Byte[] UnityEngine.WWWForm::fileNameField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fileNameField_5;
	// System.Byte[] UnityEngine.WWWForm::ampersand
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ampersand_6;
	// System.Byte[] UnityEngine.WWWForm::equal
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___equal_7;
};

// UnityEngine.WWWTranscoder
struct WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B  : public RuntimeObject
{
};

struct WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields
{
	// System.Byte[] UnityEngine.WWWTranscoder::ucHexChars
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ucHexChars_0;
	// System.Byte[] UnityEngine.WWWTranscoder::lcHexChars
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lcHexChars_1;
	// System.Byte UnityEngine.WWWTranscoder::urlEscapeChar
	uint8_t ___urlEscapeChar_2;
	// System.Byte[] UnityEngine.WWWTranscoder::urlSpace
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___urlSpace_3;
	// System.Byte[] UnityEngine.WWWTranscoder::dataSpace
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dataSpace_4;
	// System.Byte[] UnityEngine.WWWTranscoder::urlForbidden
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___urlForbidden_5;
	// System.Byte UnityEngine.WWWTranscoder::qpEscapeChar
	uint8_t ___qpEscapeChar_6;
	// System.Byte[] UnityEngine.WWWTranscoder::qpSpace
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___qpSpace_7;
	// System.Byte[] UnityEngine.WWWTranscoder::qpForbidden
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___qpForbidden_8;
};

// UnityEngineInternal.WebRequestUtils
struct WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443  : public RuntimeObject
{
};

struct WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngineInternal.WebRequestUtils::domainRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___domainRegex_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
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

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// System.Text.RegularExpressions.RegexOptions
struct RegexOptions_tE9DA9C4DF8FB26DD1C7E0F8AA022C1164A423F6B 
{
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.UriIdnScope
struct UriIdnScope_t001CC97A6F977E9BB7DB855CC6BA415A7F47491F 
{
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;
};

// System.UriKind
struct UriKind_t6597BD6BF48C695D63244DF8541B5EA48FF7F9E7 
{
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;
};

// UnityEngine.Networking.UnityWebRequest/Result
struct Result_tFB98154F15BF37A66902802D441FEFADC68D4C87 
{
	// System.Int32 UnityEngine.Networking.UnityWebRequest/Result::value__
	int32_t ___value___2;
};

// System.Uri/Flags
struct Flags_t47CF4DB4036A6A539AFA6EE39C75F772E865E897 
{
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
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

IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_back(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_cleanup(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_back(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_cleanup(UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_back(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_cleanup(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com_back(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com_cleanup(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com_back(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com_cleanup(UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com_back(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com_cleanup(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled);


// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String,System.UriKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m24549041BC5661EAC10BA8CB35B60AD6512AF69B (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___uriString0, int32_t ___uriKind1, const RuntimeMethod* method) ;
// System.Boolean System.Uri::get_IsAbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_m2F9B759B85D295639D7959A616E1FBC203D756DF (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.String System.Uri::get_AbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m5AA91BCDE21E8AD62B9A48948CF3661B2F00E38F (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___baseUri0, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___relativeUri1, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562 (const RuntimeMethod* method) ;
// System.Text.Encoding UnityEngine.WWWForm::get_DefaultEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20 (const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_Encode_m4A986740A7F5D511F68C9A1DA3AD577AD583D56A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___space2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___forbidden3, bool ___uppercase4, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteArrayContains_m24942004A51B679886583E185D64786773901A4A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, uint8_t ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[],System.Byte&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWTranscoder_Byte2Hex_m5508592B832098DA3772FC30AB94DC223DFF87E5 (uint8_t ___b0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hexChars1, uint8_t* ___byte02, uint8_t* ___byte13, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_URLEncode_m6B8209ED4BA4A35446B394F33B1B3BEB54641807 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___toEncode0, const RuntimeMethod* method) ;
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
// System.String UnityEngineInternal.WebRequestUtils::RedirectTo(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_RedirectTo_m9D651C0870C26ACFE61BF540CF78CAD85352AFE7 (String_t* ___baseUri0, String_t* ___redirectUri1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_0 = NULL;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_1 = NULL;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		String_t* L_0 = ___redirectUri1;
		NullCheck(L_0);
		Il2CppChar L_1;
		L_1 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, 0, NULL);
		V_3 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)47)))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_3 = ___redirectUri1;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Uri__ctor_m24549041BC5661EAC10BA8CB35B60AD6512AF69B(L_4, L_3, 2, NULL);
		V_0 = L_4;
		goto IL_0022;
	}

IL_001a:
	{
		String_t* L_5 = ___redirectUri1;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_6 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Uri__ctor_m24549041BC5661EAC10BA8CB35B60AD6512AF69B(L_6, L_5, 0, NULL);
		V_0 = L_6;
	}

IL_0022:
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Uri_get_IsAbsoluteUri_m2F9B759B85D295639D7959A616E1FBC203D756DF(L_7, NULL);
		V_4 = L_8;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE(L_10, NULL);
		V_5 = L_11;
		goto IL_0052;
	}

IL_0038:
	{
		String_t* L_12 = ___baseUri0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_13 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Uri__ctor_m24549041BC5661EAC10BA8CB35B60AD6512AF69B(L_13, L_12, 1, NULL);
		V_1 = L_13;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_14 = V_1;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_15 = V_0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_16 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Uri__ctor_m5AA91BCDE21E8AD62B9A48948CF3661B2F00E38F(L_16, L_14, L_15, NULL);
		V_2 = L_16;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_17 = V_2;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE(L_17, NULL);
		V_5 = L_18;
		goto IL_0052;
	}

IL_0052:
	{
		String_t* L_19 = V_5;
		return L_19;
	}
}
// System.Void UnityEngineInternal.WebRequestUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestUtils__cctor_m5E63FAE9D22D2625297F800D58B6268840431D52 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F);
		s_Il2CppMethodInitialized = true;
	}
	{
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD(L_0, _stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F, NULL);
		((WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var))->___domainRegex_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var))->___domainRegex_0), (void*)L_0);
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
// System.Text.Encoding UnityEngine.WWWForm::get_DefaultEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20 (const RuntimeMethod* method) 
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* V_0 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.WWWForm::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__cctor_m8DE76A2EE24D29570E1E2DBB776C86DF1873415C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D237ADC0A2A1323199D8ECEAF721FC4EA117317);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3EDB257239BA23A2B3196FB9697A402B943583D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD65B2B7CE306C7EE6A36785EB8503CD74EEACADF);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash_0), (void*)L_1);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf_1), (void*)L_3);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, _stringLiteral2D237ADC0A2A1323199D8ECEAF721FC4EA117317);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___contentTypeHeader_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___contentTypeHeader_2), (void*)L_5);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, _stringLiteralA3EDB257239BA23A2B3196FB9697A402B943583D);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dispositionHeader_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dispositionHeader_3), (void*)L_7);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
		L_8 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_8, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___endQuote_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___endQuote_4), (void*)L_9);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_10, _stringLiteralD65B2B7CE306C7EE6A36785EB8503CD74EEACADF);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___fileNameField_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___fileNameField_5), (void*)L_11);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_12;
		L_12 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___ampersand_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___ampersand_6), (void*)L_13);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_14;
		L_14 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_14, _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___equal_7 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___equal_7), (void*)L_15);
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
// System.Void UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[],System.Byte&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWTranscoder_Byte2Hex_m5508592B832098DA3772FC30AB94DC223DFF87E5 (uint8_t ___b0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hexChars1, uint8_t* ___byte02, uint8_t* ___byte13, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___byte02;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___hexChars1;
		uint8_t L_2 = ___b0;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)((int32_t)L_2>>4));
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		*((int8_t*)L_0) = (int8_t)L_4;
		uint8_t* L_5 = ___byte13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___hexChars1;
		uint8_t L_7 = ___b0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)((int32_t)L_7&((int32_t)15)));
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		*((int8_t*)L_5) = (int8_t)L_9;
		return;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_URLEncode_m6B8209ED4BA4A35446B394F33B1B3BEB54641807 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___toEncode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___toEncode0;
		il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlEscapeChar_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlSpace_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlForbidden_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = WWWTranscoder_Encode_m4A986740A7F5D511F68C9A1DA3AD577AD583D56A(L_0, L_1, L_2, L_3, (bool)0, NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		return L_5;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_Encode_m4A986740A7F5D511F68C9A1DA3AD577AD583D56A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___space2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___forbidden3, bool ___uppercase4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	bool V_6 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B10_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		NullCheck(L_0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_1, ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 2)), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					if (!L_2)
					{
						goto IL_00bd;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_00bd:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				V_1 = 0;
				goto IL_009a_1;
			}

IL_0014_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___input0;
				int32_t L_5 = V_1;
				NullCheck(L_4);
				int32_t L_6 = L_5;
				uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
				V_2 = (bool)((((int32_t)L_7) == ((int32_t)((int32_t)32)))? 1 : 0);
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_0030_1;
				}
			}
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___space2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___space2;
				NullCheck(L_11);
				NullCheck(L_9);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_9, L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)));
				goto IL_0095_1;
			}

IL_0030_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___input0;
				int32_t L_13 = V_1;
				NullCheck(L_12);
				int32_t L_14 = L_13;
				uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
				if ((((int32_t)L_15) < ((int32_t)((int32_t)32))))
				{
					goto IL_0049_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___input0;
				int32_t L_17 = V_1;
				NullCheck(L_16);
				int32_t L_18 = L_17;
				uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
				if ((((int32_t)L_19) > ((int32_t)((int32_t)126))))
				{
					goto IL_0049_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___forbidden3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___input0;
				int32_t L_22 = V_1;
				NullCheck(L_21);
				int32_t L_23 = L_22;
				uint8_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				bool L_25;
				L_25 = WWWTranscoder_ByteArrayContains_m24942004A51B679886583E185D64786773901A4A(L_20, L_24, NULL);
				G_B8_0 = ((int32_t)(L_25));
				goto IL_004a_1;
			}

IL_0049_1:
			{
				G_B8_0 = 1;
			}

IL_004a_1:
			{
				V_3 = (bool)G_B8_0;
				bool L_26 = V_3;
				if (!L_26)
				{
					goto IL_0089_1;
				}
			}
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_27 = V_0;
				uint8_t L_28 = ___escapeChar1;
				NullCheck(L_27);
				VirtualActionInvoker1< uint8_t >::Invoke(26 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_27, L_28);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___input0;
				int32_t L_30 = V_1;
				NullCheck(L_29);
				int32_t L_31 = L_30;
				uint8_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
				bool L_33 = ___uppercase4;
				G_B10_0 = ((int32_t)(L_32));
				if (L_33)
				{
					G_B11_0 = ((int32_t)(L_32));
					goto IL_0065_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___lcHexChars_1;
				G_B12_0 = L_34;
				G_B12_1 = G_B10_0;
				goto IL_006a_1;
			}

IL_0065_1:
			{
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___ucHexChars_0;
				G_B12_0 = L_35;
				G_B12_1 = G_B11_0;
			}

IL_006a_1:
			{
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				WWWTranscoder_Byte2Hex_m5508592B832098DA3772FC30AB94DC223DFF87E5((uint8_t)G_B12_1, G_B12_0, (&V_4), (&V_5), NULL);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_36 = V_0;
				uint8_t L_37 = V_4;
				NullCheck(L_36);
				VirtualActionInvoker1< uint8_t >::Invoke(26 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_36, L_37);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_38 = V_0;
				uint8_t L_39 = V_5;
				NullCheck(L_38);
				VirtualActionInvoker1< uint8_t >::Invoke(26 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_38, L_39);
				goto IL_0095_1;
			}

IL_0089_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_40 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___input0;
				int32_t L_42 = V_1;
				NullCheck(L_41);
				int32_t L_43 = L_42;
				uint8_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
				NullCheck(L_40);
				VirtualActionInvoker1< uint8_t >::Invoke(26 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_40, L_44);
			}

IL_0095_1:
			{
				int32_t L_45 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
			}

IL_009a_1:
			{
				int32_t L_46 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ___input0;
				NullCheck(L_47);
				V_6 = (bool)((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length))))? 1 : 0);
				bool L_48 = V_6;
				if (L_48)
				{
					goto IL_0014_1;
				}
			}
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_49 = V_0;
				NullCheck(L_49);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50;
				L_50 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(30 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_49);
				V_7 = L_50;
				goto IL_00be;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00be:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_7;
		return L_51;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteArrayContains_m24942004A51B679886583E185D64786773901A4A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, uint8_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		V_1 = 0;
		goto IL_001d;
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint8_t L_5 = ___b1;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0018;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_002b;
	}

IL_0018:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001d:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		V_4 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_0009;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_002b;
	}

IL_002b:
	{
		bool L_11 = V_3;
		return L_11;
	}
}
// System.Void UnityEngine.WWWTranscoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWTranscoder__cctor_m45847E379D7CDADE3F6E645E6C5E01D5D560302F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0202811166757AF262261201E48B89F6244FAE6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___ucHexChars_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___ucHexChars_0), (void*)L_1);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, _stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___lcHexChars_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___lcHexChars_1), (void*)L_3);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlEscapeChar_2 = (uint8_t)((int32_t)37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)43));
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlSpace_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlSpace_3), (void*)L_5);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, _stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___dataSpace_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___dataSpace_4), (void*)L_7);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
		L_8 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_8, _stringLiteral0202811166757AF262261201E48B89F6244FAE6C);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlForbidden_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlForbidden_5), (void*)L_9);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpEscapeChar_6 = (uint8_t)((int32_t)61);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)95));
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpSpace_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpSpace_7), (void*)L_11);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_12;
		L_12 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, _stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpForbidden_8 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpForbidden_8), (void*)L_13);
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






// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequest
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke(const UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F& unmarshaled, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_back(const UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke& marshaled, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F& unmarshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequest
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_cleanup(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke& marshaled)
{
}






// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequest
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_com(const UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F& unmarshaled, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com& marshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_com_back(const UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com& marshaled, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F& unmarshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequest
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_com_cleanup(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(__this, NULL);
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449_ftn) (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*);
	static UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_result()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.String UnityEngine.Networking.UnityWebRequest::EscapeURL(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_EscapeURL_m7BEDBF3B247CCF6BF01A0C107CDED36456C9E855 (String_t* ___s0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	{
		String_t* L_0 = ___s0;
		V_2 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_3 = (String_t*)NULL;
		goto IL_004d;
	}

IL_000d:
	{
		String_t* L_2 = ___s0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_4 = L_3;
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_004d;
	}

IL_0026:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5 = ___e1;
		V_5 = (bool)((((RuntimeObject*)(Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_5;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		V_3 = (String_t*)NULL;
		goto IL_004d;
	}

IL_0034:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7 = ___e1;
		String_t* L_8 = ___s0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_7, L_8);
		V_0 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = WWWTranscoder_URLEncode_m6B8209ED4BA4A35446B394F33B1B3BEB54641807(L_10, NULL);
		V_1 = L_11;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_12 = ___e1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_12, L_13);
		V_3 = L_14;
		goto IL_004d;
	}

IL_004d:
	{
		String_t* L_15 = V_3;
		return L_15;
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
// Conversion methods for marshalling of: UnityEngine.Networking.CertificateHandler
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_back(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.CertificateHandler
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_cleanup(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.CertificateHandler
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com_back(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.CertificateHandler
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com_cleanup(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificate_m81E194684391CA512FFC7C3A9172B56D6A1E2752 (CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___certificateData0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificateNative(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificateNative_m73467B32D9B40F6897951F71F80CDDA92F5FD785 (CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___certificateData0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___certificateData0;
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[]) */, __this, L_0);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
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
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_back(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandler
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_cleanup(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandler
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com_back(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandler
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com_cleanup(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.DownloadHandler::ReceiveContentLengthHeader(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_ReceiveContentLengthHeader_m545073C4FB5AB9BB6640D24FC2F32070E5FE3F17 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, uint64_t ___contentLength0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___contentLength0;
		VirtualActionInvoker1< int32_t >::Invoke(5 /* System.Void UnityEngine.Networking.DownloadHandler::ReceiveContentLength(System.Int32) */, __this, ((int32_t)L_0));
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandler::ReceiveContentLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_ReceiveContentLength_m058DE0B56C3EBE8ECE3F9570852024EE2A84DE4F (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, int32_t ___contentLength0, const RuntimeMethod* method) 
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
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandler
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_back(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandler
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_cleanup(UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandler
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com_back(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandler
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com_cleanup(UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
