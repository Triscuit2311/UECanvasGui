#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Multitool.ANIMBP_Multitool_C
// (None)

class UClass* UANIMBP_Multitool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Multitool_C");

	return Clss;
}


// ANIMBP_Multitool_C ANIMBP_Multitool.Default__ANIMBP_Multitool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Multitool_C* UANIMBP_Multitool_C::GetDefaultObj()
{
	static class UANIMBP_Multitool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Multitool_C*>(UANIMBP_Multitool_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Multitool.ANIMBP_Multitool_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Multitool_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Multitool_C", "AnimGraph");

	Params::UANIMBP_Multitool_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Multitool.ANIMBP_Multitool_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Multitool_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Multitool_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_Multitool_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Multitool.ANIMBP_Multitool_C.ExecuteUbergraph_ANIMBP_Multitool
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMultitool*                  K2Node_DynamicCast_AsMultitool                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Multitool_C::ExecuteUbergraph_ANIMBP_Multitool(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AMultitool* K2Node_DynamicCast_AsMultitool, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Multitool_C", "ExecuteUbergraph_ANIMBP_Multitool");

	Params::UANIMBP_Multitool_C_ExecuteUbergraph_ANIMBP_Multitool_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsMultitool = K2Node_DynamicCast_AsMultitool;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


