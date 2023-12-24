#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_M4A1.ANIMBP_M4A1_C
// (None)

class UClass* UANIMBP_M4A1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_M4A1_C");

	return Clss;
}


// ANIMBP_M4A1_C ANIMBP_M4A1.Default__ANIMBP_M4A1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_M4A1_C* UANIMBP_M4A1_C::GetDefaultObj()
{
	static class UANIMBP_M4A1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_M4A1_C*>(UANIMBP_M4A1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_M4A1.ANIMBP_M4A1_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_M4A1_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M4A1_C", "AnimGraph");

	Params::UANIMBP_M4A1_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_M4A1.ANIMBP_M4A1_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M4A1_AnimGraphNode_ModifyBone_8E78BCA04BD977039EBD828BA781AE49
// (BlueprintEvent)
// Parameters:

void UANIMBP_M4A1_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M4A1_AnimGraphNode_ModifyBone_8E78BCA04BD977039EBD828BA781AE49()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M4A1_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M4A1_AnimGraphNode_ModifyBone_8E78BCA04BD977039EBD828BA781AE49");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_M4A1.ANIMBP_M4A1_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_M4A1_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M4A1_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_M4A1_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_M4A1.ANIMBP_M4A1_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_M4A1_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M4A1_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_M4A1.ANIMBP_M4A1_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_M4A1_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M4A1_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_M4A1.ANIMBP_M4A1_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M4A1_AnimGraphNode_BlendListByBool_9B2906464D15BB2B86F012808FED91B8
// (BlueprintEvent)
// Parameters:

void UANIMBP_M4A1_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M4A1_AnimGraphNode_BlendListByBool_9B2906464D15BB2B86F012808FED91B8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M4A1_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_M4A1_AnimGraphNode_BlendListByBool_9B2906464D15BB2B86F012808FED91B8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_M4A1.ANIMBP_M4A1_C.ExecuteUbergraph_ANIMBP_M4A1
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         K2Node_DynamicCast_AsBase_Magazine_Weapon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_InSingleMode_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetItemMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_M4A1_C::ExecuteUbergraph_ANIMBP_M4A1(int32 EntryPoint, float CallFunc_Conv_BoolToFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_InSingleMode_ReturnValue, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_M4A1_C", "ExecuteUbergraph_ANIMBP_M4A1");

	Params::UANIMBP_M4A1_C_ExecuteUbergraph_ANIMBP_M4A1_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon = K2Node_DynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_InSingleMode_ReturnValue = CallFunc_InSingleMode_ReturnValue;
	Parms.CallFunc_GetItemMesh_ReturnValue = CallFunc_GetItemMesh_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


