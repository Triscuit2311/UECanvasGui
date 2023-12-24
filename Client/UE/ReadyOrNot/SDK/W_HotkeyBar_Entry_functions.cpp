#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_HotkeyBar_Entry.W_HotkeyBar_Entry_C
// (None)

class UClass* UW_HotkeyBar_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_HotkeyBar_Entry_C");

	return Clss;
}


// W_HotkeyBar_Entry_C W_HotkeyBar_Entry.Default__W_HotkeyBar_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_HotkeyBar_Entry_C* UW_HotkeyBar_Entry_C::GetDefaultObj()
{
	static class UW_HotkeyBar_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_HotkeyBar_Entry_C*>(UW_HotkeyBar_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.OnInputMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HotkeyBar_Entry_C::OnInputMethodChanged(enum class ECommonInputType bNewInputType, enum class ECommonInputType Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HotkeyBar_Entry_C", "OnInputMethodChanged");

	Params::UW_HotkeyBar_Entry_C_OnInputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_HotkeyBar_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HotkeyBar_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_HotkeyBar_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HotkeyBar_Entry_C", "PreConstruct");

	Params::UW_HotkeyBar_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.SetBinding
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSt_HotkeySettings          Hotkey                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_HotkeyBar_Entry_C::SetBinding(const struct FSt_HotkeySettings& Hotkey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HotkeyBar_Entry_C", "SetBinding");

	Params::UW_HotkeyBar_Entry_C_SetBinding_Params Parms{};

	Parms.Hotkey = Hotkey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HotkeyBar_Entry_C::BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HotkeyBar_Entry_C", "BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature");

	Params::UW_HotkeyBar_Entry_C_BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_HotkeyBar_Entry_C::BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HotkeyBar_Entry_C", "BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HotkeyBar_Entry_C::BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HotkeyBar_Entry_C", "BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UW_HotkeyBar_Entry_C_BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_HotkeyBar_Entry_C::BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HotkeyBar_Entry_C", "BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_HotkeyBar_Entry_C::BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HotkeyBar_Entry_C", "BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.ExecuteUbergraph_W_HotkeyBar_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_HotkeySettings          K2Node_CustomEvent_Hotkey                                        (HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Select_Default_1                                          (ConstParm)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_2                                          (None)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HotkeyBar_Entry_C::ExecuteUbergraph_W_HotkeyBar_Entry(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, bool K2Node_Event_IsDesignTime, const struct FSt_HotkeySettings& K2Node_CustomEvent_Hotkey, class FText Temp_text_Variable_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const class FString& CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, const struct FSlateBrush& K2Node_Select_Default_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool Temp_bool_Variable_2, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, class FText K2Node_Select_Default_2, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HotkeyBar_Entry_C", "ExecuteUbergraph_W_HotkeyBar_Entry");

	Params::UW_HotkeyBar_Entry_C_ExecuteUbergraph_W_HotkeyBar_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Hotkey = K2Node_CustomEvent_Hotkey;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue = CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue_1 = CallFunc_GetReadyOrNotPlayerController_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1 = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.OnHotkeyButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_HotkeyBar_Entry_C*        TriggeringHotkeyEntry                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HotkeyBar_Entry_C::OnHotkeyButtonClicked__DelegateSignature(class UW_HotkeyBar_Entry_C* TriggeringHotkeyEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HotkeyBar_Entry_C", "OnHotkeyButtonClicked__DelegateSignature");

	Params::UW_HotkeyBar_Entry_C_OnHotkeyButtonClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringHotkeyEntry = TriggeringHotkeyEntry;

	UObject::ProcessEvent(Func, &Parms);

}

}


