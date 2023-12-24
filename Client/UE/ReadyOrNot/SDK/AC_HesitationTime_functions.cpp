#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_HesitationTime.AC_HesitationTime_C
// (None)

class UClass* UAC_HesitationTime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_HesitationTime_C");

	return Clss;
}


// AC_HesitationTime_C AC_HesitationTime.Default__AC_HesitationTime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_HesitationTime_C* UAC_HesitationTime_C::GetDefaultObj()
{
	static class UAC_HesitationTime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_HesitationTime_C*>(UAC_HesitationTime_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_HesitationTime.AC_HesitationTime_C.Score
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAC_HesitationTime_C::Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_HesitationTime_C", "Score");

	Params::UAC_HesitationTime_C_Score_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


