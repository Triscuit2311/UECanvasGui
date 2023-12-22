#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AdvanceToEnemyPosition.AdvanceToEnemyPosition_C
// (None)

class UClass* UAdvanceToEnemyPosition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AdvanceToEnemyPosition_C");

	return Clss;
}


// AdvanceToEnemyPosition_C AdvanceToEnemyPosition.Default__AdvanceToEnemyPosition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAdvanceToEnemyPosition_C* UAdvanceToEnemyPosition_C::GetDefaultObj()
{
	static class UAdvanceToEnemyPosition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAdvanceToEnemyPosition_C*>(UAdvanceToEnemyPosition_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvanceToEnemyPosition.AdvanceToEnemyPosition_C.RequestCombatMove_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAdvanceToEnemyPosition_C::RequestCombatMove_Blueprint(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvanceToEnemyPosition_C", "RequestCombatMove_Blueprint");

	Params::UAdvanceToEnemyPosition_C_RequestCombatMove_Blueprint_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvanceToEnemyPosition.AdvanceToEnemyPosition_C.ExecuteUbergraph_AdvanceToEnemyPosition
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticController*       CallFunc_GetOwningController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAdvanceToEnemyPosition_C::ExecuteUbergraph_AdvanceToEnemyPosition(int32 EntryPoint, float K2Node_Event_DeltaTime, class ACyberneticController* CallFunc_GetOwningController_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvanceToEnemyPosition_C", "ExecuteUbergraph_AdvanceToEnemyPosition");

	Params::UAdvanceToEnemyPosition_C_ExecuteUbergraph_AdvanceToEnemyPosition_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetOwningController_ReturnValue = CallFunc_GetOwningController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


