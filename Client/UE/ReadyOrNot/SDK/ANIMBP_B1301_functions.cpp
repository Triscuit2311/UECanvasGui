#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_B1301.ANIMBP_B1301_C
// (None)

class UClass* UANIMBP_B1301_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_B1301_C");

	return Clss;
}


// ANIMBP_B1301_C ANIMBP_B1301.Default__ANIMBP_B1301_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_B1301_C* UANIMBP_B1301_C::GetDefaultObj()
{
	static class UANIMBP_B1301_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_B1301_C*>(UANIMBP_B1301_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_B1301.ANIMBP_B1301_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_B1301_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_B1301_C", "AnimGraph");

	Params::UANIMBP_B1301_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_B1301.ANIMBP_B1301_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_B1301_AnimGraphNode_BlendListByBool_0E18469B4C827EBA3EDEBB91DA3B0B1E
// (BlueprintEvent)
// Parameters:

void UANIMBP_B1301_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_B1301_AnimGraphNode_BlendListByBool_0E18469B4C827EBA3EDEBB91DA3B0B1E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_B1301_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_B1301_AnimGraphNode_BlendListByBool_0E18469B4C827EBA3EDEBB91DA3B0B1E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_B1301.ANIMBP_B1301_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_B1301_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_B1301_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_B1301_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_B1301.ANIMBP_B1301_C.ExecuteUbergraph_ANIMBP_B1301
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_B1301_C::ExecuteUbergraph_ANIMBP_B1301(int32 EntryPoint, float K2Node_Event_DeltaTimeX, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_B1301_C", "ExecuteUbergraph_ANIMBP_B1301");

	Params::UANIMBP_B1301_C_ExecuteUbergraph_ANIMBP_B1301_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


