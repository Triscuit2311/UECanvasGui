#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_TargetStunRemainingTime.AC_TargetStunRemainingTime_C
// (None)

class UClass* UAC_TargetStunRemainingTime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_TargetStunRemainingTime_C");

	return Clss;
}


// AC_TargetStunRemainingTime_C AC_TargetStunRemainingTime.Default__AC_TargetStunRemainingTime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_TargetStunRemainingTime_C* UAC_TargetStunRemainingTime_C::GetDefaultObj()
{
	static class UAC_TargetStunRemainingTime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_TargetStunRemainingTime_C*>(UAC_TargetStunRemainingTime_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_TargetStunRemainingTime.AC_TargetStunRemainingTime_C.Score
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        Target                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentStunDuration_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        CallFunc_GetTrackedTarget_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        CallFunc_GetLastTrackedTarget_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentStunTime_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStunned_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAC_TargetStunRemainingTime_C::Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class AReadyOrNotCharacter* Target, float CallFunc_GetCurrentStunDuration_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetLastTrackedTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetCurrentStunTime_ReturnValue, bool CallFunc_IsStunned_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_TargetStunRemainingTime_C", "Score");

	Params::UAC_TargetStunRemainingTime_C_Score_Params Parms{};

	Parms.Context = Context;
	Parms.Target = Target;
	Parms.CallFunc_GetCurrentStunDuration_ReturnValue = CallFunc_GetCurrentStunDuration_ReturnValue;
	Parms.CallFunc_GetTrackedTarget_ReturnValue = CallFunc_GetTrackedTarget_ReturnValue;
	Parms.CallFunc_GetLastTrackedTarget_ReturnValue = CallFunc_GetLastTrackedTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCurrentStunTime_ReturnValue = CallFunc_GetCurrentStunTime_ReturnValue;
	Parms.CallFunc_IsStunned_ReturnValue = CallFunc_IsStunned_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


