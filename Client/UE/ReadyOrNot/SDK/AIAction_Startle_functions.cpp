#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAction_Startle.AIAction_Startle_C
// (None)

class UClass* UAIAction_Startle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Startle_C");

	return Clss;
}


// AIAction_Startle_C AIAction_Startle.Default__AIAction_Startle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_Startle_C* UAIAction_Startle_C::GetDefaultObj()
{
	static class UAIAction_Startle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Startle_C*>(UAIAction_Startle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_Startle.AIAction_Startle_C.CanStartle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UReadyOrNotAIConfig*         CallFunc_Get_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloat_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBaseCombatActivity*         CallFunc_GetCombatActivity_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseCombatMoveActivity*     CallFunc_GetCombatMoveActivity_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        CallFunc_GetTrackedTarget_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Vector_Normal2D_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIAction_Startle_C::CanStartle(bool* Return_Value, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, float CallFunc_RandomFloat_ReturnValue, float CallFunc_GetFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, class UBaseCombatMoveActivity* CallFunc_GetCombatMoveActivity_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Startle_C", "CanStartle");

	Params::UAIAction_Startle_C_CanStartle_Params Parms{};

	Parms.CallFunc_Get_ReturnValue = CallFunc_Get_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_GetFloat_ReturnValue = CallFunc_GetFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCombatActivity_ReturnValue = CallFunc_GetCombatActivity_ReturnValue;
	Parms.CallFunc_GetCombatMoveActivity_ReturnValue = CallFunc_GetCombatMoveActivity_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetTrackedTarget_ReturnValue = CallFunc_GetTrackedTarget_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_1 = CallFunc_GetCharacter_ReturnValue_1;
	Parms.CallFunc_GetActorForwardVector_ReturnValue_1 = CallFunc_GetActorForwardVector_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_Vector_Normal2D_ReturnValue = CallFunc_Vector_Normal2D_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue_1 = CallFunc_Dot_VectorVector_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function AIAction_Startle.AIAction_Startle_C.AngleToAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              InAngle                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bRight                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Return_Value                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_4                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_4                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_5                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_2                                          (ZeroConstructor, HasGetValueTypeHash)

void UAIAction_Startle_C::AngleToAnimation(float InAngle, bool bRight, class FString* Return_Value, bool Temp_bool_Variable, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_2, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_3, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_4, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_1, const class FString& K2Node_Select_Default, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, bool Temp_bool_Variable_2, const class FString& K2Node_Select_Default_1, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Startle_C", "AngleToAnimation");

	Params::UAIAction_Startle_C_AngleToAnimation_Params Parms{};

	Parms.InAngle = InAngle;
	Parms.bRight = bRight;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_1 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_2 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_3 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_3;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_4 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_4;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);

}


// Function AIAction_Startle.AIAction_Startle_C.IsLocationRightOfUs
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     InLocation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIAction_Startle_C::IsLocationRightOfUs(const struct FVector& InLocation, bool* Return_Value, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Startle_C", "IsLocationRightOfUs");

	Params::UAIAction_Startle_C_IsLocationRightOfUs_Params Parms{};

	Parms.InLocation = InLocation;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function AIAction_Startle.AIAction_Startle_C.ShouldPerformAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAIAction_Startle_C::ShouldPerformAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Startle_C", "ShouldPerformAction");

	Params::UAIAction_Startle_C_ShouldPerformAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIAction_Startle.AIAction_Startle_C.BeginAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_Startle_C::BeginAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Startle_C", "BeginAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_Startle.AIAction_Startle_C.InitAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ACyberneticController*       Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_Startle_C::InitAction_Blueprint(class ACyberneticController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Startle_C", "InitAction_Blueprint");

	Params::UAIAction_Startle_C_InitAction_Blueprint_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_Startle.AIAction_Startle_C.Tick_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_Startle_C::Tick_Blueprint(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Startle_C", "Tick_Blueprint");

	Params::UAIAction_Startle_C_Tick_Blueprint_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_Startle.AIAction_Startle_C.ResetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIAction_Startle_C::ResetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Startle_C", "ResetData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_Startle.AIAction_Startle_C.EndAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_Startle_C::EndAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Startle_C", "EndAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_Startle.AIAction_Startle_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIAction_Startle_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Startle_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_Startle.AIAction_Startle_C.ExecuteUbergraph_AIAction_Startle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticController*       K2Node_Event_Controller                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasBeenExposedToAggressiveNoise_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        CallFunc_GetTrackedTarget_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetLastHeardAggressiveNoiseLocation_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_PlayMontageFromTable_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocationRightOfUs_Return_Value                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Vector_Normal2D_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Acos_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RadiansToDegrees_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GridSnap_Float_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanStartle_Return_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_AngleToAnimation_Return_Value                           (ZeroConstructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UReadyOrNotAIConfig*         CallFunc_Get_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloat_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UAIAction_Startle_C::ExecuteUbergraph_AIAction_Startle(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ACyberneticController* K2Node_Event_Controller, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_HasBeenExposedToAggressiveNoise_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetLastHeardAggressiveNoiseLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float K2Node_Event_DeltaTime, class UAnimMontage* CallFunc_PlayMontageFromTable_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, float CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining, bool CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsLocationRightOfUs_Return_Value, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_3, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_4, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Acos_ReturnValue, float CallFunc_RadiansToDegrees_ReturnValue, float CallFunc_GridSnap_Float_ReturnValue, bool CallFunc_CanStartle_Return_Value, const class FString& CallFunc_AngleToAnimation_Return_Value, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_1, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, float CallFunc_GetFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Startle_C", "ExecuteUbergraph_AIAction_Startle");

	Params::UAIAction_Startle_C_ExecuteUbergraph_AIAction_Startle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.CallFunc_GetCharacter_ReturnValue_1 = CallFunc_GetCharacter_ReturnValue_1;
	Parms.CallFunc_HasBeenExposedToAggressiveNoise_ReturnValue = CallFunc_HasBeenExposedToAggressiveNoise_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetTrackedTarget_ReturnValue = CallFunc_GetTrackedTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLastHeardAggressiveNoiseLocation_ReturnValue = CallFunc_GetLastHeardAggressiveNoiseLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_PlayMontageFromTable_ReturnValue = CallFunc_PlayMontageFromTable_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_2 = CallFunc_GetCharacter_ReturnValue_2;
	Parms.CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining = CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining;
	Parms.CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue = CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_IsLocationRightOfUs_Return_Value = CallFunc_IsLocationRightOfUs_Return_Value;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_3 = CallFunc_GetCharacter_ReturnValue_3;
	Parms.CallFunc_Vector_Normal2D_ReturnValue = CallFunc_Vector_Normal2D_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_4 = CallFunc_GetCharacter_ReturnValue_4;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Acos_ReturnValue = CallFunc_Acos_ReturnValue;
	Parms.CallFunc_RadiansToDegrees_ReturnValue = CallFunc_RadiansToDegrees_ReturnValue;
	Parms.CallFunc_GridSnap_Float_ReturnValue = CallFunc_GridSnap_Float_ReturnValue;
	Parms.CallFunc_CanStartle_Return_Value = CallFunc_CanStartle_Return_Value;
	Parms.CallFunc_AngleToAnimation_Return_Value = CallFunc_AngleToAnimation_Return_Value;
	Parms.CallFunc_GetCharacter_ReturnValue_5 = CallFunc_GetCharacter_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Get_ReturnValue = CallFunc_Get_ReturnValue;
	Parms.CallFunc_GetFloat_ReturnValue = CallFunc_GetFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


