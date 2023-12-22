#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_SawnOff.ANIMBP_SawnOff_C
// (None)

class UClass* UANIMBP_SawnOff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_SawnOff_C");

	return Clss;
}


// ANIMBP_SawnOff_C ANIMBP_SawnOff.Default__ANIMBP_SawnOff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_SawnOff_C* UANIMBP_SawnOff_C::GetDefaultObj()
{
	static class UANIMBP_SawnOff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_SawnOff_C*>(UANIMBP_SawnOff_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_SawnOff.ANIMBP_SawnOff_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_SawnOff_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_SawnOff_C", "AnimGraph");

	Params::UANIMBP_SawnOff_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_SawnOff.ANIMBP_SawnOff_C.ExecuteUbergraph_ANIMBP_SawnOff
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_SawnOff_C::ExecuteUbergraph_ANIMBP_SawnOff(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_SawnOff_C", "ExecuteUbergraph_ANIMBP_SawnOff");

	Params::UANIMBP_SawnOff_C_ExecuteUbergraph_ANIMBP_SawnOff_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


