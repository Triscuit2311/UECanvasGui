#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C8 (0x460 - 0x298)
// WidgetBlueprintGeneratedClass W_SmallSlot_v2.W_SmallSlot_v2_C
class UW_SmallSlot_v2_C : public USmallSlot_V2
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimClicked;                                       // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                BackgroundGradient;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BackgroundGradientLeftGP;                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BackgroundGradientRightGP;                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BottomBar;                                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BottomLine;                                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BottomLineGP;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                EquippedGradient;                                  // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                EquippedLine;                                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          EquippedPanel;                                     // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                EquippedSelectedGradient;                          // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                       FocusButton;                                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Sidebar;                                           // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TopLine;                                           // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TopLineGP;                                         // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClick;                                           // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateColor                           EquippedGreen;                                     // 0x328(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           NormalGrey;                                        // 0x350(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           SelectedRed;                                       // 0x378(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           HoveredWhite;                                      // 0x3A0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           DefaultWhite;                                      // 0x3C8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           White_30_;                                         // 0x3F0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           WhiteText;                                         // 0x418(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnHover;                                           // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhover;                                         // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_SmallSlot_v2_C* GetDefaultObj();

	void SetVisualStateGamepadPreset(bool Hovered, bool Selected, bool CallFunc_Not_PreBool_ReturnValue);
	void SetVisualState(bool Hovered, bool Equipped, bool Selected, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanNOR_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__W_LoadoutSlot_v2_CommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_LoadoutSlot_v2_CommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_LoadoutSlot_v2_FocusButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnEquipped();
	void BndEvt__W_SmallSlot_v2_FocusButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_SmallSlot_v2_FocusButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_W_SmallSlot_v2(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, const struct FFocusEvent& K2Node_Event_InFocusEvent, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_GetEquipped_ReturnValue, bool CallFunc_GetEquipped_ReturnValue_1, bool CallFunc_GetEquipped_ReturnValue_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_GetEquipped_ReturnValue_3, bool CallFunc_IsHovered_ReturnValue_2, bool CallFunc_GetEquipped_ReturnValue_4);
	void OnUnhover__DelegateSignature();
	void OnHover__DelegateSignature();
	void OnClick__DelegateSignature(class UW_SmallSlot_v2_C* TriggeringSlot);
};

}


