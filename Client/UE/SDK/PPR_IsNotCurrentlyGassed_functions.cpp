#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PPR_IsNotCurrentlyGassed.PPR_IsNotCurrentlyGassed_C
// (None)

class UClass* UPPR_IsNotCurrentlyGassed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPR_IsNotCurrentlyGassed_C");

	return Clss;
}


// PPR_IsNotCurrentlyGassed_C PPR_IsNotCurrentlyGassed.Default__PPR_IsNotCurrentlyGassed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPPR_IsNotCurrentlyGassed_C* UPPR_IsNotCurrentlyGassed_C::GetDefaultObj()
{
	static class UPPR_IsNotCurrentlyGassed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPPR_IsNotCurrentlyGassed_C*>(UPPR_IsNotCurrentlyGassed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PPR_IsNotCurrentlyGassed.PPR_IsNotCurrentlyGassed_C.EnablePostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentlyGassed_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPPR_IsNotCurrentlyGassed_C::EnablePostProcessEffect(bool CallFunc_IsCurrentlyGassed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPR_IsNotCurrentlyGassed_C", "EnablePostProcessEffect");

	Params::UPPR_IsNotCurrentlyGassed_C_EnablePostProcessEffect_Params Parms{};

	Parms.CallFunc_IsCurrentlyGassed_ReturnValue = CallFunc_IsCurrentlyGassed_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


