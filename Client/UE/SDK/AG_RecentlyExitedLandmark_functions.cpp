#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_RecentlyExitedLandmark.AG_RecentlyExitedLandmark_C
// (None)

class UClass* UAG_RecentlyExitedLandmark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_RecentlyExitedLandmark_C");

	return Clss;
}


// AG_RecentlyExitedLandmark_C AG_RecentlyExitedLandmark.Default__AG_RecentlyExitedLandmark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_RecentlyExitedLandmark_C* UAG_RecentlyExitedLandmark_C::GetDefaultObj()
{
	static class UAG_RecentlyExitedLandmark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_RecentlyExitedLandmark_C*>(UAG_RecentlyExitedLandmark_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_RecentlyExitedLandmark.AG_RecentlyExitedLandmark_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAG_RecentlyExitedLandmark_C::CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_RecentlyExitedLandmark_C", "CanOpen");

	Params::UAG_RecentlyExitedLandmark_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


