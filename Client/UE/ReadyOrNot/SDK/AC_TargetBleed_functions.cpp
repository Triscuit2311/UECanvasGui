#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_TargetBleed.AC_TargetBleed_C
// (None)

class UClass* UAC_TargetBleed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_TargetBleed_C");

	return Clss;
}


// AC_TargetBleed_C AC_TargetBleed.Default__AC_TargetBleed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_TargetBleed_C* UAC_TargetBleed_C::GetDefaultObj()
{
	static class UAC_TargetBleed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_TargetBleed_C*>(UAC_TargetBleed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_TargetBleed.AC_TargetBleed_C.Score
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            Target                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBleedTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        CallFunc_GetLastTrackedTarget_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBleeding_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotCharacter*        CallFunc_GetTrackedTarget_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAC_TargetBleed_C::Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class APlayerCharacter* Target, float CallFunc_GetBleedTime_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetLastTrackedTarget_ReturnValue, bool CallFunc_IsBleeding_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_TargetBleed_C", "Score");

	Params::UAC_TargetBleed_C_Score_Params Parms{};

	Parms.Context = Context;
	Parms.Target = Target;
	Parms.CallFunc_GetBleedTime_ReturnValue = CallFunc_GetBleedTime_ReturnValue;
	Parms.CallFunc_GetLastTrackedTarget_ReturnValue = CallFunc_GetLastTrackedTarget_ReturnValue;
	Parms.CallFunc_IsBleeding_ReturnValue = CallFunc_IsBleeding_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTrackedTarget_ReturnValue = CallFunc_GetTrackedTarget_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character_1 = K2Node_DynamicCast_AsPlayer_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


