#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x300 - 0x260)
// WidgetBlueprintGeneratedClass W_CommonCarousel.W_CommonCarousel_C
class UW_CommonCarousel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                ArrowLeft;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ArrowRight;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetCarousel*                 Carousel;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               FocusButton;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               LeftButton;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               RightButton;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                          OptionsAsText;                                     // 0x298(0x10)(Edit, BlueprintVisible)
	float                                        LastPressed;                                       // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFocused;                                         // 0x2AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        OptionsValueAsStrings;                             // 0x2B0(0x10)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            FocusLostDispatcher;                               // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  DescriptionText;                                   // 0x2D0(0x18)(Edit, BlueprintVisible)
	class UTextBlock*                            DescriptionWidget;                                 // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPageIndexChanged;                                // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_CommonCarousel_C* GetDefaultObj();

	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetAnalogValue_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	struct FEventReply Navigate(bool Right, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void ClearItems();
	void CreateCarouselItem(class FText Label, const class FString& Value, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class USizeBox* CallFunc_SpawnObject_ReturnValue, class UScaleBox* CallFunc_SpawnObject_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UW_Text_C* CallFunc_SpawnObject_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void CreateCarouselDefaultItems(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class FText CallFunc_Array_Get_Item, class UScaleBox* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UTextBlock* CallFunc_SpawnObject_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__CommonCarousel_LeftButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CommonCarousel_RightButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_CommonCarousel_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_CommonCarousel_RightButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_CommonCarousel_Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void BndEvt__W_CommonCarousel_CommonWidgetCarousel_98_K2Node_ComponentBoundEvent_5_OnCurrentPageIndexChanged__DelegateSignature(class UCommonWidgetCarousel* CarouselWidget, int32 CurrentPageIndex);
	void ExecuteUbergraph_W_CommonCarousel(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float CallFunc_GetGameTimeInSeconds_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCommonWidgetCarousel* K2Node_ComponentBoundEvent_CarouselWidget, int32 K2Node_ComponentBoundEvent_CurrentPageIndex, const class FString& CallFunc_Array_Get_Item);
	void OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value);
	void FocusLostDispatcher__DelegateSignature(int32 Index);
};

}


