#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_CoopGameModes.AG_CoopGameModes_C
// (None)

class UClass* UAG_CoopGameModes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_CoopGameModes_C");

	return Clss;
}


// AG_CoopGameModes_C AG_CoopGameModes.Default__AG_CoopGameModes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_CoopGameModes_C* UAG_CoopGameModes_C::GetDefaultObj()
{
	static class UAG_CoopGameModes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_CoopGameModes_C*>(UAG_CoopGameModes_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_CoopGameModes.AG_CoopGameModes_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// enum class ECOOPMode               CallFunc_GetCOOPMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAG_CoopGameModes_C::CanOpen(struct FAIActionDecisionContext& Context, enum class ECOOPMode CallFunc_GetCOOPMode_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_CoopGameModes_C", "CanOpen");

	Params::UAG_CoopGameModes_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCOOPMode_ReturnValue = CallFunc_GetCOOPMode_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


