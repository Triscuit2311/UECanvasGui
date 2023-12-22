#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_TimeSincePerformingCombatMove.AG_TimeSincePerformingCombatMove_C
// (None)

class UClass* UAG_TimeSincePerformingCombatMove_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_TimeSincePerformingCombatMove_C");

	return Clss;
}


// AG_TimeSincePerformingCombatMove_C AG_TimeSincePerformingCombatMove.Default__AG_TimeSincePerformingCombatMove_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_TimeSincePerformingCombatMove_C* UAG_TimeSincePerformingCombatMove_C::GetDefaultObj()
{
	static class UAG_TimeSincePerformingCombatMove_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_TimeSincePerformingCombatMove_C*>(UAG_TimeSincePerformingCombatMove_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_TimeSincePerformingCombatMove.AG_TimeSincePerformingCombatMove_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UBaseCombatActivity*         CallFunc_GetCombatActivity_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAG_TimeSincePerformingCombatMove_C::CanOpen(struct FAIActionDecisionContext& Context, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_TimeSincePerformingCombatMove_C", "CanOpen");

	Params::UAG_TimeSincePerformingCombatMove_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCombatActivity_ReturnValue = CallFunc_GetCombatActivity_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


