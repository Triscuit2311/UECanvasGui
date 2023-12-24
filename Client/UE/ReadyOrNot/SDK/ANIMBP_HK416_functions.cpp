#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_HK416.ANIMBP_HK416_C
// (None)

class UClass* UANIMBP_HK416_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_HK416_C");

	return Clss;
}


// ANIMBP_HK416_C ANIMBP_HK416.Default__ANIMBP_HK416_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_HK416_C* UANIMBP_HK416_C::GetDefaultObj()
{
	static class UANIMBP_HK416_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_HK416_C*>(UANIMBP_HK416_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_HK416.ANIMBP_HK416_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_HK416_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_HK416_C", "AnimGraph");

	Params::UANIMBP_HK416_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_HK416.ANIMBP_HK416_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_HK416_AnimGraphNode_BlendListByBool_772251864E7F31040FD51CB8097CDC82
// (BlueprintEvent)
// Parameters:

void UANIMBP_HK416_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_HK416_AnimGraphNode_BlendListByBool_772251864E7F31040FD51CB8097CDC82()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_HK416_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_HK416_AnimGraphNode_BlendListByBool_772251864E7F31040FD51CB8097CDC82");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_HK416.ANIMBP_HK416_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_HK416_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_HK416_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_HK416_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_HK416.ANIMBP_HK416_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_HK416_AnimGraphNode_ModifyBone_AA7726174B223B31F47E1FB903834373
// (BlueprintEvent)
// Parameters:

void UANIMBP_HK416_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_HK416_AnimGraphNode_ModifyBone_AA7726174B223B31F47E1FB903834373()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_HK416_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_HK416_AnimGraphNode_ModifyBone_AA7726174B223B31F47E1FB903834373");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_HK416.ANIMBP_HK416_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_HK416_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_HK416_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_HK416.ANIMBP_HK416_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_HK416_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_HK416_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_HK416.ANIMBP_HK416_C.ExecuteUbergraph_ANIMBP_HK416
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         K2Node_DynamicCast_AsBase_Magazine_Weapon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetItemMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_HK416_C::ExecuteUbergraph_ANIMBP_HK416(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_HK416_C", "ExecuteUbergraph_ANIMBP_HK416");

	Params::UANIMBP_HK416_C_ExecuteUbergraph_ANIMBP_HK416_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon = K2Node_DynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemMesh_ReturnValue = CallFunc_GetItemMesh_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


