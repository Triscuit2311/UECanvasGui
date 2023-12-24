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

// 0x4 (0x4 - 0x0)
// Function StatsIntegration.GetAchievementData.GetNumAchievements
struct UGetAchievementData_GetNumAchievements_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function StatsIntegration.GetAchievementData.GetGlobalAchievementAchievedPercent
struct UGetAchievementData_GetGlobalAchievementAchievedPercent_Params
{
public:
	class FString                                AchievementAPIName;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_729[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function StatsIntegration.GetAchievementData.GetAchievementUnlockStatusAndUnlockTime
struct UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime_Params
{
public:
	class FString                                AchievementAPIName;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AchievementUnlocked;                               // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_730[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             UnlockTime;                                        // 0x18(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function StatsIntegration.GetAchievementData.GetAchievementIcon
struct UGetAchievementData_GetAchievementIcon_Params
{
public:
	class FString                                AchievementAPIName;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function StatsIntegration.GetAchievementData.GetAchievementDisplayAttribute
struct UGetAchievementData_GetAchievementDisplayAttribute_Params
{
public:
	class FString                                AchievementAPIName;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAchievementDisplayAttributeUE4   Attribute;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_739[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function StatsIntegration.GetAchievementData.GetAchievementAPIName
struct UGetAchievementData_GetAchievementAPIName_Params
{
public:
	int32                                        AchievementIndex;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_741[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function StatsIntegration.GetStoredStats.GetUserStoredStats
struct UGetStoredStats_GetUserStoredStats_Params
{
public:
	TArray<struct FSteamStat>                    StatsToGet;                                        // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSteamStat>                    StatsOut;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function StatsIntegration.GetStoredStats.GetUserStoredStat
struct UGetStoredStats_GetUserStoredStat_Params
{
public:
	class FString                                APIStatName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamStatType                    StatType;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_757[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IntegerValue;                                      // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_75A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function StatsIntegration.IndicateAchievementProgress.IndicateUserAchievementProgress
struct UIndicateAchievementProgress_IndicateUserAchievementProgress_Params
{
public:
	class FString                                AchievementAPIName;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentProgress;                                   // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxProgress;                                       // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UIndicateAchievementProgress*          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function StatsIntegration.RequestStatsAndAchievements.RequestUserStatsAndAchievements
struct URequestStatsAndAchievements_RequestUserStatsAndAchievements_Params
{
public:
	class URequestStatsAndAchievements*          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function StatsIntegration.ResetAllStatsAndAchievements.ResetUserStatsAndAchievements
struct UResetAllStatsAndAchievements_ResetUserStatsAndAchievements_Params
{
public:
	bool                                         bAchievementsToo;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_771[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UResetAllStatsAndAchievements*         ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function StatsIntegration.SetAchievementData.SetAchievement
struct USetAchievementData_SetAchievement_Params
{
public:
	class FString                                AchievementAPIName;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_786[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function StatsIntegration.SetAchievementData.ClearAchievement
struct USetAchievementData_ClearAchievement_Params
{
public:
	class FString                                AchievementAPIName;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_794[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function StatsIntegration.SetStoredStats.SetStoredStats
struct USetStoredStats_SetStoredStats_Params
{
public:
	TArray<struct FSteamStat>                    SteamStatsIn;                                      // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        SessionLength;                                     // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79B[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function StatsIntegration.SetStoredStats.SetStoredStat
struct USetStoredStats_SetStoredStat_Params
{
public:
	class FString                                APIStatName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamStatType                    StatType;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FloatValue;                                        // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntegerValue;                                      // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SessionLength;                                     // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function StatsIntegration.StoreStatsAndAchievements.StoreUserStatsAndAchievements
struct UStoreStatsAndAchievements_StoreUserStatsAndAchievements_Params
{
public:
	class UStoreStatsAndAchievements*            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


