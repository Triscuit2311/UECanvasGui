#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_TAC700.ANIMBP_TAC700_C
// (None)

class UClass* UANIMBP_TAC700_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_TAC700_C");

	return Clss;
}


// ANIMBP_TAC700_C ANIMBP_TAC700.Default__ANIMBP_TAC700_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_TAC700_C* UANIMBP_TAC700_C::GetDefaultObj()
{
	static class UANIMBP_TAC700_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_TAC700_C*>(UANIMBP_TAC700_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_TAC700.ANIMBP_TAC700_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_TAC700_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_TAC700_C", "AnimGraph");

	Params::UANIMBP_TAC700_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_TAC700.ANIMBP_TAC700_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_TAC700_AnimGraphNode_BlendListByBool_891F13364F4DC947D429C99B1543CDB7
// (BlueprintEvent)
// Parameters:

void UANIMBP_TAC700_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_TAC700_AnimGraphNode_BlendListByBool_891F13364F4DC947D429C99B1543CDB7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_TAC700_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_TAC700_AnimGraphNode_BlendListByBool_891F13364F4DC947D429C99B1543CDB7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_TAC700.ANIMBP_TAC700_C.ExecuteUbergraph_ANIMBP_TAC700
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_TAC700_C::ExecuteUbergraph_ANIMBP_TAC700(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_TAC700_C", "ExecuteUbergraph_ANIMBP_TAC700");

	Params::UANIMBP_TAC700_C_ExecuteUbergraph_ANIMBP_TAC700_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


