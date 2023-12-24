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

// 0x28 (0x28 - 0x0)
// ScriptStruct OpenColorIO.OpenColorIOColorSpace
struct FOpenColorIOColorSpace
{
public:
	class FString                                ColorSpaceName;                                    // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ColorSpaceIndex;                                   // 0x10(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FamilyName;                                        // 0x18(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OpenColorIO.OpenColorIOColorConversionSettings
struct FOpenColorIOColorConversionSettings
{
public:
	class UOpenColorIOConfiguration*             ConfigurationSource;                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOpenColorIOColorSpace                SourceColorSpace;                                  // 0x8(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FOpenColorIOColorSpace                DestinationColorSpace;                             // 0x30(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct OpenColorIO.OpenColorIODisplayConfiguration
struct FOpenColorIODisplayConfiguration
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1571[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOpenColorIOColorConversionSettings   ColorConfiguration;                                // 0x8(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

}


