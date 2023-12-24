#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_RecentFriendlyDeath.AC_RecentFriendlyDeath_C
// (None)

class UClass* UAC_RecentFriendlyDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_RecentFriendlyDeath_C");

	return Clss;
}


// AC_RecentFriendlyDeath_C AC_RecentFriendlyDeath.Default__AC_RecentFriendlyDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_RecentFriendlyDeath_C* UAC_RecentFriendlyDeath_C::GetDefaultObj()
{
	static class UAC_RecentFriendlyDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_RecentFriendlyDeath_C*>(UAC_RecentFriendlyDeath_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_RecentFriendlyDeath.AC_RecentFriendlyDeath_C.Score
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAC_RecentFriendlyDeath_C::Score(struct FAIActionDecisionContext& Context, bool* bSuccess, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_RecentFriendlyDeath_C", "Score");

	Params::UAC_RecentFriendlyDeath_C_Score_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


