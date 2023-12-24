#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PPR_BulletBlockedBySAPIPlate.PPR_BulletBlockedBySAPIPlate_C
// (None)

class UClass* UPPR_BulletBlockedBySAPIPlate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPR_BulletBlockedBySAPIPlate_C");

	return Clss;
}


// PPR_BulletBlockedBySAPIPlate_C PPR_BulletBlockedBySAPIPlate.Default__PPR_BulletBlockedBySAPIPlate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPPR_BulletBlockedBySAPIPlate_C* UPPR_BulletBlockedBySAPIPlate_C::GetDefaultObj()
{
	static class UPPR_BulletBlockedBySAPIPlate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPPR_BulletBlockedBySAPIPlate_C*>(UPPR_BulletBlockedBySAPIPlate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PPR_BulletBlockedBySAPIPlate.PPR_BulletBlockedBySAPIPlate_C.EnablePostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPPR_BulletBlockedBySAPIPlate_C::EnablePostProcessEffect(bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPR_BulletBlockedBySAPIPlate_C", "EnablePostProcessEffect");

	Params::UPPR_BulletBlockedBySAPIPlate_C_EnablePostProcessEffect_Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


