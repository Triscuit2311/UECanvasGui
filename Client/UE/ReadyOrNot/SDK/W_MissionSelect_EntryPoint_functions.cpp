#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C
// (None)

class UClass* UW_MissionSelect_EntryPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MissionSelect_EntryPoint_C");

	return Clss;
}


// W_MissionSelect_EntryPoint_C W_MissionSelect_EntryPoint.Default__W_MissionSelect_EntryPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MissionSelect_EntryPoint_C* UW_MissionSelect_EntryPoint_C::GetDefaultObj()
{
	static class UW_MissionSelect_EntryPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MissionSelect_EntryPoint_C*>(UW_MissionSelect_EntryPoint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_EntryPoint_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_C", "GetFocusTarget");

	Params::UW_MissionSelect_EntryPoint_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionSelect_EntryPoint_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_C", "BackPage");

	Params::UW_MissionSelect_EntryPoint_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionSelect_EntryPoint_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_C", "Hide");

	Params::UW_MissionSelect_EntryPoint_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MissionSelect_EntryPoint_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_C", "SetInputMode");

	Params::UW_MissionSelect_EntryPoint_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_EntryPoint_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_C", "ChangePage");

	Params::UW_MissionSelect_EntryPoint_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.SetupEntryPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEntryPoint                 EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_MissionSelect_EntryPoint_C::SetupEntryPoint(const struct FEntryPoint& EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_C", "SetupEntryPoint");

	Params::UW_MissionSelect_EntryPoint_C_SetupEntryPoint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.BndEvt__W_MissionSelect_EntryPoint_ButtonBase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_EntryPoint_C::BndEvt__W_MissionSelect_EntryPoint_ButtonBase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_C", "BndEvt__W_MissionSelect_EntryPoint_ButtonBase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MissionSelect_EntryPoint_C_BndEvt__W_MissionSelect_EntryPoint_ButtonBase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.Deselect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionSelect_EntryPoint_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_C", "Deselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.Select
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionSelect_EntryPoint_C::Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_C", "Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_EntryPoint_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_C", "Reveal");

	Params::UW_MissionSelect_EntryPoint_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_MissionSelect_EntryPoint_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.ExecuteUbergraph_W_MissionSelect_EntryPoint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEntryPoint                 K2Node_CustomEvent_EntryPoint                                    (None)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_EntryPoint_C::ExecuteUbergraph_W_MissionSelect_EntryPoint(int32 EntryPoint, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, const struct FEntryPoint& K2Node_CustomEvent_EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, float K2Node_Event_Delay, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_C", "ExecuteUbergraph_W_MissionSelect_EntryPoint");

	Params::UW_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_CustomEvent_EntryPoint = K2Node_CustomEvent_EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_MissionSelect_EntryPoint_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_EntryPoint_C::OnClicked__DelegateSignature(class UW_MissionSelect_EntryPoint_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_C", "OnClicked__DelegateSignature");

	Params::UW_MissionSelect_EntryPoint_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


