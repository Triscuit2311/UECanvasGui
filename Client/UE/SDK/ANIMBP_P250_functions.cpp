#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_P250.ANIMBP_P250_C
// (None)

class UClass* UANIMBP_P250_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_P250_C");

	return Clss;
}


// ANIMBP_P250_C ANIMBP_P250.Default__ANIMBP_P250_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_P250_C* UANIMBP_P250_C::GetDefaultObj()
{
	static class UANIMBP_P250_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_P250_C*>(UANIMBP_P250_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_P250.ANIMBP_P250_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_P250_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_P250_C", "AnimGraph");

	Params::UANIMBP_P250_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_P250.ANIMBP_P250_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_P250_AnimGraphNode_BlendListByBool_B7EA37804E7E1BB26EDE0F95B4ED3ECE
// (BlueprintEvent)
// Parameters:

void UANIMBP_P250_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_P250_AnimGraphNode_BlendListByBool_B7EA37804E7E1BB26EDE0F95B4ED3ECE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_P250_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_P250_AnimGraphNode_BlendListByBool_B7EA37804E7E1BB26EDE0F95B4ED3ECE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_P250.ANIMBP_P250_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_P250_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_P250_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_P250.ANIMBP_P250_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_P250_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_P250_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_P250.ANIMBP_P250_C.ExecuteUbergraph_ANIMBP_P250
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_P250_C::ExecuteUbergraph_ANIMBP_P250(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_P250_C", "ExecuteUbergraph_ANIMBP_P250");

	Params::UANIMBP_P250_C_ExecuteUbergraph_ANIMBP_P250_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


