#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UI_PlanningMap_Marker.BP_UI_PlanningMap_Marker_C
// (SceneComponent)

class UClass* UBP_UI_PlanningMap_Marker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UI_PlanningMap_Marker_C");

	return Clss;
}


// BP_UI_PlanningMap_Marker_C BP_UI_PlanningMap_Marker.Default__BP_UI_PlanningMap_Marker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UI_PlanningMap_Marker_C* UBP_UI_PlanningMap_Marker_C::GetDefaultObj()
{
	static class UBP_UI_PlanningMap_Marker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UI_PlanningMap_Marker_C*>(UBP_UI_PlanningMap_Marker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_UI_PlanningMap_Marker.BP_UI_PlanningMap_Marker_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_UI_PlanningMap_Marker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PlanningMap_Marker_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PlanningMap_Marker.BP_UI_PlanningMap_Marker_C.ExecuteUbergraph_BP_UI_PlanningMap_Marker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PlanningMap_Marker_C::ExecuteUbergraph_BP_UI_PlanningMap_Marker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PlanningMap_Marker_C", "ExecuteUbergraph_BP_UI_PlanningMap_Marker");

	Params::UBP_UI_PlanningMap_Marker_C_ExecuteUbergraph_BP_UI_PlanningMap_Marker_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


