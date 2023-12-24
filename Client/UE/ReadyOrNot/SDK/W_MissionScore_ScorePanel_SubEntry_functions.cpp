#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MissionScore_ScorePanel_SubEntry.W_MissionScore_ScorePanel_SubEntry_C
// (None)

class UClass* UW_MissionScore_ScorePanel_SubEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MissionScore_ScorePanel_SubEntry_C");

	return Clss;
}


// W_MissionScore_ScorePanel_SubEntry_C W_MissionScore_ScorePanel_SubEntry.Default__W_MissionScore_ScorePanel_SubEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MissionScore_ScorePanel_SubEntry_C* UW_MissionScore_ScorePanel_SubEntry_C::GetDefaultObj()
{
	static class UW_MissionScore_ScorePanel_SubEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MissionScore_ScorePanel_SubEntry_C*>(UW_MissionScore_ScorePanel_SubEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_MissionScore_ScorePanel_SubEntry.W_MissionScore_ScorePanel_SubEntry_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_ScorePanel_SubEntry_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_SubEntry_C", "GetFocusTarget");

	Params::UW_MissionScore_ScorePanel_SubEntry_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_MissionScore_ScorePanel_SubEntry.W_MissionScore_ScorePanel_SubEntry_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionScore_ScorePanel_SubEntry_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_SubEntry_C", "BackPage");

	Params::UW_MissionScore_ScorePanel_SubEntry_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_MissionScore_ScorePanel_SubEntry.W_MissionScore_ScorePanel_SubEntry_C.SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_SubEntry_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Event_Receiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_ScorePanel_SubEntry_C::SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_SubEntry_1(class UObject* Event_Receiver)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_SubEntry_C", "SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_SubEntry_1");

	Params::UW_MissionScore_ScorePanel_SubEntry_C_SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_SubEntry_1_Params Parms{};

	Parms.Event_Receiver = Event_Receiver;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionScore_ScorePanel_SubEntry.W_MissionScore_ScorePanel_SubEntry_C.SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_SubEntry_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionScore_ScorePanel_SubEntry_C::SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_SubEntry_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_SubEntry_C", "SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_SubEntry_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionScore_ScorePanel_SubEntry.W_MissionScore_ScorePanel_SubEntry_C.SetValueText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 CallFunc_GetSlateColorScheme_White                               (None)
// struct FSlateColor                 CallFunc_GetSlateColorScheme_Dark                                (None)
// struct FSlateColor                 CallFunc_GetSlateColorScheme_Red                                 (None)
// struct FSlateColor                 CallFunc_GetSlateColorScheme_Yellow                              (None)
// struct FSlateColor                 CallFunc_GetSlateColorScheme_Blue                                (None)
// struct FSlateColor                 CallFunc_GetSlateColorScheme_Green                               (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// class UTextBlock*                  K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        K2Node_Select_Default_2                                          (None)

void UW_MissionScore_ScorePanel_SubEntry_C::SetValueText(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, const struct FSlateColor& CallFunc_GetSlateColorScheme_White, const struct FSlateColor& CallFunc_GetSlateColorScheme_Dark, const struct FSlateColor& CallFunc_GetSlateColorScheme_Red, const struct FSlateColor& CallFunc_GetSlateColorScheme_Yellow, const struct FSlateColor& CallFunc_GetSlateColorScheme_Blue, const struct FSlateColor& CallFunc_GetSlateColorScheme_Green, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText K2Node_Select_Default, class UTextBlock* K2Node_Select_Default_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, class FText K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_SubEntry_C", "SetValueText");

	Params::UW_MissionScore_ScorePanel_SubEntry_C_SetValueText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetSlateColorScheme_White = CallFunc_GetSlateColorScheme_White;
	Parms.CallFunc_GetSlateColorScheme_Dark = CallFunc_GetSlateColorScheme_Dark;
	Parms.CallFunc_GetSlateColorScheme_Red = CallFunc_GetSlateColorScheme_Red;
	Parms.CallFunc_GetSlateColorScheme_Yellow = CallFunc_GetSlateColorScheme_Yellow;
	Parms.CallFunc_GetSlateColorScheme_Blue = CallFunc_GetSlateColorScheme_Blue;
	Parms.CallFunc_GetSlateColorScheme_Green = CallFunc_GetSlateColorScheme_Green;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionScore_ScorePanel_SubEntry.W_MissionScore_ScorePanel_SubEntry_C.SetNameText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 CallFunc_GetSlateColorScheme_White                               (None)
// struct FSlateColor                 CallFunc_GetSlateColorScheme_Dark                                (None)
// struct FSlateColor                 CallFunc_GetSlateColorScheme_Red                                 (None)
// struct FSlateColor                 CallFunc_GetSlateColorScheme_Yellow                              (None)
// struct FSlateColor                 CallFunc_GetSlateColorScheme_Blue                                (None)
// struct FSlateColor                 CallFunc_GetSlateColorScheme_Green                               (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTextBlock*                  K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_ScorePanel_SubEntry_C::SetNameText(bool Temp_bool_Variable, const struct FSlateColor& CallFunc_GetSlateColorScheme_White, const struct FSlateColor& CallFunc_GetSlateColorScheme_Dark, const struct FSlateColor& CallFunc_GetSlateColorScheme_Red, const struct FSlateColor& CallFunc_GetSlateColorScheme_Yellow, const struct FSlateColor& CallFunc_GetSlateColorScheme_Blue, const struct FSlateColor& CallFunc_GetSlateColorScheme_Green, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UTextBlock* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_SubEntry_C", "SetNameText");

	Params::UW_MissionScore_ScorePanel_SubEntry_C_SetNameText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetSlateColorScheme_White = CallFunc_GetSlateColorScheme_White;
	Parms.CallFunc_GetSlateColorScheme_Dark = CallFunc_GetSlateColorScheme_Dark;
	Parms.CallFunc_GetSlateColorScheme_Red = CallFunc_GetSlateColorScheme_Red;
	Parms.CallFunc_GetSlateColorScheme_Yellow = CallFunc_GetSlateColorScheme_Yellow;
	Parms.CallFunc_GetSlateColorScheme_Blue = CallFunc_GetSlateColorScheme_Blue;
	Parms.CallFunc_GetSlateColorScheme_Green = CallFunc_GetSlateColorScheme_Green;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionScore_ScorePanel_SubEntry.W_MissionScore_ScorePanel_SubEntry_C.SetCountText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTextBlock*                  K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        K2Node_Select_Default_1                                          (None)

void UW_MissionScore_ScorePanel_SubEntry_C::SetCountText(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UTextBlock* K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_IntToText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_SubEntry_C", "SetCountText");

	Params::UW_MissionScore_ScorePanel_SubEntry_C_SetCountText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionScore_ScorePanel_SubEntry.W_MissionScore_ScorePanel_SubEntry_C.Finished_FABCC80443E68187381FC1BDCAC03A54
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionScore_ScorePanel_SubEntry_C::Finished_FABCC80443E68187381FC1BDCAC03A54()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_SubEntry_C", "Finished_FABCC80443E68187381FC1BDCAC03A54");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionScore_ScorePanel_SubEntry.W_MissionScore_ScorePanel_SubEntry_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionScore_ScorePanel_SubEntry_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_SubEntry_C", "SetInputMode");

	Params::UW_MissionScore_ScorePanel_SubEntry_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionScore_ScorePanel_SubEntry.W_MissionScore_ScorePanel_SubEntry_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_ScorePanel_SubEntry_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_SubEntry_C", "ChangePage");

	Params::UW_MissionScore_ScorePanel_SubEntry_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionScore_ScorePanel_SubEntry.W_MissionScore_ScorePanel_SubEntry_C.revealSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionScore_ScorePanel_SubEntry_C::RevealSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_SubEntry_C", "revealSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionScore_ScorePanel_SubEntry.W_MissionScore_ScorePanel_SubEntry_C.numberSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Event_Receiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_ScorePanel_SubEntry_C::NumberSound(class UObject* Event_Receiver)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_SubEntry_C", "numberSound");

	Params::UW_MissionScore_ScorePanel_SubEntry_C_NumberSound_Params Parms{};

	Parms.Event_Receiver = Event_Receiver;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionScore_ScorePanel_SubEntry.W_MissionScore_ScorePanel_SubEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionScore_ScorePanel_SubEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_SubEntry_C", "PreConstruct");

	Params::UW_MissionScore_ScorePanel_SubEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionScore_ScorePanel_SubEntry.W_MissionScore_ScorePanel_SubEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_MissionScore_ScorePanel_SubEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_SubEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionScore_ScorePanel_SubEntry.W_MissionScore_ScorePanel_SubEntry_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionScore_ScorePanel_SubEntry_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_SubEntry_C", "Hide");

	Params::UW_MissionScore_ScorePanel_SubEntry_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionScore_ScorePanel_SubEntry.W_MissionScore_ScorePanel_SubEntry_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_ScorePanel_SubEntry_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_SubEntry_C", "Reveal");

	Params::UW_MissionScore_ScorePanel_SubEntry_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionScore_ScorePanel_SubEntry.W_MissionScore_ScorePanel_SubEntry_C.ExecuteUbergraph_W_MissionScore_ScorePanel_SubEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Event_Receiver                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionScore_ScorePanel_SubEntry_C::ExecuteUbergraph_W_MissionScore_ScorePanel_SubEntry(int32 EntryPoint, float K2Node_Event_Delay, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, class UObject* K2Node_CustomEvent_Event_Receiver, bool K2Node_Event_IsDesignTime, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_SubEntry_C", "ExecuteUbergraph_W_MissionScore_ScorePanel_SubEntry");

	Params::UW_MissionScore_ScorePanel_SubEntry_C_ExecuteUbergraph_W_MissionScore_ScorePanel_SubEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.K2Node_CustomEvent_Event_Receiver = K2Node_CustomEvent_Event_Receiver;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayEvent2D_ReturnValue_2 = CallFunc_PlayEvent2D_ReturnValue_2;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionScore_ScorePanel_SubEntry.W_MissionScore_ScorePanel_SubEntry_C.SubEntryReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_MissionScore_ScorePanel_SubEntry_C*EntryWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Score                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionScore_ScorePanel_SubEntry_C::SubEntryReady__DelegateSignature(class UW_MissionScore_ScorePanel_SubEntry_C* EntryWidget, int32 Score)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionScore_ScorePanel_SubEntry_C", "SubEntryReady__DelegateSignature");

	Params::UW_MissionScore_ScorePanel_SubEntry_C_SubEntryReady__DelegateSignature_Params Parms{};

	Parms.EntryWidget = EntryWidget;
	Parms.Score = Score;

	UObject::ProcessEvent(Func, &Parms);

}

}


