#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_M92FS.ANIMBP_M92FS_C
// (None)

class UClass* UANIMBP_M92FS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_M92FS_C");

	return Clss;
}


// ANIMBP_M92FS_C ANIMBP_M92FS.Default__ANIMBP_M92FS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_M92FS_C* UANIMBP_M92FS_C::GetDefaultObj()
{
	static class UANIMBP_M92FS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_M92FS_C*>(UANIMBP_M92FS_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_M92FS.ANIMBP_M92FS_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_M92FS_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M92FS_C", "AnimGraph");

	Params::UANIMBP_M92FS_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_M92FS.ANIMBP_M92FS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M92FS_AnimGraphNode_BlendListByBool_59A434C34F605FE322102493C0693E20
// (BlueprintEvent)
// Parameters:

void UANIMBP_M92FS_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M92FS_AnimGraphNode_BlendListByBool_59A434C34F605FE322102493C0693E20()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M92FS_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M92FS_AnimGraphNode_BlendListByBool_59A434C34F605FE322102493C0693E20");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_M92FS.ANIMBP_M92FS_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_M92FS_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M92FS_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_M92FS.ANIMBP_M92FS_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_M92FS_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M92FS_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_M92FS.ANIMBP_M92FS_C.ExecuteUbergraph_ANIMBP_M92FS
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_M92FS_C::ExecuteUbergraph_ANIMBP_M92FS(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M92FS_C", "ExecuteUbergraph_ANIMBP_M92FS");

	Params::UANIMBP_M92FS_C_ExecuteUbergraph_ANIMBP_M92FS_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


