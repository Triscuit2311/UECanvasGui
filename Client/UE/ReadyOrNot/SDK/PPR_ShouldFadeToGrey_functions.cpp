#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PPR_ShouldFadeToGrey.PPR_ShouldFadeToGrey_C
// (None)

class UClass* UPPR_ShouldFadeToGrey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPR_ShouldFadeToGrey_C");

	return Clss;
}


// PPR_ShouldFadeToGrey_C PPR_ShouldFadeToGrey.Default__PPR_ShouldFadeToGrey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPPR_ShouldFadeToGrey_C* UPPR_ShouldFadeToGrey_C::GetDefaultObj()
{
	static class UPPR_ShouldFadeToGrey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPPR_ShouldFadeToGrey_C*>(UPPR_ShouldFadeToGrey_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PPR_ShouldFadeToGrey.PPR_ShouldFadeToGrey_C.EnablePostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPPR_ShouldFadeToGrey_C::EnablePostProcessEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPR_ShouldFadeToGrey_C", "EnablePostProcessEffect");

	Params::UPPR_ShouldFadeToGrey_C_EnablePostProcessEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


