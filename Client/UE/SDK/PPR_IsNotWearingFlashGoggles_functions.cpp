#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PPR_IsNotWearingFlashGoggles.PPR_IsNotWearingFlashGoggles_C
// (None)

class UClass* UPPR_IsNotWearingFlashGoggles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPR_IsNotWearingFlashGoggles_C");

	return Clss;
}


// PPR_IsNotWearingFlashGoggles_C PPR_IsNotWearingFlashGoggles.Default__PPR_IsNotWearingFlashGoggles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPPR_IsNotWearingFlashGoggles_C* UPPR_IsNotWearingFlashGoggles_C::GetDefaultObj()
{
	static class UPPR_IsNotWearingFlashGoggles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPPR_IsNotWearingFlashGoggles_C*>(UPPR_IsNotWearingFlashGoggles_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PPR_IsNotWearingFlashGoggles.PPR_IsNotWearingFlashGoggles_C.EnablePostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWearingAntiFlashGoggles_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPPR_IsNotWearingFlashGoggles_C::EnablePostProcessEffect(bool CallFunc_IsWearingAntiFlashGoggles_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPR_IsNotWearingFlashGoggles_C", "EnablePostProcessEffect");

	Params::UPPR_IsNotWearingFlashGoggles_C_EnablePostProcessEffect_Params Parms{};

	Parms.CallFunc_IsWearingAntiFlashGoggles_ReturnValue = CallFunc_IsWearingAntiFlashGoggles_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


