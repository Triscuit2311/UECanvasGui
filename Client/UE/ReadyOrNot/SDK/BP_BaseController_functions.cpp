#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BaseController.BP_BaseController_C
// (Actor, PlayerController)

class UClass* ABP_BaseController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BaseController_C");

	return Clss;
}


// BP_BaseController_C BP_BaseController.Default__BP_BaseController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BaseController_C* ABP_BaseController_C::GetDefaultObj()
{
	static class ABP_BaseController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BaseController_C*>(ABP_BaseController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BaseController.BP_BaseController_C.GetJoystickDirection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EJoystickTypes          Stick                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   StickInput                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseController_C::GetJoystickDirection(enum class EJoystickTypes Stick, struct FVector2D* StickInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "GetJoystickDirection");

	Params::ABP_BaseController_C_GetJoystickDirection_Params Parms{};

	Parms.Stick = Stick;

	UObject::ProcessEvent(Func, &Parms);

	if (StickInput != nullptr)
		*StickInput = std::move(Parms.StickInput);

}


// Function BP_BaseController.BP_BaseController_C.HideEscapeMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BaseController_C::HideEscapeMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "HideEscapeMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseController.BP_BaseController_C.InpActEvt_Slash_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_BaseController_C::InpActEvt_Slash_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "InpActEvt_Slash_K2Node_InputKeyEvent_2");

	Params::ABP_BaseController_C_InpActEvt_Slash_K2Node_InputKeyEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BaseController.BP_BaseController_C.InpActEvt_End_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_BaseController_C::InpActEvt_End_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "InpActEvt_End_K2Node_InputKeyEvent_1");

	Params::ABP_BaseController_C_InpActEvt_End_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BaseController.BP_BaseController_C.InpActEvt_Equals_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_BaseController_C::InpActEvt_Equals_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "InpActEvt_Equals_K2Node_InputKeyEvent_0");

	Params::ABP_BaseController_C_InpActEvt_Equals_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BaseController.BP_BaseController_C.OnFailure_E5236F624136A216FC80949690426E05
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BaseController_C::OnFailure_E5236F624136A216FC80949690426E05()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "OnFailure_E5236F624136A216FC80949690426E05");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseController.BP_BaseController_C.OnSuccess_E5236F624136A216FC80949690426E05
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BaseController_C::OnSuccess_E5236F624136A216FC80949690426E05()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "OnSuccess_E5236F624136A216FC80949690426E05");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseController.BP_BaseController_C.InpActEvt_VoteYes_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_BaseController_C::InpActEvt_VoteYes_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "InpActEvt_VoteYes_K2Node_InputActionEvent_2");

	Params::ABP_BaseController_C_InpActEvt_VoteYes_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BaseController.BP_BaseController_C.InpActEvt_VoteNo_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_BaseController_C::InpActEvt_VoteNo_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "InpActEvt_VoteNo_K2Node_InputActionEvent_1");

	Params::ABP_BaseController_C_InpActEvt_VoteNo_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BaseController.BP_BaseController_C.InpActEvt_ReadyUp_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_BaseController_C::InpActEvt_ReadyUp_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "InpActEvt_ReadyUp_K2Node_InputActionEvent_0");

	Params::ABP_BaseController_C_InpActEvt_ReadyUp_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BaseController.BP_BaseController_C.Server_FreeCamera
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BaseController_C::Server_FreeCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "Server_FreeCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseController.BP_BaseController_C.SpawnEscapeMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BaseController_C::SpawnEscapeMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "SpawnEscapeMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseController.BP_BaseController_C.BP_ClientWasKicked
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        KickReason                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_BaseController_C::BP_ClientWasKicked(class FText& KickReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "BP_ClientWasKicked");

	Params::ABP_BaseController_C_BP_ClientWasKicked_Params Parms{};

	Parms.KickReason = KickReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BaseController.BP_BaseController_C.ServerPossesPawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseController_C::ServerPossesPawn(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "ServerPossesPawn");

	Params::ABP_BaseController_C_ServerPossesPawn_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BaseController.BP_BaseController_C.CloseDeployMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BaseController_C::CloseDeployMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "CloseDeployMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseController.BP_BaseController_C.ShowCoopScoreChangeWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              ScoreChangeValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseController_C::ShowCoopScoreChangeWidget(float ScoreChangeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "ShowCoopScoreChangeWidget");

	Params::ABP_BaseController_C_ShowCoopScoreChangeWidget_Params Parms{};

	Parms.ScoreChangeValue = ScoreChangeValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BaseController.BP_BaseController_C.RequestVoteInput
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVoteData                   CurrentVoteData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BaseController_C::RequestVoteInput(const struct FVoteData& CurrentVoteData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "RequestVoteInput");

	Params::ABP_BaseController_C_RequestVoteInput_Params Parms{};

	Parms.CurrentVoteData = CurrentVoteData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BaseController.BP_BaseController_C.SetUpVoteWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_VotePopUp_C*              Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseController_C::SetUpVoteWidget(class UW_VotePopUp_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "SetUpVoteWidget");

	Params::ABP_BaseController_C_SetUpVoteWidget_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BaseController.BP_BaseController_C.StopVoteInput
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_BaseController_C::StopVoteInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "StopVoteInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseController.BP_BaseController_C.SetUpVoteWidget_Gamepad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_VotePopUp_gamepad_C*      Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseController_C::SetUpVoteWidget_Gamepad(class UW_VotePopUp_gamepad_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "SetUpVoteWidget_Gamepad");

	Params::ABP_BaseController_C_SetUpVoteWidget_Gamepad_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BaseController.BP_BaseController_C.ExecuteUbergraph_BP_BaseController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_2                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// TArray<class UW_ReplayControls_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// class UW_ReplayControls_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AReadyOrNotPlayerState*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_KickReason                                          (ConstParm)
