#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PPR_IsNotCurrentlyPeppersprayed.PPR_IsNotCurrentlyPeppersprayed_C
// (None)

class UClass* UPPR_IsNotCurrentlyPeppersprayed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPR_IsNotCurrentlyPeppersprayed_C");

	return Clss;
}


// PPR_IsNotCurrentlyPeppersprayed_C PPR_IsNotCurrentlyPeppersprayed.Default__PPR_IsNotCurrentlyPeppersprayed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPPR_IsNotCurrentlyPeppersprayed_C* UPPR_IsNotCurrentlyPeppersprayed_C::GetDefaultObj()
{
	static class UPPR_IsNotCurrentlyPeppersprayed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPPR_IsNotCurrentlyPeppersprayed_C*>(UPPR_IsNotCurrentlyPeppersprayed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PPR_IsNotCurrentlyPeppersprayed.PPR_IsNotCurrentlyPeppersprayed_C.EnablePostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentlySprayed_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPPR_IsNotCurrentlyPeppersprayed_C::EnablePostProcessEffect(bool CallFunc_IsCurrentlySprayed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPR_IsNotCurrentlyPeppersprayed_C", "EnablePostProcessEffect");

	Params::UPPR_IsNotCurrentlyPeppersprayed_C_EnablePostProcessEffect_Params Parms{};

	Parms.CallFunc_IsCurrentlySprayed_ReturnValue = CallFunc_IsCurrentlySprayed_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


