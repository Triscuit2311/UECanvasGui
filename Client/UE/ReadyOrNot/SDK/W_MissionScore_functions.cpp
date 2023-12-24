#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MissionScore.W_MissionScore_C
// (None)

class UClass* UW_MissionScore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MissionScore_C");

	return Clss;
}


// W_MissionScore_C W_MissionScore.Default__W_MissionScore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MissionScore_C* UW_MissionScore_C::GetDefaultObj()
{
	static class UW_MissionScore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MissionScore_C*>(UW_MissionScore_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_MissionScore.W_MissionScore_C.UpdateLevelStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScoringManager*             CallFunc_Get_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetObjectiveCompletionStatus_ObjectivesComplete         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetObjectiveCompletionStatus_ObjectivesFailed           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetObjectiveCompletionStatus_TotalObjectives            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBasicLevelStats            CallFunc_LoadLevelStats_OutStats                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_TimeSecondsToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_CalculateGradeLetterFromPercentage_ReturnValue          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class AScoringManager*             CallFunc_Get_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentScoreAsPercentage_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBasicLevelStats            K2Node_MakeStruct_BasicLevelStats                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveLevelStats_NewBestRating                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveLevelStats_NewBestTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionScore_C::UpdateLevelStats(class AScoringManager* CallFunc_Get_ReturnValue, int32 CallFunc_GetObjectiveCompletionStatus_ObjectivesComplete, int32 CallFunc_GetObjectiveCompletionStatus_ObjectivesFailed, int32 CallFunc_GetObjectiveCompletionStatus_TotalObjectives, const struct FBasicLevelStats& CallFunc_LoadLevelStats_OutStats, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const class FString& CallFunc_TimeSecondsToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_CalculateGradeLetterFromPercentage_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class AScoringManager* CallFunc_Get_ReturnValue_1, float CallFunc_GetCurrentScoreAsPercentage_ReturnValue, const struct FBasicLevelStats& K2Node_MakeStruct_BasicLevelStats, bool CallFunc_SaveLevelStats_NewBestRating, bool CallFunc_SaveLevelStats_NewBestTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_C", "UpdateLevelStats");

	Params::UW_MissionScore_C_UpdateLevelStats_Params Parms{};

	Parms.CallFunc_Get_ReturnValue = CallFunc_Get_ReturnValue;
	Parms.CallFunc_GetObjectiveCompletionStatus_ObjectivesComplete = CallFunc_GetObjectiveCompletionStatus_ObjectivesComplete;
	Parms.CallFunc_GetObjectiveCompletionStatus_ObjectivesFailed = CallFunc_GetObjectiveCompletionStatus_ObjectivesFailed;
	Parms.CallFunc_GetObjectiveCompletionStatus_TotalObjectives = CallFunc_GetObjectiveCompletionStatus_TotalObjectives;
	Parms.CallFunc_LoadLevelStats_OutStats = CallFunc_LoadLevelStats_OutStats;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_TimeSecondsToString_ReturnValue = CallFunc_TimeSecondsToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_CalculateGradeLetterFromPercentage_ReturnValue = CallFunc_CalculateGradeLetterFromPercentage_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Get_ReturnValue_1 = CallFunc_Get_ReturnValue_1;
	Parms.CallFunc_GetCurrentScoreAsPercentage_ReturnValue = CallFunc_GetCurrentScoreAsPercentage_ReturnValue;
	Parms.K2Node_MakeStruct_BasicLevelStats = K2Node_MakeStruct_BasicLevelStats;
	Parms.CallFunc_SaveLevelStats_NewBestRating = CallFunc_SaveLevelStats_NewBestRating;
	Parms.CallFunc_SaveLevelStats_NewBestTime = CallFunc_SaveLevelStats_NewBestTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionScore.W_MissionScore_C.GetModdedScoreNoticeVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameModded_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UW_MissionScore_C::GetModdedScoreNoticeVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsGameModded_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_C", "GetModdedScoreNoticeVisibility");

	Params::UW_MissionScore_C_GetModdedScoreNoticeVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsGameModded_ReturnValue = CallFunc_IsGameModded_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MissionScore.W_MissionScore_C.SaveMetrics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class AScoringManager*             CallFunc_Get_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentScoreAsPercentage_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACoopGM*                     K2Node_DynamicCast_AsCoop_GM                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_CalculateGradeLetterFromPercentage_ReturnValue          (ZeroConstructor, HasGetValueTypeHash)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFriendlyModeFromECoopMode_ReturnValue                (ZeroConstructor, HasGetValueTypeHash)

void UW_MissionScore_C::SaveMetrics(const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class AScoringManager* CallFunc_Get_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, float CallFunc_GetCurrentScoreAsPercentage_ReturnValue, class ACoopGM* K2Node_DynamicCast_AsCoop_GM, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_CalculateGradeLetterFromPercentage_ReturnValue, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, const class FString& CallFunc_GetFriendlyModeFromECoopMode_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_C", "SaveMetrics");

	Params::UW_MissionScore_C_SaveMetrics_Params Parms{};

	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Get_ReturnValue = CallFunc_Get_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_GetCurrentScoreAsPercentage_ReturnValue = CallFunc_GetCurrentScoreAsPercentage_ReturnValue;
	Parms.K2Node_DynamicCast_AsCoop_GM = K2Node_DynamicCast_AsCoop_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CalculateGradeLetterFromPercentage_ReturnValue = CallFunc_CalculateGradeLetterFromPercentage_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue = CallFunc_GetReadyOrNotGameInstance_ReturnValue;
	Parms.CallFunc_GetFriendlyModeFromECoopMode_ReturnValue = CallFunc_GetFriendlyModeFromECoopMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionScore.W_MissionScore_C.GetMissionNextMapTimerVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGS_COOP_C*                  K2Node_DynamicCast_AsGS_COOP                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_MissionScore_C::GetMissionNextMapTimerVisibility(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class AGS_COOP_C* K2Node_DynamicCast_AsGS_COOP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_C", "GetMissionNextMapTimerVisibility");

	Params::UW_MissionScore_C_GetMissionNextMapTimerVisibility_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsGS_COOP = K2Node_DynamicCast_AsGS_COOP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MissionScore.W_MissionScore_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UW_MissionScore_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_C", "OnMouseButtonDown");

	Params::UW_MissionScore_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MissionScore.W_MissionScore_C.AddAllPenalties
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScoringManager*             CallFunc_Get_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FScorePenaltyData>   CallFunc_GetPenaltyScoreGroups_ReturnValue                       (ReferenceParm)

void UW_MissionScore_C::AddAllPenalties(class AScoringManager* CallFunc_Get_ReturnValue, TArray<struct FScorePenaltyData>& CallFunc_GetPenaltyScoreGroups_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_C", "AddAllPenalties");

	Params::UW_MissionScore_C_AddAllPenalties_Params Parms{};

	Parms.CallFunc_Get_ReturnValue = CallFunc_Get_ReturnValue;
	Parms.CallFunc_GetPenaltyScoreGroups_ReturnValue = CallFunc_GetPenaltyScoreGroups_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionScore.W_MissionScore_C.AddPenalty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Total                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Score                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_MissionEndBonus_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_MissionScore_C::AddPenalty(class FText Name, int32 Count, int32 Total, int32 Score, class UW_MissionEndBonus_C* CallFunc_Create_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_C", "AddPenalty");

	Params::UW_MissionScore_C_AddPenalty_Params Parms{};

	Parms.Name = Name;
	Parms.Count = Count;
	Parms.Total = Total;
	Parms.Score = Score;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionScore.W_MissionScore_C.AddAllBonuses
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScoringManager*             CallFunc_Get_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FScoreGroup>         CallFunc_GetScoreGroups_ReturnValue                              (ReferenceParm, ContainsInstancedReference)

void UW_MissionScore_C::AddAllBonuses(class AScoringManager* CallFunc_Get_ReturnValue, TArray<struct FScoreGroup>& CallFunc_GetScoreGroups_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_C", "AddAllBonuses");

	Params::UW_MissionScore_C_AddAllBonuses_Params Parms{};

	Parms.CallFunc_Get_ReturnValue = CallFunc_Get_ReturnValue;
	Parms.CallFunc_GetScoreGroups_ReturnValue = CallFunc_GetScoreGroups_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionScore.W_MissionScore_C.AddBonus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Total                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Score                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_MissionScore_ScorePanel_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_C::AddBonus(class FText Name, int32 Count, int32 Total, int32 Score, class UW_MissionScore_ScorePanel_Entry_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_C", "AddBonus");

	Params::UW_MissionScore_C_AddBonus_Params Parms{};

	Parms.Name = Name;
	Parms.Count = Count;
	Parms.Total = Total;
	Parms.Score = Score;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionScore.W_MissionScore_C.GetMapTimeRemaining
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_ConvertFloatToStringMinutes_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_MissionScore_C::GetMapTimeRemaining(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_ConvertFloatToStringMinutes_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_C", "GetMapTimeRemaining");

	Params::UW_MissionScore_C_GetMapTimeRemaining_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State = K2Node_DynamicCast_AsReady_or_Not_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ConvertFloatToStringMinutes_ReturnValue = CallFunc_ConvertFloatToStringMinutes_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MissionScore.W_MissionScore_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_MissionScore_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionScore.W_MissionScore_C.BndEvt__Scores_K2Node_ComponentBoundEvent_0_AllScoresAdded__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_MissionScore_C::BndEvt__Scores_K2Node_ComponentBoundEvent_0_AllScoresAdded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_C", "BndEvt__Scores_K2Node_ComponentBoundEvent_0_AllScoresAdded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionScore.W_MissionScore_C.BndEvt__Penalties_K2Node_ComponentBoundEvent_1_AllPenaltiesAdded__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_MissionScore_C::BndEvt__Penalties_K2Node_ComponentBoundEvent_1_AllPenaltiesAdded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_C", "BndEvt__Penalties_K2Node_ComponentBoundEvent_1_AllPenaltiesAdded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionScore.W_MissionScore_C.BndEvt__W_MissionScore_W_MissionEnd_Rating_Progress_C_1_K2Node_ComponentBoundEvent_2_OnGradeRevealed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_MissionScore_C::BndEvt__W_MissionScore_W_MissionEnd_Rating_Progress_C_1_K2Node_ComponentBoundEvent_2_OnGradeRevealed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_C", "BndEvt__W_MissionScore_W_MissionEnd_Rating_Progress_C_1_K2Node_ComponentBoundEvent_2_OnGradeRevealed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionScore.W_MissionScore_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_MissionScore_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionScore.W_MissionScore_C.ExecuteUbergraph_W_MissionScore
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACoopGS*                     K2Node_DynamicCast_AsCoop_GS                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AScoringManager*             CallFunc_Get_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalScore_TotalScore                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScoringManager*             CallFunc_Get_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_CalculateGradeLetterFromPlayerScore_ReturnValue         (ZeroConstructor, HasGetValueTypeHash)
// class AMapStatisticsSystem*        CallFunc_GetMapStatistics_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AScoringManager*             CallFunc_Get_ReturnValue_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FScorePenaltyData>   CallFunc_GetPenaltyScoreGroups_ReturnValue                       (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_TimeSecondsToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionScore_C::ExecuteUbergraph_W_MissionScore(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess, class AScoringManager* CallFunc_Get_ReturnValue, int32 CallFunc_GetTotalScore_TotalScore, class AScoringManager* CallFunc_Get_ReturnValue_1, const class FString& CallFunc_CalculateGradeLetterFromPlayerScore_ReturnValue, class AMapStatisticsSystem* CallFunc_GetMapStatistics_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess_1, class AScoringManager* CallFunc_Get_ReturnValue_2, TArray<struct FScorePenaltyData>& CallFunc_GetPenaltyScoreGroups_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const class FString& CallFunc_TimeSecondsToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI_1, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_C", "ExecuteUbergraph_W_MissionScore");

	Params::UW_MissionScore_C_ExecuteUbergraph_W_MissionScore_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsCoop_GS = K2Node_DynamicCast_AsCoop_GS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_ReturnValue = CallFunc_Get_ReturnValue;
	Parms.CallFunc_GetTotalScore_TotalScore = CallFunc_GetTotalScore_TotalScore;
	Parms.CallFunc_Get_ReturnValue_1 = CallFunc_Get_ReturnValue_1;
	Parms.CallFunc_CalculateGradeLetterFromPlayerScore_ReturnValue = CallFunc_CalculateGradeLetterFromPlayerScore_ReturnValue;
	Parms.CallFunc_GetMapStatistics_ReturnValue = CallFunc_GetMapStatistics_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI = K2Node_DynamicCast_AsReady_or_Not_UI;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Get_ReturnValue_2 = CallFunc_Get_ReturnValue_2;
	Parms.CallFunc_GetPenaltyScoreGroups_ReturnValue = CallFunc_GetPenaltyScoreGroups_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_TimeSecondsToString_ReturnValue = CallFunc_TimeSecondsToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI_1 = K2Node_DynamicCast_AsReady_or_Not_UI_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionScore.W_MissionScore_C.OnScoringComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionScore_C::OnScoringComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_C", "OnScoringComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


