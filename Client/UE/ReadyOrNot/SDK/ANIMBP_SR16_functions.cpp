#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_SR16.ANIMBP_SR16_C
// (None)

class UClass* UANIMBP_SR16_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_SR16_C");

	return Clss;
}


// ANIMBP_SR16_C ANIMBP_SR16.Default__ANIMBP_SR16_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_SR16_C* UANIMBP_SR16_C::GetDefaultObj()
{
	static class UANIMBP_SR16_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_SR16_C*>(UANIMBP_SR16_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_SR16.ANIMBP_SR16_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_SR16_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_SR16_C", "AnimGraph");

	Params::UANIMBP_SR16_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_SR16.ANIMBP_SR16_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SR16_AnimGraphNode_ModifyBone_3DFE334F4E84BA76F095E4988956A17A
// (BlueprintEvent)
// Parameters:

void UANIMBP_SR16_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SR16_AnimGraphNode_ModifyBone_3DFE334F4E84BA76F095E4988956A17A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_SR16_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SR16_AnimGraphNode_ModifyBone_3DFE334F4E84BA76F095E4988956A17A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_SR16.ANIMBP_SR16_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SR16_AnimGraphNode_BlendListByBool_AA2E89B64E694456625A089EE5940CBF
// (BlueprintEvent)
// Parameters:

void UANIMBP_SR16_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SR16_AnimGraphNode_BlendListByBool_AA2E89B64E694456625A089EE5940CBF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_SR16_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SR16_AnimGraphNode_BlendListByBool_AA2E89B64E694456625A089EE5940CBF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_SR16.ANIMBP_SR16_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_SR16_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_SR16_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_SR16_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_SR16.ANIMBP_SR16_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_SR16_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_SR16_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_SR16.ANIMBP_SR16_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_SR16_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_SR16_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_SR16.ANIMBP_SR16_C.ExecuteUbergraph_ANIMBP_SR16
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         K2Node_DynamicCast_AsBase_Magazine_Weapon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_SR16_C::ExecuteUbergraph_ANIMBP_SR16(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_SR16_C", "ExecuteUbergraph_ANIMBP_SR16");

	Params::UANIMBP_SR16_C_ExecuteUbergraph_ANIMBP_SR16_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon = K2Node_DynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


