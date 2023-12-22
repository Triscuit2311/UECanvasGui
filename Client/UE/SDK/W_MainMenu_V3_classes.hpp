#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x468 - 0x3B0)
// WidgetBlueprintGeneratedClass W_MainMenu_V3.W_MainMenu_V3_C
class UW_MainMenu_V3_C : public UMainMenu_V3
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeIn;                                            // 0x3B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                CancelIcon;                                        // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainMenu_SubButton_V3_C*            CommanderButton;                                   // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainMenu_LargeButton_V3_C*          ContinueButton;                                    // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainMenu_SmallButton_V4_C*          CreditsButton;                                     // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainMenu_SmallButton_V4_C*          ExitGameButton;                                    // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_FindingGame_C*                      FindingGame;                                       // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainMenu_SubButton_V3_C*            FriendsLobbyButton;                                // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainMenu_SmallButton_V4_C*          ModsButton;                                        // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MultiPlayerAccordion;                              // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainMenu_LargeButton_V3_C*          MultiPlayerButton;                                 // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainMenu_SubButton_V3_C*            PracticeButton;                                    // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainMenu_SubButton_V3_C*            PublicFindButton;                                  // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainMenu_SubButton_V3_C*            PublicLobbyButton;                                 // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainMenu_SmallButton_V4_C*          ReplayButton;                                      // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainMenu_SmallButton_V4_C*          SettingsButton;                                    // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SinglePlayerAccordion;                             // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainMenu_LargeButton_V3_C*          SinglePlayerButton;                                // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainMenu_SubButton_V3_C*            TrainingButton;                                    // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ModioClicked;                                      // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UW_MainMenu_Overlay_C*                 MainMenuOverlay;                                   // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_MainMenu_V3_C* GetDefaultObj();

	void Initialize_Mod_Installing_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FVector2D& Temp_struct_Variable);
	void Set_Safe_Mode_Text_Visibility(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UReadyOrNotGameInstance* CallFunc_GetRONGameInstance_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsSafeMode_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetWidgetsFromViewport_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UW_PermanentOverlay_C* K2Node_DynamicCast_AsW_Permanent_Overlay, bool K2Node_DynamicCast_bSuccess);
	struct FEventReply On_Cancel_Icon_Mouse_Button_Down_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, const struct FEventReply& K2Node_MakeStruct_EventReply, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM, bool K2Node_DynamicCast_bSuccess);
	void Initialize_Restart_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FVector2D& Temp_struct_Variable);
	void Initialize_Tutorial_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FVector2D& Temp_struct_Variable);
	void ContinueButtonClicked(bool TutorialMode, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanContinueCommanderMode_ReturnValue);
	void SetupContinueButton(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanContinueCommanderMode_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	bool Get_Replay_Btn_Visibility_0(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsReplaySystemEnabled_ReturnValue);
	void FadeInMenu(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnUpdateSessionSearch_Event_0(bool bComplete, class FText OutMessage, bool bPVPSearch);
	void CustomEvent_0();
	void Construct();
	void RetryLogin();
	void RegainFocus();
	void BndEvt__W_MainMenu_V3_ContinueButton_K2Node_ComponentBoundEvent_5_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected);
	void BndEvt__W_MainMenu_V3_SinglePlayerButton_K2Node_ComponentBoundEvent_6_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected);
	void BndEvt__W_MainMenu_V3_MultiPlayerButton_K2Node_ComponentBoundEvent_7_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected);
	void BndEvt__W_MainMenu_V3_TrainingButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_MainMenu_V3_PracticeButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_MainMenu_V3_ContinueButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_MainMenu_V3_CommanderButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_MainMenu_V3_SettingsButton_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_MainMenu_V3_ExitGameButton_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_MainMenu_V3_ReplayButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_MainMenu_V3_FriendsLobbyButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_MainMenu_V3_PublicLobbyButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__W_MainMenu_V3_ModsButton_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_MainMenu_V3_PublicFindButton_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void OnModMenuClosed();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void Clear_Focus(enum class ECommonInputType bNewInputType);
	void No(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void Cancel(class UStandardModal* CallingModal);
	void Yes(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void BndEvt__W_MainMenu_V3_CreditsButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Restart_Game(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void Destruct();
	void BndEvt__W_MainMenu_V3_FindingGame_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility);
	void Cancel_Restart(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void ExecuteUbergraph_W_MainMenu_V3(int32 EntryPoint, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal, class FText K2Node_CustomEvent_TextEntry, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool K2Node_CustomEvent_bComplete, class FText K2Node_CustomEvent_OutMessage, bool K2Node_CustomEvent_bPVPSearch, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM, bool K2Node_DynamicCast_bSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_2, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM_1, bool K2Node_DynamicCast_bSuccess_1, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM_2, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_3, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM_3, bool K2Node_DynamicCast_bSuccess_3, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_4, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM_4, bool K2Node_DynamicCast_bSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UW_SettingsMenuGamepad_C* CallFunc_BP_AddWidget_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_14, bool K2Node_ComponentBoundEvent_Selected_2, class UW_ReplayBrowser_C* CallFunc_BP_AddWidget_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_13, bool K2Node_ComponentBoundEvent_Selected_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_12, bool K2Node_ComponentBoundEvent_Selected, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_11, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_10, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_9, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_8, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_7, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_6, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, bool K2Node_Event_IsDesignTime, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM_5, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_OpenModMenu_ReturnValue, bool CallFunc_ShouldShowModsButton_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class UW_CommanderProfileSelect_C* CallFunc_BP_AddWidget_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_4, class FText K2Node_CustomEvent_TextEntry_3, class UStandardModal* K2Node_CustomEvent_CallingModal_3, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_2, class FText K2Node_CustomEvent_TextEntry_2, class UW_StandardModal_C* CallFunc_Initialize_Tutorial_Modal_OutPopup, bool CallFunc_HasCompletedTraining_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_6, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM_6, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_CanContinueCommanderMode_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class UW_Credits_C* CallFunc_BP_AddWidget_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, class UW_StandardModal_C* CallFunc_Initialize_Restart_Modal_OutPopup, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_1, class FText K2Node_CustomEvent_TextEntry_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ESlateVisibility K2Node_ComponentBoundEvent_InVisibility, bool K2Node_SwitchEnum_CmpSuccess_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_ShouldShowRestartDialog_ReturnValue);
	void ModioClicked__DelegateSignature();
};

}


