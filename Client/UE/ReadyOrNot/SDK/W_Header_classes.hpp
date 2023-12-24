#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x91 (0x2F1 - 0x260)
// WidgetBlueprintGeneratedClass W_Header.W_Header_C
class UW_Header_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UNamedSlot*                            AugmentSlot;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Header;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Header;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Header;                                            // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Label;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  LabelText;                                         // 0x298(0x18)(Edit, BlueprintVisible)
	bool                                         bIsButton;                                         // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETextFlowDirection                Layout;                                            // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E8D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LabelOpacity;                                      // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LineOpacity;                                       // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E90[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                NormalTextStyle;                                   // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                DarkTextStyle;                                     // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          NormalLineColor;                                   // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DarkLineColor;                                     // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseDarkStyle;                                      // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_Header_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus);
	void SetTheme(bool UseDarkTheme, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FLinearColor& K2Node_Select_Default, TSubclassOf<class UCommonTextStyle> K2Node_Select_Default_1);
	void HasAugment(bool* HasAugment, class UPanelSlot* CallFunc_GetContentSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void AddAugment(class UWidget* AugmentWidget, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void SetButton(bool IsButton);
	void SetLayout(enum class ETextFlowDirection Layout, enum class ETextFlowDirection Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAugment_HasAugment, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Select_Default_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void SetLabel(class FText LabelText);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Initialize(class FText LabelText, bool IsButton, enum class ETextFlowDirection Orientation);
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void ExecuteUbergraph_W_Header(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText K2Node_CustomEvent_LabelText, bool K2Node_CustomEvent_IsButton, enum class ETextFlowDirection K2Node_CustomEvent_Orientation, class FName K2Node_Event_PageName, bool K2Node_Event_IsGamepad, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
};

}


