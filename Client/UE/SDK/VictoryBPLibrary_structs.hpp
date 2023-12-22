#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESpeedUnit : uint8
{
	CentimeterPerSecond            = 0,
	FootPerSecond                  = 1,
	MeterPerSecond                 = 2,
	MeterPerMinute                 = 3,
	KilometerPerSecond             = 4,
	KilometerPerMinute             = 5,
	KilometerPerHour               = 6,
	MilePerHour                    = 7,
	Knot                           = 8,
	Mach                           = 9,
	SpeedOfLight                   = 10,
	YardPerSecond                  = 11,
	ESpeedUnit_MAX                 = 12,
};

enum class EJoyGraphicsFullScreen : uint8
{
	FullScreen                     = 0,
	WindowedFullScreen             = 1,
	WindowedFullScreenPerformance  = 2,
	EJoyGraphicsFullScreen_Max     = 3,
};

enum class EVictoryHMDDevice : uint8
{
	None                           = 0,
	OculusRift                     = 1,
	Morpheus                       = 2,
	ES2GenericStereoMesh           = 3,
	SteamVR                        = 4,
	GearVR                         = 5,
	EVictoryHMDDevice_MAX          = 6,
};

enum class EJoyImageFormats : uint8
{
	JPG                            = 0,
	PNG                            = 1,
	BMP                            = 2,
	ICO                            = 3,
	EXR                            = 4,
	ICNS                           = 5,
	EJoyImageFormats_MAX           = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct VictoryBPLibrary.LevelStreamInstanceInfo
struct FLevelStreamInstanceInfo
{
public:
	class FName                                  PackageName;                                       // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PackageNameToLoad;                                 // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x1C(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bShouldBeLoaded : 1;                               // Mask: 0x1, PropSize: 0x10x28(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldBeVisible : 1;                              // Mask: 0x2, PropSize: 0x10x28(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldBlockOnLoad : 1;                            // Mask: 0x4, PropSize: 0x10x28(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A6 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_10B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LODIndex;                                          // 0x2C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct VictoryBPLibrary.VictoryInputAxis
struct FVictoryInputAxis
{
public:
	class FString                                AxisName;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeyAsString;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x20(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct VictoryBPLibrary.VictoryInput
struct FVictoryInput
{
public:
	class FString                                ActionName;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x10(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeyAsString;                                       // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShift : 1;                                        // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCtrl : 1;                                         // Mask: 0x2, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlt : 1;                                          // Mask: 0x4, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCmd : 1;                                          // Mask: 0x8, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10BE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


