#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_FAL_OSW.ANIMBP_FAL_OSW_C
// (None)

class UClass* UANIMBP_FAL_OSW_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_FAL_OSW_C");

	return Clss;
}


// ANIMBP_FAL_OSW_C ANIMBP_FAL_OSW.Default__ANIMBP_FAL_OSW_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_FAL_OSW_C* UANIMBP_FAL_OSW_C::GetDefaultObj()
{
	static class UANIMBP_FAL_OSW_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_FAL_OSW_C*>(UANIMBP_FAL_OSW_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_FAL_OSW.ANIMBP_FAL_OSW_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_FAL_OSW_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FAL_OSW_C", "AnimGraph");

	Params::UANIMBP_FAL_OSW_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_FAL_OSW.ANIMBP_FAL_OSW_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_OSW_AnimGraphNode_ModifyBone_3C9F1C2D4BA8765D9DB9679390506EF4
// (BlueprintEvent)
// Parameters:

void UANIMBP_FAL_OSW_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_OSW_AnimGraphNode_ModifyBone_3C9F1C2D4BA8765D9DB9679390506EF4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FAL_OSW_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_OSW_AnimGraphNode_ModifyBone_3C9F1C2D4BA8765D9DB9679390506EF4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_FAL_OSW.ANIMBP_FAL_OSW_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_FAL_OSW_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FAL_OSW_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_FAL_OSW_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_FAL_OSW.ANIMBP_FAL_OSW_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_FAL_OSW_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FAL_OSW_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_FAL_OSW.ANIMBP_FAL_OSW_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_FAL_OSW_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FAL_OSW_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_FAL_OSW.ANIMBP_FAL_OSW_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_OSW_AnimGraphNode_BlendListByBool_543E70E1423F6A2B633E58B8299BC237
// (BlueprintEvent)
// Parameters:

void UANIMBP_FAL_OSW_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_OSW_AnimGraphNode_BlendListByBool_543E70E1423F6A2B633E58B8299BC237()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FAL_OSW_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FAL_OSW_AnimGraphNode_BlendListByBool_543E70E1423F6A2B633E58B8299BC237");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_FAL_OSW.ANIMBP_FAL_OSW_C.ExecuteUbergraph_ANIMBP_FAL_OSW
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         K2Node_DynamicCast_AsBase_Magazine_Weapon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetItemMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_FAL_OSW_C::ExecuteUbergraph_ANIMBP_FAL_OSW(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_Conv_BoolToFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Round_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FAL_OSW_C", "ExecuteUbergraph_ANIMBP_FAL_OSW");

	Params::UANIMBP_FAL_OSW_C_ExecuteUbergraph_ANIMBP_FAL_OSW_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon = K2Node_DynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemMesh_ReturnValue = CallFunc_GetItemMesh_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


