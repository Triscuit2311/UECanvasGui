#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Roster_MP.W_PreMission_Tablet_Roster_MP_C
// (None)

class UClass* UW_PreMission_Tablet_Roster_MP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PreMission_Tablet_Roster_MP_C");

	return Clss;
}


// W_PreMission_Tablet_Roster_MP_C W_PreMission_Tablet_Roster_MP.Default__W_PreMission_Tablet_Roster_MP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PreMission_Tablet_Roster_MP_C* UW_PreMission_Tablet_Roster_MP_C::GetDefaultObj()
{
	static class UW_PreMission_Tablet_Roster_MP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PreMission_Tablet_Roster_MP_C*>(UW_PreMission_Tablet_Roster_MP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PreMission_Tablet_Roster_MP.W_PreMission_Tablet_Roster_MP_C.RemovePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotPlayerState*      Ready_or_Not_Player_State                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_PreMission_Tablet_Roster_Entry_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Roster_MP_C::RemovePlayer(class AReadyOrNotPlayerState* Ready_or_Not_Player_State, bool CallFunc_Map_Remove_ReturnValue, class UW_PreMission_Tablet_Roster_Entry_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Roster_MP_C", "RemovePlayer");

	Params::UW_PreMission_Tablet_Roster_MP_C_RemovePlayer_Params Parms{};

	Parms.Ready_or_Not_Player_State = Ready_or_Not_Player_State;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_Roster_MP.W_PreMission_Tablet_Roster_MP_C.AddPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotPlayerState*      Ready_or_Not_Player_State                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_PreMission_Tablet_Roster_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Roster_MP_C::AddPlayer(class AReadyOrNotPlayerState*& Ready_or_Not_Player_State, bool CallFunc_IsValid_ReturnValue, class UW_PreMission_Tablet_Roster_Entry_C* CallFunc_Create_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Roster_MP_C", "AddPlayer");

	Params::UW_PreMission_Tablet_Roster_MP_C_AddPlayer_Params Parms{};

	Parms.Ready_or_Not_Player_State = Ready_or_Not_Player_State;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


