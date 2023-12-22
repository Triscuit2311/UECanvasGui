#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x124 (0x384 - 0x260)
// WidgetBlueprintGeneratedClass W_StandardSlider.W_StandardSlider_C
class UW_StandardSlider_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               HighlightButton;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_71;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_136;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SliderValueText;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               TheSlider;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DescriptionTextWidget;                             // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  Description;                                       // 0x298(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class EStandardSliderTypes              SliderType;                                        // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1A24[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SliderFloatMin;                                    // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        SliderIntegerMin;                                  // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        SliderIntegerMax;                                  // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        SliderIntegerStep;                                 // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        SliderFloatMax;                                    // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        SliderFloatStep;                                   // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        PreviewFloatValue;                                 // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        FloatValue;                                        // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IntegerValue;                                      // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        QualityValue;                                      // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PreviewIntegerValue;                               // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        PreviewQualityValue;                               // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1A27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnFloatValueChanged;                               // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnIntegralValueChanged;                            // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnQualityValueChanged;                             // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bDisplayAsPercent;                                 // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1A28[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  PercentageFormat;                                  // 0x320(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                        SupportedResolutions;                              // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                ResolutionValue;                                   // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnResolutionValueChanged;                          // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         SnapToGrid;                                        // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1A29[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnDlssValueChanged;                                // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        SliderTextSizeRatio;                               // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_StandardSlider_C* GetDefaultObj();

	void SetDLSSQualityValue(int32 NewQuality, int32 CallFunc_Clamp_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void AddIntegralValue(int32 Value, int32* NewValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SetIntegralValue_NewValue);
	void AddFloatValue(float Value, float* NewValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_SetFloatValue_NewValue);
	void SetResolutionValue(const class FString& Resolution, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue);
	void SetQualityValue(int32 NewQuality, int32 CallFunc_Clamp_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void SetIntegralValue(int32 NewInteger, int32* NewValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void SetFloatValue(float NewFloat, float* NewValue, float CallFunc_FClamp_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateSliderText(float CallFunc_GetNormalizedValue_ReturnValue, class FText CallFunc_GenerateFSRQualityString_ReturnValue, class FText CallFunc_GenerateDlssQualityString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, int32 CallFunc_Round_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GenerateQualityString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__TheSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__TheSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature();
	void BndEvt__TheSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature();
	void ExecuteUbergraph_W_StandardSlider(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_NormalizeToRange_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, bool K2Node_Event_IsDesignTime, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_SetFloatValue_NewValue, int32 CallFunc_SetIntegralValue_NewValue, float CallFunc_NormalizeToRange_ReturnValue_2, const class FString& CallFunc_Array_Get_Item, float CallFunc_Conv_IntToFloat_ReturnValue_3, float K2Node_ComponentBoundEvent_Value, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_Round_ReturnValue_2, int32 CallFunc_Clamp_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_5, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_6, TArray<class FString>& CallFunc_GetSupportedScreenResolutions_Resolutions, bool CallFunc_GetSupportedScreenResolutions_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_7, float CallFunc_NormalizeToRange_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_8, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GridSnap_Float_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_GridSnap_Float_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_GridSnap_Float_ReturnValue_2, float CallFunc_FClamp_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, float CallFunc_Conv_IntToFloat_ReturnValue_9, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_10, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 CallFunc_Round_ReturnValue_3, int32 CallFunc_Clamp_ReturnValue_3);
	void OnDlssValueChanged__DelegateSignature(int32 NewIntegerValue, float NewSliderValue);
	void OnResolutionValueChanged__DelegateSignature(const class FString& NewResolutionValue, float NewSliderValue);
	void OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, float NewSliderValue);
	void OnIntegralValueChanged__DelegateSignature(int32 NewIntegerValue, float NewSliderValue);
	void OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue);
};

}


