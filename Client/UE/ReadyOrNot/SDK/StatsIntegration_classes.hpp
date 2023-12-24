#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class StatsIntegration.GetAchievementData
class UGetAchievementData : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGetAchievementData* GetDefaultObj();

	int32 GetNumAchievements();
	float GetGlobalAchievementAchievedPercent(const class FString& AchievementAPIName);
	void GetAchievementUnlockStatusAndUnlockTime(const class FString& AchievementAPIName, bool* AchievementUnlocked, struct FDateTime* UnlockTime);
	class UTexture2D* GetAchievementIcon(const class FString& AchievementAPIName);
	class FString GetAchievementDisplayAttribute(const class FString& AchievementAPIName, enum class EAchievementDisplayAttributeUE4 Attribute);
	class FString GetAchievementAPIName(int32 AchievementIndex);
};

// 0x0 (0x28 - 0x28)
// Class StatsIntegration.GetStoredStats
class UGetStoredStats : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGetStoredStats* GetDefaultObj();

	void GetUserStoredStats(const TArray<struct FSteamStat>& StatsToGet, TArray<struct FSteamStat>* StatsOut);
	void GetUserStoredStat(const class FString& APIStatName, enum class ESteamStatType StatType, int32* IntegerValue, float* FloatValue);
};

// 0x88 (0xB8 - 0x30)
// Class StatsIntegration.IndicateAchievementProgress
class UIndicateAchievementProgress : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                AchievementAPIName;                                // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentProgress;                                   // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxProgress;                                       // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_769[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIndicateAchievementProgress* GetDefaultObj();

	class UIndicateAchievementProgress* IndicateUserAchievementProgress(const class FString& AchievementAPIName, int32 CurrentProgress, int32 MaxProgress);
};

// 0x78 (0xA8 - 0x30)
// Class StatsIntegration.RequestStatsAndAchievements
class URequestStatsAndAchievements : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_770[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URequestStatsAndAchievements* GetDefaultObj();

	class URequestStatsAndAchievements* RequestUserStatsAndAchievements();
};

// 0xB8 (0xE8 - 0x30)
// Class StatsIntegration.ResetAllStatsAndAchievements
class UResetAllStatsAndAchievements : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bresetAchievementsToo;                             // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_776[0x97];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UResetAllStatsAndAchievements* GetDefaultObj();

	class UResetAllStatsAndAchievements* ResetUserStatsAndAchievements(bool bAchievementsToo);
};

// 0x0 (0x28 - 0x28)
// Class StatsIntegration.SetAchievementData
class USetAchievementData : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USetAchievementData* GetDefaultObj();

	bool SetAchievement(const class FString& AchievementAPIName);
	bool ClearAchievement(const class FString& AchievementAPIName);
};

// 0x0 (0x28 - 0x28)
// Class StatsIntegration.SetStoredStats
class USetStoredStats : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USetStoredStats* GetDefaultObj();

	bool SetStoredStats(const TArray<struct FSteamStat>& SteamStatsIn, float SessionLength);
	bool SetStoredStat(const class FString& APIStatName, enum class ESteamStatType StatType, float FloatValue, int32 IntegerValue, float SessionLength);
};

// 0x0 (0x28 - 0x28)
// Class StatsIntegration.SteamRequests
class USteamRequests : public UObject
{
public:

	static class UClass* StaticClass();
	static class USteamRequests* GetDefaultObj();

};

// 0x70 (0xA0 - 0x30)
// Class StatsIntegration.StoreStatsAndAchievements
class UStoreStatsAndAchievements : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A9[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStoreStatsAndAchievements* GetDefaultObj();

	class UStoreStatsAndAchievements* StoreUserStatsAndAchievements();
};

}


