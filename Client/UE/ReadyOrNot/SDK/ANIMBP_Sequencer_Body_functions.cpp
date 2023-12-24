#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Sequencer_Body.ANIMBP_Sequencer_Body_C
// (None)

class UClass* UANIMBP_Sequencer_Body_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Sequencer_Body_C");

	return Clss;
}


// ANIMBP_Sequencer_Body_C ANIMBP_Sequencer_Body.Default__ANIMBP_Sequencer_Body_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Sequencer_Body_C* UANIMBP_Sequencer_Body_C::GetDefaultObj()
{
	static class UANIMBP_Sequencer_Body_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Sequencer_Body_C*>(UANIMBP_Sequencer_Body_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Sequencer_Body.ANIMBP_Sequencer_Body_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Sequencer_Body_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Sequencer_Body_C", "AnimGraph");

	Params::UANIMBP_Sequencer_Body_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Sequencer_Body.ANIMBP_Sequencer_Body_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Sequencer_Body_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Sequencer_Body_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_Sequencer_Body_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Sequencer_Body.ANIMBP_Sequencer_Body_C.ExecuteUbergraph_ANIMBP_Sequencer_Body
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_DynamicCast_AsReady_or_Not_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBeingArrested_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsArrested_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_Sequencer_Body_C::ExecuteUbergraph_ANIMBP_Sequencer_Body(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, bool CallFunc_IsBeingArrested_ReturnValue, bool CallFunc_IsArrested_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Sequencer_Body_C", "ExecuteUbergraph_ANIMBP_Sequencer_Body");

	Params::UANIMBP_Sequencer_Body_C_ExecuteUbergraph_ANIMBP_Sequencer_Body_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Character = K2Node_DynamicCast_AsReady_or_Not_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_IsBeingArrested_ReturnValue = CallFunc_IsBeingArrested_ReturnValue;
	Parms.CallFunc_IsArrested_ReturnValue = CallFunc_IsArrested_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


