#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_P99.ANIMBP_P99_C
// (None)

class UClass* UANIMBP_P99_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_P99_C");

	return Clss;
}


// ANIMBP_P99_C ANIMBP_P99.Default__ANIMBP_P99_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_P99_C* UANIMBP_P99_C::GetDefaultObj()
{
	static class UANIMBP_P99_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_P99_C*>(UANIMBP_P99_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_P99.ANIMBP_P99_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_P99_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_P99_C", "AnimGraph");

	Params::UANIMBP_P99_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_P99.ANIMBP_P99_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_P99_AnimGraphNode_BlendListByBool_4E2ABF3D43704A5C4F5278AEF4C9E808
// (BlueprintEvent)
// Parameters:

void UANIMBP_P99_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_P99_AnimGraphNode_BlendListByBool_4E2ABF3D43704A5C4F5278AEF4C9E808()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_P99_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_P99_AnimGraphNode_BlendListByBool_4E2ABF3D43704A5C4F5278AEF4C9E808");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_P99.ANIMBP_P99_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_P99_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_P99_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_P99.ANIMBP_P99_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_P99_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_P99_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_P99.ANIMBP_P99_C.ExecuteUbergraph_ANIMBP_P99
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_P99_C::ExecuteUbergraph_ANIMBP_P99(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_P99_C", "ExecuteUbergraph_ANIMBP_P99");

	Params::UANIMBP_P99_C_ExecuteUbergraph_ANIMBP_P99_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


