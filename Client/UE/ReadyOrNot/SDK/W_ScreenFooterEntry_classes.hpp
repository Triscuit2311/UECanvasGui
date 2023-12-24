#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x440 - 0x370)
// WidgetBlueprintGeneratedClass W_ScreenFooterEntry.W_ScreenFooterEntry_C
class UW_ScreenFooterEntry_C : public UPageFooter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           Button;                                            // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_HotkeyHint;                                     // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              InputActionPC;                                     // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   InputActionWidget;                                 // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_ActionLabel;                                   // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_InputLabel;                                    // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         UseGamepad;                                        // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E80[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EntryID;                                           // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FScreenFooterEntry                    FooterEntryData;                                   // 0x3C0(0x30)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPressed;                                         // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnReleased;                                        // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_ScreenFooterEntry_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus, bool CallFunc_IsVisible_ReturnValue);
	void BackPage(bool* Handled);
	void UpdateVisualState(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, TSubclassOf<class UCommonButtonStyle> Temp_class_Variable, TSubclassOf<class UCommonButtonStyle> Temp_class_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable, bool Temp_bool_Variable_3, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetIsButton_IsButton, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_GetButtonLabel_ButtonLabel, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, TSubclassOf<class UCommonButtonStyle> K2Node_Select_Default_2, class FText K2Node_Select_Default_3);
	void GetInputAction(struct FDataTableRowHandle* InputAction);
	void GetButtonID(class FString* ButtonID);
	void GetButtonLabel(class FText* ButtonLabel);
	void GetIsButton(bool* IsButton);
	void SetInputVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void InputSwitched(bool UseGamepad);
	void SetFooterEntryData(const struct FScreenFooterEntry& FooterEntryData);
	void UpdateEntry(const struct FDataTableRowHandle& CallFunc_GetInputAction_InputAction);
	void SetInputAction(const struct FDataTableRowHandle& InputActionRow, class FText CallFunc_GetInputActionData_ActionName, const struct FKey& CallFunc_GetInputActionData_ActionKey, const class FString& CallFunc_Abbreviate_Key_Abreviated_Name, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetLabel(class FText InText);
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature();
	void BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature();
	void BndEvt__W_ScreenFooterEntry_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature();
	void OnInitialized();
	void InputMethodChanged(bool bUsingGamepad);
	void ExecuteUbergraph_W_ScreenFooterEntry(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool K2Node_CustomEvent_bUsingGamepad);
	void OnReleased__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry);
	void OnPressed__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry);
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry);
	void OnClicked__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry);
};

}


