#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Flaregun.ANIMBP_Flaregun_C
// (None)

class UClass* UANIMBP_Flaregun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Flaregun_C");

	return Clss;
}


// ANIMBP_Flaregun_C ANIMBP_Flaregun.Default__ANIMBP_Flaregun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Flaregun_C* UANIMBP_Flaregun_C::GetDefaultObj()
{
	static class UANIMBP_Flaregun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Flaregun_C*>(UANIMBP_Flaregun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Flaregun.ANIMBP_Flaregun_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Flaregun_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Flaregun_C", "AnimGraph");

	Params::UANIMBP_Flaregun_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Flaregun.ANIMBP_Flaregun_C.ExecuteUbergraph_ANIMBP_Flaregun
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Flaregun_C::ExecuteUbergraph_ANIMBP_Flaregun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Flaregun_C", "ExecuteUbergraph_ANIMBP_Flaregun");

	Params::UANIMBP_Flaregun_C_ExecuteUbergraph_ANIMBP_Flaregun_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


