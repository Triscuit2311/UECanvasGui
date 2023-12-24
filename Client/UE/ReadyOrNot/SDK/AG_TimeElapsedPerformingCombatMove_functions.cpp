#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_TimeElapsedPerformingCombatMove.AG_TimeElapsedPerformingCombatMove_C
// (None)

class UClass* UAG_TimeElapsedPerformingCombatMove_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_TimeElapsedPerformingCombatMove_C");

	return Clss;
}


// AG_TimeElapsedPerformingCombatMove_C AG_TimeElapsedPerformingCombatMove.Default__AG_TimeElapsedPerformingCombatMove_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_TimeElapsedPerformingCombatMove_C* UAG_TimeElapsedPerformingCombatMove_C::GetDefaultObj()
{
	static class UAG_TimeElapsedPerformingCombatMove_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_TimeElapsedPerformingCombatMove_C*>(UAG_TimeElapsedPerformingCombatMove_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_TimeElapsedPerformingCombatMove.AG_TimeElapsedPerformingCombatMove_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UBaseCombatActivity*         CallFunc_GetCombatActivity_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAG_TimeElapsedPerformingCombatMove_C::CanOpen(struct FAIActionDecisionContext& Context, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_TimeElapsedPerformingCombatMove_C", "CanOpen");

	Params::UAG_TimeElapsedPerformingCombatMove_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCombatActivity_ReturnValue = CallFunc_GetCombatActivity_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


