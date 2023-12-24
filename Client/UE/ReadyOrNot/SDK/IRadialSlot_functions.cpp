#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IRadialSlot.IRadialSlot_C
// (None)

class UClass* IIRadialSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IRadialSlot_C");

	return Clss;
}


// IRadialSlot_C IRadialSlot.Default__IRadialSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIRadialSlot_C* IIRadialSlot_C::GetDefaultObj()
{
	static class IIRadialSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIRadialSlot_C*>(IIRadialSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IRadialSlot.IRadialSlot_C.OnUnhighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Unselected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIRadialSlot_C::OnUnhighlight(bool Unselected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IRadialSlot_C", "OnUnhighlight");

	Params::IIRadialSlot_C_OnUnhighlight_Params Parms{};

	Parms.Unselected = Unselected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IRadialSlot.IRadialSlot_C.OnHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIRadialSlot_C::OnHighlight(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IRadialSlot_C", "OnHighlight");

	Params::IIRadialSlot_C_OnHighlight_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}

}


