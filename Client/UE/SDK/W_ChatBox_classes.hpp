#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass W_ChatBox.W_ChatBox_C
class UW_ChatBox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                      ChatBox;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_165;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bEditingChatbox;                                   // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bTeamChat_;                                        // 0x279(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ETeamType                         ChatToTeam;                                        // 0x27A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MouseCursorAfterChat;                              // 0x27B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PreplanningChat;                                   // 0x27C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	enum class ESlateVisibility                  PostChatVisibility;                                // 0x27D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  ChatVisibility;                                    // 0x27E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F75[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRChatMessage>                 NewVar_0;                                          // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_ChatBox_C* GetDefaultObj();

	void SetInput(TArray<class UUserWidget*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUserWidget* CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UUserWidget* CallFunc_Array_Get_Item_1);
	void ShowChatBox(bool bTeamChat_, bool AnyInViewport, int32 Temp_int_Array_Index_Variable, const struct FWidgetLookupData& CallFunc_GetWidgetDataFromLookupData_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LoadHUDSettings_bShowHud, bool CallFunc_LoadHUDSettings_bCurvedHUD, bool CallFunc_LoadHUDSettings_bShowCompass, bool CallFunc_LoadHUDSettings_bShowWeaponHUD, bool CallFunc_LoadHUDSettings_bShowMagazineHUD, bool CallFunc_LoadHUDSettings_bShowChat, bool CallFunc_LoadHUDSettings_bSwayHUD, bool CallFunc_LoadHUDSettings_b2DReload, float CallFunc_LoadHUDSettings_IconScale, float CallFunc_LoadHUDSettings_QuickThrowScale, int32 CallFunc_LoadHUDSettings_FireModeDisplayOption, bool CallFunc_LoadHUDSettings_bShowPlayerNames, bool CallFunc_LoadHUDSettings_bShowButtonPrompts, bool CallFunc_LoadHUDSettings_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void Construct();
	void BndEvt__EditableTextBox_220_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void OnChatMessageReceived_Event_0(const struct FRChatMessage& Message);
	void HideChat();
	void HideChatBox();
	void UpdateHudVisibility();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_W_ChatBox(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UChatMessage_Entry_C* CallFunc_Create_ReturnValue, TArray<struct FRChatMessage>& CallFunc_RetrieveChatLog_OutMessages, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FRChatMessage& K2Node_CustomEvent_Message, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_LoadHUDSettings_bShowHud, bool CallFunc_LoadHUDSettings_bCurvedHUD, bool CallFunc_LoadHUDSettings_bShowCompass, bool CallFunc_LoadHUDSettings_bShowWeaponHUD, bool CallFunc_LoadHUDSettings_bShowMagazineHUD, bool CallFunc_LoadHUDSettings_bShowChat, bool CallFunc_LoadHUDSettings_bSwayHUD, bool CallFunc_LoadHUDSettings_b2DReload, float CallFunc_LoadHUDSettings_IconScale, float CallFunc_LoadHUDSettings_QuickThrowScale, int32 CallFunc_LoadHUDSettings_FireModeDisplayOption, bool CallFunc_LoadHUDSettings_bShowPlayerNames, bool CallFunc_LoadHUDSettings_bShowButtonPrompts, bool CallFunc_LoadHUDSettings_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LoadHUDSettings_bShowHud_1, bool CallFunc_LoadHUDSettings_bCurvedHUD_1, bool CallFunc_LoadHUDSettings_bShowCompass_1, bool CallFunc_LoadHUDSettings_bShowWeaponHUD_1, bool CallFunc_LoadHUDSettings_bShowMagazineHUD_1, bool CallFunc_LoadHUDSettings_bShowChat_1, bool CallFunc_LoadHUDSettings_bSwayHUD_1, bool CallFunc_LoadHUDSettings_b2DReload_1, float CallFunc_LoadHUDSettings_IconScale_1, float CallFunc_LoadHUDSettings_QuickThrowScale_1, int32 CallFunc_LoadHUDSettings_FireModeDisplayOption_1, bool CallFunc_LoadHUDSettings_bShowPlayerNames_1, bool CallFunc_LoadHUDSettings_bShowButtonPrompts_1, bool CallFunc_LoadHUDSettings_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_2, const struct FFocusEvent& K2Node_Event_InFocusEvent, const class FString& CallFunc_GetPlayerName_ReturnValue, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State, bool K2Node_DynamicCast_bSuccess_3, const struct FRChatMessage& K2Node_MakeStruct_RChatMessage, enum class ETeamType CallFunc_GetTeam_ReturnValue, bool CallFunc_StringIsEmpty_ReturnValue, const struct FRChatMessage& K2Node_MakeStruct_RChatMessage_1);
};

}


