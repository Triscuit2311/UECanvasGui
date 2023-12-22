#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PPR_BulletNotBlockedBySAPIPlate.PPR_BulletNotBlockedBySAPIPlate_C
// (None)

class UClass* UPPR_BulletNotBlockedBySAPIPlate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPR_BulletNotBlockedBySAPIPlate_C");

	return Clss;
}


// PPR_BulletNotBlockedBySAPIPlate_C PPR_BulletNotBlockedBySAPIPlate.Default__PPR_BulletNotBlockedBySAPIPlate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPPR_BulletNotBlockedBySAPIPlate_C* UPPR_BulletNotBlockedBySAPIPlate_C::GetDefaultObj()
{
	static class UPPR_BulletNotBlockedBySAPIPlate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPPR_BulletNotBlockedBySAPIPlate_C*>(UPPR_BulletNotBlockedBySAPIPlate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PPR_BulletNotBlockedBySAPIPlate.PPR_BulletNotBlockedBySAPIPlate_C.EnablePostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPPR_BulletNotBlockedBySAPIPlate_C::EnablePostProcessEffect(bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPR_BulletNotBlockedBySAPIPlate_C", "EnablePostProcessEffect");

	Params::UPPR_BulletNotBlockedBySAPIPlate_C_EnablePostProcessEffect_Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


