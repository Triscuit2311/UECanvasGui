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
	 * WidgetBlueprintGeneratedClass W_Briefing_AudioControls_Button.W_Briefing_AudioControls_Button_C
	 * Size -> 0x0150 (FullSize[0x03B0] - InheritedSize[0x0260])
	 */
	class UW_Briefing_AudioControls_Button_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      Hover;                                                   // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UW_Button_C*                                           btn_Play;                                                // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                img_icon;                                                // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_Label;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                         Active;                                                  // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         Hovered;                                                 // 0x0289(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         FlipIconHoriz;                                           // 0x028A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x5];                                   // 0x028B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  LabelText;                                               // 0x0290(0x0018) Edit, BlueprintVisible
		class FText                                                  ActiveLabelText;                                         // 0x02A8(0x0018) Edit, BlueprintVisible
		class UMulticastInlineDelegate                               AudioControlButtonClicked;                               // 0x02C0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x02C1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		struct FSlateBrush                                           Icon;                                                    // 0x02D0(0x0088) Edit, BlueprintVisible
		class UMulticastInlineDelegate                               AudioControlButtonPressed;                               // 0x0358(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0002[0xF];                                   // 0x0359(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               AudioControlButtonReleased;                              // 0x0368(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0003[0xF];                                   // 0x0369(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               AudioControlButtonHovered;                               // 0x0378(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0004[0xF];                                   // 0x0379(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		float                                                        TextSize;                                                // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        AnimCurrentTime;                                         // 0x038C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        AnimDuration;                                            // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        CurrentTextSize;                                         // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         ReverseHoverAnim;                                        // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0005[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                          AnimationTimer;                                          // 0x03A0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                        AnimFPS;                                                 // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        AnimStartSize;                                           // 0x03AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SequenceEvent__ENTRYPOINTW_Briefing_AudioControls_Button_2();
		void SequenceEvent__ENTRYPOINTW_Briefing_AudioControls_Button_1();
		void SetHovered(bool IsHovered);
		void SetActive(bool IsActive);
		void AnimateHover();
		void BndEvt__btn_Play_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature();
		void BndEvt__btn_Play_K2Node_ComponentBoundEvent_4_Released__DelegateSignature();
		void BndEvt__btn_Play_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature();
		void HoverAnim(float Duration, bool Reverse, float FPS);
		void BndEvt__btn_Play_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__btn_Play_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_W_Briefing_AudioControls_Button(int32_t EntryPoint);
		void AudioControlButtonHovered__DelegateSignature(class UW_Briefing_AudioControls_Button_C* Button, bool Hovered);
		void AudioControlButtonReleased__DelegateSignature();
		void AudioControlButtonPressed__DelegateSignature();
		void AudioControlButtonClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
