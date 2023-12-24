#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IRadioWidget.IRadioWidget_C
// (None)

class UClass* IIRadioWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IRadioWidget_C");

	return Clss;
}


// IRadioWidget_C IRadioWidget.Default__IRadioWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIRadioWidget_C* IIRadioWidget_C::GetDefaultObj()
{
	static class IIRadioWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIRadioWidget_C*>(IIRadioWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IRadioWidget.IRadioWidget_C.Equals
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IIRadioWidget_C>Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIRadioWidget_C::Equals(TScriptInterface<class IIRadioWidget_C> Other, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IRadioWidget_C", "Equals");

	Params::IIRadioWidget_C_Equals_Params Parms{};

	Parms.Other = Other;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function IRadioWidget.IRadioWidget_C.OnRadioDeselected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIRadioWidget_C::OnRadioDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IRadioWidget_C", "OnRadioDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IRadioWidget.IRadioWidget_C.OnRadioSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIRadioWidget_C::OnRadioSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IRadioWidget_C", "OnRadioSelected");



	UObject::ProcessEvent(Func, nullptr);

}

}


