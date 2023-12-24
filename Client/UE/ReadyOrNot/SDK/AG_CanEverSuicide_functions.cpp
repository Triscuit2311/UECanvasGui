#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_CanEverSuicide.AG_CanEverSuicide_C
// (None)

class UClass* UAG_CanEverSuicide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_CanEverSuicide_C");

	return Clss;
}


// AG_CanEverSuicide_C AG_CanEverSuicide.Default__AG_CanEverSuicide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_CanEverSuicide_C* UAG_CanEverSuicide_C::GetDefaultObj()
{
	static class UAG_CanEverSuicide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_CanEverSuicide_C*>(UAG_CanEverSuicide_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_CanEverSuicide.AG_CanEverSuicide_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanEverSuicide_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAG_CanEverSuicide_C::CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_CanEverSuicide_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_CanEverSuicide_C", "CanOpen");

	Params::UAG_CanEverSuicide_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_CanEverSuicide_ReturnValue = CallFunc_CanEverSuicide_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


