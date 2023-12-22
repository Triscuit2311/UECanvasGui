#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_M24.ANIMBP_M24_C
// (None)

class UClass* UANIMBP_M24_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_M24_C");

	return Clss;
}


// ANIMBP_M24_C ANIMBP_M24.Default__ANIMBP_M24_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_M24_C* UANIMBP_M24_C::GetDefaultObj()
{
	static class UANIMBP_M24_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_M24_C*>(UANIMBP_M24_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_M24.ANIMBP_M24_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_M24_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M24_C", "AnimGraph");

	Params::UANIMBP_M24_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_M24.ANIMBP_M24_C.ExecuteUbergraph_ANIMBP_M24
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_M24_C::ExecuteUbergraph_ANIMBP_M24(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M24_C", "ExecuteUbergraph_ANIMBP_M24");

	Params::UANIMBP_M24_C_ExecuteUbergraph_ANIMBP_M24_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


