#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_StandardCheckbox.W_StandardCheckbox_C
// (None)

class UClass* UW_StandardCheckbox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_StandardCheckbox_C");

	return Clss;
}


// W_StandardCheckbox_C W_StandardCheckbox.Default__W_StandardCheckbox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_StandardCheckbox_C* UW_StandardCheckbox_C::GetDefaultObj()
{
	static class UW_StandardCheckbox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_StandardCheckbox_C*>(UW_StandardCheckbox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_StandardCheckbox.W_StandardCheckbox_C.SetCheckedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardCheckbox_C::SetCheckedState(bool NewChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCheckbox_C", "SetCheckedState");

	Params::UW_StandardCheckbox_C_SetCheckedState_Params Parms{};

	Parms.NewChecked = NewChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardCheckbox.W_StandardCheckbox_C.UpdateCheckVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardCheckbox_C::UpdateCheckVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCheckbox_C", "UpdateCheckVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCheckbox.W_StandardCheckbox_C.BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_StandardCheckbox_C::BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCheckbox_C", "BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCheckbox.W_StandardCheckbox_C.BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_StandardCheckbox_C::BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCheckbox_C", "BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCheckbox.W_StandardCheckbox_C.BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_StandardCheckbox_C::BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCheckbox_C", "BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCheckbox.W_StandardCheckbox_C.BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_StandardCheckbox_C::BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCheckbox_C", "BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCheckbox.W_StandardCheckbox_C.BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_StandardCheckbox_C::BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCheckbox_C", "BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCheckbox.W_StandardCheckbox_C.OnSynchronizeProperties
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_StandardCheckbox_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCheckbox_C", "OnSynchronizeProperties");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCheckbox.W_StandardCheckbox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_StandardCheckbox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCheckbox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCheckbox.W_StandardCheckbox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardCheckbox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCheckbox_C", "PreConstruct");

	Params::UW_StandardCheckbox_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardCheckbox.W_StandardCheckbox_C.ExecuteUbergraph_W_StandardCheckbox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODEvent*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardCheckbox_C::ExecuteUbergraph_W_StandardCheckbox(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, class UFMODEvent* K2Node_Select_Default, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCheckbox_C", "ExecuteUbergraph_W_StandardCheckbox");

	Params::UW_StandardCheckbox_C_ExecuteUbergraph_W_StandardCheckbox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardCheckbox.W_StandardCheckbox_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardCheckbox_C::OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCheckbox_C", "OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCheckbox.W_StandardCheckbox_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardCheckbox_C::OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCheckbox_C", "OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCheckbox.W_StandardCheckbox_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardCheckbox_C::OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCheckbox_C", "OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCheckbox.W_StandardCheckbox_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardCheckbox_C::OnReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCheckbox_C", "OnReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCheckbox.W_StandardCheckbox_C.OnCheckStateChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardCheckbox_C::OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCheckbox_C", "OnCheckStateChange__DelegateSignature");

	Params::UW_StandardCheckbox_C_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}

}


