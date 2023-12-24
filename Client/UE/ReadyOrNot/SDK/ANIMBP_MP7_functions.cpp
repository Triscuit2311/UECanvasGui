#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_MP7.ANIMBP_MP7_C
// (None)

class UClass* UANIMBP_MP7_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_MP7_C");

	return Clss;
}


// ANIMBP_MP7_C ANIMBP_MP7.Default__ANIMBP_MP7_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_MP7_C* UANIMBP_MP7_C::GetDefaultObj()
{
	static class UANIMBP_MP7_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_MP7_C*>(UANIMBP_MP7_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_MP7.ANIMBP_MP7_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_MP7_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP7_C", "AnimGraph");

	Params::UANIMBP_MP7_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_MP7.ANIMBP_MP7_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP7_AnimGraphNode_ModifyBone_F8DD9F834A1362227A76659BBDFB391B
// (BlueprintEvent)
// Parameters:

void UANIMBP_MP7_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP7_AnimGraphNode_ModifyBone_F8DD9F834A1362227A76659BBDFB391B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP7_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP7_AnimGraphNode_ModifyBone_F8DD9F834A1362227A76659BBDFB391B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_MP7.ANIMBP_MP7_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP7_AnimGraphNode_BlendListByBool_A79BAE044D4E4B45AC3186A1665EC9F5
// (BlueprintEvent)
// Parameters:

void UANIMBP_MP7_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP7_AnimGraphNode_BlendListByBool_A79BAE044D4E4B45AC3186A1665EC9F5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP7_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP7_AnimGraphNode_BlendListByBool_A79BAE044D4E4B45AC3186A1665EC9F5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_MP7.ANIMBP_MP7_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_MP7_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP7_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_MP7.ANIMBP_MP7_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_MP7_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP7_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_MP7.ANIMBP_MP7_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_MP7_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP7_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_MP7_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_MP7.ANIMBP_MP7_C.ExecuteUbergraph_ANIMBP_MP7
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         K2Node_DynamicCast_AsBase_Magazine_Weapon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_MP7_C::ExecuteUbergraph_ANIMBP_MP7(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP7_C", "ExecuteUbergraph_ANIMBP_MP7");

	Params::UANIMBP_MP7_C_ExecuteUbergraph_ANIMBP_MP7_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
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


