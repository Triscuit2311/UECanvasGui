#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAction_FireAtLastSeenPos.AIAction_FireAtLastSeenPos_C
// (None)

class UClass* UAIAction_FireAtLastSeenPos_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_FireAtLastSeenPos_C");

	return Clss;
}


// AIAction_FireAtLastSeenPos_C AIAction_FireAtLastSeenPos.Default__AIAction_FireAtLastSeenPos_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_FireAtLastSeenPos_C* UAIAction_FireAtLastSeenPos_C::GetDefaultObj()
{
	static class UAIAction_FireAtLastSeenPos_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_FireAtLastSeenPos_C*>(UAIAction_FireAtLastSeenPos_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_FireAtLastSeenPos.AIAction_FireAtLastSeenPos_C.ShouldPerformAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAIAction_FireAtLastSeenPos_C::ShouldPerformAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_FireAtLastSeenPos_C", "ShouldPerformAction");

	Params::UAIAction_FireAtLastSeenPos_C_ShouldPerformAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIAction_FireAtLastSeenPos.AIAction_FireAtLastSeenPos_C.BeginAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_FireAtLastSeenPos_C::BeginAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_FireAtLastSeenPos_C", "BeginAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_FireAtLastSeenPos.AIAction_FireAtLastSeenPos_C.ExecuteUbergraph_AIAction_FireAtLastSeenPos
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBaseCombatActivity*         CallFunc_GetCombatActivity_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_FireAtLastSeenPos_C::ExecuteUbergraph_AIAction_FireAtLastSeenPos(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_FireAtLastSeenPos_C", "ExecuteUbergraph_AIAction_FireAtLastSeenPos");

	Params::UAIAction_FireAtLastSeenPos_C_ExecuteUbergraph_AIAction_FireAtLastSeenPos_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCombatActivity_ReturnValue = CallFunc_GetCombatActivity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


