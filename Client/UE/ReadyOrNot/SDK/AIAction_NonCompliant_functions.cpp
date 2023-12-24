#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAction_NonCompliant.AIAction_NonCompliant_C
// (None)

class UClass* UAIAction_NonCompliant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_NonCompliant_C");

	return Clss;
}


// AIAction_NonCompliant_C AIAction_NonCompliant.Default__AIAction_NonCompliant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_NonCompliant_C* UAIAction_NonCompliant_C::GetDefaultObj()
{
	static class UAIAction_NonCompliant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_NonCompliant_C*>(UAIAction_NonCompliant_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_NonCompliant.AIAction_NonCompliant_C.CanBeNonCompliant
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWearingExplosiveVest_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIAction_NonCompliant_C::CanBeNonCompliant(bool* Return_Value, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsWearingExplosiveVest_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_NonCompliant_C", "CanBeNonCompliant");

	Params::UAIAction_NonCompliant_C_CanBeNonCompliant_Params Parms{};

	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_1 = CallFunc_GetCharacter_ReturnValue_1;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.CallFunc_IsWearingExplosiveVest_ReturnValue = CallFunc_IsWearingExplosiveVest_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function AIAction_NonCompliant.AIAction_NonCompliant_C.BeginAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_NonCompliant_C::BeginAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_NonCompliant_C", "BeginAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_NonCompliant.AIAction_NonCompliant_C.Tick_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_NonCompliant_C::Tick_Blueprint(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_NonCompliant_C", "Tick_Blueprint");

	Params::UAIAction_NonCompliant_C_Tick_Blueprint_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_NonCompliant.AIAction_NonCompliant_C.ExecuteUbergraph_AIAction_NonCompliant
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotAIConfig*         CallFunc_Get_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayRawVO_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBeNonCompliant_Return_Value                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSuspect_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_PlayMontageFromTable_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloat_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_NonCompliant_C::ExecuteUbergraph_AIAction_NonCompliant(int32 EntryPoint, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_PlayRawVO_ReturnValue, float CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining, bool CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue, float K2Node_Event_DeltaTime, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, bool CallFunc_CanBeNonCompliant_Return_Value, bool CallFunc_IsSuspect_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_3, const class FString& K2Node_Select_Default, class UAnimMontage* CallFunc_PlayMontageFromTable_ReturnValue, float CallFunc_GetFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_NonCompliant_C", "ExecuteUbergraph_AIAction_NonCompliant");

	Params::UAIAction_NonCompliant_C_ExecuteUbergraph_AIAction_NonCompliant_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Get_ReturnValue = CallFunc_Get_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_1 = CallFunc_GetCharacter_ReturnValue_1;
	Parms.CallFunc_PlayRawVO_ReturnValue = CallFunc_PlayRawVO_ReturnValue;
	Parms.CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining = CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining;
	Parms.CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue = CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetCharacter_ReturnValue_2 = CallFunc_GetCharacter_ReturnValue_2;
	Parms.CallFunc_CanBeNonCompliant_Return_Value = CallFunc_CanBeNonCompliant_Return_Value;
	Parms.CallFunc_IsSuspect_ReturnValue = CallFunc_IsSuspect_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_3 = CallFunc_GetCharacter_ReturnValue_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayMontageFromTable_ReturnValue = CallFunc_PlayMontageFromTable_ReturnValue;
	Parms.CallFunc_GetFloat_ReturnValue = CallFunc_GetFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


