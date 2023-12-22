#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_ExposedToAggressiveNoise.AC_ExposedToAggressiveNoise_C
// (None)

class UClass* UAC_ExposedToAggressiveNoise_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_ExposedToAggressiveNoise_C");

	return Clss;
}


// AC_ExposedToAggressiveNoise_C AC_ExposedToAggressiveNoise.Default__AC_ExposedToAggressiveNoise_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_ExposedToAggressiveNoise_C* UAC_ExposedToAggressiveNoise_C::GetDefaultObj()
{
	static class UAC_ExposedToAggressiveNoise_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_ExposedToAggressiveNoise_C*>(UAC_ExposedToAggressiveNoise_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_ExposedToAggressiveNoise.AC_ExposedToAggressiveNoise_C.Score
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_HasBeenExposedToAggressiveNoise_Tag_OutTag              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasBeenExposedToAggressiveNoise_Tag_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

float UAC_ExposedToAggressiveNoise_C::Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class FName Temp_name_Variable, bool CallFunc_Array_Contains_ReturnValue, class FName CallFunc_HasBeenExposedToAggressiveNoise_Tag_OutTag, bool CallFunc_HasBeenExposedToAggressiveNoise_Tag_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ExposedToAggressiveNoise_C", "Score");

	Params::UAC_ExposedToAggressiveNoise_C_Score_Params Parms{};

	Parms.Context = Context;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_HasBeenExposedToAggressiveNoise_Tag_OutTag = CallFunc_HasBeenExposedToAggressiveNoise_Tag_OutTag;
	Parms.CallFunc_HasBeenExposedToAggressiveNoise_Tag_ReturnValue = CallFunc_HasBeenExposedToAggressiveNoise_Tag_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_2 = CallFunc_Array_Contains_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


