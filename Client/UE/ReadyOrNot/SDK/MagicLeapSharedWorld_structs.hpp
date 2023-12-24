#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
struct FMagicLeapSharedWorldSharedData
{
public:
	TArray<struct FGuid>                         PinIDs;                                            // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
struct FMagicLeapSharedWorldAlignmentTransforms
{
public:
	TArray<struct FTransform>                    AlignmentTransforms;                               // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldPinData
struct FMagicLeapSharedWorldPinData
{
public:
	struct FGuid                                 PinId;                                             // 0x0(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMagicLeapARPinState                  PinState;                                          // 0x10(0x14)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
struct FMagicLeapSharedWorldLocalData
{
public:
	TArray<struct FMagicLeapSharedWorldPinData>  LocalPins;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

}


