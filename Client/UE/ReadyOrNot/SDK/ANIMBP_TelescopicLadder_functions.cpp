#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_TelescopicLadder.ANIMBP_TelescopicLadder_C
// (None)

class UClass* UANIMBP_TelescopicLadder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_TelescopicLadder_C");

	return Clss;
}


// ANIMBP_TelescopicLadder_C ANIMBP_TelescopicLadder.Default__ANIMBP_TelescopicLadder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_TelescopicLadder_C* UANIMBP_TelescopicLadder_C::GetDefaultObj()
{
	static class UANIMBP_TelescopicLadder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_TelescopicLadder_C*>(UANIMBP_TelescopicLadder_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_TelescopicLadder.ANIMBP_TelescopicLadder_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_TelescopicLadder_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_TelescopicLadder_C", "AnimGraph");

	Params::UANIMBP_TelescopicLadder_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_TelescopicLadder.ANIMBP_TelescopicLadder_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_TelescopicLadder_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_TelescopicLadder_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_TelescopicLadder_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_TelescopicLadder.ANIMBP_TelescopicLadder_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UANIMBP_TelescopicLadder_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_TelescopicLadder_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_TelescopicLadder.ANIMBP_TelescopicLadder_C.ExecuteUbergraph_ANIMBP_TelescopicLadder
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALadderSnapZone*             K2Node_DynamicCast_AsLadder_Snap_Zone                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATelescopicLadder*           K2Node_DynamicCast_AsTelescopic_Ladder                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_TelescopicLadder_C::ExecuteUbergraph_ANIMBP_TelescopicLadder(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ALadderSnapZone* K2Node_DynamicCast_AsLadder_Snap_Zone, bool K2Node_DynamicCast_bSuccess, class ATelescopicLadder* K2Node_DynamicCast_AsTelescopic_Ladder, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_TelescopicLadder_C", "ExecuteUbergraph_ANIMBP_TelescopicLadder");

	Params::UANIMBP_TelescopicLadder_C_ExecuteUbergraph_ANIMBP_TelescopicLadder_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsLadder_Snap_Zone = K2Node_DynamicCast_AsLadder_Snap_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsTelescopic_Ladder = K2Node_DynamicCast_AsTelescopic_Ladder;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


