#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_IsPepperSprayed.AG_IsPepperSprayed_C
// (None)

class UClass* UAG_IsPepperSprayed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_IsPepperSprayed_C");

	return Clss;
}


// AG_IsPepperSprayed_C AG_IsPepperSprayed.Default__AG_IsPepperSprayed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_IsPepperSprayed_C* UAG_IsPepperSprayed_C::GetDefaultObj()
{
	static class UAG_IsPepperSprayed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_IsPepperSprayed_C*>(UAG_IsPepperSprayed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_IsPepperSprayed.AG_IsPepperSprayed_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPepperSprayed_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAG_IsPepperSprayed_C::CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsPepperSprayed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_IsPepperSprayed_C", "CanOpen");

	Params::UAG_IsPepperSprayed_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_IsPepperSprayed_ReturnValue = CallFunc_IsPepperSprayed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


