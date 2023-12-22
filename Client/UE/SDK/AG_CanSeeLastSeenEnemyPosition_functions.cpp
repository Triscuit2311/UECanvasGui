#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_CanSeeLastSeenEnemyPosition.AG_CanSeeLastSeenEnemyPosition_C
// (None)

class UClass* UAG_CanSeeLastSeenEnemyPosition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_CanSeeLastSeenEnemyPosition_C");

	return Clss;
}


// AG_CanSeeLastSeenEnemyPosition_C AG_CanSeeLastSeenEnemyPosition.Default__AG_CanSeeLastSeenEnemyPosition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_CanSeeLastSeenEnemyPosition_C* UAG_CanSeeLastSeenEnemyPosition_C::GetDefaultObj()
{
	static class UAG_CanSeeLastSeenEnemyPosition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_CanSeeLastSeenEnemyPosition_C*>(UAG_CanSeeLastSeenEnemyPosition_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_CanSeeLastSeenEnemyPosition.AG_CanSeeLastSeenEnemyPosition_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasLineOfSightTo_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAG_CanSeeLastSeenEnemyPosition_C::CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_HasLineOfSightTo_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_CanSeeLastSeenEnemyPosition_C", "CanOpen");

	Params::UAG_CanSeeLastSeenEnemyPosition_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_HasLineOfSightTo_ReturnValue = CallFunc_HasLineOfSightTo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


