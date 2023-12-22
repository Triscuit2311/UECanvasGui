#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAction_AdvancetoEnemy.AIAction_AdvancetoEnemy_C
// (None)

class UClass* UAIAction_AdvancetoEnemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_AdvancetoEnemy_C");

	return Clss;
}


// AIAction_AdvancetoEnemy_C AIAction_AdvancetoEnemy.Default__AIAction_AdvancetoEnemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_AdvancetoEnemy_C* UAIAction_AdvancetoEnemy_C::GetDefaultObj()
{
	static class UAIAction_AdvancetoEnemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_AdvancetoEnemy_C*>(UAIAction_AdvancetoEnemy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_AdvancetoEnemy.AIAction_AdvancetoEnemy_C.ShouldPerformAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UBaseCombatActivity*         CallFunc_GetCombatActivity_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseCombatMoveActivity*     CallFunc_GetCombatMoveActivity_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAIAction_AdvancetoEnemy_C::ShouldPerformAction(class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, class UBaseCombatMoveActivity* CallFunc_GetCombatMoveActivity_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_AdvancetoEnemy_C", "ShouldPerformAction");

	Params::UAIAction_AdvancetoEnemy_C_ShouldPerformAction_Params Parms{};

	Parms.CallFunc_GetCombatActivity_ReturnValue = CallFunc_GetCombatActivity_ReturnValue;
	Parms.CallFunc_GetCombatMoveActivity_ReturnValue = CallFunc_GetCombatMoveActivity_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIAction_AdvancetoEnemy.AIAction_AdvancetoEnemy_C.BeginAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_AdvancetoEnemy_C::BeginAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_AdvancetoEnemy_C", "BeginAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_AdvancetoEnemy.AIAction_AdvancetoEnemy_C.OnCreate_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ACyberneticController*       Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_AdvancetoEnemy_C::OnCreate_Blueprint(class ACyberneticController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_AdvancetoEnemy_C", "OnCreate_Blueprint");

	Params::UAIAction_AdvancetoEnemy_C_OnCreate_Blueprint_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_AdvancetoEnemy.AIAction_AdvancetoEnemy_C.ExecuteUbergraph_AIAction_AdvancetoEnemy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticController*       K2Node_Event_Controller                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAdvanceToEnemyPosition_C*   CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseCombatActivity*         CallFunc_GetCombatActivity_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_AdvancetoEnemy_C::ExecuteUbergraph_AIAction_AdvancetoEnemy(int32 EntryPoint, class ACyberneticController* K2Node_Event_Controller, class UAdvanceToEnemyPosition_C* CallFunc_SpawnObject_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_AdvancetoEnemy_C", "ExecuteUbergraph_AIAction_AdvancetoEnemy");

	Params::UAIAction_AdvancetoEnemy_C_ExecuteUbergraph_AIAction_AdvancetoEnemy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetCombatActivity_ReturnValue = CallFunc_GetCombatActivity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


