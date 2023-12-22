#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x103 (0x38B - 0x288)
// WidgetBlueprintGeneratedClass W_Briefing_Media_AudioEntry.W_Briefing_Media_AudioEntry_C
class UW_Briefing_Media_AudioEntry_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimPlaying;                                       // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           btn_AudioEntry;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_icon;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  Rtxt_Transcript;                                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Description;                                   // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Name;                                          // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Title;                                             // 0x2C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Description;                                       // 0x2D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Transcript;                                        // 0x2F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UFMODEvent*                            FMODEvent;                                         // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlaying;                                          // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3760[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMissionAudio                         MissionAudioData;                                  // 0x318(0x60)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnClick;                                           // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bHovered;                                          // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bPressed;                                          // 0x389(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSelected;                                         // 0x38A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_Briefing_Media_AudioEntry_C* GetDefaultObj();

	void GetTextColor(struct FSlateColor* Color, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_2, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_2, const struct FSlateColor& K2Node_Select_Default, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_3, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_3, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_4, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_4, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_Select_Default_3);
	void SetPressedState(bool Pressed);
	void SetHoverState(bool Hovered);
	void GetIconColor(struct FLinearColor* Color, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_2, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_2, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_3, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_3, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_2, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_4, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_4, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_3, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_4);
	void UpdateVisualState(bool Hovered, bool Pressed, bool Selected, bool Playing, const struct FLinearColor& CallFunc_GetIconColor_Color, const struct FSlateColor& CallFunc_GetTextColor_Color);
	void Deselect();
	void Select();
	void UpdateText();
	void SetIsPlaying(bool IsPlaying, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_TextIsNotEmpty_NotEmpty, enum class ESlateVisibility K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature();
	void BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature();
	void BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_4_Released__DelegateSignature();
	void ExecuteUbergraph_W_Briefing_Media_AudioEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button);
	void OnClick__DelegateSignature(class UW_Briefing_Media_AudioEntry_C* AudioEntry);
};

}


