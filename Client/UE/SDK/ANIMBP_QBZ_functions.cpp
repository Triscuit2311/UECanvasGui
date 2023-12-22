#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_QBZ.ANIMBP_QBZ_C
// (None)

class UClass* UANIMBP_QBZ_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_QBZ_C");

	return Clss;
}


// ANIMBP_QBZ_C ANIMBP_QBZ.Default__ANIMBP_QBZ_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_QBZ_C* UANIMBP_QBZ_C::GetDefaultObj()
{
	static class UANIMBP_QBZ_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_QBZ_C*>(UANIMBP_QBZ_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_QBZ.ANIMBP_QBZ_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_QBZ_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_QBZ_C", "AnimGraph");

	Params::UANIMBP_QBZ_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_QBZ.ANIMBP_QBZ_C.ExecuteUbergraph_ANIMBP_QBZ
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_QBZ_C::ExecuteUbergraph_ANIMBP_QBZ(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_QBZ_C", "ExecuteUbergraph_ANIMBP_QBZ");

	Params::UANIMBP_QBZ_C_ExecuteUbergraph_ANIMBP_QBZ_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


