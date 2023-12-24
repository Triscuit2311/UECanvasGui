#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_CoopGameMode.AG_CoopGameMode_C
// (None)

class UClass* UAG_CoopGameMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_CoopGameMode_C");

	return Clss;
}


// AG_CoopGameMode_C AG_CoopGameMode.Default__AG_CoopGameMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_CoopGameMode_C* UAG_CoopGameMode_C::GetDefaultObj()
{
	static class UAG_CoopGameMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_CoopGameMode_C*>(UAG_CoopGameMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_CoopGameMode.AG_CoopGameMode_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// enum class ECOOPMode               CallFunc_GetCOOPMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAG_CoopGameMode_C::CanOpen(struct FAIActionDecisionContext& Context, enum class ECOOPMode CallFunc_GetCOOPMode_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_CoopGameMode_C", "CanOpen");

	Params::UAG_CoopGameMode_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCOOPMode_ReturnValue = CallFunc_GetCOOPMode_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


