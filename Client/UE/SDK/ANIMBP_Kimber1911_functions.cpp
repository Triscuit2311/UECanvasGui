#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Kimber1911.ANIMBP_Kimber1911_C
// (None)

class UClass* UANIMBP_Kimber1911_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Kimber1911_C");

	return Clss;
}


// ANIMBP_Kimber1911_C ANIMBP_Kimber1911.Default__ANIMBP_Kimber1911_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Kimber1911_C* UANIMBP_Kimber1911_C::GetDefaultObj()
{
	static class UANIMBP_Kimber1911_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Kimber1911_C*>(UANIMBP_Kimber1911_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Kimber1911.ANIMBP_Kimber1911_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Kimber1911_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Kimber1911_C", "AnimGraph");

	Params::UANIMBP_Kimber1911_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Kimber1911.ANIMBP_Kimber1911_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Kimber1911_AnimGraphNode_BlendListByBool_8BAA43BB42564CDAE5CBD78AACF28F60
// (BlueprintEvent)
// Parameters:

void UANIMBP_Kimber1911_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Kimber1911_AnimGraphNode_BlendListByBool_8BAA43BB42564CDAE5CBD78AACF28F60()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Kimber1911_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Kimber1911_AnimGraphNode_BlendListByBool_8BAA43BB42564CDAE5CBD78AACF28F60");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Kimber1911.ANIMBP_Kimber1911_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Kimber1911_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Kimber1911_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Kimber1911.ANIMBP_Kimber1911_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Kimber1911_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Kimber1911_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Kimber1911.ANIMBP_Kimber1911_C.ExecuteUbergraph_ANIMBP_Kimber1911
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_Kimber1911_C::ExecuteUbergraph_ANIMBP_Kimber1911(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Kimber1911_C", "ExecuteUbergraph_ANIMBP_Kimber1911");

	Params::UANIMBP_Kimber1911_C_ExecuteUbergraph_ANIMBP_Kimber1911_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


