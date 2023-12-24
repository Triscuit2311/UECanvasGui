#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_SuppressionNearBone.AC_SuppressionNearBone_C
// (None)

class UClass* UAC_SuppressionNearBone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_SuppressionNearBone_C");

	return Clss;
}


// AC_SuppressionNearBone_C AC_SuppressionNearBone.Default__AC_SuppressionNearBone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_SuppressionNearBone_C* UAC_SuppressionNearBone_C::GetDefaultObj()
{
	static class UAC_SuppressionNearBone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_SuppressionNearBone_C*>(UAC_SuppressionNearBone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_SuppressionNearBone.AC_SuppressionNearBone_C.IsBoneSuppressed
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AReadyOrNotCharacter*        Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Suppression_Amount                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSuppressionData            CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_SuppressionNearBone_C::IsBoneSuppressed(class AReadyOrNotCharacter* Character, bool* Return_Value, float* Suppression_Amount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FSuppressionData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_SuppressionNearBone_C", "IsBoneSuppressed");

	Params::UAC_SuppressionNearBone_C_IsBoneSuppressed_Params Parms{};

	Parms.Character = Character;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

	if (Suppression_Amount != nullptr)
		*Suppression_Amount = Parms.Suppression_Amount;

}


// Function AC_SuppressionNearBone.AC_SuppressionNearBone_C.Score
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBoneSuppressed_Return_Value                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_IsBoneSuppressed_Suppression_Amount                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

float UAC_SuppressionNearBone_C::Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsBoneSuppressed_Return_Value, float CallFunc_IsBoneSuppressed_Suppression_Amount, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_SuppressionNearBone_C", "Score");

	Params::UAC_SuppressionNearBone_C_Score_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_IsBoneSuppressed_Return_Value = CallFunc_IsBoneSuppressed_Return_Value;
	Parms.CallFunc_IsBoneSuppressed_Suppression_Amount = CallFunc_IsBoneSuppressed_Suppression_Amount;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


