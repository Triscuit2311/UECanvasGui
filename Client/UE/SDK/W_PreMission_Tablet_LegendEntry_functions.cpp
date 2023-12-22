#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PreMission_Tablet_LegendEntry.W_PreMission_Tablet_LegendEntry_C
// (None)

class UClass* UW_PreMission_Tablet_LegendEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PreMission_Tablet_LegendEntry_C");

	return Clss;
}


// W_PreMission_Tablet_LegendEntry_C W_PreMission_Tablet_LegendEntry.Default__W_PreMission_Tablet_LegendEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PreMission_Tablet_LegendEntry_C* UW_PreMission_Tablet_LegendEntry_C::GetDefaultObj()
{
	static class UW_PreMission_Tablet_LegendEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PreMission_Tablet_LegendEntry_C*>(UW_PreMission_Tablet_LegendEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PreMission_Tablet_LegendEntry.W_PreMission_Tablet_LegendEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_LegendEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_LegendEntry_C", "PreConstruct");

	Params::UW_PreMission_Tablet_LegendEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_LegendEntry.W_PreMission_Tablet_LegendEntry_C.ExecuteUbergraph_W_PreMission_Tablet_LegendEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PreMission_Tablet_MapMarker_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_OfficerMarker_C*          CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlanningMarker             K2Node_MakeStruct_PlanningMarker                                 (NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USizeBoxSlot*                CallFunc_SlotAsSizeBoxSlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_LegendEntry_C::ExecuteUbergraph_W_PreMission_Tablet_LegendEntry(int32 EntryPoint, class UW_PreMission_Tablet_MapMarker_C* CallFunc_Create_ReturnValue, class UW_OfficerMarker_C* CallFunc_Create_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, bool K2Node_Event_IsDesignTime, const struct FPlanningMarker& K2Node_MakeStruct_PlanningMarker, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_LegendEntry_C", "ExecuteUbergraph_W_PreMission_Tablet_LegendEntry");

	Params::UW_PreMission_Tablet_LegendEntry_C_ExecuteUbergraph_W_PreMission_Tablet_LegendEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_PlanningMarker = K2Node_MakeStruct_PlanningMarker;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_SlotAsSizeBoxSlot_ReturnValue = CallFunc_SlotAsSizeBoxSlot_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


