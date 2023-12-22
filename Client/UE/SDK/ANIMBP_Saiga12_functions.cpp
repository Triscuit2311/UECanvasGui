#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Saiga12.ANIMBP_Saiga12_C
// (None)

class UClass* UANIMBP_Saiga12_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Saiga12_C");

	return Clss;
}


// ANIMBP_Saiga12_C ANIMBP_Saiga12.Default__ANIMBP_Saiga12_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Saiga12_C* UANIMBP_Saiga12_C::GetDefaultObj()
{
	static class UANIMBP_Saiga12_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Saiga12_C*>(UANIMBP_Saiga12_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Saiga12.ANIMBP_Saiga12_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Saiga12_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Saiga12_C", "AnimGraph");

	Params::UANIMBP_Saiga12_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Saiga12.ANIMBP_Saiga12_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Saiga12_AnimGraphNode_BlendListByBool_3B1098614A54A490C1EA00AE5865DD5E
// (BlueprintEvent)
// Parameters:

void UANIMBP_Saiga12_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Saiga12_AnimGraphNode_BlendListByBool_3B1098614A54A490C1EA00AE5865DD5E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Saiga12_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Saiga12_AnimGraphNode_BlendListByBool_3B1098614A54A490C1EA00AE5865DD5E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Saiga12.ANIMBP_Saiga12_C.AnimNotify_ReplaceMags
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Saiga12_C::AnimNotify_ReplaceMags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Saiga12_C", "AnimNotify_ReplaceMags");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Saiga12.ANIMBP_Saiga12_C.AnimNotify_SpawnPhysMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Saiga12_C::AnimNotify_SpawnPhysMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Saiga12_C", "AnimNotify_SpawnPhysMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Saiga12.ANIMBP_Saiga12_C.ExecuteUbergraph_ANIMBP_Saiga12
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_Saiga12_C::ExecuteUbergraph_ANIMBP_Saiga12(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Saiga12_C", "ExecuteUbergraph_ANIMBP_Saiga12");

	Params::UANIMBP_Saiga12_C_ExecuteUbergraph_ANIMBP_Saiga12_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


