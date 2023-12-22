#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_AKM.ANIMBP_AKM_C
// (None)

class UClass* UANIMBP_AKM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_AKM_C");

	return Clss;
}


// ANIMBP_AKM_C ANIMBP_AKM.Default__ANIMBP_AKM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_AKM_C* UANIMBP_AKM_C::GetDefaultObj()
{
	static class UANIMBP_AKM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_AKM_C*>(UANIMBP_AKM_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_AKM.ANIMBP_AKM_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_AKM_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_AKM_C", "AnimGraph");

	Params::UANIMBP_AKM_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_AKM.ANIMBP_AKM_C.ExecuteUbergraph_ANIMBP_AKM
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_AKM_C::ExecuteUbergraph_ANIMBP_AKM(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_AKM_C", "ExecuteUbergraph_ANIMBP_AKM");

	Params::UANIMBP_AKM_C_ExecuteUbergraph_ANIMBP_AKM_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


