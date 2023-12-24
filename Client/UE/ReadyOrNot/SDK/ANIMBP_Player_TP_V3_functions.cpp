#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Player_TP_V3.ANIMBP_Player_TP_V3_C
// (None)

class UClass* UANIMBP_Player_TP_V3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Player_TP_V3_C");

	return Clss;
}


// ANIMBP_Player_TP_V3_C ANIMBP_Player_TP_V3.Default__ANIMBP_Player_TP_V3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Player_TP_V3_C* UANIMBP_Player_TP_V3_C::GetDefaultObj()
{
	static class UANIMBP_Player_TP_V3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Player_TP_V3_C*>(UANIMBP_Player_TP_V3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Player_TP_V3.ANIMBP_Player_TP_V3_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Player_TP_V3_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V3_C", "AnimGraph");

	Params::UANIMBP_Player_TP_V3_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Player_TP_V3.ANIMBP_Player_TP_V3_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Player_TP_V3_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V3_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_Player_TP_V3_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V3.ANIMBP_Player_TP_V3_C.AnimNotify_PlayFootstep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Player_TP_V3_C::AnimNotify_PlayFootstep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V3_C", "AnimNotify_PlayFootstep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Player_TP_V3.ANIMBP_Player_TP_V3_C.AnimNotify_ShowTPMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Player_TP_V3_C::AnimNotify_ShowTPMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V3_C", "AnimNotify_ShowTPMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Player_TP_V3.ANIMBP_Player_TP_V3_C.AnimNotify_HideTPMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Player_TP_V3_C::AnimNotify_HideTPMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V3_C", "AnimNotify_HideTPMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Player_TP_V3.ANIMBP_Player_TP_V3_C.ExecuteUbergraph_ANIMBP_Player_TP_V3
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_DynamicCast_AsReady_or_Not_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseItem*                   CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetEquippedItem_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetItemMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetItemMesh_ReturnValue_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Player_TP_V3_C::ExecuteUbergraph_ANIMBP_Player_TP_V3(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_2, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V3_C", "ExecuteUbergraph_ANIMBP_Player_TP_V3");

	Params::UANIMBP_Player_TP_V3_C_ExecuteUbergraph_ANIMBP_Player_TP_V3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Character = K2Node_DynamicCast_AsReady_or_Not_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_1 = CallFunc_TryGetPawnOwner_ReturnValue_1;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_2 = CallFunc_TryGetPawnOwner_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsPlayer_Character_1 = K2Node_DynamicCast_AsPlayer_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.CallFunc_GetEquippedItem_ReturnValue_1 = CallFunc_GetEquippedItem_ReturnValue_1;
	Parms.CallFunc_GetItemMesh_ReturnValue = CallFunc_GetItemMesh_ReturnValue;
	Parms.CallFunc_GetItemMesh_ReturnValue_1 = CallFunc_GetItemMesh_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


