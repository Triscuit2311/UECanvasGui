#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2E0 - 0x260)
// WidgetBlueprintGeneratedClass W_OnOffButton.W_OnOffButton_C
class UW_OnOffButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           btn_Toggle;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                       CommonButton;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnValueStateChange;                                // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  EnabledText;                                       // 0x290(0x18)(Edit, BlueprintVisible)
	class FText                                  DisabledText;                                      // 0x2A8(0x18)(Edit, BlueprintVisible)
	class FText                                  DescriptionText;                                   // 0x2C0(0x18)(Edit, BlueprintVisible)
	class UTextBlock*                            DescriptionWidget;                                 // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_OnOffButton_C* GetDefaultObj();

	void SetCheckedState(bool NewChecked);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__OnOffButton_commonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_OnOffButton_CommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_OnOffButton_CommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_5_Selected__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_6_Deselected__DelegateSignature(class UW_Button_C* Button);
	void ExecuteUbergraph_W_OnOffButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsValid_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_GetSelected_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button);
	void OnValueStateChange__DelegateSignature(bool bNewCheckState);
};

}


