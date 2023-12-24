#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SubMenu.W_SubMenu_C
// (None)

class UClass* UW_SubMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SubMenu_C");

	return Clss;
}


// W_SubMenu_C W_SubMenu.Default__W_SubMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SubMenu_C* UW_SubMenu_C::GetDefaultObj()
{
	static class UW_SubMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SubMenu_C*>(UW_SubMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_SubMenu.W_SubMenu_C.InputModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UsingGamepad                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SubMenu_C::InputModeChanged(bool UsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SubMenu_C", "InputModeChanged");

	Params::UW_SubMenu_C_InputModeChanged_Params Parms{};

	Parms.UsingGamepad = UsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SubMenu.W_SubMenu_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_SubMenu_C::BP_OnHandleBackAction(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SubMenu_C", "BP_OnHandleBackAction");

	Params::UW_SubMenu_C_BP_OnHandleBackAction_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_SubMenu.W_SubMenu_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_SubMenu_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SubMenu_C", "BP_GetDesiredFocusTarget");

	Params::UW_SubMenu_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_SubMenu.W_SubMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_SubMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SubMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SubMenu.W_SubMenu_C.OnInputMethodChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SubMenu_C::OnInputMethodChanged_Event_0(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SubMenu_C", "OnInputMethodChanged_Event_0");

	Params::UW_SubMenu_C_OnInputMethodChanged_Event_0_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SubMenu.W_SubMenu_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_SubMenu_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SubMenu_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SubMenu.W_SubMenu_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_SubMenu_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SubMenu_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SubMenu.W_SubMenu_C.DisableInputConsume
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SubMenu_C::DisableInputConsume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SubMenu_C", "DisableInputConsume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SubMenu.W_SubMenu_C.EnableInputConsume
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SubMenu_C::EnableInputConsume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SubMenu_C", "EnableInputConsume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SubMenu.W_SubMenu_C.ExecuteUbergraph_W_SubMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SubMenu_C::ExecuteUbergraph_W_SubMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SubMenu_C", "ExecuteUbergraph_W_SubMenu");

	Params::UW_SubMenu_C_ExecuteUbergraph_W_SubMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SubMenu.W_SubMenu_C.HandleBackPress__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SubMenu_C::HandleBackPress__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SubMenu_C", "HandleBackPress__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


