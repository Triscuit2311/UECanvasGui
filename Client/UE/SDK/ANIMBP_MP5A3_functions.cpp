#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_MP5A3.ANIMBP_MP5A3_C
// (None)

class UClass* UANIMBP_MP5A3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_MP5A3_C");

	return Clss;
}


// ANIMBP_MP5A3_C ANIMBP_MP5A3.Default__ANIMBP_MP5A3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_MP5A3_C* UANIMBP_MP5A3_C::GetDefaultObj()
{
	static class UANIMBP_MP5A3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_MP5A3_C*>(UANIMBP_MP5A3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_MP5A3_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP5A3_C", "AnimGraph");

	Params::UANIMBP_MP5A3_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP5A3_AnimGraphNode_ModifyBone_7F60588A46408C72A4AA889F9B5E6A07
// (BlueprintEvent)
// Parameters:

void UANIMBP_MP5A3_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP5A3_AnimGraphNode_ModifyBone_7F60588A46408C72A4AA889F9B5E6A07()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP5A3_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP5A3_AnimGraphNode_ModifyBone_7F60588A46408C72A4AA889F9B5E6A07");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP5A3_AnimGraphNode_BlendListByBool_C13325674DBF0C467BEC1B9A4592FEE9
// (BlueprintEvent)
// Parameters:

void UANIMBP_MP5A3_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP5A3_AnimGraphNode_BlendListByBool_C13325674DBF0C467BEC1B9A4592FEE9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP5A3_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP5A3_AnimGraphNode_BlendListByBool_C13325674DBF0C467BEC1B9A4592FEE9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_MP5A3_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP5A3_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_MP5A3_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_MP5A3_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP5A3_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_MP5A3_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP5A3_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_MP5A3.ANIMBP_MP5A3_C.ExecuteUbergraph_ANIMBP_MP5A3
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         K2Node_DynamicCast_AsBase_Magazine_Weapon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_MP5A3_C::ExecuteUbergraph_ANIMBP_MP5A3(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_Conv_BoolToFloat_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP5A3_C", "ExecuteUbergraph_ANIMBP_MP5A3");

	Params::UANIMBP_MP5A3_C_ExecuteUbergraph_ANIMBP_MP5A3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon = K2Node_DynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


