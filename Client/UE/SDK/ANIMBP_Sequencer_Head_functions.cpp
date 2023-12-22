#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Sequencer_Head.ANIMBP_Sequencer_Head_C
// (None)

class UClass* UANIMBP_Sequencer_Head_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Sequencer_Head_C");

	return Clss;
}


// ANIMBP_Sequencer_Head_C ANIMBP_Sequencer_Head.Default__ANIMBP_Sequencer_Head_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Sequencer_Head_C* UANIMBP_Sequencer_Head_C::GetDefaultObj()
{
	static class UANIMBP_Sequencer_Head_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Sequencer_Head_C*>(UANIMBP_Sequencer_Head_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Sequencer_Head.ANIMBP_Sequencer_Head_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Sequencer_Head_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Sequencer_Head_C", "AnimGraph");

	Params::UANIMBP_Sequencer_Head_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Sequencer_Head.ANIMBP_Sequencer_Head_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Sequencer_Head_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Sequencer_Head_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_Sequencer_Head_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Sequencer_Head.ANIMBP_Sequencer_Head_C.ExecuteUbergraph_ANIMBP_Sequencer_Head
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASequencerCharacterTemplate_C*K2Node_DynamicCast_AsSequencer_Character_Template                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Sequencer_Head_C::ExecuteUbergraph_ANIMBP_Sequencer_Head(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ASequencerCharacterTemplate_C* K2Node_DynamicCast_AsSequencer_Character_Template, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Sequencer_Head_C", "ExecuteUbergraph_ANIMBP_Sequencer_Head");

	Params::UANIMBP_Sequencer_Head_C_ExecuteUbergraph_ANIMBP_Sequencer_Head_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsSequencer_Character_Template = K2Node_DynamicCast_AsSequencer_Character_Template;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


