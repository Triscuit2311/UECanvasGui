#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x2B1 - 0x260)
// WidgetBlueprintGeneratedClass W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C
class UW_PlanningMap_BreachPoint_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Fade;                                              // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           btn_BreachPoint;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_SpawnMark;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_SpawnSelect;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Hidden;                                            // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1582[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnBreachPointHovered;                              // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnBreachPointClicked;                              // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Selected;                                          // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_PlanningMap_BreachPoint_C* GetDefaultObj();

	void SetSelected(bool Selected);
	void Construct();
	void FadeIn();
	void FadeOut();
	void BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(class UW_Button_C* Button);
	void ExecuteUbergraph_W_PlanningMap_BreachPoint(int32 EntryPoint, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsAnimationPlayingForward_ReturnValue_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button);
	void OnBreachPointClicked__DelegateSignature(class UW_PlanningMap_BreachPoint_C* ClickedPoint);
	void OnBreachPointHovered__DelegateSignature(class UW_PlanningMap_BreachPoint_C* HoveredPoint);
};

}


