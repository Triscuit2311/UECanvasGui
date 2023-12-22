#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_IsGassed.AG_IsGassed_C
// (None)

class UClass* UAG_IsGassed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_IsGassed_C");

	return Clss;
}


// AG_IsGassed_C AG_IsGassed.Default__AG_IsGassed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_IsGassed_C* UAG_IsGassed_C::GetDefaultObj()
{
	static class UAG_IsGassed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_IsGassed_C*>(UAG_IsGassed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_IsGassed.AG_IsGassed_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCurrentlyGassed_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAG_IsGassed_C::CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsCurrentlyGassed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_IsGassed_C", "CanOpen");

	Params::UAG_IsGassed_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_IsCurrentlyGassed_ReturnValue = CallFunc_IsCurrentlyGassed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


