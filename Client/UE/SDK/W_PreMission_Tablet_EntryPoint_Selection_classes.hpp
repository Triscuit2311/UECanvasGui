#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x328 - 0x260)
// WidgetBlueprintGeneratedClass W_PreMission_Tablet_EntryPoint_Selection.W_PreMission_Tablet_EntryPoint_Selection_C
class UW_PreMission_Tablet_EntryPoint_Selection_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimShowInfo;                                      // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Selected;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_EntryPoint;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_FloorLocation;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        InfoFadeDelay;                                     // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InfoVisible;                                       // 0x294(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2461[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEntryPoint                           PointData;                                         // 0x298(0x78)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                CurrentMissionURL;                                 // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UW_PreMission_PlanningMap_C*           W_Pre_Mission_Planning_Map;                        // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_PreMission_Tablet_EntryPoint_Selection_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus);
	void UpdatePointInfo(const struct FEntryPoint& EntryPointData, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void HidePointInfo();
	void SetInputMode(bool IsGamepad);
	void ShowPointInfo(float Delay);
	void ChangePage(class FName PageName);
	void Construct();
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void ExecuteUbergraph_W_PreMission_Tablet_EntryPoint_Selection(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool K2Node_Event_IsGamepad, float K2Node_CustomEvent_Delay, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class FName K2Node_Event_PageName, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse);
};

}


