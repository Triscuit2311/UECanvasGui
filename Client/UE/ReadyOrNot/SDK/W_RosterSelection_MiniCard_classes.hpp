#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x160 (0x3C0 - 0x260)
// WidgetBlueprintGeneratedClass W_RosterSelection_MiniCard.W_RosterSelection_MiniCard_C
class UW_RosterSelection_MiniCard_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      StressPulse;                                       // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                          BackgroundProgressBar;                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                       btn_Card;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Countdown;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ForegroundProgressBar;                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HoverImage;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icn_Locked;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageSpinner;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_CountdownProgress;                             // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_PositionCorner;                                // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_Empty;                                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            MissionsRemainingText;                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Position;                                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PositionNumber;                                    // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProfileImage;                                      // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SquadPositionBorder;                               // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Status;                                            // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                StressBackground;                                  // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_LockedTime;                                    // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Name;                                          // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Specialty;                                     // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Status;                                        // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Lock;                                           // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class URosterCharacter*                      RosterCharacter;                                   // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateColor                           UnavailableTint;                                   // 0x358(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           AvailableTint;                                     // 0x380(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ERosterSquadPosition              DebugPosition;                                     // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERosterCharacterState             DebugState;                                        // 0x3A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Empty;                                             // 0x3AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Locked;                                            // 0x3AB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnEmptyClicked;                                    // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_RosterSelection_MiniCard_C* GetDefaultObj();

	void SetLocked(bool Locked, class FText UnlockText, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetEmpty(bool Empty, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void SetSelected(bool Selected);
	void SetHoverState(bool Hovered);
	void SetPosition(enum class ERosterSquadPosition Position, enum class ERosterSquadPosition Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, enum class ERosterSquadPosition Temp_byte_Variable_1, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float Temp_float_Variable_8, float Temp_float_Variable_9, enum class ERosterSquadPosition Temp_byte_Variable_2, enum class EHorizontalAlignment Temp_byte_Variable_3, enum class EHorizontalAlignment Temp_byte_Variable_4, enum class EHorizontalAlignment Temp_byte_Variable_5, enum class EHorizontalAlignment Temp_byte_Variable_6, enum class EHorizontalAlignment Temp_byte_Variable_7, enum class ERosterSquadPosition Temp_byte_Variable_8, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, float K2Node_Select_Default, float K2Node_Select_Default_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, enum class EHorizontalAlignment K2Node_Select_Default_2, class FText K2Node_Select_Default_3, const struct FLinearColor& CallFunc_SquadPositionToColor_OutColor, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue);
	void SetupStateText(class URosterCharacter* Character, enum class ESlateVisibility Temp_byte_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_StressPercentageAsStatus_StatusText, const struct FSlateColor& CallFunc_StressPercentageAsStatus_StatusColor, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ERosterCharacterState Temp_byte_Variable_3, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_4, enum class ERosterCharacterState Temp_byte_Variable_5, enum class ESlateVisibility K2Node_Select_Default_1);
	void OnLoaded_1B6BA88D4B585FF2FE0A5EA31A024DD8(class UObject* Loaded);
	void SetCharacter(class URosterCharacter* Character);
	void SetCustomStateText(class FText Text);
	void ShowStressChange();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__W_RosterSelection_MiniCard_btn_Card_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_RosterSelection_MiniCard_btn_Card_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_RosterSelection_MiniCard_btn_Card_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void ExecuteUbergraph_W_RosterSelection_MiniCard(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ERosterCharacterState Temp_byte_Variable_1, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, enum class ESlateVisibility Temp_byte_Variable_2, class URosterCharacter* K2Node_CustomEvent_Character, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, class FText K2Node_CustomEvent_Text, const struct FSlateColor& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime, enum class ERosterCharacterState Temp_byte_Variable_5, bool CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnEmptyClicked__DelegateSignature(class UW_RosterSelection_MiniCard_C* Card);
	void OnClicked__DelegateSignature(class UW_RosterSelection_MiniCard_C* Card);
	void OnUnhovered__DelegateSignature(class UW_RosterSelection_MiniCard_C* Card);
	void OnHovered__DelegateSignature(class UW_RosterSelection_MiniCard_C* Card);
};

}


