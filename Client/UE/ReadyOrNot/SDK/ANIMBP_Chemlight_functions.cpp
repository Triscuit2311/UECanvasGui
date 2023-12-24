#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Chemlight.ANIMBP_Chemlight_C
// (None)

class UClass* UANIMBP_Chemlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Chemlight_C");

	return Clss;
}


// ANIMBP_Chemlight_C ANIMBP_Chemlight.Default__ANIMBP_Chemlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Chemlight_C* UANIMBP_Chemlight_C::GetDefaultObj()
{
	static class UANIMBP_Chemlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Chemlight_C*>(UANIMBP_Chemlight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Chemlight.ANIMBP_Chemlight_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Chemlight_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Chemlight_C", "AnimGraph");

	Params::UANIMBP_Chemlight_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Chemlight.ANIMBP_Chemlight_C.ExecuteUbergraph_ANIMBP_Chemlight
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Chemlight_C::ExecuteUbergraph_ANIMBP_Chemlight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Chemlight_C", "ExecuteUbergraph_ANIMBP_Chemlight");

	Params::UANIMBP_Chemlight_C_ExecuteUbergraph_ANIMBP_Chemlight_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


