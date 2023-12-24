#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_IsInCover.AG_IsInCover_C
// (None)

class UClass* UAG_IsInCover_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_IsInCover_C");

	return Clss;
}


// AG_IsInCover_C AG_IsInCover.Default__AG_IsInCover_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_IsInCover_C* UAG_IsInCover_C::GetDefaultObj()
{
	static class UAG_IsInCover_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_IsInCover_C*>(UAG_IsInCover_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_IsInCover.AG_IsInCover_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTakingCover_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAG_IsInCover_C::CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsTakingCover_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_IsInCover_C", "CanOpen");

	Params::UAG_IsInCover_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_IsTakingCover_ReturnValue = CallFunc_IsTakingCover_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


