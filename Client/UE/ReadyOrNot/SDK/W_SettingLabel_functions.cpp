#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SettingLabel.W_SettingLabel_C
// (None)

class UClass* UW_SettingLabel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SettingLabel_C");

	return Clss;
}


// W_SettingLabel_C W_SettingLabel.Default__W_SettingLabel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SettingLabel_C* UW_SettingLabel_C::GetDefaultObj()
{
	static class UW_SettingLabel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SettingLabel_C*>(UW_SettingLabel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_SettingLabel.W_SettingLabel_C.CopyFromCombo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingLabel_C::CopyFromCombo(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingLabel_C", "CopyFromCombo");

	Params::UW_SettingLabel_C_CopyFromCombo_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingLabel.W_SettingLabel_C.CopyFromSlider
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingLabel_C::CopyFromSlider(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingLabel_C", "CopyFromSlider");

	Params::UW_SettingLabel_C_CopyFromSlider_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingLabel.W_SettingLabel_C.CopyFromCheckbox
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingLabel_C::CopyFromCheckbox(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingLabel_C", "CopyFromCheckbox");

	Params::UW_SettingLabel_C_CopyFromCheckbox_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingLabel.W_SettingLabel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingLabel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingLabel_C", "PreConstruct");

	Params::UW_SettingLabel_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingLabel.W_SettingLabel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_SettingLabel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingLabel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingLabel.W_SettingLabel_C.BndEvt__W_SettingLabel_Button_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingLabel_C::BndEvt__W_SettingLabel_Button_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingLabel_C", "BndEvt__W_SettingLabel_Button_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature");

	Params::UW_SettingLabel_C_BndEvt__W_SettingLabel_Button_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingLabel.W_SettingLabel_C.BndEvt__W_SettingLabel_Button_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_SettingLabel_C::BndEvt__W_SettingLabel_Button_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingLabel_C", "BndEvt__W_SettingLabel_Button_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingLabel.W_SettingLabel_C.ExecuteUbergraph_W_SettingLabel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingLabel_C::ExecuteUbergraph_W_SettingLabel(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsDesignTime, class UW_Button_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingLabel_C", "ExecuteUbergraph_W_SettingLabel");

	Params::UW_SettingLabel_C_ExecuteUbergraph_W_SettingLabel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingLabel.W_SettingLabel_C.OnLabelUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingLabel_C::OnLabelUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingLabel_C", "OnLabelUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingLabel.W_SettingLabel_C.OnLabelHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingLabel_C::OnLabelHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingLabel_C", "OnLabelHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


