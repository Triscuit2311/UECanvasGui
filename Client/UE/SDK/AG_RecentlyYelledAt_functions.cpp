#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_RecentlyYelledAt.AG_RecentlyYelledAt_C
// (None)

class UClass* UAG_RecentlyYelledAt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_RecentlyYelledAt_C");

	return Clss;
}


// AG_RecentlyYelledAt_C AG_RecentlyYelledAt.Default__AG_RecentlyYelledAt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_RecentlyYelledAt_C* UAG_RecentlyYelledAt_C::GetDefaultObj()
{
	static class UAG_RecentlyYelledAt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_RecentlyYelledAt_C*>(UAG_RecentlyYelledAt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_RecentlyYelledAt.AG_RecentlyYelledAt_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WasRecentlyYelledAt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAG_RecentlyYelledAt_C::CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_WasRecentlyYelledAt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_RecentlyYelledAt_C", "CanOpen");

	Params::UAG_RecentlyYelledAt_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_WasRecentlyYelledAt_ReturnValue = CallFunc_WasRecentlyYelledAt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


