#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Flashbang_V2.ANIMBP_Flashbang_V2_C
// (None)

class UClass* UANIMBP_Flashbang_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Flashbang_V2_C");

	return Clss;
}


// ANIMBP_Flashbang_V2_C ANIMBP_Flashbang_V2.Default__ANIMBP_Flashbang_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Flashbang_V2_C* UANIMBP_Flashbang_V2_C::GetDefaultObj()
{
	static class UANIMBP_Flashbang_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Flashbang_V2_C*>(UANIMBP_Flashbang_V2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Flashbang_V2.ANIMBP_Flashbang_V2_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Flashbang_V2_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Flashbang_V2_C", "AnimGraph");

	Params::UANIMBP_Flashbang_V2_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Flashbang_V2.ANIMBP_Flashbang_V2_C.ExecuteUbergraph_ANIMBP_Flashbang_V2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Flashbang_V2_C::ExecuteUbergraph_ANIMBP_Flashbang_V2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Flashbang_V2_C", "ExecuteUbergraph_ANIMBP_Flashbang_V2");

	Params::UANIMBP_Flashbang_V2_C_ExecuteUbergraph_ANIMBP_Flashbang_V2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


