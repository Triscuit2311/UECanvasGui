#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_IsRoamer.AG_IsRoamer_C
// (None)

class UClass* UAG_IsRoamer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_IsRoamer_C");

	return Clss;
}


// AG_IsRoamer_C AG_IsRoamer.Default__AG_IsRoamer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_IsRoamer_C* UAG_IsRoamer_C::GetDefaultObj()
{
	static class UAG_IsRoamer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_IsRoamer_C*>(UAG_IsRoamer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_IsRoamer.AG_IsRoamer_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAG_IsRoamer_C::CanOpen(struct FAIActionDecisionContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_IsRoamer_C", "CanOpen");

	Params::UAG_IsRoamer_C_CanOpen_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


