#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_TimeSeeingTarget.AC_TimeSeeingTarget_C
// (None)

class UClass* UAC_TimeSeeingTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_TimeSeeingTarget_C");

	return Clss;
}


// AC_TimeSeeingTarget_C AC_TimeSeeingTarget.Default__AC_TimeSeeingTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_TimeSeeingTarget_C* UAC_TimeSeeingTarget_C::GetDefaultObj()
{
	static class UAC_TimeSeeingTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_TimeSeeingTarget_C*>(UAC_TimeSeeingTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_TimeSeeingTarget.AC_TimeSeeingTarget_C.Score
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

float UAC_TimeSeeingTarget_C::Score(struct FAIActionDecisionContext& Context, bool* bSuccess, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_TimeSeeingTarget_C", "Score");

	Params::UAC_TimeSeeingTarget_C_Score_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


