#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAction_CheckDoors.AIAction_CheckDoors_C
// (None)

class UClass* UAIAction_CheckDoors_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_CheckDoors_C");

	return Clss;
}


// AIAction_CheckDoors_C AIAction_CheckDoors.Default__AIAction_CheckDoors_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_CheckDoors_C* UAIAction_CheckDoors_C::GetDefaultObj()
{
	static class UAIAction_CheckDoors_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_CheckDoors_C*>(UAIAction_CheckDoors_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_CheckDoors.AIAction_CheckDoors_C.ResetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIAction_CheckDoors_C::ResetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_CheckDoors_C", "ResetData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_CheckDoors.AIAction_CheckDoors_C.CanCheckDoor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADoor*                       Door                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOpen_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ADoor*                       K2Node_DynamicCast_AsDoor                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIAction_CheckDoors_C::CanCheckDoor(class ADoor* Door, bool* Return_Value, bool CallFunc_IsOpen_ReturnValue, class ADoor* K2Node_DynamicCast_AsDoor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_CheckDoors_C", "CanCheckDoor");

	Params::UAIAction_CheckDoors_C_CanCheckDoor_Params Parms{};

	Parms.Door = Door;
	Parms.CallFunc_IsOpen_ReturnValue = CallFunc_IsOpen_ReturnValue;
	Parms.K2Node_DynamicCast_AsDoor = K2Node_DynamicCast_AsDoor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function AIAction_CheckDoors.AIAction_CheckDoors_C.EndAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_CheckDoors_C::EndAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_CheckDoors_C", "EndAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_CheckDoors.AIAction_CheckDoors_C.Event_RemoveLastCheckedDoor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIAction_CheckDoors_C::Event_RemoveLastCheckedDoor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_CheckDoors_C", "Event_RemoveLastCheckedDoor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_CheckDoors.AIAction_CheckDoors_C.Tick_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_CheckDoors_C::Tick_Blueprint(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_CheckDoors_C", "Tick_Blueprint");

	Params::UAIAction_CheckDoors_C_Tick_Blueprint_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_CheckDoors.AIAction_CheckDoors_C.OnMoveComplete_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RequestID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_CheckDoors_C::OnMoveComplete_Blueprint(class AAIController* Controller, int32 RequestID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_CheckDoors_C", "OnMoveComplete_Blueprint");

	Params::UAIAction_CheckDoors_C_OnMoveComplete_Blueprint_Params Parms{};

	Parms.Controller = Controller;
	Parms.RequestID = RequestID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_CheckDoors.AIAction_CheckDoors_C.OnCreate_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ACyberneticController*       Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_CheckDoors_C::OnCreate_Blueprint(class ACyberneticController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_CheckDoors_C", "OnCreate_Blueprint");

	Params::UAIAction_CheckDoors_C_OnCreate_Blueprint_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_CheckDoors.AIAction_CheckDoors_C.BeginAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_CheckDoors_C::BeginAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_CheckDoors_C", "BeginAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_CheckDoors.AIAction_CheckDoors_C.OnPathFound_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              PathId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERonNavigationQueryResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_CheckDoors_C::OnPathFound_Blueprint(int32 PathId, enum class ERonNavigationQueryResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_CheckDoors_C", "OnPathFound_Blueprint");

	Params::UAIAction_CheckDoors_C_OnPathFound_Blueprint_Params Parms{};

	Parms.PathId = PathId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_CheckDoors.AIAction_CheckDoors_C.InitAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ACyberneticController*       Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_CheckDoors_C::InitAction_Blueprint(class ACyberneticController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_CheckDoors_C", "InitAction_Blueprint");

	Params::UAIAction_CheckDoors_C_InitAction_Blueprint_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_CheckDoors.AIAction_CheckDoors_C.ExecuteUbergraph_AIAction_CheckDoors
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UThreatAwarenessSubsystem*   CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ADoor*                       K2Node_DynamicCast_AsDoor                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanCheckDoor_Return_Value                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAIController*               K2Node_Event_Controller_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_RequestID                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticController*       K2Node_Event_Controller_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOpen_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AThreatAwarenessActor*>CallFunc_GetThreatsForLocation_OutThreats                        (ReferenceParm)
// class AThreatAwarenessActor*       CallFunc_GetNearestHighestThreat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ADoor*                       CallFunc_GetAttachedDoor_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayLength_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_PathId                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERonNavigationQueryResultK2Node_Event_Result                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOpen_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontageFromTable_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticController*       K2Node_Event_Controller                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIAction_CheckDoors_C::ExecuteUbergraph_AIAction_CheckDoors(int32 EntryPoint, class UThreatAwarenessSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ADoor* K2Node_DynamicCast_AsDoor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanCheckDoor_Return_Value, float K2Node_Event_DeltaTime, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AAIController* K2Node_Event_Controller_2, int32 K2Node_Event_RequestID, class ACyberneticController* K2Node_Event_Controller_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsOpen_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class AThreatAwarenessActor*>& CallFunc_GetThreatsForLocation_OutThreats, class AThreatAwarenessActor* CallFunc_GetNearestHighestThreat_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class ADoor* CallFunc_GetAttachedDoor_ReturnValue, float CallFunc_GetPlayLength_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, int32 K2Node_Event_PathId, enum class ERonNavigationQueryResult K2Node_Event_Result, bool CallFunc_IsOpen_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAnimMontage* CallFunc_GetMontageFromTable_ReturnValue, class ACyberneticController* K2Node_Event_Controller, bool CallFunc_IsValid_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_CheckDoors_C", "ExecuteUbergraph_AIAction_CheckDoors");

	Params::UAIAction_CheckDoors_C_ExecuteUbergraph_AIAction_CheckDoors_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsDoor = K2Node_DynamicCast_AsDoor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanCheckDoor_Return_Value = CallFunc_CanCheckDoor_Return_Value;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_Controller_2 = K2Node_Event_Controller_2;
	Parms.K2Node_Event_RequestID = K2Node_Event_RequestID;
	Parms.K2Node_Event_Controller_1 = K2Node_Event_Controller_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_IsOpen_ReturnValue = CallFunc_IsOpen_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_1 = CallFunc_GetCharacter_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetThreatsForLocation_OutThreats = CallFunc_GetThreatsForLocation_OutThreats;
	Parms.CallFunc_GetNearestHighestThreat_ReturnValue = CallFunc_GetNearestHighestThreat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetAttachedDoor_ReturnValue = CallFunc_GetAttachedDoor_ReturnValue;
	Parms.CallFunc_GetPlayLength_ReturnValue = CallFunc_GetPlayLength_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_2 = CallFunc_GetCharacter_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_Event_PathId = K2Node_Event_PathId;
	Parms.K2Node_Event_Result = K2Node_Event_Result;
	Parms.CallFunc_IsOpen_ReturnValue_1 = CallFunc_IsOpen_ReturnValue_1;
	Parms.CallFunc_GetCharacter_ReturnValue_3 = CallFunc_GetCharacter_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCharacter_ReturnValue_4 = CallFunc_GetCharacter_ReturnValue_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetMontageFromTable_ReturnValue = CallFunc_GetMontageFromTable_ReturnValue;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


