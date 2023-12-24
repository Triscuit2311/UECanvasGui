#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAction_Roam.AIAction_Roam_C
// (None)

class UClass* UAIAction_Roam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Roam_C");

	return Clss;
}


// AIAction_Roam_C AIAction_Roam.Default__AIAction_Roam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_Roam_C* UAIAction_Roam_C::GetDefaultObj()
{
	static class UAIAction_Roam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Roam_C*>(UAIAction_Roam_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_Roam.AIAction_Roam_C.ResetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIAction_Roam_C::ResetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Roam_C", "ResetData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_Roam.AIAction_Roam_C.ShouldPerformAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAIAction_Roam_C::ShouldPerformAction(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Roam_C", "ShouldPerformAction");

	Params::UAIAction_Roam_C_ShouldPerformAction_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIAction_Roam.AIAction_Roam_C.InitAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ACyberneticController*       Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_Roam_C::InitAction_Blueprint(class ACyberneticController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Roam_C", "InitAction_Blueprint");

	Params::UAIAction_Roam_C_InitAction_Blueprint_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_Roam.AIAction_Roam_C.OnMoveComplete_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RequestID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_Roam_C::OnMoveComplete_Blueprint(class AAIController* Controller, int32 RequestID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Roam_C", "OnMoveComplete_Blueprint");

	Params::UAIAction_Roam_C_OnMoveComplete_Blueprint_Params Parms{};

	Parms.Controller = Controller;
	Parms.RequestID = RequestID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_Roam.AIAction_Roam_C.Tick_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_Roam_C::Tick_Blueprint(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Roam_C", "Tick_Blueprint");

	Params::UAIAction_Roam_C_Tick_Blueprint_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_Roam.AIAction_Roam_C.BeginAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_Roam_C::BeginAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Roam_C", "BeginAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_Roam.AIAction_Roam_C.EndAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_Roam_C::EndAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Roam_C", "EndAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_Roam.AIAction_Roam_C.OnPathFound_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              PathId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERonNavigationQueryResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_Roam_C::OnPathFound_Blueprint(int32 PathId, enum class ERonNavigationQueryResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Roam_C", "OnPathFound_Blueprint");

	Params::UAIAction_Roam_C_OnPathFound_Blueprint_Params Parms{};

	Parms.PathId = PathId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_Roam.AIAction_Roam_C.ExecuteUbergraph_AIAction_Roam
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class UThreatAwarenessSubsystem*   CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticController*       K2Node_Event_Controller_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_Controller                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_RequestID                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UNavigationQueryFilter>CallFunc_GetNavQueryFilter_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PathId                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERonNavigationQueryResultK2Node_Event_Result                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UNavigationQueryFilter>CallFunc_GetNavQueryFilter_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation_1     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue_1        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AThreatAwarenessActor*       CallFunc_GetNearestThreat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AThreatAwarenessActor*>CallFunc_GetThreatsForLocation_OutThreats                        (ReferenceParm)
// class AThreatAwarenessActor*       CallFunc_GetFurthestHighestThreat_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_Roam_C::ExecuteUbergraph_AIAction_Roam(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Less_FloatFloat_ReturnValue, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, class UThreatAwarenessSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class ACyberneticController* K2Node_Event_Controller_1, float CallFunc_RandomFloatInRange_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, class AAIController* K2Node_Event_Controller, int32 K2Node_Event_RequestID, float CallFunc_RandomFloatInRange_ReturnValue_2, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue, float K2Node_Event_DeltaTime, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TSubclassOf<class UNavigationQueryFilter> CallFunc_GetNavQueryFilter_ReturnValue, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_4, int32 CallFunc_Array_AddUnique_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, int32 K2Node_Event_PathId, enum class ERonNavigationQueryResult K2Node_Event_Result, TSubclassOf<class UNavigationQueryFilter> CallFunc_GetNavQueryFilter_ReturnValue_1, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation_1, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, const class FString& Temp_string_Variable_2, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class AThreatAwarenessActor* CallFunc_GetNearestThreat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class AThreatAwarenessActor*>& CallFunc_GetThreatsForLocation_OutThreats, class AThreatAwarenessActor* CallFunc_GetFurthestHighestThreat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Roam_C", "ExecuteUbergraph_AIAction_Roam");

	Params::UAIAction_Roam_C_ExecuteUbergraph_AIAction_Roam_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Event_Controller_1 = K2Node_Event_Controller_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetCharacter_ReturnValue_1 = CallFunc_GetCharacter_ReturnValue_1;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.K2Node_Event_RequestID = K2Node_Event_RequestID;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_GetCharacter_ReturnValue_2 = CallFunc_GetCharacter_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetCharacter_ReturnValue_3 = CallFunc_GetCharacter_ReturnValue_3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetNavQueryFilter_ReturnValue = CallFunc_GetNavQueryFilter_ReturnValue;
	Parms.CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation = CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation;
	Parms.CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue = CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_4 = CallFunc_GetCharacter_ReturnValue_4;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.K2Node_Event_PathId = K2Node_Event_PathId;
	Parms.K2Node_Event_Result = K2Node_Event_Result;
	Parms.CallFunc_GetNavQueryFilter_ReturnValue_1 = CallFunc_GetNavQueryFilter_ReturnValue_1;
	Parms.CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation_1 = CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation_1;
	Parms.CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue_1 = CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue_1;
	Parms.CallFunc_GetCharacter_ReturnValue_5 = CallFunc_GetCharacter_ReturnValue_5;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_5 = CallFunc_K2_GetActorLocation_ReturnValue_5;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_GetNearestThreat_ReturnValue = CallFunc_GetNearestThreat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetThreatsForLocation_OutThreats = CallFunc_GetThreatsForLocation_OutThreats;
	Parms.CallFunc_GetFurthestHighestThreat_ReturnValue = CallFunc_GetFurthestHighestThreat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


