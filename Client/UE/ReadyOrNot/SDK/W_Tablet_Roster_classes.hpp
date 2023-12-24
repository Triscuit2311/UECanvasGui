#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x348 - 0x320)
// WidgetBlueprintGeneratedClass W_Tablet_Roster.W_Tablet_Roster_C
class UW_Tablet_Roster_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActivatableWidgetStack*         RosterContainer;                                   // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIsManager;                                        // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_PreMission_Tablet_RosterManager_C*  Manager;                                           // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Roster_Status_C*                    Status;                                            // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Tablet_Roster_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void UpdateCard();
	void UpdateHealth();
	void SetVisualTheme(bool UseDarkTheme);
	void AudioPlayerVisible(class UW_AudioPlayer_C* PlayerWidget, bool PlayerVisible);
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void Construct();
	void BP_OnActivated();
	void SetTabletState(bool IsAwake);
	void ExecuteUbergraph_W_Tablet_Roster(int32 EntryPoint, class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue, TScriptInterface<class ITabletUI_C> K2Node_DynamicCast_AsTablet_UI, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_UseDarkTheme, class UW_AudioPlayer_C* K2Node_Event_PlayerWidget, bool K2Node_Event_PlayerVisible, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_IsCommanderMode_ReturnValue, class UW_PreMission_Tablet_RosterManager_C* CallFunc_BP_AddWidget_ReturnValue, class UW_Roster_Status_C* CallFunc_BP_AddWidget_ReturnValue_1, bool K2Node_Event_IsAwake);
};

}


