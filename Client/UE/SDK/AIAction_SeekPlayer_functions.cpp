#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAction_SeekPlayer.AIAction_SeekPlayer_C
// (None)

class UClass* UAIAction_SeekPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_SeekPlayer_C");

	return Clss;
}


// AIAction_SeekPlayer_C AIAction_SeekPlayer.Default__AIAction_SeekPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_SeekPlayer_C* UAIAction_SeekPlayer_C::GetDefaultObj()
{
	static class UAIAction_SeekPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_SeekPlayer_C*>(UAIAction_SeekPlayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.ShouldPerformAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UBaseCombatActivity*         CallFunc_GetCombatActivity_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseCombatMoveActivity*     CallFunc_GetCombatMoveActivity_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAIAction_SeekPlayer_C::ShouldPerformAction(class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, class UBaseCombatMoveActivity* CallFunc_GetCombatMoveActivity_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_SeekPlayer_C", "ShouldPerformAction");

	Params::UAIAction_SeekPlayer_C_ShouldPerformAction_Params Parms{};

	Parms.CallFunc_GetCombatActivity_ReturnValue = CallFunc_GetCombatActivity_ReturnValue;
	Parms.CallFunc_GetCombatMoveActivity_ReturnValue = CallFunc_GetCombatMoveActivity_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.BeginAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_SeekPlayer_C::BeginAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_SeekPlayer_C", "BeginAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.OnCreate_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ACyberneticController*       Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_SeekPlayer_C::OnCreate_Blueprint(class ACyberneticController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_SeekPlayer_C", "OnCreate_Blueprint");

	Params::UAIAction_SeekPlayer_C_OnCreate_Blueprint_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_SeekPlayer.AIAction_SeekPlayer_C.ExecuteUbergraph_AIAction_SeekPlayer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticController*       K2Node_Event_Controller                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USeekPlayerCombatMove_C*     CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseCombatActivity*         CallFunc_GetCombatActivity_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_SeekPlayer_C::ExecuteUbergraph_AIAction_SeekPlayer(int32 EntryPoint, class ACyberneticController* K2Node_Event_Controller, class USeekPlayerCombatMove_C* CallFunc_SpawnObject_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_SeekPlayer_C", "ExecuteUbergraph_AIAction_SeekPlayer");

	Params::UAIAction_SeekPlayer_C_ExecuteUbergraph_AIAction_SeekPlayer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetCombatActivity_ReturnValue = CallFunc_GetCombatActivity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


