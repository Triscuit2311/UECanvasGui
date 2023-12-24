#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_USP.ANIMBP_USP_C
// (None)

class UClass* UANIMBP_USP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_USP_C");

	return Clss;
}


// ANIMBP_USP_C ANIMBP_USP.Default__ANIMBP_USP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_USP_C* UANIMBP_USP_C::GetDefaultObj()
{
	static class UANIMBP_USP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_USP_C*>(UANIMBP_USP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_USP.ANIMBP_USP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_USP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_USP_C", "AnimGraph");

	Params::UANIMBP_USP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_USP.ANIMBP_USP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_USP_AnimGraphNode_BlendListByBool_106DCF574D02D8841088A3A415340342
// (BlueprintEvent)
// Parameters:

void UANIMBP_USP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_USP_AnimGraphNode_BlendListByBool_106DCF574D02D8841088A3A415340342()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_USP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_USP_AnimGraphNode_BlendListByBool_106DCF574D02D8841088A3A415340342");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_USP.ANIMBP_USP_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_USP_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_USP_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_USP.ANIMBP_USP_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_USP_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_USP_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_USP.ANIMBP_USP_C.ExecuteUbergraph_ANIMBP_USP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_USP_C::ExecuteUbergraph_ANIMBP_USP(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_USP_C", "ExecuteUbergraph_ANIMBP_USP");

	Params::UANIMBP_USP_C_ExecuteUbergraph_ANIMBP_USP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


