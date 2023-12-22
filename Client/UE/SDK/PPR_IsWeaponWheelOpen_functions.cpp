#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PPR_IsWeaponWheelOpen.PPR_IsWeaponWheelOpen_C
// (None)

class UClass* UPPR_IsWeaponWheelOpen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPR_IsWeaponWheelOpen_C");

	return Clss;
}


// PPR_IsWeaponWheelOpen_C PPR_IsWeaponWheelOpen.Default__PPR_IsWeaponWheelOpen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPPR_IsWeaponWheelOpen_C* UPPR_IsWeaponWheelOpen_C::GetDefaultObj()
{
	static class UPPR_IsWeaponWheelOpen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPPR_IsWeaponWheelOpen_C*>(UPPR_IsWeaponWheelOpen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PPR_IsWeaponWheelOpen.PPR_IsWeaponWheelOpen_C.EnablePostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPPR_IsWeaponWheelOpen_C::EnablePostProcessEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPR_IsWeaponWheelOpen_C", "EnablePostProcessEffect");

	Params::UPPR_IsWeaponWheelOpen_C_EnablePostProcessEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


