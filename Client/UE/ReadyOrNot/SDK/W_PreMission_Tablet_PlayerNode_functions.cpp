#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PreMission_Tablet_PlayerNode.W_PreMission_Tablet_PlayerNode_C
// (None)

class UClass* UW_PreMission_Tablet_PlayerNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PreMission_Tablet_PlayerNode_C");

	return Clss;
}


// W_PreMission_Tablet_PlayerNode_C W_PreMission_Tablet_PlayerNode.Default__W_PreMission_Tablet_PlayerNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PreMission_Tablet_PlayerNode_C* UW_PreMission_Tablet_PlayerNode_C::GetDefaultObj()
{
	static class UW_PreMission_Tablet_PlayerNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PreMission_Tablet_PlayerNode_C*>(UW_PreMission_Tablet_PlayerNode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PreMission_Tablet_PlayerNode.W_PreMission_Tablet_PlayerNode_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_PlayerNode_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_PlayerNode_C", "PreConstruct");

	Params::UW_PreMission_Tablet_PlayerNode_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_PlayerNode.W_PreMission_Tablet_PlayerNode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_PlayerNode_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_PlayerNode_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_PlayerNode.W_PreMission_Tablet_PlayerNode_C.SetupWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                NewParam2                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_PlayerNode_C::SetupWidget(int32 NewParam, const struct FLinearColor& NewParam2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_PlayerNode_C", "SetupWidget");

	Params::UW_PreMission_Tablet_PlayerNode_C_SetupWidget_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.NewParam2 = NewParam2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_PlayerNode.W_PreMission_Tablet_PlayerNode_C.ExecuteUbergraph_W_PreMission_Tablet_PlayerNode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetPlayerTeamColor_LinearColor                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetPlayerTeamColor_SlateColor                           (None)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlanningPlayerNumber_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_NewParam2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UW_PreMission_Tablet_PlayerNode_C::ExecuteUbergraph_W_PreMission_Tablet_PlayerNode(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_GetPlayerTeamColor_LinearColor, const struct FSlateColor& CallFunc_GetPlayerTeamColor_SlateColor, const class FString& CallFunc_GetPlayerName_ReturnValue, int32 CallFunc_GetPlanningPlayerNumber_ReturnValue, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 K2Node_CustomEvent_NewParam, const struct FLinearColor& K2Node_CustomEvent_NewParam2, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_PlayerNode_C", "ExecuteUbergraph_W_PreMission_Tablet_PlayerNode");

	Params::UW_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerTeamColor_LinearColor = CallFunc_GetPlayerTeamColor_LinearColor;
	Parms.CallFunc_GetPlayerTeamColor_SlateColor = CallFunc_GetPlayerTeamColor_SlateColor;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_GetPlanningPlayerNumber_ReturnValue = CallFunc_GetPlanningPlayerNumber_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.K2Node_CustomEvent_NewParam2 = K2Node_CustomEvent_NewParam2;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


