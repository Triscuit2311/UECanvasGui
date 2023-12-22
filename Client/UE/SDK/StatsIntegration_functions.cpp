#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class StatsIntegration.GetAchievementData
// (None)

class UClass* UGetAchievementData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetAchievementData");

	return Clss;
}


// GetAchievementData StatsIntegration.Default__GetAchievementData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGetAchievementData* UGetAchievementData::GetDefaultObj()
{
	static class UGetAchievementData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetAchievementData*>(UGetAchievementData::StaticClass()->DefaultObject);

	return Default;
}


// Function StatsIntegration.GetAchievementData.GetNumAchievements
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGetAchievementData::GetNumAchievements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetAchievementData", "GetNumAchievements");

	Params::UGetAchievementData_GetNumAchievements_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StatsIntegration.GetAchievementData.GetGlobalAchievementAchievedPercent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      AchievementAPIName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGetAchievementData::GetGlobalAchievementAchievedPercent(const class FString& AchievementAPIName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetAchievementData", "GetGlobalAchievementAchievedPercent");

	Params::UGetAchievementData_GetGlobalAchievementAchievedPercent_Params Parms{};

	Parms.AchievementAPIName = AchievementAPIName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StatsIntegration.GetAchievementData.GetAchievementUnlockStatusAndUnlockTime
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      AchievementAPIName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AchievementUnlocked                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   UnlockTime                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGetAchievementData::GetAchievementUnlockStatusAndUnlockTime(const class FString& AchievementAPIName, bool* AchievementUnlocked, struct FDateTime* UnlockTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetAchievementData", "GetAchievementUnlockStatusAndUnlockTime");

	Params::UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime_Params Parms{};

	Parms.AchievementAPIName = AchievementAPIName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AchievementUnlocked != nullptr)
		*AchievementUnlocked = Parms.AchievementUnlocked;

	if (UnlockTime != nullptr)
		*UnlockTime = std::move(Parms.UnlockTime);

}


// Function StatsIntegration.GetAchievementData.GetAchievementIcon
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      AchievementAPIName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UGetAchievementData::GetAchievementIcon(const class FString& AchievementAPIName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetAchievementData", "GetAchievementIcon");

	Params::UGetAchievementData_GetAchievementIcon_Params Parms{};

	Parms.AchievementAPIName = AchievementAPIName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StatsIntegration.GetAchievementData.GetAchievementDisplayAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      AchievementAPIName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAchievementDisplayAttributeUE4Attribute                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGetAchievementData::GetAchievementDisplayAttribute(const class FString& AchievementAPIName, enum class EAchievementDisplayAttributeUE4 Attribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetAchievementData", "GetAchievementDisplayAttribute");

	Params::UGetAchievementData_GetAchievementDisplayAttribute_Params Parms{};

	Parms.AchievementAPIName = AchievementAPIName;
	Parms.Attribute = Attribute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StatsIntegration.GetAchievementData.GetAchievementAPIName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              AchievementIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGetAchievementData::GetAchievementAPIName(int32 AchievementIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetAchievementData", "GetAchievementAPIName");

	Params::UGetAchievementData_GetAchievementAPIName_Params Parms{};

	Parms.AchievementIndex = AchievementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class StatsIntegration.GetStoredStats
// (None)

class UClass* UGetStoredStats::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetStoredStats");

	return Clss;
}


// GetStoredStats StatsIntegration.Default__GetStoredStats
// (Public, ClassDefaultObject, ArchetypeObject)

class UGetStoredStats* UGetStoredStats::GetDefaultObj()
{
	static class UGetStoredStats* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetStoredStats*>(UGetStoredStats::StaticClass()->DefaultObject);

	return Default;
}


// Function StatsIntegration.GetStoredStats.GetUserStoredStats
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FSteamStat>          StatsToGet                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FSteamStat>          StatsOut                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UGetStoredStats::GetUserStoredStats(const TArray<struct FSteamStat>& StatsToGet, TArray<struct FSteamStat>* StatsOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetStoredStats", "GetUserStoredStats");

	Params::UGetStoredStats_GetUserStoredStats_Params Parms{};

	Parms.StatsToGet = StatsToGet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StatsOut != nullptr)
		*StatsOut = std::move(Parms.StatsOut);

}


// Function StatsIntegration.GetStoredStats.GetUserStoredStat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      APIStatName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamStatType          StatType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IntegerValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FloatValue                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGetStoredStats::GetUserStoredStat(const class FString& APIStatName, enum class ESteamStatType StatType, int32* IntegerValue, float* FloatValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetStoredStats", "GetUserStoredStat");

	Params::UGetStoredStats_GetUserStoredStat_Params Parms{};

	Parms.APIStatName = APIStatName;
	Parms.StatType = StatType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IntegerValue != nullptr)
		*IntegerValue = Parms.IntegerValue;

	if (FloatValue != nullptr)
		*FloatValue = Parms.FloatValue;

}


