#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_PushMoveIsOnCooldown.AG_PushMoveIsOnCooldown_C
// (None)

class UClass* UAG_PushMoveIsOnCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_PushMoveIsOnCooldown_C");

	return Clss;
}


// AG_PushMoveIsOnCooldown_C AG_PushMoveIsOnCooldown.Default__AG_PushMoveIsOnCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_PushMoveIsOnCooldown_C* UAG_PushMoveIsOnCooldown_C::GetDefaultObj()
{
	static class UAG_PushMoveIsOnCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_PushMoveIsOnCooldown_C*>(UAG_PushMoveIsOnCooldown_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_PushMoveIsOnCooldown.AG_PushMoveIsOnCooldown_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TSubclassOf<class UBaseActivity>   Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UActivityManager*            CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAG_PushMoveIsOnCooldown_C::CanOpen(struct FAIActionDecisionContext& Context, TSubclassOf<class UBaseActivity> Temp_class_Variable, class UActivityManager* CallFunc_GetWorldSubsystem_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_PushMoveIsOnCooldown_C", "CanOpen");

	Params::UAG_PushMoveIsOnCooldown_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


