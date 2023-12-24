#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C
// (None)

class UClass* UAIAction_ReturnToSpawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_ReturnToSpawn_C");

	return Clss;
}


// AIAction_ReturnToSpawn_C AIAction_ReturnToSpawn.Default__AIAction_ReturnToSpawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_ReturnToSpawn_C* UAIAction_ReturnToSpawn_C::GetDefaultObj()
{
	static class UAIAction_ReturnToSpawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_ReturnToSpawn_C*>(UAIAction_ReturnToSpawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C.ShouldPerformAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAIAction_ReturnToSpawn_C::ShouldPerformAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ReturnToSpawn_C", "ShouldPerformAction");

	Params::UAIAction_ReturnToSpawn_C_ShouldPerformAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C.BeginAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_ReturnToSpawn_C::BeginAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ReturnToSpawn_C", "BeginAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C.OnMoveComplete_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RequestID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ReturnToSpawn_C::OnMoveComplete_Blueprint(class AAIController* Controller, int32 RequestID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ReturnToSpawn_C", "OnMoveComplete_Blueprint");

	Params::UAIAction_ReturnToSpawn_C_OnMoveComplete_Blueprint_Params Parms{};

	Parms.Controller = Controller;
	Parms.RequestID = RequestID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C.ExecuteUbergraph_AIAction_ReturnToSpawn
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_Controller                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_RequestID                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ReturnToSpawn_C::ExecuteUbergraph_AIAction_ReturnToSpawn(int32 EntryPoint, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class AAIController* K2Node_Event_Controller, int32 K2Node_Event_RequestID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ReturnToSpawn_C", "ExecuteUbergraph_AIAction_ReturnToSpawn");

	Params::UAIAction_ReturnToSpawn_C_ExecuteUbergraph_AIAction_ReturnToSpawn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.K2Node_Event_RequestID = K2Node_Event_RequestID;

	UObject::ProcessEvent(Func, &Parms);

}

}


