#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IRadialInput.IRadialInput_C
// (None)

class UClass* IIRadialInput_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IRadialInput_C");

	return Clss;
}


// IRadialInput_C IRadialInput.Default__IRadialInput_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIRadialInput_C* IIRadialInput_C::GetDefaultObj()
{
	static class IIRadialInput_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIRadialInput_C*>(IIRadialInput_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IRadialInput.IRadialInput_C.GetJoystickDirection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EJoystickTypes          Stick                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   StickInput                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIRadialInput_C::GetJoystickDirection(enum class EJoystickTypes Stick, struct FVector2D* StickInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IRadialInput_C", "GetJoystickDirection");

	Params::IIRadialInput_C_GetJoystickDirection_Params Parms{};

	Parms.Stick = Stick;

	UObject::ProcessEvent(Func, &Parms);

	if (StickInput != nullptr)
		*StickInput = std::move(Parms.StickInput);

}

}


