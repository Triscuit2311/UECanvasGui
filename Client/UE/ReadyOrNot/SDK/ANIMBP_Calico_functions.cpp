#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Calico.ANIMBP_Calico_C
// (None)

class UClass* UANIMBP_Calico_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Calico_C");

	return Clss;
}


// ANIMBP_Calico_C ANIMBP_Calico.Default__ANIMBP_Calico_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Calico_C* UANIMBP_Calico_C::GetDefaultObj()
{
	static class UANIMBP_Calico_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Calico_C*>(UANIMBP_Calico_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Calico.ANIMBP_Calico_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Calico_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Calico_C", "AnimGraph");

	Params::UANIMBP_Calico_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Calico.ANIMBP_Calico_C.ExecuteUbergraph_ANIMBP_Calico
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Calico_C::ExecuteUbergraph_ANIMBP_Calico(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Calico_C", "ExecuteUbergraph_ANIMBP_Calico");

	Params::UANIMBP_Calico_C_ExecuteUbergraph_ANIMBP_Calico_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


