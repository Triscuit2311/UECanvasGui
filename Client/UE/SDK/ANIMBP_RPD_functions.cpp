#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_RPD.ANIMBP_RPD_C
// (None)

class UClass* UANIMBP_RPD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_RPD_C");

	return Clss;
}


// ANIMBP_RPD_C ANIMBP_RPD.Default__ANIMBP_RPD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_RPD_C* UANIMBP_RPD_C::GetDefaultObj()
{
	static class UANIMBP_RPD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_RPD_C*>(UANIMBP_RPD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_RPD.ANIMBP_RPD_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_RPD_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_RPD_C", "AnimGraph");

	Params::UANIMBP_RPD_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_RPD.ANIMBP_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_RPD_AnimGraphNode_BlendListByBool_85AAEFB646CB6D20E8AE93A63D05E54F
// (BlueprintEvent)
// Parameters:

void UANIMBP_RPD_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_RPD_AnimGraphNode_BlendListByBool_85AAEFB646CB6D20E8AE93A63D05E54F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_RPD_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_RPD_AnimGraphNode_BlendListByBool_85AAEFB646CB6D20E8AE93A63D05E54F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_RPD.ANIMBP_RPD_C.ExecuteUbergraph_ANIMBP_RPD
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_RPD_C::ExecuteUbergraph_ANIMBP_RPD(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_RPD_C", "ExecuteUbergraph_ANIMBP_RPD");

	Params::UANIMBP_RPD_C_ExecuteUbergraph_ANIMBP_RPD_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


