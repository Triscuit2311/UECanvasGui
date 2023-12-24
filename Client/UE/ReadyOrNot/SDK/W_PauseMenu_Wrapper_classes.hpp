#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2B0 - 0x2A8)
// WidgetBlueprintGeneratedClass W_PauseMenu_Wrapper.W_PauseMenu_Wrapper_C
class UW_PauseMenu_Wrapper_C : public UPauseMenu_Wrapper
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UW_PauseMenu_Wrapper_C* GetDefaultObj();

	void Destruct();
	void Construct();
	void ResumeClicked();
	void OnLobbyManagerClicked();
	void SettingsClicked();
	void RestartClicked();
	void InviteFriendsClicked();
	void LobbyClicked();
	void QuitToDesktopClicked();
	void ExecuteUbergraph_W_PauseMenu_Wrapper(int32 EntryPoint, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ACoopGM* K2Node_DynamicCast_AsCoop_GM, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UW_ConsoleLobbyManager_C* CallFunc_BP_AddWidget_ReturnValue, class UW_SettingsMenuGamepad_C* CallFunc_BP_AddWidget_ReturnValue_1, class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue, class UW_PauseMenu_V2_C* K2Node_DynamicCast_AsW_Pause_Menu_V2, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class AReadyOrNotGameMode* K2Node_DynamicCast_AsReady_or_Not_Game_Mode, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, enum class EBlueprintResultSwitch CallFunc_ShowInviteUI_Result, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance, bool K2Node_DynamicCast_bSuccess_3, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7);
};

}


