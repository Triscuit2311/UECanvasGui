#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PPR_WasOwningPlayerShot.PPR_WasOwningPlayerShot_C
// (None)

class UClass* UPPR_WasOwningPlayerShot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPR_WasOwningPlayerShot_C");

	return Clss;
}


// PPR_WasOwningPlayerShot_C PPR_WasOwningPlayerShot.Default__PPR_WasOwningPlayerShot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPPR_WasOwningPlayerShot_C* UPPR_WasOwningPlayerShot_C::GetDefaultObj()
{
	static class UPPR_WasOwningPlayerShot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPPR_WasOwningPlayerShot_C*>(UPPR_WasOwningPlayerShot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PPR_WasOwningPlayerShot.PPR_WasOwningPlayerShot_C.EnablePostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AnyBodyPartHit_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPPR_WasOwningPlayerShot_C::EnablePostProcessEffect(bool CallFunc_AnyBodyPartHit_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPR_WasOwningPlayerShot_C", "EnablePostProcessEffect");

	Params::UPPR_WasOwningPlayerShot_C_EnablePostProcessEffect_Params Parms{};

	Parms.CallFunc_AnyBodyPartHit_ReturnValue = CallFunc_AnyBodyPartHit_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


