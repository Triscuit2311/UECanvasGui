#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_AK103.ANIMBP_AK103_C
// (None)

class UClass* UANIMBP_AK103_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_AK103_C");

	return Clss;
}


// ANIMBP_AK103_C ANIMBP_AK103.Default__ANIMBP_AK103_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_AK103_C* UANIMBP_AK103_C::GetDefaultObj()
{
	static class UANIMBP_AK103_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_AK103_C*>(UANIMBP_AK103_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_AK103.ANIMBP_AK103_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_AK103_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_AK103_C", "AnimGraph");

	Params::UANIMBP_AK103_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_AK103.ANIMBP_AK103_C.AnimNotify_ReplaceMags
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_AK103_C::AnimNotify_ReplaceMags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_AK103_C", "AnimNotify_ReplaceMags");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_AK103.ANIMBP_AK103_C.AnimNotify_SpawnPhysMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_AK103_C::AnimNotify_SpawnPhysMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_AK103_C", "AnimNotify_SpawnPhysMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_AK103.ANIMBP_AK103_C.ExecuteUbergraph_ANIMBP_AK103
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_AK103_C::ExecuteUbergraph_ANIMBP_AK103(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_AK103_C", "ExecuteUbergraph_ANIMBP_AK103");

	Params::UANIMBP_AK103_C_ExecuteUbergraph_ANIMBP_AK103_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


