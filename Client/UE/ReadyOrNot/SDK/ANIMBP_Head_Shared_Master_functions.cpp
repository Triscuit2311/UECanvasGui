#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C
// (None)

class UClass* UANIMBP_Head_Shared_Master_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Head_Shared_Master_C");

	return Clss;
}


// ANIMBP_Head_Shared_Master_C ANIMBP_Head_Shared_Master.Default__ANIMBP_Head_Shared_Master_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Head_Shared_Master_C* UANIMBP_Head_Shared_Master_C::GetDefaultObj()
{
	static class UANIMBP_Head_Shared_Master_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Head_Shared_Master_C*>(UANIMBP_Head_Shared_Master_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Head_Shared_Master_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Head_Shared_Master_C", "AnimGraph");

	Params::UANIMBP_Head_Shared_Master_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Head_Shared_Master_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Head_Shared_Master_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_Head_Shared_Master_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Head_Shared_Master_AnimGraphNode_PoseBlendNode_A99257564D737339170EBB90FDD72DEC
// (BlueprintEvent)
// Parameters:

void UANIMBP_Head_Shared_Master_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Head_Shared_Master_AnimGraphNode_PoseBlendNode_A99257564D737339170EBB90FDD72DEC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Head_Shared_Master_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Head_Shared_Master_AnimGraphNode_PoseBlendNode_A99257564D737339170EBB90FDD72DEC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C.ExecuteUbergraph_ANIMBP_Head_Shared_Master
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPoseAsset*                  CallFunc_GetFaceROM_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_DynamicCast_AsReady_or_Not_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDeadOrUnconscious_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_Head_Shared_Master_C::ExecuteUbergraph_ANIMBP_Head_Shared_Master(int32 EntryPoint, class UPoseAsset* CallFunc_GetFaceROM_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, bool CallFunc_IsDeadOrUnconscious_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Head_Shared_Master_C", "ExecuteUbergraph_ANIMBP_Head_Shared_Master");

	Params::UANIMBP_Head_Shared_Master_C_ExecuteUbergraph_ANIMBP_Head_Shared_Master_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetFaceROM_ReturnValue = CallFunc_GetFaceROM_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Character = K2Node_DynamicCast_AsReady_or_Not_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_IsDeadOrUnconscious_ReturnValue = CallFunc_IsDeadOrUnconscious_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


