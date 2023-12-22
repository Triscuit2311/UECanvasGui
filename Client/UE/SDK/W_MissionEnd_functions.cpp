#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MissionEnd.W_MissionEnd_C
// (None)

class UClass* UW_MissionEnd_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MissionEnd_C");

	return Clss;
}


// W_MissionEnd_C W_MissionEnd.Default__W_MissionEnd_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MissionEnd_C* UW_MissionEnd_C::GetDefaultObj()
{
	static class UW_MissionEnd_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MissionEnd_C*>(UW_MissionEnd_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_MissionEnd.W_MissionEnd_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionEnd_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "GetFocusTarget");

	Params::UW_MissionEnd_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_MissionEnd.W_MissionEnd_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionEnd_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "BackPage");

	Params::UW_MissionEnd_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_MissionEnd.W_MissionEnd_C.AddFooterOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, struct FScreenFooterEntry>FooterEntries                                                    (Edit, BlueprintVisible)
// TArray<struct FScreenFooterEntry>  FooterEntriesArray                                               (Edit, BlueprintVisible)
// bool                               CallFunc_ShowCreditsButton_Show                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_ShowReturnButton_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShowQuitButton_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShowRestartButton_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionEnd_C::AddFooterOptions(TMap<class FString, struct FScreenFooterEntry> FooterEntries, const TArray<struct FScreenFooterEntry>& FooterEntriesArray, bool CallFunc_ShowCreditsButton_Show, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, bool CallFunc_ShowReturnButton_ReturnValue, bool CallFunc_ShowQuitButton_ReturnValue, bool CallFunc_ShowRestartButton_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "AddFooterOptions");

	Params::UW_MissionEnd_C_AddFooterOptions_Params Parms{};

	Parms.FooterEntries = FooterEntries;
	Parms.FooterEntriesArray = FooterEntriesArray;
	Parms.CallFunc_ShowCreditsButton_Show = CallFunc_ShowCreditsButton_Show;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.CallFunc_ShowReturnButton_ReturnValue = CallFunc_ShowReturnButton_ReturnValue;
	Parms.CallFunc_ShowQuitButton_ReturnValue = CallFunc_ShowQuitButton_ReturnValue;
	Parms.CallFunc_ShowRestartButton_ReturnValue = CallFunc_ShowRestartButton_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionEnd.W_MissionEnd_C.ShowQuitButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCommanderMode_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_MissionEnd_C::ShowQuitButton(bool CallFunc_IsCommanderMode_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "ShowQuitButton");

	Params::UW_MissionEnd_C_ShowQuitButton_Params Parms{};

	Parms.CallFunc_IsCommanderMode_ReturnValue = CallFunc_IsCommanderMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MissionEnd.W_MissionEnd_C.SetupNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionEnd_C::SetupNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "SetupNavigation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionEnd.W_MissionEnd_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UW_MissionEnd_C::BP_OnHandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "BP_OnHandleBackAction");

	Params::UW_MissionEnd_C_BP_OnHandleBackAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MissionEnd.W_MissionEnd_C.OpenScorePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionEnd_C::OpenScorePage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "OpenScorePage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionEnd.W_MissionEnd_C.OpenDebriefPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionEnd_C::OpenDebriefPage(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "OpenDebriefPage");

	Params::UW_MissionEnd_C_OpenDebriefPage_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionEnd.W_MissionEnd_C.UpdateActiveNavButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionEnd_C::UpdateActiveNavButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "UpdateActiveNavButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionEnd.W_MissionEnd_C.GetScoreButtonVisibility
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UW_MissionEnd_C::GetScoreButtonVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "GetScoreButtonVisibility");

	Params::UW_MissionEnd_C_GetScoreButtonVisibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MissionEnd.W_MissionEnd_C.GetDebriefButtonVisibility
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCommanderMode_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_MissionEnd_C::GetDebriefButtonVisibility(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsCommanderMode_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "GetDebriefButtonVisibility");

	Params::UW_MissionEnd_C_GetDebriefButtonVisibility_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsCommanderMode_ReturnValue = CallFunc_IsCommanderMode_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MissionEnd.W_MissionEnd_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_MissionEnd_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "BP_GetDesiredFocusTarget");

	Params::UW_MissionEnd_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MissionEnd.W_MissionEnd_C.ShowReturnButton
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCommanderMode_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_MissionEnd_C::ShowReturnButton(bool CallFunc_IsCommanderMode_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "ShowReturnButton");

	Params::UW_MissionEnd_C_ShowReturnButton_Params Parms{};

	Parms.CallFunc_IsCommanderMode_ReturnValue = CallFunc_IsCommanderMode_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MissionEnd.W_MissionEnd_C.ShowRestartButton
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACommanderGM*                K2Node_DynamicCast_AsCommander_GM                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_MissionEnd_C::ShowRestartButton(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ACommanderGM* K2Node_DynamicCast_AsCommander_GM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "ShowRestartButton");

	Params::UW_MissionEnd_C_ShowRestartButton_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCommander_GM = K2Node_DynamicCast_AsCommander_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MissionEnd.W_MissionEnd_C.ShowCreditsButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Show                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWorld*                      CallFunc_GetWorldStatic_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScoringManager*             CallFunc_Get_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentLevelNameForLookupTable_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetObjectiveCompletionStatus_ObjectivesComplete         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetObjectiveCompletionStatus_ObjectivesFailed           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetObjectiveCompletionStatus_TotalObjectives            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StartsWith_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCommanderMode_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionEnd_C::ShowCreditsButton(bool* Show, class UWorld* CallFunc_GetWorldStatic_ReturnValue, class AScoringManager* CallFunc_Get_ReturnValue, class FName CallFunc_GetCurrentLevelNameForLookupTable_ReturnValue, int32 CallFunc_GetObjectiveCompletionStatus_ObjectivesComplete, int32 CallFunc_GetObjectiveCompletionStatus_ObjectivesFailed, int32 CallFunc_GetObjectiveCompletionStatus_TotalObjectives, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_StartsWith_ReturnValue, bool CallFunc_IsCommanderMode_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "ShowCreditsButton");

	Params::UW_MissionEnd_C_ShowCreditsButton_Params Parms{};

	Parms.CallFunc_GetWorldStatic_ReturnValue = CallFunc_GetWorldStatic_ReturnValue;
	Parms.CallFunc_Get_ReturnValue = CallFunc_Get_ReturnValue;
	Parms.CallFunc_GetCurrentLevelNameForLookupTable_ReturnValue = CallFunc_GetCurrentLevelNameForLookupTable_ReturnValue;
	Parms.CallFunc_GetObjectiveCompletionStatus_ObjectivesComplete = CallFunc_GetObjectiveCompletionStatus_ObjectivesComplete;
	Parms.CallFunc_GetObjectiveCompletionStatus_ObjectivesFailed = CallFunc_GetObjectiveCompletionStatus_ObjectivesFailed;
	Parms.CallFunc_GetObjectiveCompletionStatus_TotalObjectives = CallFunc_GetObjectiveCompletionStatus_TotalObjectives;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_StartsWith_ReturnValue = CallFunc_StartsWith_ReturnValue;
	Parms.CallFunc_IsCommanderMode_ReturnValue = CallFunc_IsCommanderMode_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Show != nullptr)
		*Show = Parms.Show;

}


