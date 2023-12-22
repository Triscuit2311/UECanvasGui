#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_P90TR.ANIMBP_P90TR_C
// (None)

class UClass* UANIMBP_P90TR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_P90TR_C");

	return Clss;
}


// ANIMBP_P90TR_C ANIMBP_P90TR.Default__ANIMBP_P90TR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_P90TR_C* UANIMBP_P90TR_C::GetDefaultObj()
{
	static class UANIMBP_P90TR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_P90TR_C*>(UANIMBP_P90TR_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_P90TR.ANIMBP_P90TR_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_P90TR_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_P90TR_C", "AnimGraph");

	Params::UANIMBP_P90TR_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_P90TR.ANIMBP_P90TR_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_P90TR_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_P90TR_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_P90TR.ANIMBP_P90TR_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_P90TR_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_P90TR_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_P90TR.ANIMBP_P90TR_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_P90TR_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_P90TR_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_P90TR_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_P90TR.ANIMBP_P90TR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_P90TR_AnimGraphNode_ModifyBone_E6AF90964A4DBD317E6D7A9109367508
// (BlueprintEvent)
// Parameters:

void UANIMBP_P90TR_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_P90TR_AnimGraphNode_ModifyBone_E6AF90964A4DBD317E6D7A9109367508()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_P90TR_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_P90TR_AnimGraphNode_ModifyBone_E6AF90964A4DBD317E6D7A9109367508");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_P90TR.ANIMBP_P90TR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_P90TR_AnimGraphNode_BlendListByBool_BC983FF1416DD85F7ACEB6880B11376E
// (BlueprintEvent)
// Parameters:

void UANIMBP_P90TR_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_P90TR_AnimGraphNode_BlendListByBool_BC983FF1416DD85F7ACEB6880B11376E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_P90TR_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_P90TR_AnimGraphNode_BlendListByBool_BC983FF1416DD85F7ACEB6880B11376E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_P90TR.ANIMBP_P90TR_C.ExecuteUbergraph_ANIMBP_P90TR
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseMagazineWeapon*         K2Node_DynamicCast_AsBase_Magazine_Weapon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_P90TR_C::ExecuteUbergraph_ANIMBP_P90TR(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_Event_DeltaTimeX, int32 CallFunc_Round_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_P90TR_C", "ExecuteUbergraph_ANIMBP_P90TR");

	Params::UANIMBP_P90TR_C_ExecuteUbergraph_ANIMBP_P90TR_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon = K2Node_DynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


