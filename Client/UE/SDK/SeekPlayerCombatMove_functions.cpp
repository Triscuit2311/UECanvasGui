#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SeekPlayerCombatMove.SeekPlayerCombatMove_C
// (None)

class UClass* USeekPlayerCombatMove_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SeekPlayerCombatMove_C");

	return Clss;
}


// SeekPlayerCombatMove_C SeekPlayerCombatMove.Default__SeekPlayerCombatMove_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USeekPlayerCombatMove_C* USeekPlayerCombatMove_C::GetDefaultObj()
{
	static class USeekPlayerCombatMove_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USeekPlayerCombatMove_C*>(USeekPlayerCombatMove_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SeekPlayerCombatMove.SeekPlayerCombatMove_C.GetMoveStyleOverride
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCivilian_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

class FName USeekPlayerCombatMove_C::GetMoveStyleOverride(class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsCivilian_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SeekPlayerCombatMove_C", "GetMoveStyleOverride");

	Params::USeekPlayerCombatMove_C_GetMoveStyleOverride_Params Parms{};

	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_IsCivilian_ReturnValue = CallFunc_IsCivilian_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SeekPlayerCombatMove.SeekPlayerCombatMove_C.RequestCombatMove_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USeekPlayerCombatMove_C::RequestCombatMove_Blueprint(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SeekPlayerCombatMove_C", "RequestCombatMove_Blueprint");

	Params::USeekPlayerCombatMove_C_RequestCombatMove_Blueprint_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SeekPlayerCombatMove.SeekPlayerCombatMove_C.StartActivity_Blueprint
// (Event, Public, BlueprintEvent)
// Parameters:
// class AAIController*               Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USeekPlayerCombatMove_C::StartActivity_Blueprint(class AAIController* Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SeekPlayerCombatMove_C", "StartActivity_Blueprint");

	Params::USeekPlayerCombatMove_C_StartActivity_Blueprint_Params Parms{};

	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SeekPlayerCombatMove.SeekPlayerCombatMove_C.FinishedActivity_Blueprint
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USeekPlayerCombatMove_C::FinishedActivity_Blueprint(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SeekPlayerCombatMove_C", "FinishedActivity_Blueprint");

	Params::USeekPlayerCombatMove_C_FinishedActivity_Blueprint_Params Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SeekPlayerCombatMove.SeekPlayerCombatMove_C.ExecuteUbergraph_SeekPlayerCombatMove
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class USWATManager*                CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotCharacter*        CallFunc_GetSquadLeader_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorld*                      CallFunc_GetWorldStatic_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticController*       CallFunc_GetOwningController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            CallFunc_GetFirstAlivePlayerControlledCharacter_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        CallFunc_GetTrackedTarget_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_Owner                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSuccess                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void USeekPlayerCombatMove_C::ExecuteUbergraph_SeekPlayerCombatMove(int32 EntryPoint, const class FString& Temp_string_Variable, class USWATManager* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetSquadLeader_ReturnValue, const class FString& Temp_string_Variable_1, float K2Node_Event_DeltaTime, class UWorld* CallFunc_GetWorldStatic_ReturnValue, class ACyberneticController* CallFunc_GetOwningController_ReturnValue, class APlayerCharacter* CallFunc_GetFirstAlivePlayerControlledCharacter_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AAIController* K2Node_Event_Owner, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool K2Node_Event_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SeekPlayerCombatMove_C", "ExecuteUbergraph_SeekPlayerCombatMove");

	Params::USeekPlayerCombatMove_C_ExecuteUbergraph_SeekPlayerCombatMove_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSquadLeader_ReturnValue = CallFunc_GetSquadLeader_ReturnValue;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetWorldStatic_ReturnValue = CallFunc_GetWorldStatic_ReturnValue;
	Parms.CallFunc_GetOwningController_ReturnValue = CallFunc_GetOwningController_ReturnValue;
	Parms.CallFunc_GetFirstAlivePlayerControlledCharacter_ReturnValue = CallFunc_GetFirstAlivePlayerControlledCharacter_ReturnValue;
	Parms.CallFunc_GetTrackedTarget_ReturnValue = CallFunc_GetTrackedTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_Event_Owner = K2Node_Event_Owner;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.K2Node_Event_bSuccess = K2Node_Event_bSuccess;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_1 = CallFunc_GetCharacter_ReturnValue_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


