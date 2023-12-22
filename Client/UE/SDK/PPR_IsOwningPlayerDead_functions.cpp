#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PPR_IsOwningPlayerDead.PPR_IsOwningPlayerDead_C
// (None)

class UClass* UPPR_IsOwningPlayerDead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPR_IsOwningPlayerDead_C");

	return Clss;
}


// PPR_IsOwningPlayerDead_C PPR_IsOwningPlayerDead.Default__PPR_IsOwningPlayerDead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPPR_IsOwningPlayerDead_C* UPPR_IsOwningPlayerDead_C::GetDefaultObj()
{
	static class UPPR_IsOwningPlayerDead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPPR_IsOwningPlayerDead_C*>(UPPR_IsOwningPlayerDead_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PPR_IsOwningPlayerDead.PPR_IsOwningPlayerDead_C.EnablePostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDeadNotUnconscious_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPPR_IsOwningPlayerDead_C::EnablePostProcessEffect(bool CallFunc_IsDeadNotUnconscious_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPR_IsOwningPlayerDead_C", "EnablePostProcessEffect");

	Params::UPPR_IsOwningPlayerDead_C_EnablePostProcessEffect_Params Parms{};

	Parms.CallFunc_IsDeadNotUnconscious_ReturnValue = CallFunc_IsDeadNotUnconscious_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