// Class StatsIntegration.IndicateAchievementProgress
// (None)

class UClass* UIndicateAchievementProgress::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IndicateAchievementProgress");

	return Clss;
}


// IndicateAchievementProgress StatsIntegration.Default__IndicateAchievementProgress
// (Public, ClassDefaultObject, ArchetypeObject)

class UIndicateAchievementProgress* UIndicateAchievementProgress::GetDefaultObj()
{
	static class UIndicateAchievementProgress* Default = nullptr;

	if (!Default)
		Default = static_cast<UIndicateAchievementProgress*>(UIndicateAchievementProgress::StaticClass()->DefaultObject);

	return Default;
}


// Function StatsIntegration.IndicateAchievementProgress.IndicateUserAchievementProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AchievementAPIName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CurrentProgress                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxProgress                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UIndicateAchievementProgress*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UIndicateAchievementProgress* UIndicateAchievementProgress::IndicateUserAchievementProgress(const class FString& AchievementAPIName, int32 CurrentProgress, int32 MaxProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IndicateAchievementProgress", "IndicateUserAchievementProgress");

	Params::UIndicateAchievementProgress_IndicateUserAchievementProgress_Params Parms{};

	Parms.AchievementAPIName = AchievementAPIName;
	Parms.CurrentProgress = CurrentProgress;
	Parms.MaxProgress = MaxProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class StatsIntegration.RequestStatsAndAchievements
// (None)

class UClass* URequestStatsAndAchievements::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RequestStatsAndAchievements");

	return Clss;
}


// RequestStatsAndAchievements StatsIntegration.Default__RequestStatsAndAchievements
// (Public, ClassDefaultObject, ArchetypeObject)

class URequestStatsAndAchievements* URequestStatsAndAchievements::GetDefaultObj()
{
	static class URequestStatsAndAchievements* Default = nullptr;

	if (!Default)
		Default = static_cast<URequestStatsAndAchievements*>(URequestStatsAndAchievements::StaticClass()->DefaultObject);

	return Default;
}


// Function StatsIntegration.RequestStatsAndAchievements.RequestUserStatsAndAchievements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class URequestStatsAndAchievements*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URequestStatsAndAchievements* URequestStatsAndAchievements::RequestUserStatsAndAchievements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RequestStatsAndAchievements", "RequestUserStatsAndAchievements");

	Params::URequestStatsAndAchievements_RequestUserStatsAndAchievements_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class StatsIntegration.ResetAllStatsAndAchievements
// (None)

class UClass* UResetAllStatsAndAchievements::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResetAllStatsAndAchievements");

	return Clss;
}


// ResetAllStatsAndAchievements StatsIntegration.Default__ResetAllStatsAndAchievements
// (Public, ClassDefaultObject, ArchetypeObject)

class UResetAllStatsAndAchievements* UResetAllStatsAndAchievements::GetDefaultObj()
{
	static class UResetAllStatsAndAchievements* Default = nullptr;

	if (!Default)
		Default = static_cast<UResetAllStatsAndAchievements*>(UResetAllStatsAndAchievements::StaticClass()->DefaultObject);

	return Default;
}


// Function StatsIntegration.ResetAllStatsAndAchievements.ResetUserStatsAndAchievements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bAchievementsToo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UResetAllStatsAndAchievements*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UResetAllStatsAndAchievements* UResetAllStatsAndAchievements::ResetUserStatsAndAchievements(bool bAchievementsToo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResetAllStatsAndAchievements", "ResetUserStatsAndAchievements");

	Params::UResetAllStatsAndAchievements_ResetUserStatsAndAchievements_Params Parms{};

	Parms.bAchievementsToo = bAchievementsToo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class StatsIntegration.SetAchievementData
