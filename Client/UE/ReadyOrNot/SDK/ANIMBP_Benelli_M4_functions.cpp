#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C
// (None)

class UClass* UANIMBP_Benelli_M4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Benelli_M4_C");

	return Clss;
}


// ANIMBP_Benelli_M4_C ANIMBP_Benelli_M4.Default__ANIMBP_Benelli_M4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Benelli_M4_C* UANIMBP_Benelli_M4_C::GetDefaultObj()
{
	static class UANIMBP_Benelli_M4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Benelli_M4_C*>(UANIMBP_Benelli_M4_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Benelli_M4_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Benelli_M4_C", "AnimGraph");

	Params::UANIMBP_Benelli_M4_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Benelli_M4_AnimGraphNode_BlendListByBool_24FABA7F44C81B59863D0FABC6873878
// (BlueprintEvent)
// Parameters:

void UANIMBP_Benelli_M4_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Benelli_M4_AnimGraphNode_BlendListByBool_24FABA7F44C81B59863D0FABC6873878()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Benelli_M4_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Benelli_M4_AnimGraphNode_BlendListByBool_24FABA7F44C81B59863D0FABC6873878");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.AnimNotify_PrimeShellRack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Benelli_M4_C::AnimNotify_PrimeShellRack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Benelli_M4_C", "AnimNotify_PrimeShellRack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.AnimNotify_FinishShellLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Benelli_M4_C::AnimNotify_FinishShellLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Benelli_M4_C", "AnimNotify_FinishShellLoad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.AnimNotify_ReplaceShellRack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Benelli_M4_C::AnimNotify_ReplaceShellRack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Benelli_M4_C", "AnimNotify_ReplaceShellRack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.AnimNotify_ReloadNextShell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Benelli_M4_C::AnimNotify_ReloadNextShell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Benelli_M4_C", "AnimNotify_ReloadNextShell");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Benelli_M4.ANIMBP_Benelli_M4_C.ExecuteUbergraph_ANIMBP_Benelli_M4
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AShotgun*                    K2Node_DynamicCast_AsShotgun                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AShotgun*                    K2Node_DynamicCast_AsShotgun_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AShotgun*                    K2Node_DynamicCast_AsShotgun_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AShotgun*                    K2Node_DynamicCast_AsShotgun_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetItemMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellRackShellComponent*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_Benelli_M4_C::ExecuteUbergraph_ANIMBP_Benelli_M4(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, class AShotgun* K2Node_DynamicCast_AsShotgun, bool K2Node_DynamicCast_bSuccess, class AShotgun* K2Node_DynamicCast_AsShotgun_1, bool K2Node_DynamicCast_bSuccess_1, class AShotgun* K2Node_DynamicCast_AsShotgun_2, bool K2Node_DynamicCast_bSuccess_2, class AShotgun* K2Node_DynamicCast_AsShotgun_3, bool K2Node_DynamicCast_bSuccess_3, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UShellRackShellComponent* CallFunc_Array_Get_Item, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Benelli_M4_C", "ExecuteUbergraph_ANIMBP_Benelli_M4");

	Params::UANIMBP_Benelli_M4_C_ExecuteUbergraph_ANIMBP_Benelli_M4_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsShotgun = K2Node_DynamicCast_AsShotgun;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsShotgun_1 = K2Node_DynamicCast_AsShotgun_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsShotgun_2 = K2Node_DynamicCast_AsShotgun_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsShotgun_3 = K2Node_DynamicCast_AsShotgun_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetItemMesh_ReturnValue = CallFunc_GetItemMesh_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


