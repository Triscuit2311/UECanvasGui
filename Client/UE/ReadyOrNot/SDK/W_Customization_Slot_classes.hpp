#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C0 (0x648 - 0x288)
// WidgetBlueprintGeneratedClass W_Customization_Slot.W_Customization_Slot_C
class UW_Customization_Slot_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           btn_Slot;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Variants;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icn_variants;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      Img_icon;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Lock;                                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Slash;                                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Slash_2;                                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_Equipped;                                      // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_NoData;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         LockedOverlay;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         MissingImage;                                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Slot;                                         // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         SlotBorder;                                        // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Tag;                                               // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_ItemName;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Label;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_VariantCount;                                  // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoadoutCustomization*                 Item;                                              // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CustomLabel;                                       // 0x320(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class ECustomizationType                CustomizationType;                                 // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bDisplayAsSlot;                                    // 0x339(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bEquipped;                                         // 0x33A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class E_BoxShape                        BoxShape;                                          // 0x33B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        MaxSize;                                           // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Blocked;                                           // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1852[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSlotClicked;                                     // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSlotHovered;                                     // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSlotUnhovered;                                   // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UW_Button_C*                           ParentButton;                                      // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPressed;                                          // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHovered;                                          // 0x381(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bUseGamepad;                                       // 0x382(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1856[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           EquippedGreen;                                     // 0x388(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	struct FSlateColor                           SelectedRed;                                       // 0x3B0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	struct FSlateColor                           NormalGrey;                                        // 0x3D8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	struct FSlateColor                           HoveredWhite;                                      // 0x400(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	struct FSlateColor                           DefaultWhite;                                      // 0x428(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	bool                                         bShowItemName;                                     // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1857[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class ECustomizationType, TSoftObjectPtr<class UTexture2D>> PlaceholderIcons;                                  // 0x458(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftObjectPtr<class UTexture2D>             EmptyImage;                                        // 0x4A8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             NullImage;                                         // 0x4D0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                NormalButtonStyle;                                 // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GamepadButtonStyle;                                // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DynMatSlash;                                       // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SlashLineThickness;                                // 0x510(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDisplayAsVariant;                                 // 0x514(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bHighlighted;                                      // 0x515(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1859[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BlankBrush;                                        // 0x518(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           HighlightedBrush;                                  // 0x5A0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnSlotRightClickPressed;                           // 0x628(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSlotRightClickReleased;                          // 0x638(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_Customization_Slot_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void SetHoveredState(bool Hovered);
	struct FLinearColor GetTagColor(const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1);
	void UpdateNameText(bool CallFunc_TextIsNotEmpty_NotEmpty, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateVariantCount(bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void SetCustomIconTexture(class UTexture2D* IconTexture, bool MatchSize, const struct FVector2D& CustomSize, const struct FLinearColor& ColorAndOpacity);
	void ShowMissingData(bool NoData, float LineThickness, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_GetWidthByShape_Width, float CallFunc_GetHeightByShape_Height, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetWidthByShape_Width_1, float CallFunc_GetHeightByShape_Height_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void SetLocked(bool IsLocked, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetEquipped(bool bEquipped);
	void UpdateIcon(TSoftObjectPtr<class UTexture2D> IconTexture, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, bool CallFunc_NotEqual_SoftObjectReference_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, bool CallFunc_NotEqual_SoftObjectReference_ReturnValue_1);
	void Deselect();
	void Select();
	void SetupColors(const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_2, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_2, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_3, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_3, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_4, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_4);
	void UpdateStyle(bool bUseGamepad, bool Temp_bool_Variable, class UClass* K2Node_Select_Default);
	void SetVisualState(bool Hovered, bool Pressed, bool Equipped, bool Highlighted, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FLinearColor& CallFunc_GetTagColor_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool Temp_bool_Variable_2, const struct FSlateBrush& K2Node_Select_Default_2);
	void BindDoubleClick(class UW_Button_C* ParentButton);
	void BindClick(class UW_Button_C* ParentButton);
	void BindUnhovered();
	void BindPressedState(bool CallFunc_IsPressed_ReturnValue);
	void BindSelectedState(class UW_Button_C* ParentButton, bool CallFunc_GetSelected_ReturnValue);
	void BindHovered(class UW_Button_C* ParentButton);
	void UnbindFromButton(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6);
	void BindToButton(class UW_Button_C* ParentButton, bool BindClicks, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6);
	void SetLabelText(class FText InText);
	void GetWidthByShape(float* Width, enum class E_BoxShape Temp_byte_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default);
	void GetHeightByShape(float* Height, enum class E_BoxShape Temp_byte_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default);
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetItem(class ULoadoutCustomization* Item);
	void BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature();
	void BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button);
	void OnInitialized();
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void SetToggleable(bool Toggleable);
	void SetHighlighted(bool Highlight);
	void BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_5_OnRightMousePressed__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Customization_Slot_btn_Slot_K2Node_ComponentBoundEvent_6_OnRightMouseReleased__DelegateSignature();
	void ExecuteUbergraph_W_Customization_Slot(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, class ULoadoutCustomization* K2Node_CustomEvent_Item, float CallFunc_GetWidthByShape_Width, float CallFunc_GetHeightByShape_Height, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class FText CallFunc_GetCustomizationCategoryText_Category_Text, bool CallFunc_TextIsEmpty_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_Toggleable, bool K2Node_CustomEvent_Highlight, class UW_Button_C* K2Node_ComponentBoundEvent_Button);
	void OnSlotRightClickReleased__DelegateSignature();
	void OnSlotRightClickPressed__DelegateSignature(class UW_Customization_Slot_C* TriggeringSlot);
	void OnSlotClicked__DelegateSignature(class UW_Customization_Slot_C* TriggeringSlot);
	void OnSlotUnhovered__DelegateSignature();
	void OnSlotHovered__DelegateSignature(class UW_Customization_Slot_C* TriggeringSlot);
};

}


