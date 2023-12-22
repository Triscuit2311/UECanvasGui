#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C
// (None)

class UClass* UANIMBP_AI_MoveStyle_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_AI_MoveStyle_Base_C");

	return Clss;
}


// ANIMBP_AI_MoveStyle_Base_C ANIMBP_AI_MoveStyle_Base.Default__ANIMBP_AI_MoveStyle_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_AI_MoveStyle_Base_C* UANIMBP_AI_MoveStyle_Base_C::GetDefaultObj()
{
	static class UANIMBP_AI_MoveStyle_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_AI_MoveStyle_Base_C*>(UANIMBP_AI_MoveStyle_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_AI_MoveStyle_Base_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_AI_MoveStyle_Base_C", "AnimGraph");

	Params::UANIMBP_AI_MoveStyle_Base_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_AI_MoveStyle_Base_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_AI_MoveStyle_Base_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_AI_MoveStyle_Base_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C.AnimNotify_ArrestComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_AI_MoveStyle_Base_C::AnimNotify_ArrestComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_AI_MoveStyle_Base_C", "AnimNotify_ArrestComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C.AnimNotify_PlayFootstep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_AI_MoveStyle_Base_C::AnimNotify_PlayFootstep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_AI_MoveStyle_Base_C", "AnimNotify_PlayFootstep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C.AnimNotify_CaptureSnapshot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_AI_MoveStyle_Base_C::AnimNotify_CaptureSnapshot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_AI_MoveStyle_Base_C", "AnimNotify_CaptureSnapshot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C.AnimNotify_ExplodeVest
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_AI_MoveStyle_Base_C::AnimNotify_ExplodeVest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_AI_MoveStyle_Base_C", "AnimNotify_ExplodeVest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base_AnimGraphNode_BlendListByBool_63711F2D407F9CAEC84F78BC39C699CA
// (BlueprintEvent)
// Parameters:

void UANIMBP_AI_MoveStyle_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base_AnimGraphNode_BlendListByBool_63711F2D407F9CAEC84F78BC39C699CA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_AI_MoveStyle_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base_AnimGraphNode_BlendListByBool_63711F2D407F9CAEC84F78BC39C699CA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base_AnimGraphNode_BlendListByBool_9528B87B43E424C25BA8BC87EBD5CF8E
// (BlueprintEvent)
// Parameters:

void UANIMBP_AI_MoveStyle_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base_AnimGraphNode_BlendListByBool_9528B87B43E424C25BA8BC87EBD5CF8E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_AI_MoveStyle_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base_AnimGraphNode_BlendListByBool_9528B87B43E424C25BA8BC87EBD5CF8E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base_AnimGraphNode_BlendListByBool_C853EF064063205E0FAD61A2746077AB
// (BlueprintEvent)
// Parameters:

void UANIMBP_AI_MoveStyle_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base_AnimGraphNode_BlendListByBool_C853EF064063205E0FAD61A2746077AB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_AI_MoveStyle_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base_AnimGraphNode_BlendListByBool_C853EF064063205E0FAD61A2746077AB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C.ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_DynamicCast_AsReady_or_Not_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZipcuffs*                   K2Node_DynamicCast_AsZipcuffs                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        K2Node_DynamicCast_AsCybernetic_Character                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_DynamicCast_AsReady_or_Not_Character_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseArmour*                 CallFunc_GetArmour_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AExplosiveVest*              K2Node_DynamicCast_AsExplosive_Vest                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_AI_MoveStyle_Base_C::ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character, bool K2Node_DynamicCast_bSuccess_1, class AZipcuffs* K2Node_DynamicCast_AsZipcuffs, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, class ACyberneticCharacter* K2Node_DynamicCast_AsCybernetic_Character, bool K2Node_DynamicCast_bSuccess_3, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_3, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character_1, bool K2Node_DynamicCast_bSuccess_4, class ABaseArmour* CallFunc_GetArmour_ReturnValue, class AExplosiveVest* K2Node_DynamicCast_AsExplosive_Vest, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_AI_MoveStyle_Base_C", "ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base");

	Params::UANIMBP_AI_MoveStyle_Base_C_ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_1 = CallFunc_TryGetPawnOwner_ReturnValue_1;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Character = K2Node_DynamicCast_AsReady_or_Not_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsZipcuffs = K2Node_DynamicCast_AsZipcuffs;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_2 = CallFunc_TryGetPawnOwner_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsCybernetic_Character = K2Node_DynamicCast_AsCybernetic_Character;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_3 = CallFunc_TryGetPawnOwner_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Character_1 = K2Node_DynamicCast_AsReady_or_Not_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetArmour_ReturnValue = CallFunc_GetArmour_ReturnValue;
	Parms.K2Node_DynamicCast_AsExplosive_Vest = K2Node_DynamicCast_AsExplosive_Vest;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


