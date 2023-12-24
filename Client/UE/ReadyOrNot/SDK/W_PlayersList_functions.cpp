#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PlayersList.W_PlayersList_C
// (None)

class UClass* UW_PlayersList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PlayersList_C");

	return Clss;
}


// W_PlayersList_C W_PlayersList.Default__W_PlayersList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PlayersList_C* UW_PlayersList_C::GetDefaultObj()
{
	static class UW_PlayersList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PlayersList_C*>(UW_PlayersList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PlayersList.W_PlayersList_C.Create Player Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           OwningPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLobbyPlayer                Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UW_PlayersList_Entry_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_C::Create_Player_Item(class APlayerController* OwningPlayer, const struct FLobbyPlayer& Player, class UW_PlayersList_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_C", "Create Player Item");

	Params::UW_PlayersList_C_Create_Player_Item_Params Parms{};

	Parms.OwningPlayer = OwningPlayer;
	Parms.Player = Player;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList.W_PlayersList_C.Toggle Mute Player
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLobbyPlayer                LobbyPlayer                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PlayersList_C::Toggle_Mute_Player(const struct FLobbyPlayer& LobbyPlayer, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_C", "Toggle Mute Player");

	Params::UW_PlayersList_C_Toggle_Mute_Player_Params Parms{};

	Parms.LobbyPlayer = LobbyPlayer;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList.W_PlayersList_C.KickPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLobbyPlayer                LobbyPlayer                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class APlayerState*                CallFunc_GetPlayerStateFromUniqueId_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_FindTextInLocalizationTable_OutText                     (None)
// bool                               CallFunc_FindTextInLocalizationTable_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_C::KickPlayer(const struct FLobbyPlayer& LobbyPlayer, class APlayerState* CallFunc_GetPlayerStateFromUniqueId_ReturnValue, class FText CallFunc_FindTextInLocalizationTable_OutText, bool CallFunc_FindTextInLocalizationTable_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_C", "KickPlayer");

	Params::UW_PlayersList_C_KickPlayer_Params Parms{};

	Parms.LobbyPlayer = LobbyPlayer;
	Parms.CallFunc_GetPlayerStateFromUniqueId_ReturnValue = CallFunc_GetPlayerStateFromUniqueId_ReturnValue;
	Parms.CallFunc_FindTextInLocalizationTable_OutText = CallFunc_FindTextInLocalizationTable_OutText;
	Parms.CallFunc_FindTextInLocalizationTable_ReturnValue = CallFunc_FindTextInLocalizationTable_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList.W_PlayersList_C.GetSelectedPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PlayersList_C::GetSelectedPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_C", "GetSelectedPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlayersList.W_PlayersList_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UW_PlayersList_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_C", "BP_GetDesiredFocusTarget");

	Params::UW_PlayersList_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PlayersList.W_PlayersList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PlayersList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlayersList.W_PlayersList_C.OnSuccess_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PlayersList_C::OnSuccess_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_C", "OnSuccess_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlayersList.W_PlayersList_C.OnFailure_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PlayersList_C::OnFailure_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_C", "OnFailure_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlayersList.W_PlayersList_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PlayersList_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlayersList.W_PlayersList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PlayersList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_C", "PreConstruct");

	Params::UW_PlayersList_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList.W_PlayersList_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_PlayersList_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_C", "OnFocusLost");

	Params::UW_PlayersList_C_OnFocusLost_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList.W_PlayersList_C.OnMuteStateDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PlayersList_C::OnMuteStateDelegate_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_C", "OnMuteStateDelegate_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlayersList.W_PlayersList_C.BndEvt__W_PlayersList_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_C::BndEvt__W_PlayersList_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_C", "BndEvt__W_PlayersList_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UW_PlayersList_C_BndEvt__W_PlayersList_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList.W_PlayersList_C.BndEvt__W_PlayersList_W_Button_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_C::BndEvt__W_PlayersList_W_Button_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_C", "BndEvt__W_PlayersList_W_Button_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature");

	Params::UW_PlayersList_C_BndEvt__W_PlayersList_W_Button_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList.W_PlayersList_C.ExecuteUbergraph_W_PlayersList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FLobbyPlayer                K2Node_MakeStruct_LobbyPlayer                                    (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBlueprintResultSwitch  CallFunc_ShowInviteUI_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLobbyPlayer                CallFunc_Array_Get_Item                                          (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_C::ExecuteUbergraph_W_PlayersList(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Variable, bool K2Node_Event_IsDesignTime, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FLobbyPlayer& K2Node_MakeStruct_LobbyPlayer, int32 CallFunc_Add_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, enum class EBlueprintResultSwitch CallFunc_ShowInviteUI_Result, const struct FLobbyPlayer& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FFocusEvent& K2Node_Event_InFocusEvent, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_C", "ExecuteUbergraph_W_PlayersList");

	Params::UW_PlayersList_C_ExecuteUbergraph_W_PlayersList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_MakeStruct_LobbyPlayer = K2Node_MakeStruct_LobbyPlayer;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_ShowInviteUI_Result = CallFunc_ShowInviteUI_Result;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList.W_PlayersList_C.FocusedPlayerCallback__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PlayersList_C::FocusedPlayerCallback__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_C", "FocusedPlayerCallback__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


