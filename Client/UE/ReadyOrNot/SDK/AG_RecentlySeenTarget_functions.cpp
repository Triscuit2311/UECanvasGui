#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_RecentlySeenTarget.AG_RecentlySeenTarget_C
// (None)

class UClass* UAG_RecentlySeenTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_RecentlySeenTarget_C");

	return Clss;
}


// AG_RecentlySeenTarget_C AG_RecentlySeenTarget.Default__AG_RecentlySeenTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_RecentlySeenTarget_C* UAG_RecentlySeenTarget_C::GetDefaultObj()
{
	static class UAG_RecentlySeenTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_RecentlySeenTarget_C*>(UAG_RecentlySeenTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_RecentlySeenTarget.AG_RecentlySeenTarget_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              Value                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAG_RecentlySeenTarget_C::CanOpen(struct FAIActionDecisionContext& Context, float Value, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_RecentlySeenTarget_C", "CanOpen");

	Params::UAG_RecentlySeenTarget_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.Value = Value;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


