#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_ReachedStressUntilWeaponRaise.AG_ReachedStressUntilWeaponRaise_C
// (None)

class UClass* UAG_ReachedStressUntilWeaponRaise_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_ReachedStressUntilWeaponRaise_C");

	return Clss;
}


// AG_ReachedStressUntilWeaponRaise_C AG_ReachedStressUntilWeaponRaise.Default__AG_ReachedStressUntilWeaponRaise_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_ReachedStressUntilWeaponRaise_C* UAG_ReachedStressUntilWeaponRaise_C::GetDefaultObj()
{
	static class UAG_ReachedStressUntilWeaponRaise_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_ReachedStressUntilWeaponRaise_C*>(UAG_ReachedStressUntilWeaponRaise_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_ReachedStressUntilWeaponRaise.AG_ReachedStressUntilWeaponRaise_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UReadyOrNotAIConfig*         CallFunc_Get_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloat_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAG_ReachedStressUntilWeaponRaise_C::CanOpen(struct FAIActionDecisionContext& Context, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, float CallFunc_GetFloat_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_ReachedStressUntilWeaponRaise_C", "CanOpen");

	Params::UAG_ReachedStressUntilWeaponRaise_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_Get_ReturnValue = CallFunc_Get_ReturnValue;
	Parms.CallFunc_GetFloat_ReturnValue = CallFunc_GetFloat_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

