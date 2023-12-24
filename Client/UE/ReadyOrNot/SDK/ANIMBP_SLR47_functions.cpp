#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_SLR47.ANIMBP_SLR47_C
// (None)

class UClass* UANIMBP_SLR47_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_SLR47_C");

	return Clss;
}


// ANIMBP_SLR47_C ANIMBP_SLR47.Default__ANIMBP_SLR47_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_SLR47_C* UANIMBP_SLR47_C::GetDefaultObj()
{
	static class UANIMBP_SLR47_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_SLR47_C*>(UANIMBP_SLR47_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_SLR47.ANIMBP_SLR47_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_SLR47_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_SLR47_C", "AnimGraph");

	Params::UANIMBP_SLR47_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_SLR47.ANIMBP_SLR47_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SLR47_AnimGraphNode_ModifyBone_A2F98C714CBBC8F00864CDBAF108CA43
// (BlueprintEvent)
// Parameters:

void UANIMBP_SLR47_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SLR47_AnimGraphNode_ModifyBone_A2F98C714CBBC8F00864CDBAF108CA43()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_SLR47_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SLR47_AnimGraphNode_ModifyBone_A2F98C714CBBC8F00864CDBAF108CA43");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_SLR47.ANIMBP_SLR47_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SLR47_AnimGraphNode_BlendListByBool_3736ACFD4C04E0B12A5FA09402534C83
// (BlueprintEvent)
// Parameters:

void UANIMBP_SLR47_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SLR47_AnimGraphNode_BlendListByBool_3736ACFD4C04E0B12A5FA09402534C83()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_SLR47_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_SLR47_AnimGraphNode_BlendListByBool_3736ACFD4C04E0B12A5FA09402534C83");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_SLR47.ANIMBP_SLR47_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_SLR47_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_SLR47_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_SLR47.ANIMBP_SLR47_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_SLR47_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_SLR47_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_SLR47.ANIMBP_SLR47_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_SLR47_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_SLR47_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_SLR47_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_SLR47.ANIMBP_SLR47_C.ExecuteUbergraph_ANIMBP_SLR47
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         K2Node_DynamicCast_AsBase_Magazine_Weapon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_SLR47_C::ExecuteUbergraph_ANIMBP_SLR47(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_SLR47_C", "ExecuteUbergraph_ANIMBP_SLR47");

	Params::UANIMBP_SLR47_C_ExecuteUbergraph_ANIMBP_SLR47_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon = K2Node_DynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


