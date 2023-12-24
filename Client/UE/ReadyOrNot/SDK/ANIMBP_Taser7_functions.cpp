#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Taser7.ANIMBP_Taser7_C
// (None)

class UClass* UANIMBP_Taser7_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Taser7_C");

	return Clss;
}


// ANIMBP_Taser7_C ANIMBP_Taser7.Default__ANIMBP_Taser7_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Taser7_C* UANIMBP_Taser7_C::GetDefaultObj()
{
	static class UANIMBP_Taser7_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Taser7_C*>(UANIMBP_Taser7_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Taser7.ANIMBP_Taser7_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Taser7_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Taser7_C", "AnimGraph");

	Params::UANIMBP_Taser7_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Taser7.ANIMBP_Taser7_C.ExecuteUbergraph_ANIMBP_Taser7
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Taser7_C::ExecuteUbergraph_ANIMBP_Taser7(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Taser7_C", "ExecuteUbergraph_ANIMBP_Taser7");

	Params::UANIMBP_Taser7_C_ExecuteUbergraph_ANIMBP_Taser7_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


