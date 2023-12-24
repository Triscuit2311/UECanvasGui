#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_LockPick_Gun.ANIMBP_LockPick_Gun_C
// (None)

class UClass* UANIMBP_LockPick_Gun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_LockPick_Gun_C");

	return Clss;
}


// ANIMBP_LockPick_Gun_C ANIMBP_LockPick_Gun.Default__ANIMBP_LockPick_Gun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_LockPick_Gun_C* UANIMBP_LockPick_Gun_C::GetDefaultObj()
{
	static class UANIMBP_LockPick_Gun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_LockPick_Gun_C*>(UANIMBP_LockPick_Gun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_LockPick_Gun.ANIMBP_LockPick_Gun_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_LockPick_Gun_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_LockPick_Gun_C", "AnimGraph");

	Params::UANIMBP_LockPick_Gun_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_LockPick_Gun.ANIMBP_LockPick_Gun_C.ExecuteUbergraph_ANIMBP_LockPick_Gun
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_LockPick_Gun_C::ExecuteUbergraph_ANIMBP_LockPick_Gun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_LockPick_Gun_C", "ExecuteUbergraph_ANIMBP_LockPick_Gun");

	Params::UANIMBP_LockPick_Gun_C_ExecuteUbergraph_ANIMBP_LockPick_Gun_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


