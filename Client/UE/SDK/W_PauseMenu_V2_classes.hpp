#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x430 - 0x320)
// WidgetBlueprintGeneratedClass W_PauseMenu_V2.W_PauseMenu_V2_C
class UW_PauseMenu_V2_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               AdminPasswordBox;                                  // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_ConfirmAdminPassword;                          // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ButtonDescription;                                 // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                         EditableText_0;                                    // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              EscapeMenu;                                        // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonFMOD_C*                   LobbyManagerButton;                                // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ObjectivesBox;                                     // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PublicLobbyWarning;                                // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonFMOD_C*                   QuitButton;                                        // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonFMOD_C*                   RestartButton;                                     // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonFMOD_C*                   ResumeButton;                                      // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonFMOD_C*                   SettingsButton;                                    // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonFMOD_C*                   StationButton;                                     // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_SafeMode;                                      // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Version;                                       // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_Objectives_C*              W_Briefing_Objectives;                             // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         WasShowingMouse;                                   // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_439D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_SettingsMenu_C*                     SettingsMenu;                                      // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallVoteMenu;                                      // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ResumeClicked;                                     // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            LobbyManagerClicked;                               // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            SettingsClicked;                                   // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            RestartClicked;                                    // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            InviteFriendsClicked;                              // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            LobbyClicked;                                      // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            QuitToDesktopClicked;                              // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_PauseMenu_V2_C* GetDefaultObj();

	void Initialize_Exit_Query_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, bool Temp_bool_Variable, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class UW_StandardModal_C* CallFunc_Create_ReturnValue, bool CallFunc_IsLobby_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsCommanderMode_ReturnValue, const struct FVector2D& Temp_struct_Variable, bool CallFunc_BooleanAND_ReturnValue, class FText K2Node_Select_Default);
	void IsInReplay(bool* InReplay, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess);
	void IsInCommander(bool* InCommander, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ACommanderGM* K2Node_DynamicCast_AsCommander_GM, bool K2Node_DynamicCast_bSuccess);
	void IsInTraining(bool* InTraining, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ATrainingGM* K2Node_DynamicCast_AsTraining_GM, bool K2Node_DynamicCast_bSuccess);
	void ExitToMainMenu(bool CallFunc_SetPublicLobbyCooldown_ReturnValue, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, bool CallFunc_IsPublicMissionInProgress_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, class ULevelStreaming* CallFunc_StreamInLevel_OutStreamedLevel, bool CallFunc_StreamInLevel_ReturnValue);
	void Initialize_Exit_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FVector2D& Temp_struct_Variable);
	void Initialize_ReturnToLobby_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FVector2D& Temp_struct_Variable);
	void Initialize_Restart_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FVector2D& Temp_struct_Variable);
	void ShouldShowStationButton(bool* Show, bool CallFunc_IsInReplay_InReplay, bool CallFunc_IsInCommander_InCommander, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue);
	void ShouldShowQuitToDesktopButton(bool* Show, enum class ERuntimeDevice CallFunc_GetRuntimeDeviceProfile_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ShouldShowRestartButton(bool* Show, bool CallFunc_IsInReplay_InReplay, bool CallFunc_IsInCommander_InCommander, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue);
	void ShouldShowLobbyManagerButton(bool* Show, bool CallFunc_IsInReplay_InReplay, bool CallFunc_IsMultiplayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget();
	bool BP_OnHandleBackAction();
	enum class ESlateVisibility GetMissionBoxVisibility(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess);
	enum class ESlateVisibility Get_HorizontalBox_25_Visibility_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	class FText Get_Version_Text_0(const class FString& CallFunc_GetProjectVersion_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void BndEvt__W_PauseMenu_V2_LobbyManagerButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BP_OnActivated();
	void BndEvt__W_PauseMenu_V2_SettingsButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_PauseMenu_V2_ResumeButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_PauseMenu_V2_QuitButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_PauseMenu_V2_QuitButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_PauseMenu_V2_QuitButton_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_PauseMenu_V2_LobbyButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_PauseMenu_V2_RestartButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Yes_Restart(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void Yes_ReturnToLobby(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void Cancel_Modal(class UStandardModal* CallingModal);
	void Exit_to_Main_Menu(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void Exit_to_Desktop(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void No_Restart(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void No_ReturnToLobby(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void Yes_Exit(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void No_Exit(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void Cancel_Exit(class UStandardModal* CallingModal);
	void ExecuteUbergraph_W_PauseMenu_V2(int32 EntryPoint, class ABP_ExfilPortal_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const class FString& CallFunc_GetProjectVersion_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_7, bool CallFunc_IsPublicMissionInProgress_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_6, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_ShouldShowLobbyManagerButton_Show, bool CallFunc_ShouldShowQuitToDesktopButton_Show, bool CallFunc_ShouldShowRestartButton_Show, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_ShouldShowStationButton_Show, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UW_StandardModal_C* CallFunc_Initialize_Restart_Modal_OutPopup, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_9, class FText K2Node_CustomEvent_TextEntry_7, class UW_StandardModal_C* CallFunc_Initialize_ReturnToLobby_Modal_OutPopup, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_8, class FText K2Node_CustomEvent_TextEntry_6, class UStandardModal* K2Node_CustomEvent_CallingModal_7, class UW_StandardModal_C* CallFunc_Initialize_Exit_Modal_OutPopup, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_6, class FText K2Node_CustomEvent_TextEntry_5, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_5, class FText K2Node_CustomEvent_TextEntry_4, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_4, class FText K2Node_CustomEvent_TextEntry_3, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_3, class FText K2Node_CustomEvent_TextEntry_2, class UReadyOrNotGameInstance* CallFunc_GetRONGameInstance_ReturnValue, bool CallFunc_IsSafeMode_ReturnValue, class UW_StandardModal_C* CallFunc_Initialize_Exit_Query_Modal_OutPopup, bool CallFunc_IsLobby_ReturnValue, bool CallFunc_IsCommanderMode_ReturnValue, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_2, class FText K2Node_CustomEvent_TextEntry_1, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_1, class FText K2Node_CustomEvent_TextEntry, bool CallFunc_IsMultiplayer_ReturnValue, class UStandardModal* K2Node_CustomEvent_CallingModal, bool CallFunc_BooleanNOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ACommanderGM* K2Node_DynamicCast_AsCommander_GM, bool K2Node_DynamicCast_bSuccess);
	void QuitToDesktopClicked__DelegateSignature();
	void LobbyClicked__DelegateSignature();
	void InviteFriendsClicked__DelegateSignature();
	void RestartClicked__DelegateSignature();
	void SettingsClicked__DelegateSignature();
	void LobbyManagerClicked__DelegateSignature();
	void ResumeClicked__DelegateSignature();
};

}


