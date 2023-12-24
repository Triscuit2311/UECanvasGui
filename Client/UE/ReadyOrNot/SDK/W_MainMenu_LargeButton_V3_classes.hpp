#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0xD30 - 0xC38)
// WidgetBlueprintGeneratedClass W_MainMenu_LargeButton_V3.W_MainMenu_LargeButton_V3_C
class UW_MainMenu_LargeButton_V3_C : public UMainMenu_BaseButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimRedLine;                                       // 0xC40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Selected;                                          // 0xC48(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Img_RedLine;                                       // 0xC50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MenuText;                                          // 0xC58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSelected;                                        // 0xC60(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSelectedAnimFinished;                            // 0xC70(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateFontInfo                        FontStyleDefault;                                  // 0xC80(0x58)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                        FontStyleHovered;                                  // 0xCD8(0x58)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_MainMenu_LargeButton_V3_C* GetDefaultObj();

	void SetState(bool Hovered, bool Selected, bool CallFunc_Not_PreBool_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnSelected();
	void BP_OnDeselected();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void CustomEvent_0();
	void ExecuteUbergraph_W_MainMenu_LargeButton_V3(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue);
	void OnSelectedAnimFinished__DelegateSignature();
	void OnSelected__DelegateSignature(bool Selected);
};

}


