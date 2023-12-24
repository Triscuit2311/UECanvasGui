#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PPR_WasPlayerHitFromLeft.PPR_WasPlayerHitFromLeft_C
// (None)

class UClass* UPPR_WasPlayerHitFromLeft_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPR_WasPlayerHitFromLeft_C");

	return Clss;
}


// PPR_WasPlayerHitFromLeft_C PPR_WasPlayerHitFromLeft.Default__PPR_WasPlayerHitFromLeft_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPPR_WasPlayerHitFromLeft_C* UPPR_WasPlayerHitFromLeft_C::GetDefaultObj()
{
	static class UPPR_WasPlayerHitFromLeft_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPPR_WasPlayerHitFromLeft_C*>(UPPR_WasPlayerHitFromLeft_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PPR_WasPlayerHitFromLeft.PPR_WasPlayerHitFromLeft_C.EnablePostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPPR_WasPlayerHitFromLeft_C::EnablePostProcessEffect(bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPR_WasPlayerHitFromLeft_C", "EnablePostProcessEffect");

	Params::UPPR_WasPlayerHitFromLeft_C_EnablePostProcessEffect_Params Parms{};

	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


