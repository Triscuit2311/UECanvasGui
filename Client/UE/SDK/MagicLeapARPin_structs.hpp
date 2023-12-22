#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMagicLeapARPinType : uint8
{
	SingleUserSingleSession        = 0,
	SingleUserMultiSession         = 1,
	MultiUserMultiSession          = 2,
	EMagicLeapARPinType_MAX        = 3,
};

enum class EMagicLeapAutoPinType : uint8
{
	OnlyOnDataRestoration          = 0,
	Always                         = 1,
	Never                          = 2,
	EMagicLeapAutoPinType_MAX      = 3,
};

enum class EMagicLeapPassableWorldError : uint8
{
	None                           = 0,
	LowMapQuality                  = 1,
	UnableToLocalize               = 2,
	Unavailable                    = 3,
	PrivilegeDenied                = 4,
	InvalidParam                   = 5,
	UnspecifiedFailure             = 6,
	PrivilegeRequestPending        = 7,
	StartupPending                 = 8,
	SharedWorldNotEnabled          = 9,
	NotImplemented                 = 10,
	PinNotFound                    = 11,
	EMagicLeapPassableWorldError_MAX = 12,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// ScriptStruct MagicLeapARPin.MagicLeapARPinState
struct FMagicLeapARPinState
{
public:
	float                                        Confidence;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ValidRadius;                                       // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationError;                                     // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TranslationError;                                  // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMagicLeapARPinType               PinType;                                           // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A60[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct MagicLeapARPin.MagicLeapARPinQuery
struct FMagicLeapARPinQuery
{
public:
	TSet<enum class EMagicLeapARPinType>         Types;                                             // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        MaxResults;                                        // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetPoint;                                       // 0x54(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSorted;                                           // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A61[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MagicLeapARPin.MagicLeapARPinObjectIdList
struct FMagicLeapARPinObjectIdList
{
public:
	TSet<class FString>                          ObjectIdList;                                      // 0x0(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
};

}


