#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A1 (0x401 - 0x260)
// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Messenger.W_PreMission_Tablet_Messenger_C
class UW_PreMission_Tablet_Messenger_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimToast;                                         // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimClose;                                         // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Messenger;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_SendMessage;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ChatEntry;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableTextBox*             ChatEntryBox;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icn_messenger;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icn_Send;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_44;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               MessageButton;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Scroll_Messages;                                   // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Message;                                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_MessageCount;                                  // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_SenderName;                                    // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Messages;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        MessageCount;                                      // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MessengerOpen;                                     // 0x2E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3901[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRChatMessage                         Message;                                           // 0x2E8(0x68)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        UnreadMessageCount;                                // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasUnreadMessages;                                 // 0x354(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ToastHidden;                                       // 0x355(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3906[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMessengerClose;                                  // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMessengerOpen;                                   // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        MessageSpacing;                                    // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_390B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_PreMission_Tablet_MessengerMessage_C* LastMessage;                                       // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SameSender;                                        // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FirstMessage;                                      // 0x389(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_390C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            MessageIcon;                                       // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            UnreadMessageIcon;                                 // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          UnreadMessageButtonColor;                          // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          MessageButtonColor;                                // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          OpenButtonColor;                                   // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UserScrolled;                                      // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3914[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          ToastTimer;                                        // 0x3D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IgnoreNextTextChange;                              // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3917[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CachedText;                                        // 0x3E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsUsingGamepad;                                    // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_PreMission_Tablet_Messenger_C* GetDefaultObj();

	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FInputEvent& CallFunc_GetInputEventFromKeyEvent_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_InputEvent_IsShiftDown_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, class FText CallFunc_GetText_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_TextTrimTrailing_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void GetIsSelf(class AReadyOrNotPlayerState* PlayerState, bool* IsSelf, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UWorld* CallFunc_GetWorldBP_ReturnValue, class AReadyOrNotPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OpenMessenger(bool FocusChatBox, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void SendMessage(class FText MessageText, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPlayerName_PlayerName, const struct FRChatMessage& K2Node_MakeStruct_RChatMessage);
	void AddChatMessage(struct FRChatMessage& Message, class UW_PreMission_Tablet_MessengerMessage_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsWorldTearingDown_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void PopulateChatHistory(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, TArray<struct FRChatMessage>& CallFunc_RetrieveChatLog_OutMessages, int32 CallFunc_Array_Length_ReturnValue, const struct FRChatMessage& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void CloseMessenger();
	void NewMessage(const struct FRChatMessage& Message);
	void HideToast();
	void BndEvt__W_PreMission_Tablet_Messenger_btn_Messenger_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_PreMission_Tablet_Messenger_ChatEntryBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__W_PreMission_Tablet_Messenger_btn_SendMessage_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_PreMission_Tablet_Messenger_ChatEntryBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__W_PreMission_Tablet_Messenger_btn_Messenger_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature(class UW_Button_C* Button);
	void OnInitialized();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInputChange(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_W_PreMission_Tablet_Messenger(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UFMODEvent* Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_Event_IsDesignTime, class UFMODEvent* Temp_object_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool Temp_bool_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FRChatMessage& K2Node_CustomEvent_Message, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UFMODEvent* Temp_object_Variable_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, float CallFunc_GetEndTime_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue, class UFMODEvent* Temp_object_Variable_3, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class FText CallFunc_GetText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText K2Node_ComponentBoundEvent_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EndsWith_ReturnValue, bool CallFunc_GetIsSelf_IsSelf, bool CallFunc_BooleanAND_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UFMODEvent* K2Node_Select_Default, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, bool CallFunc_WasInputKeyJustPressed_ReturnValue, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFMODEvent* K2Node_Select_Default_1, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnMessengerOpen__DelegateSignature();
	void OnMessengerClose__DelegateSignature();
};

}


