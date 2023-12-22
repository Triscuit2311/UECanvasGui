#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_WeaponRaised.AG_WeaponRaised_C
// (None)

class UClass* UAG_WeaponRaised_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_WeaponRaised_C");

	return Clss;
}


// AG_WeaponRaised_C AG_WeaponRaised.Default__AG_WeaponRaised_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_WeaponRaised_C* UAG_WeaponRaised_C::GetDefaultObj()
{
	static class UAG_WeaponRaised_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_WeaponRaised_C*>(UAG_WeaponRaised_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_WeaponRaised.AG_WeaponRaised_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAG_WeaponRaised_C::CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_WeaponRaised_C", "CanOpen");

	Params::UAG_WeaponRaised_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