// Function W_MissionEnd.W_MissionEnd_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_MissionEnd_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionEnd.W_MissionEnd_C.BndEvt__W_MissionEnd_btn_Debrief_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionEnd_C::BndEvt__W_MissionEnd_btn_Debrief_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "BndEvt__W_MissionEnd_btn_Debrief_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	Params::UW_MissionEnd_C_BndEvt__W_MissionEnd_btn_Debrief_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionEnd.W_MissionEnd_C.BndEvt__W_MissionEnd_btn_Score_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionEnd_C::BndEvt__W_MissionEnd_btn_Score_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "BndEvt__W_MissionEnd_btn_Score_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");

	Params::UW_MissionEnd_C_BndEvt__W_MissionEnd_btn_Score_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionEnd.W_MissionEnd_C.EnableDebrief
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionEnd_C::EnableDebrief()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "EnableDebrief");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionEnd.W_MissionEnd_C.BndEvt__W_MissionEnd_W_MissionScore_K2Node_ComponentBoundEvent_5_OnScoringComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_MissionEnd_C::BndEvt__W_MissionEnd_W_MissionScore_K2Node_ComponentBoundEvent_5_OnScoringComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "BndEvt__W_MissionEnd_W_MissionScore_K2Node_ComponentBoundEvent_5_OnScoringComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionEnd.W_MissionEnd_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_MissionEnd_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionEnd.W_MissionEnd_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionEnd_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "PreConstruct");

	Params::UW_MissionEnd_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionEnd.W_MissionEnd_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionEnd_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "ChangePage");

	Params::UW_MissionEnd_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionEnd.W_MissionEnd_C.BndEvt__W_MissionEnd_W_PageHeader_K2Node_ComponentBoundEvent_6_OnNavOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionEnd_C::BndEvt__W_MissionEnd_W_PageHeader_K2Node_ComponentBoundEvent_6_OnNavOptionSelected__DelegateSignature(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "BndEvt__W_MissionEnd_W_PageHeader_K2Node_ComponentBoundEvent_6_OnNavOptionSelected__DelegateSignature");

	Params::UW_MissionEnd_C_BndEvt__W_MissionEnd_W_PageHeader_K2Node_ComponentBoundEvent_6_OnNavOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionEnd.W_MissionEnd_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionEnd_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "SetInputMode");

	Params::UW_MissionEnd_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionEnd.W_MissionEnd_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionEnd_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "Hide");

	Params::UW_MissionEnd_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionEnd.W_MissionEnd_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionEnd_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "Reveal");

	Params::UW_MissionEnd_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionEnd.W_MissionEnd_C.QuitToMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionEnd_C::QuitToMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "QuitToMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionEnd.W_MissionEnd_C.BndEvt__W_MissionEnd_PageWrapper_K2Node_ComponentBoundEvent_7_OnFooterButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_MissionEnd_C::BndEvt__W_MissionEnd_PageWrapper_K2Node_ComponentBoundEvent_7_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "BndEvt__W_MissionEnd_PageWrapper_K2Node_ComponentBoundEvent_7_OnFooterButtonClicked__DelegateSignature");

	Params::UW_MissionEnd_C_BndEvt__W_MissionEnd_PageWrapper_K2Node_ComponentBoundEvent_7_OnFooterButtonClicked__DelegateSignature_Params Parms{};

	Parms.ButtonID = ButtonID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionEnd.W_MissionEnd_C.RestartMission
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionEnd_C::RestartMission()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "RestartMission");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionEnd.W_MissionEnd_C.ReturnToStation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionEnd_C::ReturnToStation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "ReturnToStation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionEnd.W_MissionEnd_C.OnCreditsEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionEnd_C::OnCreditsEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "OnCreditsEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionEnd.W_MissionEnd_C.OnCreditsClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionEnd_C::OnCreditsClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "OnCreditsClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionEnd.W_MissionEnd_C.ExecuteUbergraph_W_MissionEnd
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetLevelLookupDataTable_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorld*                      CallFunc_GetWorldStatic_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentLevelNameForLookupTable_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLevelDataLookupTable       CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCommanderMode_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCommanderMode_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACoopGM*                     K2Node_DynamicCast_AsCoop_GM                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACommanderGM*                K2Node_DynamicCast_AsCommander_GM                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_OptionNameID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_ButtonID                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameMode*         K2Node_DynamicCast_AsReady_or_Not_Game_Mode                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Credits_C*                CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_RosterReview_C*           CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionEnd_C::ExecuteUbergraph_W_MissionEnd(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UDataTable* CallFunc_GetLevelLookupDataTable_ReturnValue, class UWorld* CallFunc_GetWorldStatic_ReturnValue, class FName CallFunc_GetCurrentLevelNameForLookupTable_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, const struct FLevelDataLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsCommanderMode_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsCommanderMode_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ACoopGM* K2Node_DynamicCast_AsCoop_GM, bool K2Node_DynamicCast_bSuccess, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_PageName, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class ACommanderGM* K2Node_DynamicCast_AsCommander_GM, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UWidget* CallFunc_GetFocusTarget_Focus, class FName K2Node_ComponentBoundEvent_OptionNameID, bool K2Node_SwitchName_CmpSuccess, bool K2Node_Event_IsGamepad, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, float K2Node_Event_Delay, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_2, class AReadyOrNotGameMode* K2Node_DynamicCast_AsReady_or_Not_Game_Mode, bool K2Node_DynamicCast_bSuccess_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_Credits_C* CallFunc_Create_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UW_RosterReview_C* CallFunc_Create_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionEnd_C", "ExecuteUbergraph_W_MissionEnd");

	Params::UW_MissionEnd_C_ExecuteUbergraph_W_MissionEnd_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetLevelLookupDataTable_ReturnValue = CallFunc_GetLevelLookupDataTable_ReturnValue;
	Parms.CallFunc_GetWorldStatic_ReturnValue = CallFunc_GetWorldStatic_ReturnValue;
	Parms.CallFunc_GetCurrentLevelNameForLookupTable_ReturnValue = CallFunc_GetCurrentLevelNameForLookupTable_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsCommanderMode_ReturnValue = CallFunc_IsCommanderMode_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_IsCommanderMode_ReturnValue_1 = CallFunc_IsCommanderMode_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCoop_GM = K2Node_DynamicCast_AsCoop_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCommander_GM = K2Node_DynamicCast_AsCommander_GM;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;
	Parms.K2Node_ComponentBoundEvent_OptionNameID = K2Node_ComponentBoundEvent_OptionNameID;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_ComponentBoundEvent_ButtonID = K2Node_ComponentBoundEvent_ButtonID;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetGameMode_ReturnValue_2 = CallFunc_GetGameMode_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_Mode = K2Node_DynamicCast_AsReady_or_Not_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


