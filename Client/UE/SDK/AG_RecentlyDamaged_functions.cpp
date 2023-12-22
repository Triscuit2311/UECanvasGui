#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_RecentlyDamaged.AG_RecentlyDamaged_C
// (None)

class UClass* UAG_RecentlyDamaged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_RecentlyDamaged_C");

	return Clss;
}


// AG_RecentlyDamaged_C AG_RecentlyDamaged.Default__AG_RecentlyDamaged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_RecentlyDamaged_C* UAG_RecentlyDamaged_C::GetDefaultObj()
{
	static class UAG_RecentlyDamaged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_RecentlyDamaged_C*>(UAG_RecentlyDamaged_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_RecentlyDamaged.AG_RecentlyDamaged_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasRecentlyTakenDamage_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAG_RecentlyDamaged_C::CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_HasRecentlyTakenDamage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_RecentlyDamaged_C", "CanOpen");

	Params::UAG_RecentlyDamaged_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_HasRecentlyTakenDamage_ReturnValue = CallFunc_HasRecentlyTakenDamage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


