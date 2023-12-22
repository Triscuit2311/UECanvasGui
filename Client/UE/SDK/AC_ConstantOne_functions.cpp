#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_ConstantOne.AC_ConstantOne_C
// (None)

class UClass* UAC_ConstantOne_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_ConstantOne_C");

	return Clss;
}


// AC_ConstantOne_C AC_ConstantOne.Default__AC_ConstantOne_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_ConstantOne_C* UAC_ConstantOne_C::GetDefaultObj()
{
	static class UAC_ConstantOne_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_ConstantOne_C*>(UAC_ConstantOne_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_ConstantOne.AC_ConstantOne_C.Score
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAC_ConstantOne_C::Score(struct FAIActionDecisionContext& Context, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ConstantOne_C", "Score");

	Params::UAC_ConstantOne_C_Score_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


