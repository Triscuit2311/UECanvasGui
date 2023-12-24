#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Snail_anim_bp.Snail_anim_bp_C
// (None)

class UClass* USnail_anim_bp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Snail_anim_bp_C");

	return Clss;
}


// Snail_anim_bp_C Snail_anim_bp.Default__Snail_anim_bp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USnail_anim_bp_C* USnail_anim_bp_C::GetDefaultObj()
{
	static class USnail_anim_bp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USnail_anim_bp_C*>(USnail_anim_bp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Snail_anim_bp.Snail_anim_bp_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USnail_anim_bp_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Snail_anim_bp_C", "AnimGraph");

	Params::USnail_anim_bp_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Snail_anim_bp.Snail_anim_bp_C.ExecuteUbergraph_Snail_anim_bp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USnail_anim_bp_C::ExecuteUbergraph_Snail_anim_bp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Snail_anim_bp_C", "ExecuteUbergraph_Snail_anim_bp");

	Params::USnail_anim_bp_C_ExecuteUbergraph_Snail_anim_bp_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


