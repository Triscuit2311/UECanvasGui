#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x448 - 0x320)
// WidgetBlueprintGeneratedClass W_MissionEnd.W_MissionEnd_C
class UW_MissionEnd_C : public UMissionEnd
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           btn_Debrief;                                       // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Score;                                         // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_PageNav;                                        // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                      PageWrapper;                                       // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MissionScore_C*                     W_MissionScore;                                    // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      WidgetSwitcher;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  MissionName;                                       // 0x358(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        DebriefRevealDelay;                                // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ViewingDebrief;                                    // 0x374(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                         DebriefEnabled;                                    // 0x375(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	uint8                                        Pad_33[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_RosterReview_C*                     DebriefWidget;                                     // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UW_MissionScore_C*                     ScoreWidget;                                       // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScreenFooterEntry                    QuitFooterEntry;                                   // 0x388(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScreenFooterEntry                    RestartFooterEntry;                                // 0x3B8(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScreenFooterEntry                    StationFooterEntry;                                // 0x3E8(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScreenFooterEntry                    CreditsFooterEntry;                                // 0x418(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_MissionEnd_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void AddFooterOptions(TMap<class FString, struct FScreenFooterEntry> FooterEntries, const TArray<struct FScreenFooterEntry>& FooterEntriesArray, bool CallFunc_ShowCreditsButton_Show, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, bool CallFunc_ShowReturnButton_ReturnValue, bool CallFunc_ShowQuitButton_ReturnValue, bool CallFunc_ShowRestartButton_ReturnValue);
	bool ShowQuitButton(bool CallFunc_IsCommanderMode_ReturnValue);
	void SetupNavigation();
	bool BP_OnHandleBackAction();
	void OpenScorePage();
	void OpenDebriefPage(bool CallFunc_IsValid_ReturnValue);
	void UpdateActiveNavButton();
	enum class ESlateVisibility GetScoreButtonVisibility();
	enum class ESlateVisibility GetDebriefButtonVisibility(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsCommanderMode_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus);
	bool ShowReturnButton(bool CallFunc_IsCommanderMode_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	bool ShowRestartButton(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ACommanderGM* K2Node_DynamicCast_AsCommander_GM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue);
	void ShowCreditsButton(bool* Show, class UWorld* CallFunc_GetWorldStatic_ReturnValue, class AScoringManager* CallFunc_Get_ReturnValue, class FName CallFunc_GetCurrentLevelNameForLookupTable_ReturnValue, int32 CallFunc_GetObjectiveCompletionStatus_ObjectivesComplete, int32 CallFunc_GetObjectiveCompletionStatus_ObjectivesFailed, int32 CallFunc_GetObjectiveCompletionStatus_TotalObjectives, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_StartsWith_ReturnValue, bool CallFunc_IsCommanderMode_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void BP_OnActivated();
	void BndEvt__W_MissionEnd_btn_Debrief_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_MissionEnd_btn_Score_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button);
	void EnableDebrief();
	void BndEvt__W_MissionEnd_W_MissionScore_K2Node_ComponentBoundEvent_5_OnScoringComplete__DelegateSignature();
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void ChangePage(class FName PageName);
	void BndEvt__W_MissionEnd_W_PageHeader_K2Node_ComponentBoundEvent_6_OnNavOptionSelected__DelegateSignature(class FName OptionNameID);
	void SetInputMode(bool IsGamepad);
	void Hide(float Delay, bool Collapse);
	void Reveal(float Delay);
	void QuitToMenu();
	void BndEvt__W_MissionEnd_PageWrapper_K2Node_ComponentBoundEvent_7_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID);
	void RestartMission();
	void ReturnToStation();
	void OnCreditsEnd();
	void OnCreditsClicked();
	void ExecuteUbergraph_W_MissionEnd(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UDataTable* CallFunc_GetLevelLookupDataTable_ReturnValue, class UWorld* CallFunc_GetWorldStatic_ReturnValue, class FName CallFunc_GetCurrentLevelNameForLookupTable_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, const struct FLevelDataLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsCommanderMode_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsCommanderMode_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ACoopGM* K2Node_DynamicCast_AsCoop_GM, bool K2Node_DynamicCast_bSuccess, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_PageName, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class ACommanderGM* K2Node_DynamicCast_AsCommander_GM, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UWidget* CallFunc_GetFocusTarget_Focus, class FName K2Node_ComponentBoundEvent_OptionNameID, bool K2Node_SwitchName_CmpSuccess, bool K2Node_Event_IsGamepad, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, float K2Node_Event_Delay, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_2, class AReadyOrNotGameMode* K2Node_DynamicCast_AsReady_or_Not_Game_Mode, bool K2Node_DynamicCast_bSuccess_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_Credits_C* CallFunc_Create_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UW_RosterReview_C* CallFunc_Create_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3);
};

}


