#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_AudioPlayer_Button.W_AudioPlayer_Button_C
// (None)

class UClass* UW_AudioPlayer_Button_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_AudioPlayer_Button_C");

	return Clss;
}


// W_AudioPlayer_Button_C W_AudioPlayer_Button.Default__W_AudioPlayer_Button_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_AudioPlayer_Button_C* UW_AudioPlayer_Button_C::GetDefaultObj()
{
	static class UW_AudioPlayer_Button_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_AudioPlayer_Button_C*>(UW_AudioPlayer_Button_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.SequenceEvent__ENTRYPOINTW_AudioPlayer_Button_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AudioPlayer_Button_C::SequenceEvent__ENTRYPOINTW_AudioPlayer_Button_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AudioPlayer_Button_C", "SequenceEvent__ENTRYPOINTW_AudioPlayer_Button_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.SequenceEvent__ENTRYPOINTW_AudioPlayer_Button_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AudioPlayer_Button_C::SequenceEvent__ENTRYPOINTW_AudioPlayer_Button_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AudioPlayer_Button_C", "SequenceEvent__ENTRYPOINTW_AudioPlayer_Button_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.SetTheme
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseDarkTheme                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UCommonButtonStyle>K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UW_AudioPlayer_Button_C::SetTheme(bool UseDarkTheme, bool Temp_bool_Variable, TSubclassOf<class UCommonButtonStyle> K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AudioPlayer_Button_C", "SetTheme");

	Params::UW_AudioPlayer_Button_C_SetTheme_Params Parms{};

	Parms.UseDarkTheme = UseDarkTheme;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.UpdateControlSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Briefing_Audio_PlayStatesControl                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_Briefing_Audio_PlayStatesK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AudioPlayer_Button_C::UpdateControlSetting(enum class E_Briefing_Audio_PlayStates Control, bool Temp_bool_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class E_Briefing_Audio_PlayStates K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AudioPlayer_Button_C", "UpdateControlSetting");

	Params::UW_AudioPlayer_Button_C_UpdateControlSetting_Params Parms{};

	Parms.Control = Control;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.UpdateIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                CallFunc_GetIconColor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_AudioPlayer_Button_C::UpdateIcon(const struct FLinearColor& CallFunc_GetIconColor_ReturnValue, const struct FSlateBrush& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AudioPlayer_Button_C", "UpdateIcon");

	Params::UW_AudioPlayer_Button_C_UpdateIcon_Params Parms{};

	Parms.CallFunc_GetIconColor_ReturnValue = CallFunc_GetIconColor_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.GetIconColor
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPressed_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor                               (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_1                             (None)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UW_AudioPlayer_Button_C::GetIconColor(bool CallFunc_IsPressed_ReturnValue, bool CallFunc_GetSelected_ReturnValue, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_2, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_3, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AudioPlayer_Button_C", "GetIconColor");

	Params::UW_AudioPlayer_Button_C_GetIconColor_Params Parms{};

	Parms.CallFunc_IsPressed_ReturnValue = CallFunc_IsPressed_ReturnValue;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.CallFunc_GetColorByName_LinearColor = CallFunc_GetColorByName_LinearColor;
	Parms.CallFunc_GetColorByName_SlateColor = CallFunc_GetColorByName_SlateColor;
	Parms.CallFunc_GetColorByName_LinearColor_1 = CallFunc_GetColorByName_LinearColor_1;
	Parms.CallFunc_GetColorByName_SlateColor_1 = CallFunc_GetColorByName_SlateColor_1;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;
	Parms.CallFunc_SelectColor_ReturnValue_2 = CallFunc_SelectColor_ReturnValue_2;
	Parms.CallFunc_SelectColor_ReturnValue_3 = CallFunc_SelectColor_ReturnValue_3;
	Parms.CallFunc_SelectColor_ReturnValue_4 = CallFunc_SelectColor_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.SetPressedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AudioPlayer_Button_C::SetPressedState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AudioPlayer_Button_C", "SetPressedState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.SetHoveredState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_AudioPlayer_Button_C::SetHoveredState(bool IsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AudioPlayer_Button_C", "SetHoveredState");

	Params::UW_AudioPlayer_Button_C_SetHoveredState_Params Parms{};

	Parms.IsHovered = IsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.AnimateHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AudioPlayer_Button_C::AnimateHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AudioPlayer_Button_C", "AnimateHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_AudioPlayer_Button_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AudioPlayer_Button_C", "PreConstruct");

	Params::UW_AudioPlayer_Button_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.HoverAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Reverse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              FPS                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AudioPlayer_Button_C::HoverAnim(float Duration, bool Reverse, float FPS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AudioPlayer_Button_C", "HoverAnim");

	Params::UW_AudioPlayer_Button_C_HoverAnim_Params Parms{};

	Parms.Duration = Duration;
	Parms.Reverse = Reverse;
	Parms.FPS = FPS;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_AudioPlayer_Button_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AudioPlayer_Button_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_AudioPlayer_Button_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AudioPlayer_Button_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_AudioPlayer_Button_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AudioPlayer_Button_C", "BP_OnSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_AudioPlayer_Button_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AudioPlayer_Button_C", "BP_OnDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.ExecuteUbergraph_W_AudioPlayer_Button
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Duration                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Reverse                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_FPS                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AudioPlayer_Button_C::ExecuteUbergraph_W_AudioPlayer_Button(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_Duration, bool K2Node_CustomEvent_Reverse, float K2Node_CustomEvent_FPS, float CallFunc_SelectFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AudioPlayer_Button_C", "ExecuteUbergraph_W_AudioPlayer_Button");

	Params::UW_AudioPlayer_Button_C_ExecuteUbergraph_W_AudioPlayer_Button_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Duration = K2Node_CustomEvent_Duration;
	Parms.K2Node_CustomEvent_Reverse = K2Node_CustomEvent_Reverse;
	Parms.K2Node_CustomEvent_FPS = K2Node_CustomEvent_FPS;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


