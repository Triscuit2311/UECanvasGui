#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_FleeDesire.AC_FleeDesire_C
// (None)

class UClass* UAC_FleeDesire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_FleeDesire_C");

	return Clss;
}


// AC_FleeDesire_C AC_FleeDesire.Default__AC_FleeDesire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_FleeDesire_C* UAC_FleeDesire_C::GetDefaultObj()
{
	static class UAC_FleeDesire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_FleeDesire_C*>(UAC_FleeDesire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_FleeDesire.AC_FleeDesire_C.Score
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseCombatActivity*         CallFunc_GetCombatActivity_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAC_FleeDesire_C::Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_FleeDesire_C", "Score");

	Params::UAC_FleeDesire_C_Score_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCombatActivity_ReturnValue = CallFunc_GetCombatActivity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


