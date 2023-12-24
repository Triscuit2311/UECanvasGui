#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_TimeSinceLastSeenTarget.AC_TimeSinceLastSeenTarget_C
// (None)

class UClass* UAC_TimeSinceLastSeenTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_TimeSinceLastSeenTarget_C");

	return Clss;
}


// AC_TimeSinceLastSeenTarget_C AC_TimeSinceLastSeenTarget.Default__AC_TimeSinceLastSeenTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_TimeSinceLastSeenTarget_C* UAC_TimeSinceLastSeenTarget_C::GetDefaultObj()
{
	static class UAC_TimeSinceLastSeenTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_TimeSinceLastSeenTarget_C*>(UAC_TimeSinceLastSeenTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_TimeSinceLastSeenTarget.AC_TimeSinceLastSeenTarget_C.Score
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAC_TimeSinceLastSeenTarget_C::Score(struct FAIActionDecisionContext& Context, bool* bSuccess, float Value, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_TimeSinceLastSeenTarget_C", "Score");

	Params::UAC_TimeSinceLastSeenTarget_C_Score_Params Parms{};

	Parms.Context = Context;
	Parms.Value = Value;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


