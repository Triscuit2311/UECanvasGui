#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature
struct UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Params
{
public:
	enum class EMagicLeapIdentityError           ResultCode;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMagicLeapIdentityAttribute>   AttributeValue;                                    // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync
struct UMagicLeapIdentity_RequestAttributeValueAsync_Params
{
public:
	TArray<enum class EMagicLeapIdentityKey>     RequestedAttributeList;                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ResultDelegate;                                    // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EMagicLeapIdentityError           ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18EF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue
struct UMagicLeapIdentity_RequestAttributeValue_Params
{
public:
	TArray<enum class EMagicLeapIdentityKey>     RequestedAttributeList;                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FMagicLeapIdentityAttribute>   RequestedAttributeValues;                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EMagicLeapIdentityError           ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature
struct UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Params
{
public:
	enum class EMagicLeapIdentityError           ResultCode;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EMagicLeapIdentityKey>     AttributesUpdatedSuccessfully;                     // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync
struct UMagicLeapIdentity_GetAllAvailableAttributesAsync_Params
{
public:
	FDelegateProperty_                           ResultDelegate;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes
struct UMagicLeapIdentity_GetAllAvailableAttributes_Params
{
public:
	TArray<enum class EMagicLeapIdentityKey>     AvailableAttributes;                               // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EMagicLeapIdentityError           ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1905[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature
struct UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Params
{
public:
	enum class EMagicLeapIdentityError           ResultCode;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_190D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EMagicLeapIdentityKey>     AvailableAttributes;                               // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}


