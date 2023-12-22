#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UI_TestController.BP_UI_TestController_C
// (Actor, PlayerController)

class UClass* ABP_UI_TestController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UI_TestController_C");

	return Clss;
}


// BP_UI_TestController_C BP_UI_TestController.Default__BP_UI_TestController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_UI_TestController_C* ABP_UI_TestController_C::GetDefaultObj()
{
	static class ABP_UI_TestController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_UI_TestController_C*>(ABP_UI_TestController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_UI_TestController.BP_UI_TestController_C.GetJoystickDirection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EJoystickTypes          Stick                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   StickInput                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UI_TestController_C::GetJoystickDirection(enum class EJoystickTypes Stick, struct FVector2D* StickInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "GetJoystickDirection");

	Params::ABP_UI_TestController_C_GetJoystickDirection_Params Parms{};

	Parms.Stick = Stick;

	UObject::ProcessEvent(Func, &Parms);

	if (StickInput != nullptr)
		*StickInput = std::move(Parms.StickInput);

}


// Function BP_UI_TestController.BP_UI_TestController_C.HideEscapeMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UI_TestController_C::HideEscapeMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "HideEscapeMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_Equals_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_UI_TestController_C::InpActEvt_Equals_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "InpActEvt_Equals_K2Node_InputKeyEvent_3");

	Params::ABP_UI_TestController_C_InpActEvt_Equals_K2Node_InputKeyEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_Slash_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_UI_TestController_C::InpActEvt_Slash_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "InpActEvt_Slash_K2Node_InputKeyEvent_2");

	Params::ABP_UI_TestController_C_InpActEvt_Slash_K2Node_InputKeyEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_VoteYes_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_UI_TestController_C::InpActEvt_VoteYes_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "InpActEvt_VoteYes_K2Node_InputActionEvent_4");

	Params::ABP_UI_TestController_C_InpActEvt_VoteYes_K2Node_InputActionEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_VoteNo_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_UI_TestController_C::InpActEvt_VoteNo_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "InpActEvt_VoteNo_K2Node_InputActionEvent_3");

	Params::ABP_UI_TestController_C_InpActEvt_VoteNo_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_TestController.BP_UI_TestController_C.OnFailure_396BB7CB46A59B1613A2548E31963ABF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UI_TestController_C::OnFailure_396BB7CB46A59B1613A2548E31963ABF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "OnFailure_396BB7CB46A59B1613A2548E31963ABF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_TestController.BP_UI_TestController_C.OnSuccess_396BB7CB46A59B1613A2548E31963ABF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UI_TestController_C::OnSuccess_396BB7CB46A59B1613A2548E31963ABF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "OnSuccess_396BB7CB46A59B1613A2548E31963ABF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_ViewScoreboard_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_UI_TestController_C::InpActEvt_ViewScoreboard_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "InpActEvt_ViewScoreboard_K2Node_InputActionEvent_2");

	Params::ABP_UI_TestController_C_InpActEvt_ViewScoreboard_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_ViewScoreboard_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_UI_TestController_C::InpActEvt_ViewScoreboard_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "InpActEvt_ViewScoreboard_K2Node_InputActionEvent_1");

	Params::ABP_UI_TestController_C_InpActEvt_ViewScoreboard_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_End_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_UI_TestController_C::InpActEvt_End_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "InpActEvt_End_K2Node_InputKeyEvent_1");

	Params::ABP_UI_TestController_C_InpActEvt_End_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_End_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_UI_TestController_C::InpActEvt_End_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "InpActEvt_End_K2Node_InputKeyEvent_0");

	Params::ABP_UI_TestController_C_InpActEvt_End_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_TestController.BP_UI_TestController_C.InpActEvt_Chat_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_UI_TestController_C::InpActEvt_Chat_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "InpActEvt_Chat_K2Node_InputActionEvent_0");

	Params::ABP_UI_TestController_C_InpActEvt_Chat_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_TestController.BP_UI_TestController_C.ServerPossesPawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UI_TestController_C::ServerPossesPawn(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "ServerPossesPawn");

	Params::ABP_UI_TestController_C_ServerPossesPawn_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_TestController.BP_UI_TestController_C.CloseDeployMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UI_TestController_C::CloseDeployMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "CloseDeployMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_TestController.BP_UI_TestController_C.Server_FreeCamera
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UI_TestController_C::Server_FreeCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "Server_FreeCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_TestController.BP_UI_TestController_C.SpawnEscapeMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UI_TestController_C::SpawnEscapeMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "SpawnEscapeMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_TestController.BP_UI_TestController_C.ShowCoopScoreChangeWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              ScoreChangeValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UI_TestController_C::ShowCoopScoreChangeWidget(float ScoreChangeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "ShowCoopScoreChangeWidget");

	Params::ABP_UI_TestController_C_ShowCoopScoreChangeWidget_Params Parms{};

	Parms.ScoreChangeValue = ScoreChangeValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_TestController.BP_UI_TestController_C.RequestVoteInput
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVoteData                   CurrentVoteData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_TestController_C::RequestVoteInput(const struct FVoteData& CurrentVoteData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "RequestVoteInput");

	Params::ABP_UI_TestController_C_RequestVoteInput_Params Parms{};

	Parms.CurrentVoteData = CurrentVoteData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_TestController.BP_UI_TestController_C.SetUpVoteWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_VotePopUp_C*              Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UI_TestController_C::SetUpVoteWidget(class UW_VotePopUp_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "SetUpVoteWidget");

	Params::ABP_UI_TestController_C_SetUpVoteWidget_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_TestController.BP_UI_TestController_C.StopVoteInput
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_UI_TestController_C::StopVoteInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "StopVoteInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_TestController.BP_UI_TestController_C.ShowLoadoutUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UI_TestController_C::ShowLoadoutUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "ShowLoadoutUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_TestController.BP_UI_TestController_C.BP_ClientWasKicked
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        KickReason                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_UI_TestController_C::BP_ClientWasKicked(class FText& KickReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "BP_ClientWasKicked");

	Params::ABP_UI_TestController_C_BP_ClientWasKicked_Params Parms{};

	Parms.KickReason = KickReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_TestController.BP_UI_TestController_C.CloseLoadoutUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UI_TestController_C::CloseLoadoutUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "CloseLoadoutUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_TestController.BP_UI_TestController_C.ToggleCredits
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UI_TestController_C::ToggleCredits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "ToggleCredits");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_TestController.BP_UI_TestController_C.TogglePreMissionTablet
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_UI_TestController_C::TogglePreMissionTablet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "TogglePreMissionTablet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_TestController.BP_UI_TestController_C.ExecuteUbergraph_BP_UI_TestController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AReadyOrNotPlayerState*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class UW_PreMission_Tablet_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// class APawn*                       K2Node_CustomEvent_Pawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_ReplayControls_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_ReplayControls_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerState*      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Credits_C*                CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// struct FWidgetLookupData           CallFunc_GetWidgetDataFromLookupData_ReturnValue                 (None)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_COOPScorePopUp_C*         CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PauseMenu_C*              K2Node_DynamicCast_AsW_Pause_Menu                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_ScoreChangeValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVoteData                   K2Node_Event_CurrentVoteData                                     (None)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class UW_VotePopUp_C*              K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_TabScreen_C*              CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_KickReason                                          (ConstParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_3                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_4                                    (HasGetValueTypeHash)
// class UW_ReplayBrowser_C*          CallFunc_Create_ReturnValue_5                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_2                                       (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_3                                       (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// TArray<class UW_HumanCharacter_HUD_V2_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_2                     (ReferenceParm, ContainsInstancedReference)
// TArray<class UW_HumanCharacter_HUD_V2_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_3                     (ReferenceParm, ContainsInstancedReference)
// class UW_HumanCharacter_HUD_V2_C*  CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_HumanCharacter_HUD_V2_C*  CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ReplayControls_C*         CallFunc_Create_ReturnValue_6                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UI_TestController_C::ExecuteUbergraph_BP_UI_TestController(int32 EntryPoint, TArray<class AReadyOrNotPlayerState*>& CallFunc_GetAllActorsOfClass_OutActors, class UW_PreMission_Tablet_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FKey& K2Node_InputKeyEvent_Key, class APawn* K2Node_CustomEvent_Pawn, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UW_ReplayControls_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool CallFunc_IsValid_ReturnValue, class UW_ReplayControls_C* CallFunc_Array_Get_Item, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue_2, class AReadyOrNotPlayerState* CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UW_Credits_C* CallFunc_Create_ReturnValue_1, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FWidgetLookupData& CallFunc_GetWidgetDataFromLookupData_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UUserWidget* CallFunc_Create_ReturnValue_2, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UUserWidget* CallFunc_Array_Get_Item_2, class UW_COOPScorePopUp_C* CallFunc_Create_ReturnValue_3, class UW_PauseMenu_C* K2Node_DynamicCast_AsW_Pause_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsVisible_ReturnValue, float K2Node_Event_ScoreChangeValue, const struct FVoteData& K2Node_Event_CurrentVoteData, const struct FKey& K2Node_InputActionEvent_Key_2, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UW_VotePopUp_C* K2Node_CustomEvent_Widget, bool CallFunc_IsValid_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, class UW_TabScreen_C* CallFunc_Create_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_8, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FText K2Node_Event_KickReason, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FKey& K2Node_InputActionEvent_Key_3, const struct FKey& K2Node_InputActionEvent_Key_4, class UW_ReplayBrowser_C* CallFunc_Create_ReturnValue_5, const struct FKey& K2Node_InputKeyEvent_Key_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, const struct FKey& K2Node_InputKeyEvent_Key_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, const struct FKey& K2Node_InputActionEvent_Key, TArray<class UW_HumanCharacter_HUD_V2_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, TArray<class UW_HumanCharacter_HUD_V2_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_3, class UW_HumanCharacter_HUD_V2_C* CallFunc_Array_Get_Item_3, class UW_HumanCharacter_HUD_V2_C* CallFunc_Array_Get_Item_4, class UW_ReplayControls_C* CallFunc_Create_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_TestController_C", "ExecuteUbergraph_BP_UI_TestController");

	Params::ABP_UI_TestController_C_ExecuteUbergraph_BP_UI_TestController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.K2Node_CustomEvent_Pawn = K2Node_CustomEvent_Pawn;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_InputKeyEvent_Key_1 = K2Node_InputKeyEvent_Key_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.CallFunc_GetWidgetDataFromLookupData_ReturnValue = CallFunc_GetWidgetDataFromLookupData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsW_Pause_Menu = K2Node_DynamicCast_AsW_Pause_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_Event_ScoreChangeValue = K2Node_Event_ScoreChangeValue;
	Parms.K2Node_Event_CurrentVoteData = K2Node_Event_CurrentVoteData;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_Event_KickReason = K2Node_Event_KickReason;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;
	Parms.K2Node_InputActionEvent_Key_4 = K2Node_InputActionEvent_Key_4;
	Parms.CallFunc_Create_ReturnValue_5 = CallFunc_Create_ReturnValue_5;
	Parms.K2Node_InputKeyEvent_Key_2 = K2Node_InputKeyEvent_Key_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_InputKeyEvent_Key_3 = K2Node_InputKeyEvent_Key_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_2 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_3 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Create_ReturnValue_6 = CallFunc_Create_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


