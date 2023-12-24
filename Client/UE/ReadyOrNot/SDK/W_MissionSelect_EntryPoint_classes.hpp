#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x300 - 0x260)
// WidgetBlueprintGeneratedClass W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C
class UW_MissionSelect_EntryPoint_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           ButtonBase;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FEntryPoint                           EntryPoint;                                        // 0x288(0x78)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UW_MissionSelect_EntryPoint_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void Hide(float Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void SetupEntryPoint(const struct FEntryPoint& EntryPoint);
	void BndEvt__W_MissionSelect_EntryPoint_ButtonBase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Deselect();
	void Select();
	void Reveal(float Delay);
	void Construct();
	void ExecuteUbergraph_W_MissionSelect_EntryPoint(int32 EntryPoint, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, const struct FEntryPoint& K2Node_CustomEvent_EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, float K2Node_Event_Delay, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void OnClicked__DelegateSignature(class UW_MissionSelect_EntryPoint_C* Widget);
};

}


