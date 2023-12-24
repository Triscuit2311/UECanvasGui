#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PPR_IsWeaponWheelClosed.PPR_IsWeaponWheelClosed_C
// (None)

class UClass* UPPR_IsWeaponWheelClosed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPR_IsWeaponWheelClosed_C");

	return Clss;
}


// PPR_IsWeaponWheelClosed_C PPR_IsWeaponWheelClosed.Default__PPR_IsWeaponWheelClosed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPPR_IsWeaponWheelClosed_C* UPPR_IsWeaponWheelClosed_C::GetDefaultObj()
{
	static class UPPR_IsWeaponWheelClosed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPPR_IsWeaponWheelClosed_C*>(UPPR_IsWeaponWheelClosed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PPR_IsWeaponWheelClosed.PPR_IsWeaponWheelClosed_C.EnablePostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPPR_IsWeaponWheelClosed_C::EnablePostProcessEffect(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPR_IsWeaponWheelClosed_C", "EnablePostProcessEffect");

	Params::UPPR_IsWeaponWheelClosed_C_EnablePostProcessEffect_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


