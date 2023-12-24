#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_DevScoreDisplay.W_DevScoreDisplay_C
// (None)

class UClass* UW_DevScoreDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_DevScoreDisplay_C");

	return Clss;
}


// W_DevScoreDisplay_C W_DevScoreDisplay.Default__W_DevScoreDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_DevScoreDisplay_C* UW_DevScoreDisplay_C::GetDefaultObj()
{
	static class UW_DevScoreDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_DevScoreDisplay_C*>(UW_DevScoreDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_DevScoreDisplay.W_DevScoreDisplay_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Scenarios                                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSuspectCount_OutReported                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSuspectCount_OutArrested                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSuspectCount_OutKilled                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSuspectCount_OutTotal                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_3                            (None)
// int32                              CallFunc_GetReportCount_ReportedCount                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetReportCount_TotalReports                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_4                            (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_5                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_6                            (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasClearedMission_bHasClearedMission                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasClearedMission_bSoftClearedMission                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasClearedMission_bMissionFailed                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEvidenceCount_EvidenceCollected                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetEvidenceCount_TotalEvidence                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_7                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_8                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_9                            (None)
// int32                              CallFunc_GetCivilianCount_OutReported                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCivilianCount_OutInjured                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCivilianCount_OutKilled                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCivilianCount_OutArrested                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCivilianCount_OutTotal                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_10                           (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_11                           (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_12                           (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_13                           (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_14                           (None)

void UW_DevScoreDisplay_C::UpdateText(const class FString& Scenarios, int32 Temp_int_Array_Index_Variable, TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetSuspectCount_OutReported, int32 CallFunc_GetSuspectCount_OutArrested, int32 CallFunc_GetSuspectCount_OutKilled, int32 CallFunc_GetSuspectCount_OutTotal, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_3, int32 CallFunc_GetReportCount_ReportedCount, int32 CallFunc_GetReportCount_TotalReports, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_5, class FText CallFunc_Conv_IntToText_ReturnValue_6, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasClearedMission_bHasClearedMission, bool CallFunc_HasClearedMission_bSoftClearedMission, bool CallFunc_HasClearedMission_bMissionFailed, int32 CallFunc_GetEvidenceCount_EvidenceCollected, int32 CallFunc_GetEvidenceCount_TotalEvidence, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_7, class FText CallFunc_Conv_IntToText_ReturnValue_8, class FText CallFunc_Conv_IntToText_ReturnValue_9, int32 CallFunc_GetCivilianCount_OutReported, int32 CallFunc_GetCivilianCount_OutInjured, int32 CallFunc_GetCivilianCount_OutKilled, int32 CallFunc_GetCivilianCount_OutArrested, int32 CallFunc_GetCivilianCount_OutTotal, class FText CallFunc_Conv_IntToText_ReturnValue_10, class FText CallFunc_Conv_IntToText_ReturnValue_11, class FText CallFunc_Conv_IntToText_ReturnValue_12, class FText CallFunc_Conv_IntToText_ReturnValue_13, class FText CallFunc_Conv_IntToText_ReturnValue_14)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DevScoreDisplay_C", "UpdateText");

	Params::UW_DevScoreDisplay_C_UpdateText_Params Parms{};

	Parms.Scenarios = Scenarios;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetSuspectCount_OutReported = CallFunc_GetSuspectCount_OutReported;
	Parms.CallFunc_GetSuspectCount_OutArrested = CallFunc_GetSuspectCount_OutArrested;
	Parms.CallFunc_GetSuspectCount_OutKilled = CallFunc_GetSuspectCount_OutKilled;
	Parms.CallFunc_GetSuspectCount_OutTotal = CallFunc_GetSuspectCount_OutTotal;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue_3 = CallFunc_Conv_IntToText_ReturnValue_3;
	Parms.CallFunc_GetReportCount_ReportedCount = CallFunc_GetReportCount_ReportedCount;
	Parms.CallFunc_GetReportCount_TotalReports = CallFunc_GetReportCount_TotalReports;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_4 = CallFunc_Conv_IntToText_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_5 = CallFunc_Conv_IntToText_ReturnValue_5;
	Parms.CallFunc_Conv_IntToText_ReturnValue_6 = CallFunc_Conv_IntToText_ReturnValue_6;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_HasClearedMission_bHasClearedMission = CallFunc_HasClearedMission_bHasClearedMission;
	Parms.CallFunc_HasClearedMission_bSoftClearedMission = CallFunc_HasClearedMission_bSoftClearedMission;
	Parms.CallFunc_HasClearedMission_bMissionFailed = CallFunc_HasClearedMission_bMissionFailed;
	Parms.CallFunc_GetEvidenceCount_EvidenceCollected = CallFunc_GetEvidenceCount_EvidenceCollected;
	Parms.CallFunc_GetEvidenceCount_TotalEvidence = CallFunc_GetEvidenceCount_TotalEvidence;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_7 = CallFunc_Conv_IntToText_ReturnValue_7;
	Parms.CallFunc_Conv_IntToText_ReturnValue_8 = CallFunc_Conv_IntToText_ReturnValue_8;
	Parms.CallFunc_Conv_IntToText_ReturnValue_9 = CallFunc_Conv_IntToText_ReturnValue_9;
	Parms.CallFunc_GetCivilianCount_OutReported = CallFunc_GetCivilianCount_OutReported;
	Parms.CallFunc_GetCivilianCount_OutInjured = CallFunc_GetCivilianCount_OutInjured;
	Parms.CallFunc_GetCivilianCount_OutKilled = CallFunc_GetCivilianCount_OutKilled;
	Parms.CallFunc_GetCivilianCount_OutArrested = CallFunc_GetCivilianCount_OutArrested;
	Parms.CallFunc_GetCivilianCount_OutTotal = CallFunc_GetCivilianCount_OutTotal;
	Parms.CallFunc_Conv_IntToText_ReturnValue_10 = CallFunc_Conv_IntToText_ReturnValue_10;
	Parms.CallFunc_Conv_IntToText_ReturnValue_11 = CallFunc_Conv_IntToText_ReturnValue_11;
	Parms.CallFunc_Conv_IntToText_ReturnValue_12 = CallFunc_Conv_IntToText_ReturnValue_12;
	Parms.CallFunc_Conv_IntToText_ReturnValue_13 = CallFunc_Conv_IntToText_ReturnValue_13;
	Parms.CallFunc_Conv_IntToText_ReturnValue_14 = CallFunc_Conv_IntToText_ReturnValue_14;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DevScoreDisplay.W_DevScoreDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_DevScoreDisplay_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DevScoreDisplay_C", "PreConstruct");

	Params::UW_DevScoreDisplay_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DevScoreDisplay.W_DevScoreDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_DevScoreDisplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DevScoreDisplay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_DevScoreDisplay.W_DevScoreDisplay_C.ExecuteUbergraph_W_DevScoreDisplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShippingBuild_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACoopGS*                     K2Node_DynamicCast_AsCoop_GS                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void UW_DevScoreDisplay_C::ExecuteUbergraph_W_DevScoreDisplay(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_IsShippingBuild_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DevScoreDisplay_C", "ExecuteUbergraph_W_DevScoreDisplay");

	Params::UW_DevScoreDisplay_C_ExecuteUbergraph_W_DevScoreDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsShippingBuild_ReturnValue = CallFunc_IsShippingBuild_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsCoop_GS = K2Node_DynamicCast_AsCoop_GS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


