#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ChatBox.W_ChatBox_C
// (None)

class UClass* UW_ChatBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ChatBox_C");

	return Clss;
}


// W_ChatBox_C W_ChatBox.Default__W_ChatBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ChatBox_C* UW_ChatBox_C::GetDefaultObj()
{
	static class UW_ChatBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ChatBox_C*>(UW_ChatBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ChatBox.W_ChatBox_C.SetInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ChatBox_C::SetInput(TArray<class UUserWidget*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUserWidget* CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UUserWidget* CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatBox_C", "SetInput");

	Params::UW_ChatBox_C_SetInput_Params Parms{};

	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ChatBox.W_ChatBox_C.ShowChatBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bTeamChat_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AnyInViewport                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWidgetLookupData           CallFunc_GetWidgetDataFromLookupData_ReturnValue                 (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadHUDSettings_bShowHud                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bCurvedHUD                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowCompass                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowWeaponHUD                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowMagazineHUD                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowChat                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bSwayHUD                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_b2DReload                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_LoadHUDSettings_IconScale                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadHUDSettings_QuickThrowScale                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadHUDSettings_FireModeDisplayOption                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadHUDSettings_bShowPlayerNames                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowButtonPrompts                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ChatBox_C::ShowChatBox(bool bTeamChat_, bool AnyInViewport, int32 Temp_int_Array_Index_Variable, const struct FWidgetLookupData& CallFunc_GetWidgetDataFromLookupData_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LoadHUDSettings_bShowHud, bool CallFunc_LoadHUDSettings_bCurvedHUD, bool CallFunc_LoadHUDSettings_bShowCompass, bool CallFunc_LoadHUDSettings_bShowWeaponHUD, bool CallFunc_LoadHUDSettings_bShowMagazineHUD, bool CallFunc_LoadHUDSettings_bShowChat, bool CallFunc_LoadHUDSettings_bSwayHUD, bool CallFunc_LoadHUDSettings_b2DReload, float CallFunc_LoadHUDSettings_IconScale, float CallFunc_LoadHUDSettings_QuickThrowScale, int32 CallFunc_LoadHUDSettings_FireModeDisplayOption, bool CallFunc_LoadHUDSettings_bShowPlayerNames, bool CallFunc_LoadHUDSettings_bShowButtonPrompts, bool CallFunc_LoadHUDSettings_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatBox_C", "ShowChatBox");

	Params::UW_ChatBox_C_ShowChatBox_Params Parms{};

	Parms.bTeamChat_ = bTeamChat_;
	Parms.AnyInViewport = AnyInViewport;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetWidgetDataFromLookupData_ReturnValue = CallFunc_GetWidgetDataFromLookupData_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LoadHUDSettings_bShowHud = CallFunc_LoadHUDSettings_bShowHud;
	Parms.CallFunc_LoadHUDSettings_bCurvedHUD = CallFunc_LoadHUDSettings_bCurvedHUD;
	Parms.CallFunc_LoadHUDSettings_bShowCompass = CallFunc_LoadHUDSettings_bShowCompass;
	Parms.CallFunc_LoadHUDSettings_bShowWeaponHUD = CallFunc_LoadHUDSettings_bShowWeaponHUD;
	Parms.CallFunc_LoadHUDSettings_bShowMagazineHUD = CallFunc_LoadHUDSettings_bShowMagazineHUD;
	Parms.CallFunc_LoadHUDSettings_bShowChat = CallFunc_LoadHUDSettings_bShowChat;
	Parms.CallFunc_LoadHUDSettings_bSwayHUD = CallFunc_LoadHUDSettings_bSwayHUD;
	Parms.CallFunc_LoadHUDSettings_b2DReload = CallFunc_LoadHUDSettings_b2DReload;
	Parms.CallFunc_LoadHUDSettings_IconScale = CallFunc_LoadHUDSettings_IconScale;
	Parms.CallFunc_LoadHUDSettings_QuickThrowScale = CallFunc_LoadHUDSettings_QuickThrowScale;
	Parms.CallFunc_LoadHUDSettings_FireModeDisplayOption = CallFunc_LoadHUDSettings_FireModeDisplayOption;
	Parms.CallFunc_LoadHUDSettings_bShowPlayerNames = CallFunc_LoadHUDSettings_bShowPlayerNames;
	Parms.CallFunc_LoadHUDSettings_bShowButtonPrompts = CallFunc_LoadHUDSettings_bShowButtonPrompts;
	Parms.CallFunc_LoadHUDSettings_ReturnValue = CallFunc_LoadHUDSettings_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ChatBox.W_ChatBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ChatBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatBox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ChatBox.W_ChatBox_C.BndEvt__EditableTextBox_220_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ChatBox_C::BndEvt__EditableTextBox_220_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatBox_C", "BndEvt__EditableTextBox_220_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UW_ChatBox_C_BndEvt__EditableTextBox_220_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ChatBox.W_ChatBox_C.OnChatMessageReceived_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRChatMessage               Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ChatBox_C::OnChatMessageReceived_Event_0(const struct FRChatMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatBox_C", "OnChatMessageReceived_Event_0");

	Params::UW_ChatBox_C_OnChatMessageReceived_Event_0_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ChatBox.W_ChatBox_C.HideChat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ChatBox_C::HideChat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatBox_C", "HideChat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ChatBox.W_ChatBox_C.HideChatBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ChatBox_C::HideChatBox()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatBox_C", "HideChatBox");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ChatBox.W_ChatBox_C.UpdateHudVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ChatBox_C::UpdateHudVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatBox_C", "UpdateHudVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ChatBox.W_ChatBox_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_ChatBox_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatBox_C", "OnFocusLost");

	Params::UW_ChatBox_C_OnFocusLost_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ChatBox.W_ChatBox_C.ExecuteUbergraph_W_ChatBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChatMessage_Entry_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FRChatMessage>       CallFunc_RetrieveChatLog_OutMessages                             (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRChatMessage               K2Node_CustomEvent_Message                                       (None)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadHUDSettings_bShowHud                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bCurvedHUD                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowCompass                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowWeaponHUD                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowMagazineHUD                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowChat                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bSwayHUD                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_b2DReload                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_LoadHUDSettings_IconScale                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadHUDSettings_QuickThrowScale                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadHUDSettings_FireModeDisplayOption                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadHUDSettings_bShowPlayerNames                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowButtonPrompts                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowHud_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bCurvedHUD_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowCompass_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowWeaponHUD_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowMagazineHUD_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowChat_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bSwayHUD_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_b2DReload_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_LoadHUDSettings_IconScale_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadHUDSettings_QuickThrowScale_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadHUDSettings_FireModeDisplayOption_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadHUDSettings_bShowPlayerNames_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowButtonPrompts_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerState*      K2Node_DynamicCast_AsReady_or_Not_Player_State                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRChatMessage               K2Node_MakeStruct_RChatMessage                                   (None)
// enum class ETeamType               CallFunc_GetTeam_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StringIsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRChatMessage               K2Node_MakeStruct_RChatMessage_1                                 (None)

void UW_ChatBox_C::ExecuteUbergraph_W_ChatBox(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UChatMessage_Entry_C* CallFunc_Create_ReturnValue, TArray<struct FRChatMessage>& CallFunc_RetrieveChatLog_OutMessages, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FRChatMessage& K2Node_CustomEvent_Message, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_LoadHUDSettings_bShowHud, bool CallFunc_LoadHUDSettings_bCurvedHUD, bool CallFunc_LoadHUDSettings_bShowCompass, bool CallFunc_LoadHUDSettings_bShowWeaponHUD, bool CallFunc_LoadHUDSettings_bShowMagazineHUD, bool CallFunc_LoadHUDSettings_bShowChat, bool CallFunc_LoadHUDSettings_bSwayHUD, bool CallFunc_LoadHUDSettings_b2DReload, float CallFunc_LoadHUDSettings_IconScale, float CallFunc_LoadHUDSettings_QuickThrowScale, int32 CallFunc_LoadHUDSettings_FireModeDisplayOption, bool CallFunc_LoadHUDSettings_bShowPlayerNames, bool CallFunc_LoadHUDSettings_bShowButtonPrompts, bool CallFunc_LoadHUDSettings_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LoadHUDSettings_bShowHud_1, bool CallFunc_LoadHUDSettings_bCurvedHUD_1, bool CallFunc_LoadHUDSettings_bShowCompass_1, bool CallFunc_LoadHUDSettings_bShowWeaponHUD_1, bool CallFunc_LoadHUDSettings_bShowMagazineHUD_1, bool CallFunc_LoadHUDSettings_bShowChat_1, bool CallFunc_LoadHUDSettings_bSwayHUD_1, bool CallFunc_LoadHUDSettings_b2DReload_1, float CallFunc_LoadHUDSettings_IconScale_1, float CallFunc_LoadHUDSettings_QuickThrowScale_1, int32 CallFunc_LoadHUDSettings_FireModeDisplayOption_1, bool CallFunc_LoadHUDSettings_bShowPlayerNames_1, bool CallFunc_LoadHUDSettings_bShowButtonPrompts_1, bool CallFunc_LoadHUDSettings_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_2, const struct FFocusEvent& K2Node_Event_InFocusEvent, const class FString& CallFunc_GetPlayerName_ReturnValue, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State, bool K2Node_DynamicCast_bSuccess_3, const struct FRChatMessage& K2Node_MakeStruct_RChatMessage, enum class ETeamType CallFunc_GetTeam_ReturnValue, bool CallFunc_StringIsEmpty_ReturnValue, const struct FRChatMessage& K2Node_MakeStruct_RChatMessage_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatBox_C", "ExecuteUbergraph_W_ChatBox");

	Params::UW_ChatBox_C_ExecuteUbergraph_W_ChatBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_RetrieveChatLog_OutMessages = CallFunc_RetrieveChatLog_OutMessages;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State = K2Node_DynamicCast_AsReady_or_Not_Game_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_LoadHUDSettings_bShowHud = CallFunc_LoadHUDSettings_bShowHud;
	Parms.CallFunc_LoadHUDSettings_bCurvedHUD = CallFunc_LoadHUDSettings_bCurvedHUD;
	Parms.CallFunc_LoadHUDSettings_bShowCompass = CallFunc_LoadHUDSettings_bShowCompass;
	Parms.CallFunc_LoadHUDSettings_bShowWeaponHUD = CallFunc_LoadHUDSettings_bShowWeaponHUD;
	Parms.CallFunc_LoadHUDSettings_bShowMagazineHUD = CallFunc_LoadHUDSettings_bShowMagazineHUD;
	Parms.CallFunc_LoadHUDSettings_bShowChat = CallFunc_LoadHUDSettings_bShowChat;
	Parms.CallFunc_LoadHUDSettings_bSwayHUD = CallFunc_LoadHUDSettings_bSwayHUD;
	Parms.CallFunc_LoadHUDSettings_b2DReload = CallFunc_LoadHUDSettings_b2DReload;
	Parms.CallFunc_LoadHUDSettings_IconScale = CallFunc_LoadHUDSettings_IconScale;
	Parms.CallFunc_LoadHUDSettings_QuickThrowScale = CallFunc_LoadHUDSettings_QuickThrowScale;
	Parms.CallFunc_LoadHUDSettings_FireModeDisplayOption = CallFunc_LoadHUDSettings_FireModeDisplayOption;
	Parms.CallFunc_LoadHUDSettings_bShowPlayerNames = CallFunc_LoadHUDSettings_bShowPlayerNames;
	Parms.CallFunc_LoadHUDSettings_bShowButtonPrompts = CallFunc_LoadHUDSettings_bShowButtonPrompts;
	Parms.CallFunc_LoadHUDSettings_ReturnValue = CallFunc_LoadHUDSettings_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_LoadHUDSettings_bShowHud_1 = CallFunc_LoadHUDSettings_bShowHud_1;
	Parms.CallFunc_LoadHUDSettings_bCurvedHUD_1 = CallFunc_LoadHUDSettings_bCurvedHUD_1;
	Parms.CallFunc_LoadHUDSettings_bShowCompass_1 = CallFunc_LoadHUDSettings_bShowCompass_1;
	Parms.CallFunc_LoadHUDSettings_bShowWeaponHUD_1 = CallFunc_LoadHUDSettings_bShowWeaponHUD_1;
	Parms.CallFunc_LoadHUDSettings_bShowMagazineHUD_1 = CallFunc_LoadHUDSettings_bShowMagazineHUD_1;
	Parms.CallFunc_LoadHUDSettings_bShowChat_1 = CallFunc_LoadHUDSettings_bShowChat_1;
	Parms.CallFunc_LoadHUDSettings_bSwayHUD_1 = CallFunc_LoadHUDSettings_bSwayHUD_1;
	Parms.CallFunc_LoadHUDSettings_b2DReload_1 = CallFunc_LoadHUDSettings_b2DReload_1;
	Parms.CallFunc_LoadHUDSettings_IconScale_1 = CallFunc_LoadHUDSettings_IconScale_1;
	Parms.CallFunc_LoadHUDSettings_QuickThrowScale_1 = CallFunc_LoadHUDSettings_QuickThrowScale_1;
	Parms.CallFunc_LoadHUDSettings_FireModeDisplayOption_1 = CallFunc_LoadHUDSettings_FireModeDisplayOption_1;
	Parms.CallFunc_LoadHUDSettings_bShowPlayerNames_1 = CallFunc_LoadHUDSettings_bShowPlayerNames_1;
	Parms.CallFunc_LoadHUDSettings_bShowButtonPrompts_1 = CallFunc_LoadHUDSettings_bShowButtonPrompts_1;
	Parms.CallFunc_LoadHUDSettings_ReturnValue_1 = CallFunc_LoadHUDSettings_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1 = K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_State = K2Node_DynamicCast_AsReady_or_Not_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_MakeStruct_RChatMessage = K2Node_MakeStruct_RChatMessage;
	Parms.CallFunc_GetTeam_ReturnValue = CallFunc_GetTeam_ReturnValue;
	Parms.CallFunc_StringIsEmpty_ReturnValue = CallFunc_StringIsEmpty_ReturnValue;
	Parms.K2Node_MakeStruct_RChatMessage_1 = K2Node_MakeStruct_RChatMessage_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


