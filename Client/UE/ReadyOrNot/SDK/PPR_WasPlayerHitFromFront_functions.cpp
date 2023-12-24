#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PPR_WasPlayerHitFromFront.PPR_WasPlayerHitFromFront_C
// (None)

class UClass* UPPR_WasPlayerHitFromFront_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPR_WasPlayerHitFromFront_C");

	return Clss;
}


// PPR_WasPlayerHitFromFront_C PPR_WasPlayerHitFromFront.Default__PPR_WasPlayerHitFromFront_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPPR_WasPlayerHitFromFront_C* UPPR_WasPlayerHitFromFront_C::GetDefaultObj()
{
	static class UPPR_WasPlayerHitFromFront_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPPR_WasPlayerHitFromFront_C*>(UPPR_WasPlayerHitFromFront_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PPR_WasPlayerHitFromFront.PPR_WasPlayerHitFromFront_C.EnablePostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPPR_WasPlayerHitFromFront_C::EnablePostProcessEffect(bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPR_WasPlayerHitFromFront_C", "EnablePostProcessEffect");

	Params::UPPR_WasPlayerHitFromFront_C_EnablePostProcessEffect_Params Parms{};

	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


