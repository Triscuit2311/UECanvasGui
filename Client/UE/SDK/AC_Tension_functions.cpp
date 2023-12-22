#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_Tension.AC_Tension_C
// (None)

class UClass* UAC_Tension_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_Tension_C");

	return Clss;
}


// AC_Tension_C AC_Tension.Default__AC_Tension_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_Tension_C* UAC_Tension_C::GetDefaultObj()
{
	static class UAC_Tension_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_Tension_C*>(UAC_Tension_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_Tension.AC_Tension_C.Score
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAC_Tension_C::Score(struct FAIActionDecisionContext& Context, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_Tension_C", "Score");

	Params::UAC_Tension_C_Score_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


