#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C
// (None)

class UClass* UW_WorldMap_MissionSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_WorldMap_MissionSelect_C");

	return Clss;
}


// W_WorldMap_MissionSelect_C W_WorldMap_MissionSelect.Default__W_WorldMap_MissionSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_WorldMap_MissionSelect_C* UW_WorldMap_MissionSelect_C::GetDefaultObj()
{
	static class UW_WorldMap_MissionSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_WorldMap_MissionSelect_C*>(UW_WorldMap_MissionSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.OnShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SelectedMission                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameModeSelectable_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMap_MissionSelect_C::OnShow(class FName SelectedMission, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsGameModeSelectable_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_MissionSelect_C", "OnShow");

	Params::UW_WorldMap_MissionSelect_C_OnShow_Params Parms{};

	Parms.SelectedMission = SelectedMission;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsGameModeSelectable_ReturnValue = CallFunc_IsGameModeSelectable_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.UpdateMissionScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SelectionMission                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      LastLoadedScoreMission                                           (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FLevelDataLookupTable       CallFunc_GetMapDetailsFromName_ReturnValue                       (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Map_Find_Value                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// struct FBasicLevelStats            CallFunc_LoadLevelStats_OutStats                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_ConvertFloatToStringMinutes_Detail_ReturnValue          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_CalculateGradeLetterFromPercentage_ReturnValue          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UW_WorldMap_MissionSelect_C::UpdateMissionScore(class FName SelectionMission, const class FString& LastLoadedScoreMission, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FLevelDataLookupTable& CallFunc_GetMapDetailsFromName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const struct FBasicLevelStats& CallFunc_LoadLevelStats_OutStats, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_ConvertFloatToStringMinutes_Detail_ReturnValue, const class FString& CallFunc_CalculateGradeLetterFromPercentage_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_MissionSelect_C", "UpdateMissionScore");

	Params::UW_WorldMap_MissionSelect_C_UpdateMissionScore_Params Parms{};

	Parms.SelectionMission = SelectionMission;
	Parms.LastLoadedScoreMission = LastLoadedScoreMission;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetMapDetailsFromName_ReturnValue = CallFunc_GetMapDetailsFromName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_LoadLevelStats_OutStats = CallFunc_LoadLevelStats_OutStats;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_ConvertFloatToStringMinutes_Detail_ReturnValue = CallFunc_ConvertFloatToStringMinutes_Detail_ReturnValue;
	Parms.CallFunc_CalculateGradeLetterFromPercentage_ReturnValue = CallFunc_CalculateGradeLetterFromPercentage_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WorldMap_MissionSelect_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_MissionSelect_C", "PreConstruct");

	Params::UW_WorldMap_MissionSelect_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.BndEvt__W_WorldMap_MissionSelect_btn_AcceptMission_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMap_MissionSelect_C::BndEvt__W_WorldMap_MissionSelect_btn_AcceptMission_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_MissionSelect_C", "BndEvt__W_WorldMap_MissionSelect_btn_AcceptMission_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UW_WorldMap_MissionSelect_C_BndEvt__W_WorldMap_MissionSelect_btn_AcceptMission_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMap_MissionSelect_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_MissionSelect_C", "Tick");

	Params::UW_WorldMap_MissionSelect_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.ExecuteUbergraph_W_WorldMap_MissionSelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameModeSelectable_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WorldMap_MissionSelect_C::ExecuteUbergraph_W_WorldMap_MissionSelect(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UW_Button_C* K2Node_ComponentBoundEvent_Button, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsGameModeSelectable_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_MissionSelect_C", "ExecuteUbergraph_W_WorldMap_MissionSelect");

	Params::UW_WorldMap_MissionSelect_C_ExecuteUbergraph_W_WorldMap_MissionSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_IsGameModeSelectable_ReturnValue = CallFunc_IsGameModeSelectable_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.OnSetMissionButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_WorldMap_MissionSelect_C* BtnClicked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMap_MissionSelect_C::OnSetMissionButtonClicked__DelegateSignature(class UW_WorldMap_MissionSelect_C* BtnClicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_MissionSelect_C", "OnSetMissionButtonClicked__DelegateSignature");

	Params::UW_WorldMap_MissionSelect_C_OnSetMissionButtonClicked__DelegateSignature_Params Parms{};

	Parms.BtnClicked = BtnClicked;

	UObject::ProcessEvent(Func, &Parms);

}

}


