#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PPR_WasPlayerHitFromBack.PPR_WasPlayerHitFromBack_C
// (None)

class UClass* UPPR_WasPlayerHitFromBack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPR_WasPlayerHitFromBack_C");

	return Clss;
}


// PPR_WasPlayerHitFromBack_C PPR_WasPlayerHitFromBack.Default__PPR_WasPlayerHitFromBack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPPR_WasPlayerHitFromBack_C* UPPR_WasPlayerHitFromBack_C::GetDefaultObj()
{
	static class UPPR_WasPlayerHitFromBack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPPR_WasPlayerHitFromBack_C*>(UPPR_WasPlayerHitFromBack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PPR_WasPlayerHitFromBack.PPR_WasPlayerHitFromBack_C.EnablePostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPPR_WasPlayerHitFromBack_C::EnablePostProcessEffect(bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPR_WasPlayerHitFromBack_C", "EnablePostProcessEffect");

	Params::UPPR_WasPlayerHitFromBack_C_EnablePostProcessEffect_Params Parms{};

	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


