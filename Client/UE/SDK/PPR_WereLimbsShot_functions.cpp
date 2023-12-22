#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PPR_WereLimbsShot.PPR_WereLimbsShot_C
// (None)

class UClass* UPPR_WereLimbsShot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPR_WereLimbsShot_C");

	return Clss;
}


// PPR_WereLimbsShot_C PPR_WereLimbsShot.Default__PPR_WereLimbsShot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPPR_WereLimbsShot_C* UPPR_WereLimbsShot_C::GetDefaultObj()
{
	static class UPPR_WereLimbsShot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPPR_WereLimbsShot_C*>(UPPR_WereLimbsShot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PPR_WereLimbsShot.PPR_WereLimbsShot_C.EnablePostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnyLimbHit_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPPR_WereLimbsShot_C::EnablePostProcessEffect(bool CallFunc_IsAnyLimbHit_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPR_WereLimbsShot_C", "EnablePostProcessEffect");

	Params::UPPR_WereLimbsShot_C_EnablePostProcessEffect_Params Parms{};

	Parms.CallFunc_IsAnyLimbHit_ReturnValue = CallFunc_IsAnyLimbHit_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