// class APawn*                       K2Node_CustomEvent_Pawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWidgetLookupData           CallFunc_GetWidgetDataFromLookupData_ReturnValue                 (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PauseMenu_C*              K2Node_DynamicCast_AsW_Pause_Menu                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// class UW_COOPScorePopUp_C*         CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ScoreChangeValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVoteData                   K2Node_Event_CurrentVoteData                                     (None)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerState*      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class UW_VotePopUp_C*              K2Node_CustomEvent_Widget_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_ReplayControls_C*         CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_VotePopUp_gamepad_C*      K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ReplayBrowser_C*          CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BaseController_C::ExecuteUbergraph_BP_BaseController(int32 EntryPoint, const struct FKey& K2Node_InputKeyEvent_Key_2, const struct FKey& K2Node_InputActionEvent_Key, int32 Temp_int_Array_Index_Variable, const struct FKey& K2Node_InputActionEvent_Key_1, TArray<class UW_ReplayControls_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, const struct FKey& K2Node_InputActionEvent_Key_2, class UW_ReplayControls_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class AReadyOrNotPlayerState*>& CallFunc_GetAllActorsOfClass_OutActors, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FText K2Node_Event_KickReason, class APawn* K2Node_CustomEvent_Pawn, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FWidgetLookupData& CallFunc_GetWidgetDataFromLookupData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUserWidget* CallFunc_Create_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UUserWidget* CallFunc_Array_Get_Item_1, class UW_PauseMenu_C* K2Node_DynamicCast_AsW_Pause_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FKey& K2Node_InputKeyEvent_Key, class UW_COOPScorePopUp_C* CallFunc_Create_ReturnValue_1, float K2Node_Event_ScoreChangeValue, const struct FVoteData& K2Node_Event_CurrentVoteData, int32 Temp_int_Array_Index_Variable_1, class AReadyOrNotPlayerState* CallFunc_Array_Get_Item_2, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UW_VotePopUp_C* K2Node_CustomEvent_Widget_1, bool CallFunc_IsValid_ReturnValue_4, class UW_ReplayControls_C* CallFunc_Create_ReturnValue_2, const struct FKey& K2Node_InputKeyEvent_Key_1, bool CallFunc_IsValid_ReturnValue_5, class UW_VotePopUp_gamepad_C* K2Node_CustomEvent_Widget, class UW_ReplayBrowser_C* CallFunc_Create_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseController_C", "ExecuteUbergraph_BP_BaseController");

	Params::ABP_BaseController_C_ExecuteUbergraph_BP_BaseController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_InputKeyEvent_Key_2 = K2Node_InputKeyEvent_Key_2;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_Event_KickReason = K2Node_Event_KickReason;
	Parms.K2Node_CustomEvent_Pawn = K2Node_CustomEvent_Pawn;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetWidgetDataFromLookupData_ReturnValue = CallFunc_GetWidgetDataFromLookupData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsW_Pause_Menu = K2Node_DynamicCast_AsW_Pause_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_Event_ScoreChangeValue = K2Node_Event_ScoreChangeValue;
	Parms.K2Node_Event_CurrentVoteData = K2Node_Event_CurrentVoteData;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_CustomEvent_Widget_1 = K2Node_CustomEvent_Widget_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.K2Node_InputKeyEvent_Key_1 = K2Node_InputKeyEvent_Key_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

}

}


