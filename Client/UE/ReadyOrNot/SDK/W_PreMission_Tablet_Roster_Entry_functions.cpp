#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Roster_Entry.W_PreMission_Tablet_Roster_Entry_C
// (None)

class UClass* UW_PreMission_Tablet_Roster_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PreMission_Tablet_Roster_Entry_C");

	return Clss;
}


// W_PreMission_Tablet_Roster_Entry_C W_PreMission_Tablet_Roster_Entry.Default__W_PreMission_Tablet_Roster_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PreMission_Tablet_Roster_Entry_C* UW_PreMission_Tablet_Roster_Entry_C::GetDefaultObj()
{
	static class UW_PreMission_Tablet_Roster_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PreMission_Tablet_Roster_Entry_C*>(UW_PreMission_Tablet_Roster_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PreMission_Tablet_Roster_Entry.W_PreMission_Tablet_Roster_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Roster_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Roster_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Roster_Entry.W_PreMission_Tablet_Roster_Entry_C.ExecuteUbergraph_W_PreMission_Tablet_Roster_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UW_PreMission_Tablet_Roster_Entry_C::ExecuteUbergraph_W_PreMission_Tablet_Roster_Entry(int32 EntryPoint, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Roster_Entry_C", "ExecuteUbergraph_W_PreMission_Tablet_Roster_Entry");

	Params::UW_PreMission_Tablet_Roster_Entry_C_ExecuteUbergraph_W_PreMission_Tablet_Roster_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


