#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_VisibleSWAT.AC_VisibleSWAT_C
// (None)

class UClass* UAC_VisibleSWAT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_VisibleSWAT_C");

	return Clss;
}


// AC_VisibleSWAT_C AC_VisibleSWAT.Default__AC_VisibleSWAT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_VisibleSWAT_C* UAC_VisibleSWAT_C::GetDefaultObj()
{
	static class UAC_VisibleSWAT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_VisibleSWAT_C*>(UAC_VisibleSWAT_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_VisibleSWAT.AC_VisibleSWAT_C.Score
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVisibleSWATPercentage_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAC_VisibleSWAT_C::Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, float CallFunc_GetVisibleSWATPercentage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_VisibleSWAT_C", "Score");

	Params::UAC_VisibleSWAT_C_Score_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetVisibleSWATPercentage_ReturnValue = CallFunc_GetVisibleSWATPercentage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


