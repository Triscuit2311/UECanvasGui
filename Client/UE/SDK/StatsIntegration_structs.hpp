#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAchievementDisplayAttributeUE4 : uint8
{
	ADA_EAttributeName             = 0,
	ADA_EAttributeDescription      = 1,
	ADA_EAttributeHidden           = 2,
	ADA_MAX                        = 3,
};

enum class ESteamStatType : uint8
{
	STAT_INT                       = 0,
	STAT_FLOAT                     = 1,
	STAT_AVGRATE                   = 2,
	STAT_MAX                       = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct StatsIntegration.SteamStat
struct FSteamStat
{
public:
	class FString                                FriendlyStatName;                                  // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                APIStatName;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamStatType                    StatType;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IntegerValue;                                      // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


