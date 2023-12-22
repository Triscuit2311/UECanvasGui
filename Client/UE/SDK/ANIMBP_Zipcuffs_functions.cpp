#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Zipcuffs.ANIMBP_Zipcuffs_C
// (None)

class UClass* UANIMBP_Zipcuffs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Zipcuffs_C");

	return Clss;
}


// ANIMBP_Zipcuffs_C ANIMBP_Zipcuffs.Default__ANIMBP_Zipcuffs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Zipcuffs_C* UANIMBP_Zipcuffs_C::GetDefaultObj()
{
	static class UANIMBP_Zipcuffs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Zipcuffs_C*>(UANIMBP_Zipcuffs_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Zipcuffs.ANIMBP_Zipcuffs_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Zipcuffs_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Zipcuffs_C", "AnimGraph");

	Params::UANIMBP_Zipcuffs_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Zipcuffs.ANIMBP_Zipcuffs_C.ExecuteUbergraph_ANIMBP_Zipcuffs
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Zipcuffs_C::ExecuteUbergraph_ANIMBP_Zipcuffs(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Zipcuffs_C", "ExecuteUbergraph_ANIMBP_Zipcuffs");

	Params::UANIMBP_Zipcuffs_C_ExecuteUbergraph_ANIMBP_Zipcuffs_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


