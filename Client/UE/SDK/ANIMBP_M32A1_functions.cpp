#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_M32A1.ANIMBP_M32A1_C
// (None)

class UClass* UANIMBP_M32A1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_M32A1_C");

	return Clss;
}


// ANIMBP_M32A1_C ANIMBP_M32A1.Default__ANIMBP_M32A1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_M32A1_C* UANIMBP_M32A1_C::GetDefaultObj()
{
	static class UANIMBP_M32A1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_M32A1_C*>(UANIMBP_M32A1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_M32A1.ANIMBP_M32A1_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_M32A1_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M32A1_C", "AnimGraph");

	Params::UANIMBP_M32A1_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_M32A1.ANIMBP_M32A1_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M32A1_AnimGraphNode_ModifyBone_D1634E8C4A2BA2B78B8A69BC21FBAFB2
// (BlueprintEvent)
// Parameters:

void UANIMBP_M32A1_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M32A1_AnimGraphNode_ModifyBone_D1634E8C4A2BA2B78B8A69BC21FBAFB2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M32A1_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M32A1_AnimGraphNode_ModifyBone_D1634E8C4A2BA2B78B8A69BC21FBAFB2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_M32A1.ANIMBP_M32A1_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_M32A1_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M32A1_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_M32A1_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_M32A1.ANIMBP_M32A1_C.AnimNotify_RotateCylinder
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_M32A1_C::AnimNotify_RotateCylinder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M32A1_C", "AnimNotify_RotateCylinder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_M32A1.ANIMBP_M32A1_C.ExecuteUbergraph_ANIMBP_M32A1
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_M32A1_C::ExecuteUbergraph_ANIMBP_M32A1(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M32A1_C", "ExecuteUbergraph_ANIMBP_M32A1");

	Params::UANIMBP_M32A1_C_ExecuteUbergraph_ANIMBP_M32A1_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


