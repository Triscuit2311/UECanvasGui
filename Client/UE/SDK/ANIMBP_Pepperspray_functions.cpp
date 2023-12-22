#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Pepperspray.ANIMBP_Pepperspray_C
// (None)

class UClass* UANIMBP_Pepperspray_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Pepperspray_C");

	return Clss;
}


// ANIMBP_Pepperspray_C ANIMBP_Pepperspray.Default__ANIMBP_Pepperspray_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Pepperspray_C* UANIMBP_Pepperspray_C::GetDefaultObj()
{
	static class UANIMBP_Pepperspray_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Pepperspray_C*>(UANIMBP_Pepperspray_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Pepperspray.ANIMBP_Pepperspray_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Pepperspray_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Pepperspray_C", "AnimGraph");

	Params::UANIMBP_Pepperspray_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Pepperspray.ANIMBP_Pepperspray_C.ExecuteUbergraph_ANIMBP_Pepperspray
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Pepperspray_C::ExecuteUbergraph_ANIMBP_Pepperspray(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Pepperspray_C", "ExecuteUbergraph_ANIMBP_Pepperspray");

	Params::UANIMBP_Pepperspray_C_ExecuteUbergraph_ANIMBP_Pepperspray_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


