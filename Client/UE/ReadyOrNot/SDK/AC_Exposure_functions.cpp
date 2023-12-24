#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_Exposure.AC_Exposure_C
// (None)

class UClass* UAC_Exposure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_Exposure_C");

	return Clss;
}


// AC_Exposure_C AC_Exposure.Default__AC_Exposure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_Exposure_C* UAC_Exposure_C::GetDefaultObj()
{
	static class UAC_Exposure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_Exposure_C*>(UAC_Exposure_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_Exposure.AC_Exposure_C.Score
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAC_Exposure_C::Score(struct FAIActionDecisionContext& Context, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_Exposure_C", "Score");

	Params::UAC_Exposure_C_Score_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


