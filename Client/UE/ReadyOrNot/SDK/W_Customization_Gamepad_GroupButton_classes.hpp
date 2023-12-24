#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0xC1C - 0xBC0)
// WidgetBlueprintGeneratedClass W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C
class UW_Customization_Gamepad_GroupButton_C : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                EquippedGlow;                                      // 0xBC8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BottomLine;                                    // 0xBD0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_SidebarFade;                                   // 0xBD8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_SidebarSolid;                                  // 0xBE0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_TopLine;                                       // 0xBE8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_GamepadDeco;                                    // 0xBF0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSelected;                                        // 0xBF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDeselected;                                      // 0xC08(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bHovered;                                          // 0xC18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bPressed;                                          // 0xC19(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSelected;                                         // 0xC1A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class E_CustomizationGroups             Group;                                             // 0xC1B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Customization_Gamepad_GroupButton_C* GetDefaultObj();

	void Deselect();
	void Select();
	void UpdatePressedState(bool Pressed);
	void UpdateSelectedState(bool bSelected);
	void UpdateHoverState(bool Hovered);
	struct FSlateColor GetColorByState(bool Temp_bool_Variable, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FSlateColor& K2Node_Select_Default);
	void UpdateVisualState(bool Hovered, bool Pressed, bool bSelected, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool Temp_bool_Variable, bool CallFunc_BooleanOR_ReturnValue, const struct FSlateColor& CallFunc_GetColorByState_ReturnValue, const struct FVector2D& K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnInitialized();
	void BP_OnSelected();
	void BP_OnDeselected();
	void Pressed(class UCommonButtonBase* Button);
	void Released(class UCommonButtonBase* Button);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_W_Customization_Gamepad_GroupButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UCommonButtonBase* K2Node_CustomEvent_Button_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonBase* K2Node_CustomEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnDeselected__DelegateSignature(class UW_Customization_Gamepad_GroupButton_C* Button);
	void OnSelected__DelegateSignature(class UW_Customization_Gamepad_GroupButton_C* Button);
};

}


