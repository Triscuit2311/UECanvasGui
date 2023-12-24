#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Fiveseven.ANIMBP_Fiveseven_C
// (None)

class UClass* UANIMBP_Fiveseven_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Fiveseven_C");

	return Clss;
}


// ANIMBP_Fiveseven_C ANIMBP_Fiveseven.Default__ANIMBP_Fiveseven_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Fiveseven_C* UANIMBP_Fiveseven_C::GetDefaultObj()
{
	static class UANIMBP_Fiveseven_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Fiveseven_C*>(UANIMBP_Fiveseven_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Fiveseven.ANIMBP_Fiveseven_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Fiveseven_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Fiveseven_C", "AnimGraph");

	Params::UANIMBP_Fiveseven_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Fiveseven.ANIMBP_Fiveseven_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Fiveseven_AnimGraphNode_BlendListByBool_F6C465C449A44FC61395B0BE2A7E694C
// (BlueprintEvent)
// Parameters:

void UANIMBP_Fiveseven_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Fiveseven_AnimGraphNode_BlendListByBool_F6C465C449A44FC61395B0BE2A7E694C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Fiveseven_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Fiveseven_AnimGraphNode_BlendListByBool_F6C465C449A44FC61395B0BE2A7E694C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Fiveseven.ANIMBP_Fiveseven_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Fiveseven_AnimGraphNode_BlendListByBool_728BD6E64F3F789438D4B4A82ABE5F3F
// (BlueprintEvent)
// Parameters:

void UANIMBP_Fiveseven_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Fiveseven_AnimGraphNode_BlendListByBool_728BD6E64F3F789438D4B4A82ABE5F3F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Fiveseven_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Fiveseven_AnimGraphNode_BlendListByBool_728BD6E64F3F789438D4B4A82ABE5F3F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Fiveseven.ANIMBP_Fiveseven_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Fiveseven_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Fiveseven_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_Fiveseven_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Fiveseven.ANIMBP_Fiveseven_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Fiveseven_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Fiveseven_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Fiveseven.ANIMBP_Fiveseven_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Fiveseven_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Fiveseven_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Fiveseven.ANIMBP_Fiveseven_C.AnimNotify_SlideBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Fiveseven_C::AnimNotify_SlideBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Fiveseven_C", "AnimNotify_SlideBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Fiveseven.ANIMBP_Fiveseven_C.AnimNotify_SlideForward
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Fiveseven_C::AnimNotify_SlideForward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Fiveseven_C", "AnimNotify_SlideForward");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Fiveseven.ANIMBP_Fiveseven_C.ExecuteUbergraph_ANIMBP_Fiveseven
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Fiveseven_C::ExecuteUbergraph_ANIMBP_Fiveseven(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Fiveseven_C", "ExecuteUbergraph_ANIMBP_Fiveseven");

	Params::UANIMBP_Fiveseven_C_ExecuteUbergraph_ANIMBP_Fiveseven_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


