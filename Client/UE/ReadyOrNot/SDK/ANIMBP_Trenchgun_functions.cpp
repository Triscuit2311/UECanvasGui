#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Trenchgun.ANIMBP_Trenchgun_C
// (None)

class UClass* UANIMBP_Trenchgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Trenchgun_C");

	return Clss;
}


// ANIMBP_Trenchgun_C ANIMBP_Trenchgun.Default__ANIMBP_Trenchgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Trenchgun_C* UANIMBP_Trenchgun_C::GetDefaultObj()
{
	static class UANIMBP_Trenchgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Trenchgun_C*>(UANIMBP_Trenchgun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Trenchgun.ANIMBP_Trenchgun_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Trenchgun_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Trenchgun_C", "AnimGraph");

	Params::UANIMBP_Trenchgun_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Trenchgun.ANIMBP_Trenchgun_C.ExecuteUbergraph_ANIMBP_Trenchgun
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Trenchgun_C::ExecuteUbergraph_ANIMBP_Trenchgun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Trenchgun_C", "ExecuteUbergraph_ANIMBP_Trenchgun");

	Params::UANIMBP_Trenchgun_C_ExecuteUbergraph_ANIMBP_Trenchgun_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


