#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_B92X.ANIMBP_B92X_C
// (None)

class UClass* UANIMBP_B92X_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_B92X_C");

	return Clss;
}


// ANIMBP_B92X_C ANIMBP_B92X.Default__ANIMBP_B92X_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_B92X_C* UANIMBP_B92X_C::GetDefaultObj()
{
	static class UANIMBP_B92X_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_B92X_C*>(UANIMBP_B92X_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_B92X.ANIMBP_B92X_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_B92X_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_B92X_C", "AnimGraph");

	Params::UANIMBP_B92X_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_B92X.ANIMBP_B92X_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_B92X_AnimGraphNode_BlendListByBool_F81A6731451F2CFD636DA883E3CCFFBD
// (BlueprintEvent)
// Parameters:

void UANIMBP_B92X_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_B92X_AnimGraphNode_BlendListByBool_F81A6731451F2CFD636DA883E3CCFFBD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_B92X_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_B92X_AnimGraphNode_BlendListByBool_F81A6731451F2CFD636DA883E3CCFFBD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_B92X.ANIMBP_B92X_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_B92X_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_B92X_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_B92X.ANIMBP_B92X_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_B92X_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_B92X_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_B92X.ANIMBP_B92X_C.ExecuteUbergraph_ANIMBP_B92X
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_B92X_C::ExecuteUbergraph_ANIMBP_B92X(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_B92X_C", "ExecuteUbergraph_ANIMBP_B92X");

	Params::UANIMBP_B92X_C_ExecuteUbergraph_ANIMBP_B92X_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


