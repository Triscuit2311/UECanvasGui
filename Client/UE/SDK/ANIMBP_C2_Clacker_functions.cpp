#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_C2_Clacker.ANIMBP_C2_Clacker_C
// (None)

class UClass* UANIMBP_C2_Clacker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_C2_Clacker_C");

	return Clss;
}


// ANIMBP_C2_Clacker_C ANIMBP_C2_Clacker.Default__ANIMBP_C2_Clacker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_C2_Clacker_C* UANIMBP_C2_Clacker_C::GetDefaultObj()
{
	static class UANIMBP_C2_Clacker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_C2_Clacker_C*>(UANIMBP_C2_Clacker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_C2_Clacker.ANIMBP_C2_Clacker_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_C2_Clacker_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_C2_Clacker_C", "AnimGraph");

	Params::UANIMBP_C2_Clacker_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_C2_Clacker.ANIMBP_C2_Clacker_C.ExecuteUbergraph_ANIMBP_C2_Clacker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_C2_Clacker_C::ExecuteUbergraph_ANIMBP_C2_Clacker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_C2_Clacker_C", "ExecuteUbergraph_ANIMBP_C2_Clacker");

	Params::UANIMBP_C2_Clacker_C_ExecuteUbergraph_ANIMBP_C2_Clacker_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


