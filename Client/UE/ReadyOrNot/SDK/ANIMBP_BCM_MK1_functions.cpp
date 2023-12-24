#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_BCM_MK1.ANIMBP_BCM_MK1_C
// (None)

class UClass* UANIMBP_BCM_MK1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_BCM_MK1_C");

	return Clss;
}


// ANIMBP_BCM_MK1_C ANIMBP_BCM_MK1.Default__ANIMBP_BCM_MK1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_BCM_MK1_C* UANIMBP_BCM_MK1_C::GetDefaultObj()
{
	static class UANIMBP_BCM_MK1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_BCM_MK1_C*>(UANIMBP_BCM_MK1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_BCM_MK1.ANIMBP_BCM_MK1_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_BCM_MK1_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_BCM_MK1_C", "AnimGraph");

	Params::UANIMBP_BCM_MK1_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_BCM_MK1.ANIMBP_BCM_MK1_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_BCM_MK1_AnimGraphNode_ModifyBone_D6653B48412D6B26A0BB08BFD23039F5
// (BlueprintEvent)
// Parameters:

void UANIMBP_BCM_MK1_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_BCM_MK1_AnimGraphNode_ModifyBone_D6653B48412D6B26A0BB08BFD23039F5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_BCM_MK1_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_BCM_MK1_AnimGraphNode_ModifyBone_D6653B48412D6B26A0BB08BFD23039F5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_BCM_MK1.ANIMBP_BCM_MK1_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_BCM_MK1_AnimGraphNode_BlendListByBool_81ACA35A435D956CCD44E694C0D064D3
// (BlueprintEvent)
// Parameters:

void UANIMBP_BCM_MK1_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_BCM_MK1_AnimGraphNode_BlendListByBool_81ACA35A435D956CCD44E694C0D064D3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_BCM_MK1_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_BCM_MK1_AnimGraphNode_BlendListByBool_81ACA35A435D956CCD44E694C0D064D3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_BCM_MK1.ANIMBP_BCM_MK1_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_BCM_MK1_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_BCM_MK1_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_BCM_MK1.ANIMBP_BCM_MK1_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_BCM_MK1_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_BCM_MK1_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_BCM_MK1.ANIMBP_BCM_MK1_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_BCM_MK1_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_BCM_MK1_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_BCM_MK1_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_BCM_MK1.ANIMBP_BCM_MK1_C.ExecuteUbergraph_ANIMBP_BCM_MK1
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         K2Node_DynamicCast_AsBase_Magazine_Weapon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_BCM_MK1_C::ExecuteUbergraph_ANIMBP_BCM_MK1(int32 EntryPoint, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_BCM_MK1_C", "ExecuteUbergraph_ANIMBP_BCM_MK1");

	Params::UANIMBP_BCM_MK1_C_ExecuteUbergraph_ANIMBP_BCM_MK1_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon = K2Node_DynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


