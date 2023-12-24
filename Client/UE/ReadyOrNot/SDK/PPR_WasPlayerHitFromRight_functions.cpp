#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PPR_WasPlayerHitFromRight.PPR_WasPlayerHitFromRight_C
// (None)

class UClass* UPPR_WasPlayerHitFromRight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPR_WasPlayerHitFromRight_C");

	return Clss;
}


// PPR_WasPlayerHitFromRight_C PPR_WasPlayerHitFromRight.Default__PPR_WasPlayerHitFromRight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPPR_WasPlayerHitFromRight_C* UPPR_WasPlayerHitFromRight_C::GetDefaultObj()
{
	static class UPPR_WasPlayerHitFromRight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPPR_WasPlayerHitFromRight_C*>(UPPR_WasPlayerHitFromRight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PPR_WasPlayerHitFromRight.PPR_WasPlayerHitFromRight_C.EnablePostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPPR_WasPlayerHitFromRight_C::EnablePostProcessEffect(bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPR_WasPlayerHitFromRight_C", "EnablePostProcessEffect");

	Params::UPPR_WasPlayerHitFromRight_C_EnablePostProcessEffect_Params Parms{};

	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


