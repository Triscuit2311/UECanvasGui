#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0xCA8 - 0xBD0)
// WidgetBlueprintGeneratedClass W_AudioPlayer_Button.W_AudioPlayer_Button_C
class UW_AudioPlayer_Button_C : public UCommonButtonImplementation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover;                                             // 0xBD8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Img_icon;                                          // 0xBE0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bActive;                                           // 0xBE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHovered;                                          // 0xBE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bPressed;                                          // 0xBEA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSelected;                                         // 0xBEB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bUseDarkTheme;                                     // 0xBEC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LabelText;                                         // 0xBF0(0x18)(Edit, BlueprintVisible)
	class FText                                  ActiveLabelText;                                   // 0xC08(0x18)(Edit, BlueprintVisible)
	enum class E_Briefing_Audio_PlayStates       Control;                                           // 0xC20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFlipIcon_Horiz_;                                  // 0xC21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20FE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TextSize;                                          // 0xC24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnimCurrentTime;                                   // 0xC28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnimDuration;                                      // 0xC2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentTextSize;                                   // 0xC30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReverseHoverAnim;                                  // 0xC34(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2100[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          AnimationTimer;                                    // 0xC38(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        AnimFPS;                                           // 0xC40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnimStartSize;                                     // 0xC44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Briefing_Audio_PlayStates       CurrentControl;                                    // 0xC48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2104[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class E_Briefing_Audio_PlayStates, struct FSlateBrush> ControlIcons;                                      // 0xC50(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSubclassOf<class UCommonButtonStyle>        DarkThemeStyle;                                    // 0xCA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_AudioPlayer_Button_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTW_AudioPlayer_Button_1();
	void SequenceEvent__ENTRYPOINTW_AudioPlayer_Button_0();
	void SetTheme(bool UseDarkTheme, bool Temp_bool_Variable, TSubclassOf<class UCommonButtonStyle> K2Node_Select_Default);
	void UpdateControlSetting(enum class E_Briefing_Audio_PlayStates Control, bool Temp_bool_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class E_Briefing_Audio_PlayStates K2Node_Select_Default);
	void UpdateIcon(const struct FLinearColor& CallFunc_GetIconColor_ReturnValue, const struct FSlateBrush& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	struct FLinearColor GetIconColor(bool CallFunc_IsPressed_ReturnValue, bool CallFunc_GetSelected_ReturnValue, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_2, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_3, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_4);
	void SetPressedState();
	void SetHoveredState(bool IsHovered);
	void AnimateHover();
	void PreConstruct(bool IsDesignTime);
	void HoverAnim(float Duration, bool Reverse, float FPS);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnSelected();
	void BP_OnDeselected();
	void ExecuteUbergraph_W_AudioPlayer_Button(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_Duration, bool K2Node_CustomEvent_Reverse, float K2Node_CustomEvent_FPS, float CallFunc_SelectFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}


