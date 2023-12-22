#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Tec9.ANIMBP_Tec9_C
// (None)

class UClass* UANIMBP_Tec9_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Tec9_C");

	return Clss;
}


// ANIMBP_Tec9_C ANIMBP_Tec9.Default__ANIMBP_Tec9_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Tec9_C* UANIMBP_Tec9_C::GetDefaultObj()
{
	static class UANIMBP_Tec9_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Tec9_C*>(UANIMBP_Tec9_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Tec9.ANIMBP_Tec9_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Tec9_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Tec9_C", "AnimGraph");

	Params::UANIMBP_Tec9_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Tec9.ANIMBP_Tec9_C.ExecuteUbergraph_ANIMBP_Tec9
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Tec9_C::ExecuteUbergraph_ANIMBP_Tec9(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Tec9_C", "ExecuteUbergraph_ANIMBP_Tec9");

	Params::UANIMBP_Tec9_C_ExecuteUbergraph_ANIMBP_Tec9_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


