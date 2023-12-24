#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x440 - 0x300)
// WidgetBlueprintGeneratedClass W_MunitionsOverviewSlot.W_MunitionsOverviewSlot_C
class UW_MunitionsOverviewSlot_C : public UMunitionsSlot
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BackgroundGradient;                                // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BottomLine;                                        // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           MunitionsButton;                                   // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Separator;                                         // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Sidebar;                                           // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TopLine;                                           // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_SlotCount;                                     // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_GamepadDeco;                                    // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MunitionsOverviewSlot_Element_C*    W_MunitionsSlotElement;                            // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                           NormalGrey;                                        // 0x350(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           HoveredWhite;                                      // 0x378(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           SelectedRed;                                       // 0x3A0(0x28)(Edit, BlueprintVisible)
	bool                                         bHovered;                                          // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bPressed;                                          // 0x3C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35AC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonButtonStyle>        ButtonStyle;                                       // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UCommonButtonStyle>        GamepadButtonStyle;                                // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         bUseGamepad;                                       // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           Parent_Button;                                     // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPressed;                                         // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnReleased;                                        // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_MunitionsOverviewSlot_C* GetDefaultObj();

	void UnbindFromButton(bool CallFunc_IsValid_ReturnValue);
	void BindDoubleClick(class UW_Button_C* ParentButton);
	void BindClick(class UW_Button_C* ParentButton);
	void BindUnhovered();
	void BindPressedState(bool CallFunc_IsPressed_ReturnValue);
	void BindHovered(class UW_Button_C* ParentButton);
	void BindSelectedState(class UW_Button_C* ParentButton, bool CallFunc_GetSelected_ReturnValue);
	void BindToButton(class UW_Button_C* ParentButton, bool BindClicks, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6);
	void UpdateStyle(bool bUseGamepad, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, TSubclassOf<class UCommonButtonStyle> K2Node_Select_Default_1);
	void SetVisualState(bool Hovered, bool Pressed, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, const struct FSlateColor& CallFunc_GetNormalColorByState_ReturnValue, const struct FVector2D& K2Node_Select_Default);
	struct FSlateColor GetNormalColorByState(bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FSlateColor& K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1);
	void Construct();
	void CreateSeparator(bool bShouldCreateSeparator);
	void CreateElement(class UTexture2D* Icon, int32 Amount, bool bIsAmmoElement, class FText& AmmoType);
	void UpdateSlotText(int32 CurrentSlots, int32 MaxSlots);
	void BndEvt__W_MunitionsSlot_MunitionsButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_MunitionsSlot_MunitionsButton_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_MunitionsSlot_MunitionsButton_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature();
	void BndEvt__W_MunitionsSlot_MunitionsButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature();
	void BndEvt__W_MunitionsSlot_MunitionsButton_K2Node_ComponentBoundEvent_4_Released__DelegateSignature();
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_W_MunitionsOverviewSlot(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_MunitionsOverviewSlot_Element_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_Event_bShouldCreateSeparator, const struct FMargin& K2Node_MakeStruct_Margin, class UTexture2D* K2Node_Event_Icon, int32 K2Node_Event_Amount, bool K2Node_Event_bIsAmmoElement, class FText K2Node_Event_AmmoType, class UImage* CallFunc_SpawnObject_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FAmmoTypeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 K2Node_Event_CurrentSlots, int32 K2Node_Event_MaxSlots, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnReleased__DelegateSignature();
	void OnPressed__DelegateSignature();
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
};

}


