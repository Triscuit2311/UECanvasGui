#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_DistanceToLastNoise.AC_DistanceToLastNoise_C
// (None)

class UClass* UAC_DistanceToLastNoise_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_DistanceToLastNoise_C");

	return Clss;
}


// AC_DistanceToLastNoise_C AC_DistanceToLastNoise.Default__AC_DistanceToLastNoise_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_DistanceToLastNoise_C* UAC_DistanceToLastNoise_C::GetDefaultObj()
{
	static class UAC_DistanceToLastNoise_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_DistanceToLastNoise_C*>(UAC_DistanceToLastNoise_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_DistanceToLastNoise.AC_DistanceToLastNoise_C.DetermineNoiseScore
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FExposedToNoise             Noise                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_DistanceToLastNoise_C::DetermineNoiseScore(const struct FExposedToNoise& Noise, float* Return_Value, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DistanceToLastNoise_C", "DetermineNoiseScore");

	Params::UAC_DistanceToLastNoise_C_DetermineNoiseScore_Params Parms{};

	Parms.Noise = Noise;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function AC_DistanceToLastNoise.AC_DistanceToLastNoise_C.Score
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_DetermineNoiseScore_Return_Value                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FExposedToNoise             CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_DetermineNoiseScore_Return_Value_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAC_DistanceToLastNoise_C::Score(struct FAIActionDecisionContext& Context, bool* bSuccess, bool CallFunc_NotEqual_NameName_ReturnValue, float CallFunc_DetermineNoiseScore_Return_Value, const struct FExposedToNoise& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_DetermineNoiseScore_Return_Value_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DistanceToLastNoise_C", "Score");

	Params::UAC_DistanceToLastNoise_C_Score_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_DetermineNoiseScore_Return_Value = CallFunc_DetermineNoiseScore_Return_Value;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_DetermineNoiseScore_Return_Value_1 = CallFunc_DetermineNoiseScore_Return_Value_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


