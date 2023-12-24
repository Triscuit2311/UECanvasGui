#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing_Media_AudioEntry.W_Briefing_Media_AudioEntry_C
// (None)

class UClass* UW_Briefing_Media_AudioEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_Media_AudioEntry_C");

	return Clss;
}


// W_Briefing_Media_AudioEntry_C W_Briefing_Media_AudioEntry.Default__W_Briefing_Media_AudioEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_Media_AudioEntry_C* UW_Briefing_Media_AudioEntry_C::GetDefaultObj()
{
	static class UW_Briefing_Media_AudioEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_Media_AudioEntry_C*>(UW_Briefing_Media_AudioEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing_Media_AudioEntry.W_Briefing_Media_AudioEntry_C.GetTextColor
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 Color                                                            (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor                               (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_1                             (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_2                             (None)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_3                             (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_4                             (None)
// struct FSlateColor                 K2Node_Select_Default_1                                          (None)
// struct FSlateColor                 K2Node_Select_Default_2                                          (None)
// struct FSlateColor                 K2Node_Select_Default_3                                          (None)

void UW_Briefing_Media_AudioEntry_C::GetTextColor(struct FSlateColor* Color, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_2, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_2, const struct FSlateColor& K2Node_Select_Default, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_3, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_3, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_4, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_4, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_C", "GetTextColor");

	Params::UW_Briefing_Media_AudioEntry_C_GetTextColor_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_GetColorByName_LinearColor = CallFunc_GetColorByName_LinearColor;
	Parms.CallFunc_GetColorByName_SlateColor = CallFunc_GetColorByName_SlateColor;
	Parms.CallFunc_GetColorByName_LinearColor_1 = CallFunc_GetColorByName_LinearColor_1;
	Parms.CallFunc_GetColorByName_SlateColor_1 = CallFunc_GetColorByName_SlateColor_1;
	Parms.CallFunc_GetColorByName_LinearColor_2 = CallFunc_GetColorByName_LinearColor_2;
	Parms.CallFunc_GetColorByName_SlateColor_2 = CallFunc_GetColorByName_SlateColor_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetColorByName_LinearColor_3 = CallFunc_GetColorByName_LinearColor_3;
	Parms.CallFunc_GetColorByName_SlateColor_3 = CallFunc_GetColorByName_SlateColor_3;
	Parms.CallFunc_GetColorByName_LinearColor_4 = CallFunc_GetColorByName_LinearColor_4;
	Parms.CallFunc_GetColorByName_SlateColor_4 = CallFunc_GetColorByName_SlateColor_4;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function W_Briefing_Media_AudioEntry.W_Briefing_Media_AudioEntry_C.SetPressedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Media_AudioEntry_C::SetPressedState(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_C", "SetPressedState");

	Params::UW_Briefing_Media_AudioEntry_C_SetPressedState_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_AudioEntry.W_Briefing_Media_AudioEntry_C.SetHoverState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Media_AudioEntry_C::SetHoverState(bool Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_C", "SetHoverState");

	Params::UW_Briefing_Media_AudioEntry_C_SetHoverState_Params Parms{};

	Parms.Hovered = Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_AudioEntry.W_Briefing_Media_AudioEntry_C.GetIconColor
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor                               (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_1                             (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_2                             (None)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_3                             (None)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_4                             (None)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_AudioEntry_C::GetIconColor(struct FLinearColor* Color, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_2, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_2, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_3, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_3, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_2, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_4, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_4, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_3, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_C", "GetIconColor");

	Params::UW_Briefing_Media_AudioEntry_C_GetIconColor_Params Parms{};

	Parms.CallFunc_GetColorByName_LinearColor = CallFunc_GetColorByName_LinearColor;
	Parms.CallFunc_GetColorByName_SlateColor = CallFunc_GetColorByName_SlateColor;
	Parms.CallFunc_GetColorByName_LinearColor_1 = CallFunc_GetColorByName_LinearColor_1;
	Parms.CallFunc_GetColorByName_SlateColor_1 = CallFunc_GetColorByName_SlateColor_1;
	Parms.CallFunc_GetColorByName_LinearColor_2 = CallFunc_GetColorByName_LinearColor_2;
	Parms.CallFunc_GetColorByName_SlateColor_2 = CallFunc_GetColorByName_SlateColor_2;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;
	Parms.CallFunc_GetColorByName_LinearColor_3 = CallFunc_GetColorByName_LinearColor_3;
	Parms.CallFunc_GetColorByName_SlateColor_3 = CallFunc_GetColorByName_SlateColor_3;
	Parms.CallFunc_SelectColor_ReturnValue_2 = CallFunc_SelectColor_ReturnValue_2;
	Parms.CallFunc_GetColorByName_LinearColor_4 = CallFunc_GetColorByName_LinearColor_4;
	Parms.CallFunc_GetColorByName_SlateColor_4 = CallFunc_GetColorByName_SlateColor_4;
	Parms.CallFunc_SelectColor_ReturnValue_3 = CallFunc_SelectColor_ReturnValue_3;
	Parms.CallFunc_SelectColor_ReturnValue_4 = CallFunc_SelectColor_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function W_Briefing_Media_AudioEntry.W_Briefing_Media_AudioEntry_C.UpdateVisualState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Playing                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetIconColor_Color                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetTextColor_Color                                      (None)

void UW_Briefing_Media_AudioEntry_C::UpdateVisualState(bool Hovered, bool Pressed, bool Selected, bool Playing, const struct FLinearColor& CallFunc_GetIconColor_Color, const struct FSlateColor& CallFunc_GetTextColor_Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_C", "UpdateVisualState");

	Params::UW_Briefing_Media_AudioEntry_C_UpdateVisualState_Params Parms{};

	Parms.Hovered = Hovered;
	Parms.Pressed = Pressed;
	Parms.Selected = Selected;
	Parms.Playing = Playing;
	Parms.CallFunc_GetIconColor_Color = CallFunc_GetIconColor_Color;
	Parms.CallFunc_GetTextColor_Color = CallFunc_GetTextColor_Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_AudioEntry.W_Briefing_Media_AudioEntry_C.Deselect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Media_AudioEntry_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_C", "Deselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Media_AudioEntry.W_Briefing_Media_AudioEntry_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Media_AudioEntry_C::Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_C", "Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Media_AudioEntry.W_Briefing_Media_AudioEntry_C.UpdateText
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Media_AudioEntry_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_C", "UpdateText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Media_AudioEntry.W_Briefing_Media_AudioEntry_C.SetIsPlaying
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlaying                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsNotEmpty_NotEmpty                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_AudioEntry_C::SetIsPlaying(bool IsPlaying, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_TextIsNotEmpty_NotEmpty, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_C", "SetIsPlaying");

	Params::UW_Briefing_Media_AudioEntry_C_SetIsPlaying_Params Parms{};

	Parms.IsPlaying = IsPlaying;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_TextIsNotEmpty_NotEmpty = CallFunc_TextIsNotEmpty_NotEmpty;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_AudioEntry.W_Briefing_Media_AudioEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Media_AudioEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_C", "PreConstruct");

	Params::UW_Briefing_Media_AudioEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_AudioEntry.W_Briefing_Media_AudioEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Briefing_Media_AudioEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Media_AudioEntry.W_Briefing_Media_AudioEntry_C.BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_AudioEntry_C::BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_C", "BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_Briefing_Media_AudioEntry_C_BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_AudioEntry.W_Briefing_Media_AudioEntry_C.BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_AudioEntry_C::BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_C", "BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature");

	Params::UW_Briefing_Media_AudioEntry_C_BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_AudioEntry.W_Briefing_Media_AudioEntry_C.BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Briefing_Media_AudioEntry_C::BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_C", "BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Media_AudioEntry.W_Briefing_Media_AudioEntry_C.BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Briefing_Media_AudioEntry_C::BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_C", "BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Media_AudioEntry.W_Briefing_Media_AudioEntry_C.BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_4_Released__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Briefing_Media_AudioEntry_C::BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_4_Released__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_C", "BndEvt__W_Briefing_Media_AudioEntry_btn_AudioEntry_K2Node_ComponentBoundEvent_4_Released__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Media_AudioEntry.W_Briefing_Media_AudioEntry_C.ExecuteUbergraph_W_Briefing_Media_AudioEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_AudioEntry_C::ExecuteUbergraph_W_Briefing_Media_AudioEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_C", "ExecuteUbergraph_W_Briefing_Media_AudioEntry");

	Params::UW_Briefing_Media_AudioEntry_C_ExecuteUbergraph_W_Briefing_Media_AudioEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_AudioEntry.W_Briefing_Media_AudioEntry_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Briefing_Media_AudioEntry_C*AudioEntry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_AudioEntry_C::OnClick__DelegateSignature(class UW_Briefing_Media_AudioEntry_C* AudioEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_C", "OnClick__DelegateSignature");

	Params::UW_Briefing_Media_AudioEntry_C_OnClick__DelegateSignature_Params Parms{};

	Parms.AudioEntry = AudioEntry;

	UObject::ProcessEvent(Func, &Parms);

}

}


