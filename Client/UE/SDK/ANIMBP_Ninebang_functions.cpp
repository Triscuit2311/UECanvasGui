#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Ninebang.ANIMBP_Ninebang_C
// (None)

class UClass* UANIMBP_Ninebang_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Ninebang_C");

	return Clss;
}


// ANIMBP_Ninebang_C ANIMBP_Ninebang.Default__ANIMBP_Ninebang_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Ninebang_C* UANIMBP_Ninebang_C::GetDefaultObj()
{
	static class UANIMBP_Ninebang_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Ninebang_C*>(UANIMBP_Ninebang_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Ninebang.ANIMBP_Ninebang_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Ninebang_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Ninebang_C", "AnimGraph");

	Params::UANIMBP_Ninebang_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Ninebang.ANIMBP_Ninebang_C.ExecuteUbergraph_ANIMBP_Ninebang
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Ninebang_C::ExecuteUbergraph_ANIMBP_Ninebang(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Ninebang_C", "ExecuteUbergraph_ANIMBP_Ninebang");

	Params::UANIMBP_Ninebang_C_ExecuteUbergraph_ANIMBP_Ninebang_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


