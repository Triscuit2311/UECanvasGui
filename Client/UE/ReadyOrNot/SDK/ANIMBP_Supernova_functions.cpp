#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Supernova.ANIMBP_Supernova_C
// (None)

class UClass* UANIMBP_Supernova_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Supernova_C");

	return Clss;
}


// ANIMBP_Supernova_C ANIMBP_Supernova.Default__ANIMBP_Supernova_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Supernova_C* UANIMBP_Supernova_C::GetDefaultObj()
{
	static class UANIMBP_Supernova_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Supernova_C*>(UANIMBP_Supernova_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Supernova.ANIMBP_Supernova_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Supernova_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Supernova_C", "AnimGraph");

	Params::UANIMBP_Supernova_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Supernova.ANIMBP_Supernova_C.AnimNotify_ToggleBullet
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Supernova_C::AnimNotify_ToggleBullet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Supernova_C", "AnimNotify_ToggleBullet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Supernova.ANIMBP_Supernova_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Supernova_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Supernova_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_Supernova_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Supernova.ANIMBP_Supernova_C.ExecuteUbergraph_ANIMBP_Supernova
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UANIMBP_Supernova_C::ExecuteUbergraph_ANIMBP_Supernova(int32 EntryPoint, float K2Node_Event_DeltaTimeX, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Supernova_C", "ExecuteUbergraph_ANIMBP_Supernova");

	Params::UANIMBP_Supernova_C_ExecuteUbergraph_ANIMBP_Supernova_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


