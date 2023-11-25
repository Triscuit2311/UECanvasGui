#pragma once

/**
 * Name: ReadyOrNot
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass W_StandardSlider.W_StandardSlider_C
	 * Size -> 0x0114 (FullSize[0x0374] - InheritedSize[0x0260])
	 */
	class UW_StandardSlider_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScaleBox*                                             ScaleBox_137;                                            // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            SliderValueText;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                               TheSlider;                                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            DescriptionTextWidget;                                   // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                  Description;                                             // 0x0288(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		EStandardSliderTypes                                         SliderType;                                              // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        SliderFloatMin;                                          // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                      SliderIntegerMin;                                        // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                      SliderIntegerMax;                                        // 0x02AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                      SliderIntegerStep;                                       // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                        SliderFloatMax;                                          // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                        SliderFloatStep;                                         // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                        PreviewFloatValue;                                       // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                        FloatValue;                                              // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      IntegerValue;                                            // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      QualityValue;                                            // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      PreviewIntegerValue;                                     // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                      PreviewQualityValue;                                     // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnFloatValueChanged;                                     // 0x02D8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0002[0xF];                                   // 0x02D9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnIntegralValueChanged;                                  // 0x02E8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0003[0xF];                                   // 0x02E9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnQualityValueChanged;                                   // 0x02F8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0004[0xF];                                   // 0x02F9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		bool                                                         bDisplayAsPercent;                                       // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                                UnknownData_0005[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  PercentageFormat;                                        // 0x0310(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                        SupportedResolutions;                                    // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                                ResolutionValue;                                         // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UMulticastInlineDelegate                               OnResolutionValueChanged;                                // 0x0348(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0006[0xF];                                   // 0x0349(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		bool                                                         SnapToGrid;                                              // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                                UnknownData_0007[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnDlssValueChanged;                                      // 0x0360(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0008[0xF];                                   // 0x0361(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		float                                                        SliderTextSizeRatio;                                     // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SetDLSSQualityValue(int32_t NewQuality);
		void AddIntegralValue(int32_t Value, int32_t* NewValue);
		void AddFloatValue(float Value, float* NewValue);
		void SetResolutionValue(const class FString& Resolution);
		void SetQualityValue(int32_t NewQuality);
		void SetIntegralValue(int32_t NewInteger, int32_t* NewValue);
		void SetFloatValue(float NewFloat, float* NewValue);
		void UpdateSliderText();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__TheSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__TheSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature();
		void BndEvt__TheSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature();
		void ExecuteUbergraph_W_StandardSlider(int32_t EntryPoint);
		void OnDlssValueChanged__DelegateSignature(int32_t NewIntegerValue, float NewSliderValue);
		void OnResolutionValueChanged__DelegateSignature(const class FString& NewResolutionValue, float NewSliderValue);
		void OnQualityValueChanged__DelegateSignature(int32_t NewQualityValue, float NewSliderValue);
		void OnIntegralValueChanged__DelegateSignature(int32_t NewIntegerValue, float NewSliderValue);
		void OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
