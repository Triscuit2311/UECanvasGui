#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_M320.ANIMBP_M320_C
// (None)

class UClass* UANIMBP_M320_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_M320_C");

	return Clss;
}


// ANIMBP_M320_C ANIMBP_M320.Default__ANIMBP_M320_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_M320_C* UANIMBP_M320_C::GetDefaultObj()
{
	static class UANIMBP_M320_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_M320_C*>(UANIMBP_M320_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_M320.ANIMBP_M320_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_M320_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M320_C", "AnimGraph");

	Params::UANIMBP_M320_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_M320.ANIMBP_M320_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M320_AnimGraphNode_ModifyBone_EDE7589748607C162DE04CB3782BCD3A
// (BlueprintEvent)
// Parameters:

void UANIMBP_M320_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M320_AnimGraphNode_ModifyBone_EDE7589748607C162DE04CB3782BCD3A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M320_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M320_AnimGraphNode_ModifyBone_EDE7589748607C162DE04CB3782BCD3A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_M320.ANIMBP_M320_C.ExecuteUbergraph_ANIMBP_M320
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_M320_C::ExecuteUbergraph_ANIMBP_M320(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M320_C", "ExecuteUbergraph_ANIMBP_M320");

	Params::UANIMBP_M320_C_ExecuteUbergraph_ANIMBP_M320_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


