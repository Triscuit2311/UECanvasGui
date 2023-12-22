#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_Threat.AC_Threat_C
// (None)

class UClass* UAC_Threat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_Threat_C");

	return Clss;
}


// AC_Threat_C AC_Threat.Default__AC_Threat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_Threat_C* UAC_Threat_C::GetDefaultObj()
{
	static class UAC_Threat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_Threat_C*>(UAC_Threat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_Threat.AC_Threat_C.Score
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAC_Threat_C::Score(struct FAIActionDecisionContext& Context, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_Threat_C", "Score");

	Params::UAC_Threat_C_Score_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