// (None)

class UClass* USetAchievementData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetAchievementData");

	return Clss;
}


// SetAchievementData StatsIntegration.Default__SetAchievementData
// (Public, ClassDefaultObject, ArchetypeObject)

class USetAchievementData* USetAchievementData::GetDefaultObj()
{
	static class USetAchievementData* Default = nullptr;

	if (!Default)
		Default = static_cast<USetAchievementData*>(USetAchievementData::StaticClass()->DefaultObject);

	return Default;
}


// Function StatsIntegration.SetAchievementData.SetAchievement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AchievementAPIName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USetAchievementData::SetAchievement(const class FString& AchievementAPIName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SetAchievementData", "SetAchievement");

	Params::USetAchievementData_SetAchievement_Params Parms{};

	Parms.AchievementAPIName = AchievementAPIName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StatsIntegration.SetAchievementData.ClearAchievement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AchievementAPIName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USetAchievementData::ClearAchievement(const class FString& AchievementAPIName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SetAchievementData", "ClearAchievement");

	Params::USetAchievementData_ClearAchievement_Params Parms{};

	Parms.AchievementAPIName = AchievementAPIName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class StatsIntegration.SetStoredStats
// (None)

class UClass* USetStoredStats::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetStoredStats");

	return Clss;
}


// SetStoredStats StatsIntegration.Default__SetStoredStats
// (Public, ClassDefaultObject, ArchetypeObject)

class USetStoredStats* USetStoredStats::GetDefaultObj()
{
	static class USetStoredStats* Default = nullptr;

	if (!Default)
		Default = static_cast<USetStoredStats*>(USetStoredStats::StaticClass()->DefaultObject);

	return Default;
}


// Function StatsIntegration.SetStoredStats.SetStoredStats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FSteamStat>          SteamStatsIn                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              SessionLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USetStoredStats::SetStoredStats(const TArray<struct FSteamStat>& SteamStatsIn, float SessionLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SetStoredStats", "SetStoredStats");

	Params::USetStoredStats_SetStoredStats_Params Parms{};

	Parms.SteamStatsIn = SteamStatsIn;
	Parms.SessionLength = SessionLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StatsIntegration.SetStoredStats.SetStoredStat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      APIStatName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamStatType          StatType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FloatValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IntegerValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SessionLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USetStoredStats::SetStoredStat(const class FString& APIStatName, enum class ESteamStatType StatType, float FloatValue, int32 IntegerValue, float SessionLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SetStoredStats", "SetStoredStat");

	Params::USetStoredStats_SetStoredStat_Params Parms{};

	Parms.APIStatName = APIStatName;
	Parms.StatType = StatType;
	Parms.FloatValue = FloatValue;
	Parms.IntegerValue = IntegerValue;
	Parms.SessionLength = SessionLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class StatsIntegration.SteamRequests
// (None)

class UClass* USteamRequests::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamRequests");

	return Clss;
}


// SteamRequests StatsIntegration.Default__SteamRequests
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamRequests* USteamRequests::GetDefaultObj()
{
	static class USteamRequests* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamRequests*>(USteamRequests::StaticClass()->DefaultObject);

	return Default;
}


// Class StatsIntegration.StoreStatsAndAchievements
// (None)

class UClass* UStoreStatsAndAchievements::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StoreStatsAndAchievements");

	return Clss;
}


// StoreStatsAndAchievements StatsIntegration.Default__StoreStatsAndAchievements
// (Public, ClassDefaultObject, ArchetypeObject)

class UStoreStatsAndAchievements* UStoreStatsAndAchievements::GetDefaultObj()
{
	static class UStoreStatsAndAchievements* Default = nullptr;

	if (!Default)
		Default = static_cast<UStoreStatsAndAchievements*>(UStoreStatsAndAchievements::StaticClass()->DefaultObject);

	return Default;
}


// Function StatsIntegration.StoreStatsAndAchievements.StoreUserStatsAndAchievements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStoreStatsAndAchievements*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UStoreStatsAndAchievements* UStoreStatsAndAchievements::StoreUserStatsAndAchievements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreStatsAndAchievements", "StoreUserStatsAndAchievements");

	Params::UStoreStatsAndAchievements_StoreUserStatsAndAchievements_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


