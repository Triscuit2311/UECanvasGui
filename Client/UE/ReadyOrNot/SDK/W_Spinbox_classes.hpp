#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD2 (0x332 - 0x260)
// WidgetBlueprintGeneratedClass W_Spinbox.W_Spinbox_C
class UW_Spinbox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           btn_Reset;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icn_Reset;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ResetBorder;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                              SpinBox_29;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Value;                                             // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseMinValue;                                       // 0x28C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2517[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumValue;                                      // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseMaxValue;                                       // 0x294(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2518[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaximumValue;                                      // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseMinSliderValue;                                 // 0x29C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2519[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumSliderValue;                                // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseMaxSliderValue;                                 // 0x2A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_251A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaximumSliderValue;                                // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseResetButton;                                    // 0x2AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_251B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultValue;                                      // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_251C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLinearColor                          Col_ResetDisabled;                                 // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Col_ResetActive;                                   // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnValueCommited;                                   // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnBeginSliderMovement;                             // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnEndSliderMovement;                               // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        MinFractionalDigits;                               // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxFractionalDigits;                               // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AlwaysUseDeltaSnap;                                // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_251D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Delta;                                             // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SliderExponent;                                    // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentValue;                                      // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Design_Time;                                    // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Initialized;                                       // 0x331(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_Spinbox_C* GetDefaultObj();

	void ClearMaxSliderValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMinValue();
	void GetMaxSliderValue(float* MaximumSliderValue);
	void GetMinSliderValue(float* MinimumSliderValue);
	void GetMaxValue(float* MaximumValue);
	void GetMinValue(float* MinimumValue);
	void SetMaxSliderValue(float NewValue);
	void SetMinSliderValue(float NewValue);
	void SetMaxValue(float NewValue);
	void SetMinValue(float NewValue);
	void UpdateResetButton(bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
	void SetDefaultValue(float DefaultValue, bool ShowResetButton);
	void SetValue(float Value);
	void UpdateValue(float Value);
	void BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__W_Spinbox_btn_Reset_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_3_OnSpinBoxBeginSliderMovement__DelegateSignature();
	void BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void ExecuteUbergraph_W_Spinbox(int32 EntryPoint, float K2Node_ComponentBoundEvent_InValue, float K2Node_ComponentBoundEvent_InValue_2, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class UW_Button_C* K2Node_ComponentBoundEvent_Button, float K2Node_ComponentBoundEvent_InValue_1, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default);
	void OnEndSliderMovement__DelegateSignature(float InValue);
	void OnBeginSliderMovement__DelegateSignature();
	void OnValueCommited__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void OnValueChanged__DelegateSignature(float Value);
};

}


