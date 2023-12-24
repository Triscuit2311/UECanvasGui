#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_NVG.ANIMBP_NVG_C
// (None)

class UClass* UANIMBP_NVG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_NVG_C");

	return Clss;
}


// ANIMBP_NVG_C ANIMBP_NVG.Default__ANIMBP_NVG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_NVG_C* UANIMBP_NVG_C::GetDefaultObj()
{
	static class UANIMBP_NVG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_NVG_C*>(UANIMBP_NVG_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_NVG.ANIMBP_NVG_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_NVG_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_NVG_C", "AnimGraph");

	Params::UANIMBP_NVG_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_NVG.ANIMBP_NVG_C.GetPlayerCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*            PlayerCharacter                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_NVG_C::GetPlayerCharacter(class APlayerCharacter** PlayerCharacter, class AActor* CallFunc_GetOwningActor_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_NVG_C", "GetPlayerCharacter");

	Params::UANIMBP_NVG_C_GetPlayerCharacter_Params Parms{};

	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.CallFunc_GetOwningActor_ReturnValue_1 = CallFunc_GetOwningActor_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character_1 = K2Node_DynamicCast_AsPlayer_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerCharacter != nullptr)
		*PlayerCharacter = Parms.PlayerCharacter;

}


// Function ANIMBP_NVG.ANIMBP_NVG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_NVG_AnimGraphNode_ModifyBone_4369C15F4C1308D1A6E87DB0C364A0F1
// (BlueprintEvent)
// Parameters:

void UANIMBP_NVG_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_NVG_AnimGraphNode_ModifyBone_4369C15F4C1308D1A6E87DB0C364A0F1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_NVG_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_NVG_AnimGraphNode_ModifyBone_4369C15F4C1308D1A6E87DB0C364A0F1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_NVG.ANIMBP_NVG_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_NVG_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_NVG_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_NVG_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_NVG.ANIMBP_NVG_C.AnimNotify_HideFPMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_NVG_C::AnimNotify_HideFPMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_NVG_C", "AnimNotify_HideFPMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_NVG.ANIMBP_NVG_C.AnimNotify_ShowFPMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_NVG_C::AnimNotify_ShowFPMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_NVG_C", "AnimNotify_ShowFPMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_NVG.ANIMBP_NVG_C.ExecuteUbergraph_ANIMBP_NVG
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetItemMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_DynamicCast_AsReady_or_Not_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseItem*                   CallFunc_GetInventoryItemOfClass_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwningComponent_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANightvisionGoggles*         K2Node_DynamicCast_AsNightvision_Goggles                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_NVG_C::ExecuteUbergraph_ANIMBP_NVG(int32 EntryPoint, float CallFunc_Conv_BoolToFloat_ReturnValue, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character, bool K2Node_DynamicCast_bSuccess, class ABaseItem* CallFunc_GetInventoryItemOfClass_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, class ANightvisionGoggles* K2Node_DynamicCast_AsNightvision_Goggles, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FInterpTo_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_NVG_C", "ExecuteUbergraph_ANIMBP_NVG");

	Params::UANIMBP_NVG_C_ExecuteUbergraph_ANIMBP_NVG_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_GetItemMesh_ReturnValue = CallFunc_GetItemMesh_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Character = K2Node_DynamicCast_AsReady_or_Not_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInventoryItemOfClass_ReturnValue = CallFunc_GetInventoryItemOfClass_ReturnValue;
	Parms.CallFunc_GetOwningComponent_ReturnValue = CallFunc_GetOwningComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsNightvision_Goggles = K2Node_DynamicCast_AsNightvision_Goggles;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


