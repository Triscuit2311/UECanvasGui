#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_TimeSurrendered.AC_TimeSurrendered_C
// (None)

class UClass* UAC_TimeSurrendered_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_TimeSurrendered_C");

	return Clss;
}


// AC_TimeSurrendered_C AC_TimeSurrendered.Default__AC_TimeSurrendered_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_TimeSurrendered_C* UAC_TimeSurrendered_C::GetDefaultObj()
{
	static class UAC_TimeSurrendered_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_TimeSurrendered_C*>(UAC_TimeSurrendered_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_TimeSurrendered.AC_TimeSurrendered_C.Score
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAC_TimeSurrendered_C::Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_TimeSurrendered_C", "Score");

	Params::UAC_TimeSurrendered_C_Score_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


