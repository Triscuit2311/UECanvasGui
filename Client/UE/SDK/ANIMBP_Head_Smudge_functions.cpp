#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Head_Smudge.ANIMBP_Head_Smudge_C
// (None)

class UClass* UANIMBP_Head_Smudge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Head_Smudge_C");

	return Clss;
}


// ANIMBP_Head_Smudge_C ANIMBP_Head_Smudge.Default__ANIMBP_Head_Smudge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Head_Smudge_C* UANIMBP_Head_Smudge_C::GetDefaultObj()
{
	static class UANIMBP_Head_Smudge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Head_Smudge_C*>(UANIMBP_Head_Smudge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Head_Smudge.ANIMBP_Head_Smudge_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Head_Smudge_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Head_Smudge_C", "AnimGraph");

	Params::UANIMBP_Head_Smudge_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Head_Smudge.ANIMBP_Head_Smudge_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Head_Smudge_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Head_Smudge_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_Head_Smudge_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Head_Smudge.ANIMBP_Head_Smudge_C.ExecuteUbergraph_ANIMBP_Head_Smudge
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_DynamicCast_AsReady_or_Not_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDeadOrUnconscious_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_Head_Smudge_C::ExecuteUbergraph_ANIMBP_Head_Smudge(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, bool CallFunc_IsDeadOrUnconscious_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Head_Smudge_C", "ExecuteUbergraph_ANIMBP_Head_Smudge");

	Params::UANIMBP_Head_Smudge_C_ExecuteUbergraph_ANIMBP_Head_Smudge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Character = K2Node_DynamicCast_AsReady_or_Not_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_IsDeadOrUnconscious_ReturnValue = CallFunc_IsDeadOrUnconscious_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


