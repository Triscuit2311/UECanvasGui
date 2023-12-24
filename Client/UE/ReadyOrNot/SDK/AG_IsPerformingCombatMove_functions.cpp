#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_IsPerformingCombatMove.AG_IsPerformingCombatMove_C
// (None)

class UClass* UAG_IsPerformingCombatMove_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_IsPerformingCombatMove_C");

	return Clss;
}


// AG_IsPerformingCombatMove_C AG_IsPerformingCombatMove.Default__AG_IsPerformingCombatMove_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_IsPerformingCombatMove_C* UAG_IsPerformingCombatMove_C::GetDefaultObj()
{
	static class UAG_IsPerformingCombatMove_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_IsPerformingCombatMove_C*>(UAG_IsPerformingCombatMove_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_IsPerformingCombatMove.AG_IsPerformingCombatMove_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UBaseCombatActivity*         CallFunc_GetCombatActivity_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseCombatMoveActivity*     CallFunc_GetCombatMoveActivity_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAG_IsPerformingCombatMove_C::CanOpen(struct FAIActionDecisionContext& Context, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, class UBaseCombatMoveActivity* CallFunc_GetCombatMoveActivity_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_IsPerformingCombatMove_C", "CanOpen");

	Params::UAG_IsPerformingCombatMove_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCombatActivity_ReturnValue = CallFunc_GetCombatActivity_ReturnValue;
	Parms.CallFunc_GetCombatMoveActivity_ReturnValue = CallFunc_GetCombatMoveActivity_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


