#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MainMenu_SmallButton_V4.W_MainMenu_SmallButton_V4_C
// (None)

class UClass* UW_MainMenu_SmallButton_V4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MainMenu_SmallButton_V4_C");

	return Clss;
}


// W_MainMenu_SmallButton_V4_C W_MainMenu_SmallButton_V4.Default__W_MainMenu_SmallButton_V4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MainMenu_SmallButton_V4_C* UW_MainMenu_SmallButton_V4_C::GetDefaultObj()
{
	static class UW_MainMenu_SmallButton_V4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MainMenu_SmallButton_V4_C*>(UW_MainMenu_SmallButton_V4_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_MainMenu_SmallButton_V4.W_MainMenu_SmallButton_V4_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MainMenu_SmallButton_V4_C::SetState(bool Hovered, bool Selected, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_SmallButton_V4_C", "SetState");

	Params::UW_MainMenu_SmallButton_V4_C_SetState_Params Parms{};

	Parms.Hovered = Hovered;
	Parms.Selected = Selected;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_SmallButton_V4.W_MainMenu_SmallButton_V4_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MainMenu_SmallButton_V4_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_SmallButton_V4_C", "PreConstruct");

	Params::UW_MainMenu_SmallButton_V4_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_SmallButton_V4.W_MainMenu_SmallButton_V4_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_MainMenu_SmallButton_V4_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_SmallButton_V4_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_SmallButton_V4.W_MainMenu_SmallButton_V4_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_MainMenu_SmallButton_V4_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_SmallButton_V4_C", "OnAddedToFocusPath");

	Params::UW_MainMenu_SmallButton_V4_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_SmallButton_V4.W_MainMenu_SmallButton_V4_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_MainMenu_SmallButton_V4_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_SmallButton_V4_C", "OnRemovedFromFocusPath");

	Params::UW_MainMenu_SmallButton_V4_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_SmallButton_V4.W_MainMenu_SmallButton_V4_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_MainMenu_SmallButton_V4_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_SmallButton_V4_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_SmallButton_V4.W_MainMenu_SmallButton_V4_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_MainMenu_SmallButton_V4_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_SmallButton_V4_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_SmallButton_V4.W_MainMenu_SmallButton_V4_C.ExecuteUbergraph_W_MainMenu_SmallButton_V4
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)

void UW_MainMenu_SmallButton_V4_C::ExecuteUbergraph_W_MainMenu_SmallButton_V4(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_SmallButton_V4_C", "ExecuteUbergraph_W_MainMenu_SmallButton_V4");

	Params::UW_MainMenu_SmallButton_V4_C_ExecuteUbergraph_W_MainMenu_SmallButton_V4_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}

}


