#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_CSGas.ANIMBP_CSGas_C
// (None)

class UClass* UANIMBP_CSGas_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_CSGas_C");

	return Clss;
}


// ANIMBP_CSGas_C ANIMBP_CSGas.Default__ANIMBP_CSGas_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_CSGas_C* UANIMBP_CSGas_C::GetDefaultObj()
{
	static class UANIMBP_CSGas_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_CSGas_C*>(UANIMBP_CSGas_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_CSGas.ANIMBP_CSGas_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_CSGas_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_CSGas_C", "AnimGraph");

	Params::UANIMBP_CSGas_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_CSGas.ANIMBP_CSGas_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_CSGas_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_CSGas_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_CSGas_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_CSGas.ANIMBP_CSGas_C.ExecuteUbergraph_ANIMBP_CSGas
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseGrenade*                K2Node_DynamicCast_AsBase_Grenade                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_CSGas_C::ExecuteUbergraph_ANIMBP_CSGas(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseGrenade* K2Node_DynamicCast_AsBase_Grenade, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_CSGas_C", "ExecuteUbergraph_ANIMBP_CSGas");

	Params::UANIMBP_CSGas_C_ExecuteUbergraph_ANIMBP_CSGas_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Grenade = K2Node_DynamicCast_AsBase_Grenade;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


