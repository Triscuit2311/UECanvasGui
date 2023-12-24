#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_M590.ANIMBP_M590_C
// (None)

class UClass* UANIMBP_M590_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_M590_C");

	return Clss;
}


// ANIMBP_M590_C ANIMBP_M590.Default__ANIMBP_M590_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_M590_C* UANIMBP_M590_C::GetDefaultObj()
{
	static class UANIMBP_M590_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_M590_C*>(UANIMBP_M590_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_M590.ANIMBP_M590_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_M590_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M590_C", "AnimGraph");

	Params::UANIMBP_M590_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_M590.ANIMBP_M590_C.ExecuteUbergraph_ANIMBP_M590
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_M590_C::ExecuteUbergraph_ANIMBP_M590(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M590_C", "ExecuteUbergraph_ANIMBP_M590");

	Params::UANIMBP_M590_C_ExecuteUbergraph_ANIMBP_M590_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


