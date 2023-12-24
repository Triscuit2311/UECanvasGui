#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_FAL.ANIMBP_FAL_C
// (None)

class UClass* UANIMBP_FAL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_FAL_C");

	return Clss;
}


// ANIMBP_FAL_C ANIMBP_FAL.Default__ANIMBP_FAL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_FAL_C* UANIMBP_FAL_C::GetDefaultObj()
{
	static class UANIMBP_FAL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_FAL_C*>(UANIMBP_FAL_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_FAL.ANIMBP_FAL_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_FAL_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FAL_C", "AnimGraph");

	Params::UANIMBP_FAL_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_FAL.ANIMBP_FAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_AnimGraphNode_ModifyBone_E55E92524736E84B621DE98D370AB091
// (BlueprintEvent)
// Parameters:

void UANIMBP_FAL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_AnimGraphNode_ModifyBone_E55E92524736E84B621DE98D370AB091()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FAL_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_AnimGraphNode_ModifyBone_E55E92524736E84B621DE98D370AB091");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_FAL.ANIMBP_FAL_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_AnimGraphNode_BlendListByBool_2E761BEA4BA3CF69BF66DF82D44B7BD9
// (BlueprintEvent)
// Parameters:

void UANIMBP_FAL_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_AnimGraphNode_BlendListByBool_2E761BEA4BA3CF69BF66DF82D44B7BD9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FAL_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_AnimGraphNode_BlendListByBool_2E761BEA4BA3CF69BF66DF82D44B7BD9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_FAL.ANIMBP_FAL_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_FAL_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FAL_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_FAL_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_FAL.ANIMBP_FAL_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_FAL_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FAL_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_FAL.ANIMBP_FAL_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_FAL_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FAL_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_FAL.ANIMBP_FAL_C.ExecuteUbergraph_ANIMBP_FAL
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         K2Node_DynamicCast_AsBase_Magazine_Weapon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetItemMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_FAL_C::ExecuteUbergraph_ANIMBP_FAL(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Event_DeltaTimeX, int32 CallFunc_FTrunc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FAL_C", "ExecuteUbergraph_ANIMBP_FAL");

	Params::UANIMBP_FAL_C_ExecuteUbergraph_ANIMBP_FAL_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon = K2Node_DynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemMesh_ReturnValue = CallFunc_GetItemMesh_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


