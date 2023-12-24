#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C
// (None)

class UClass* UW_PreMission_Tablet_Messenger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PreMission_Tablet_Messenger_C");

	return Clss;
}


// W_PreMission_Tablet_Messenger_C W_PreMission_Tablet_Messenger.Default__W_PreMission_Tablet_Messenger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PreMission_Tablet_Messenger_C* UW_PreMission_Tablet_Messenger_C::GetDefaultObj()
{
	static class UW_PreMission_Tablet_Messenger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PreMission_Tablet_Messenger_C*>(UW_PreMission_Tablet_Messenger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FInputEvent                 CallFunc_GetInputEventFromKeyEvent_ReturnValue                   (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_InputEvent_IsShiftDown_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_TextTrimTrailing_ReturnValue                            (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_PreMission_Tablet_Messenger_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FInputEvent& CallFunc_GetInputEventFromKeyEvent_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_InputEvent_IsShiftDown_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, class FText CallFunc_GetText_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_TextTrimTrailing_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "OnPreviewKeyDown");

	Params::UW_PreMission_Tablet_Messenger_C_OnPreviewKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetInputEventFromKeyEvent_ReturnValue = CallFunc_GetInputEventFromKeyEvent_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_InputEvent_IsShiftDown_ReturnValue = CallFunc_InputEvent_IsShiftDown_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_TextTrimTrailing_ReturnValue = CallFunc_TextTrimTrailing_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.GetIsSelf
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AReadyOrNotPlayerState*      PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSelf                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorld*                      CallFunc_GetWorldBP_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerState*      CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Messenger_C::GetIsSelf(class AReadyOrNotPlayerState* PlayerState, bool* IsSelf, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UWorld* CallFunc_GetWorldBP_ReturnValue, class AReadyOrNotPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "GetIsSelf");

	Params::UW_PreMission_Tablet_Messenger_C_GetIsSelf_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetWorldBP_ReturnValue = CallFunc_GetWorldBP_ReturnValue;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSelf != nullptr)
		*IsSelf = Parms.IsSelf;

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.OpenMessenger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FocusChatBox                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Messenger_C::OpenMessenger(bool FocusChatBox, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "OpenMessenger");

	Params::UW_PreMission_Tablet_Messenger_C_OpenMessenger_Params Parms{};

	Parms.FocusChatBox = FocusChatBox;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.SendMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        MessageText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerState*      K2Node_DynamicCast_AsReady_or_Not_Player_State                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlayerName_PlayerName                                (ZeroConstructor, HasGetValueTypeHash)
// struct FRChatMessage               K2Node_MakeStruct_RChatMessage                                   (None)

void UW_PreMission_Tablet_Messenger_C::SendMessage(class FText MessageText, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPlayerName_PlayerName, const struct FRChatMessage& K2Node_MakeStruct_RChatMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "SendMessage");

	Params::UW_PreMission_Tablet_Messenger_C_SendMessage_Params Parms{};

	Parms.MessageText = MessageText;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue_1 = CallFunc_GetReadyOrNotPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_State = K2Node_DynamicCast_AsReady_or_Not_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerName_PlayerName = CallFunc_GetPlayerName_PlayerName;
	Parms.K2Node_MakeStruct_RChatMessage = K2Node_MakeStruct_RChatMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.AddChatMessage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRChatMessage               Message                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UW_PreMission_Tablet_MessengerMessage_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWorldTearingDown_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Messenger_C::AddChatMessage(struct FRChatMessage& Message, class UW_PreMission_Tablet_MessengerMessage_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsWorldTearingDown_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "AddChatMessage");

	Params::UW_PreMission_Tablet_Messenger_C_AddChatMessage_Params Parms{};

	Parms.Message = Message;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsWorldTearingDown_ReturnValue = CallFunc_IsWorldTearingDown_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.PopulateChatHistory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FRChatMessage>       CallFunc_RetrieveChatLog_OutMessages                             (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRChatMessage               CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Messenger_C::PopulateChatHistory(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, TArray<struct FRChatMessage>& CallFunc_RetrieveChatLog_OutMessages, int32 CallFunc_Array_Length_ReturnValue, const struct FRChatMessage& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "PopulateChatHistory");

	Params::UW_PreMission_Tablet_Messenger_C_PopulateChatHistory_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RetrieveChatLog_OutMessages = CallFunc_RetrieveChatLog_OutMessages;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Messenger_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "PreConstruct");

	Params::UW_PreMission_Tablet_Messenger_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Messenger_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.CloseMessenger
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Messenger_C::CloseMessenger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "CloseMessenger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.NewMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRChatMessage               Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PreMission_Tablet_Messenger_C::NewMessage(const struct FRChatMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "NewMessage");

	Params::UW_PreMission_Tablet_Messenger_C_NewMessage_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.HideToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Messenger_C::HideToast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "HideToast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.BndEvt__W_PreMission_Tablet_Messenger_btn_Messenger_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Messenger_C::BndEvt__W_PreMission_Tablet_Messenger_btn_Messenger_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "BndEvt__W_PreMission_Tablet_Messenger_btn_Messenger_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_PreMission_Tablet_Messenger_C_BndEvt__W_PreMission_Tablet_Messenger_btn_Messenger_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.BndEvt__W_PreMission_Tablet_Messenger_ChatEntryBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Messenger_C::BndEvt__W_PreMission_Tablet_Messenger_ChatEntryBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "BndEvt__W_PreMission_Tablet_Messenger_ChatEntryBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UW_PreMission_Tablet_Messenger_C_BndEvt__W_PreMission_Tablet_Messenger_ChatEntryBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.BndEvt__W_PreMission_Tablet_Messenger_btn_SendMessage_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Messenger_C::BndEvt__W_PreMission_Tablet_Messenger_btn_SendMessage_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "BndEvt__W_PreMission_Tablet_Messenger_btn_SendMessage_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UW_PreMission_Tablet_Messenger_C_BndEvt__W_PreMission_Tablet_Messenger_btn_SendMessage_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.BndEvt__W_PreMission_Tablet_Messenger_ChatEntryBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_PreMission_Tablet_Messenger_C::BndEvt__W_PreMission_Tablet_Messenger_ChatEntryBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "BndEvt__W_PreMission_Tablet_Messenger_ChatEntryBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	Params::UW_PreMission_Tablet_Messenger_C_BndEvt__W_PreMission_Tablet_Messenger_ChatEntryBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.BndEvt__W_PreMission_Tablet_Messenger_btn_Messenger_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Messenger_C::BndEvt__W_PreMission_Tablet_Messenger_btn_Messenger_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "BndEvt__W_PreMission_Tablet_Messenger_btn_Messenger_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature");

	Params::UW_PreMission_Tablet_Messenger_C_BndEvt__W_PreMission_Tablet_Messenger_btn_Messenger_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Messenger_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Messenger_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "Tick");

	Params::UW_PreMission_Tablet_Messenger_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.OnInputChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Messenger_C::OnInputChange(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "OnInputChange");

	Params::UW_PreMission_Tablet_Messenger_C_OnInputChange_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.ExecuteUbergraph_W_PreMission_Tablet_Messenger
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODEvent*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRChatMessage               K2Node_CustomEvent_Message                                       (None)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationTimeRange_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EndsWith_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsSelf_IsSelf                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WasInputKeyJustPressed_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UFMODEvent*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Messenger_C::ExecuteUbergraph_W_PreMission_Tablet_Messenger(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UFMODEvent* Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_Event_IsDesignTime, class UFMODEvent* Temp_object_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool Temp_bool_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FRChatMessage& K2Node_CustomEvent_Message, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UFMODEvent* Temp_object_Variable_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, float CallFunc_GetEndTime_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue, class UFMODEvent* Temp_object_Variable_3, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class FText CallFunc_GetText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText K2Node_ComponentBoundEvent_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EndsWith_ReturnValue, bool CallFunc_GetIsSelf_IsSelf, bool CallFunc_BooleanAND_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UFMODEvent* K2Node_Select_Default, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, bool CallFunc_WasInputKeyJustPressed_ReturnValue, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFMODEvent* K2Node_Select_Default_1, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "ExecuteUbergraph_W_PreMission_Tablet_Messenger");

	Params::UW_PreMission_Tablet_Messenger_C_ExecuteUbergraph_W_PreMission_Tablet_Messenger_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State = K2Node_DynamicCast_AsReady_or_Not_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_PlayAnimationTimeRange_ReturnValue = CallFunc_PlayAnimationTimeRange_ReturnValue;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_EndsWith_ReturnValue = CallFunc_EndsWith_ReturnValue;
	Parms.CallFunc_GetIsSelf_IsSelf = CallFunc_GetIsSelf_IsSelf;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_WasInputKeyJustPressed_ReturnValue = CallFunc_WasInputKeyJustPressed_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.OnMessengerOpen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Messenger_C::OnMessengerOpen__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "OnMessengerOpen__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C.OnMessengerClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Messenger_C::OnMessengerClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Messenger_C", "OnMessengerClose__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


