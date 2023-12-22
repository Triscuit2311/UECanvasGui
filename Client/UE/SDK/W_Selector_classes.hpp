#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x3A8 - 0x288)
// WidgetBlueprintGeneratedClass W_Selector.W_Selector_C
class UW_Selector_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           Button;                                            // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Carousel_C*                         Carousel;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Dropdown_C*                         Dropdown;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      VisSwitcher;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, class FText>             OptionsMap;                                        // 0x2B0(0x50)(Edit, BlueprintVisible)
	class FText                                  DescriptionText;                                   // 0x300(0x18)(Edit, BlueprintVisible)
	class UTextBlock*                            DescriptionWidget;                                 // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseGamepad;                                       // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ED[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SelectedOptionID;                                  // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                  Label;                                             // 0x338(0x18)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            OptionSelected;                                    // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bInitialized;                                      // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EF[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelectorClicked;                                 // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnOptionHovered;                                   // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDropdownClosed;                                  // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnOptionUnhovered;                                 // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_Selector_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void GetOptionIndex(const class FString& OptionID, int32* Index, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Find_ReturnValue);
	void AddOption(class FString& ID, class FText& Text);
	void ClearOptions();
	void SetSelection(const class FString& EquippedID);
	void SetOptions(TMap<class FString, class FText> NewOptionsMap, class FText OptionText, const class FString& NewOptionID, int32 Temp_int_Array_Index_Variable, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_StringIsEmpty_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void UpdateStyle(bool bUseGamepad, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, class UWidget* K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__W_Customization_Selector_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Customization_Selector_Carousel_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature(class FName OptionID);
	void BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature(const class FString& OptionID);
	void BndEvt__W_Customization_Selector_Button_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature();
	void BndEvt__W_Customization_Selector_Button_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_5_OnOptionHovered__DelegateSignature(const class FString& OptionID);
	void BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_6_OnMenuClosed__DelegateSignature(class UW_Dropdown_C* TriggeringDropdown);
	void BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_7_OnOptionUnhovered__DelegateSignature();
	void BndEvt__W_Selector_Dropdown_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature(class UW_Dropdown_C* Dropdown);
	void BndEvt__W_Selector_Dropdown_K2Node_ComponentBoundEvent_9_OnUnhovered__DelegateSignature();
	void OnInitialized();
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_W_Selector(int32 EntryPoint, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, TArray<class FString>& CallFunc_Map_Keys_Keys, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class FName K2Node_ComponentBoundEvent_OptionID_2, const class FString& K2Node_ComponentBoundEvent_OptionID_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_GetOptionIndex_Index, int32 CallFunc_GetOptionIndex_Index_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, const class FString& K2Node_ComponentBoundEvent_OptionID, class FName CallFunc_Conv_StringToName_ReturnValue, class UW_Dropdown_C* K2Node_ComponentBoundEvent_TriggeringDropdown, class UW_Dropdown_C* K2Node_ComponentBoundEvent_Dropdown, bool CallFunc_IsValid_ReturnValue_1);
	void OnOptionUnhovered__DelegateSignature();
	void OnDropdownClosed__DelegateSignature();
	void OnOptionHovered__DelegateSignature(class FName OptionID);
	void OnSelectorClicked__DelegateSignature(class UW_Selector_C* TriggeringSelector);
	void OptionSelected__DelegateSignature(const class FString& OptionID, int32 Index);
};

}


