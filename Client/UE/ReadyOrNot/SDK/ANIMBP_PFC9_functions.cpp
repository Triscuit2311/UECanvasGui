#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_PFC9.ANIMBP_PFC9_C
// (None)

class UClass* UANIMBP_PFC9_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_PFC9_C");

	return Clss;
}


// ANIMBP_PFC9_C ANIMBP_PFC9.Default__ANIMBP_PFC9_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_PFC9_C* UANIMBP_PFC9_C::GetDefaultObj()
{
	static class UANIMBP_PFC9_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_PFC9_C*>(UANIMBP_PFC9_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_PFC9.ANIMBP_PFC9_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_PFC9_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_PFC9_C", "AnimGraph");

	Params::UANIMBP_PFC9_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_PFC9.ANIMBP_PFC9_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_PFC9_AnimGraphNode_BlendListByBool_1227339446BD815E9E1142980883F5C3
// (BlueprintEvent)
// Parameters:

void UANIMBP_PFC9_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_PFC9_AnimGraphNode_BlendListByBool_1227339446BD815E9E1142980883F5C3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_PFC9_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_PFC9_AnimGraphNode_BlendListByBool_1227339446BD815E9E1142980883F5C3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_PFC9.ANIMBP_PFC9_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_PFC9_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_PFC9_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_PFC9.ANIMBP_PFC9_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_PFC9_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_PFC9_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_PFC9.ANIMBP_PFC9_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_PFC9_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_PFC9_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_PFC9_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_PFC9.ANIMBP_PFC9_C.ExecuteUbergraph_ANIMBP_PFC9
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         K2Node_DynamicCast_AsBase_Magazine_Weapon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_PFC9_C::ExecuteUbergraph_ANIMBP_PFC9(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_PFC9_C", "ExecuteUbergraph_ANIMBP_PFC9");

	Params::UANIMBP_PFC9_C_ExecuteUbergraph_ANIMBP_PFC9_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon = K2Node_DynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


