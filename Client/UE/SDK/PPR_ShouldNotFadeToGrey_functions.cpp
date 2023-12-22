#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PPR_ShouldNotFadeToGrey.PPR_ShouldNotFadeToGrey_C
// (None)

class UClass* UPPR_ShouldNotFadeToGrey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPR_ShouldNotFadeToGrey_C");

	return Clss;
}


// PPR_ShouldNotFadeToGrey_C PPR_ShouldNotFadeToGrey.Default__PPR_ShouldNotFadeToGrey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPPR_ShouldNotFadeToGrey_C* UPPR_ShouldNotFadeToGrey_C::GetDefaultObj()
{
	static class UPPR_ShouldNotFadeToGrey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPPR_ShouldNotFadeToGrey_C*>(UPPR_ShouldNotFadeToGrey_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PPR_ShouldNotFadeToGrey.PPR_ShouldNotFadeToGrey_C.EnablePostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPPR_ShouldNotFadeToGrey_C::EnablePostProcessEffect(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPR_ShouldNotFadeToGrey_C", "EnablePostProcessEffect");

	Params::UPPR_ShouldNotFadeToGrey_C_EnablePostProcessEffect_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


