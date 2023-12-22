#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Tablet_Roster.W_Tablet_Roster_C
// (None)

class UClass* UW_Tablet_Roster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Tablet_Roster_C");

	return Clss;
}


// W_Tablet_Roster_C W_Tablet_Roster.Default__W_Tablet_Roster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Tablet_Roster_C* UW_Tablet_Roster_C::GetDefaultObj()
{
	static class UW_Tablet_Roster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Tablet_Roster_C*>(UW_Tablet_Roster_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Tablet_Roster.W_Tablet_Roster_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Tablet_Roster_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tablet_Roster_C", "GetFocusTarget");

	Params::UW_Tablet_Roster_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Tablet_Roster.W_Tablet_Roster_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Tablet_Roster_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tablet_Roster_C", "BackPage");

	Params::UW_Tablet_Roster_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Tablet_Roster.W_Tablet_Roster_C.UpdateCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Tablet_Roster_C::UpdateCard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tablet_Roster_C", "UpdateCard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Tablet_Roster.W_Tablet_Roster_C.UpdateHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Tablet_Roster_C::UpdateHealth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tablet_Roster_C", "UpdateHealth");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Tablet_Roster.W_Tablet_Roster_C.SetVisualTheme
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseDarkTheme                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Tablet_Roster_C::SetVisualTheme(bool UseDarkTheme)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tablet_Roster_C", "SetVisualTheme");

	Params::UW_Tablet_Roster_C_SetVisualTheme_Params Parms{};

	Parms.UseDarkTheme = UseDarkTheme;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Tablet_Roster.W_Tablet_Roster_C.AudioPlayerVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AudioPlayer_C*            PlayerWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayerVisible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Tablet_Roster_C::AudioPlayerVisible(class UW_AudioPlayer_C* PlayerWidget, bool PlayerVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tablet_Roster_C", "AudioPlayerVisible");

	Params::UW_Tablet_Roster_C_AudioPlayerVisible_Params Parms{};

	Parms.PlayerWidget = PlayerWidget;
	Parms.PlayerVisible = PlayerVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Tablet_Roster.W_Tablet_Roster_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Tablet_Roster_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tablet_Roster_C", "Reveal");

	Params::UW_Tablet_Roster_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Tablet_Roster.W_Tablet_Roster_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Tablet_Roster_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tablet_Roster_C", "Hide");

	Params::UW_Tablet_Roster_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Tablet_Roster.W_Tablet_Roster_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Tablet_Roster_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tablet_Roster_C", "SetInputMode");

	Params::UW_Tablet_Roster_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Tablet_Roster.W_Tablet_Roster_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Tablet_Roster_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tablet_Roster_C", "ChangePage");

	Params::UW_Tablet_Roster_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Tablet_Roster.W_Tablet_Roster_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Tablet_Roster_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tablet_Roster_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Tablet_Roster.W_Tablet_Roster_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Tablet_Roster_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tablet_Roster_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Tablet_Roster.W_Tablet_Roster_C.SetTabletState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsAwake                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Tablet_Roster_C::SetTabletState(bool IsAwake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tablet_Roster_C", "SetTabletState");

	Params::UW_Tablet_Roster_C_SetTabletState_Params Parms{};

	Parms.IsAwake = IsAwake;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Tablet_Roster.W_Tablet_Roster_C.ExecuteUbergraph_W_Tablet_Roster
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ITabletUI_C>K2Node_DynamicCast_AsTablet_UI                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_UseDarkTheme                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_AudioPlayer_C*            K2Node_Event_PlayerWidget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_PlayerVisible                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCommanderMode_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_PreMission_Tablet_RosterManager_C*CallFunc_BP_AddWidget_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_Status_C*          CallFunc_BP_AddWidget_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsAwake                                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Tablet_Roster_C::ExecuteUbergraph_W_Tablet_Roster(int32 EntryPoint, class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue, TScriptInterface<class ITabletUI_C> K2Node_DynamicCast_AsTablet_UI, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_UseDarkTheme, class UW_AudioPlayer_C* K2Node_Event_PlayerWidget, bool K2Node_Event_PlayerVisible, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_IsCommanderMode_ReturnValue, class UW_PreMission_Tablet_RosterManager_C* CallFunc_BP_AddWidget_ReturnValue, class UW_Roster_Status_C* CallFunc_BP_AddWidget_ReturnValue_1, bool K2Node_Event_IsAwake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tablet_Roster_C", "ExecuteUbergraph_W_Tablet_Roster");

	Params::UW_Tablet_Roster_C_ExecuteUbergraph_W_Tablet_Roster_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsTablet_UI = K2Node_DynamicCast_AsTablet_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_UseDarkTheme = K2Node_Event_UseDarkTheme;
	Parms.K2Node_Event_PlayerWidget = K2Node_Event_PlayerWidget;
	Parms.K2Node_Event_PlayerVisible = K2Node_Event_PlayerVisible;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.CallFunc_IsCommanderMode_ReturnValue = CallFunc_IsCommanderMode_ReturnValue;
	Parms.CallFunc_BP_AddWidget_ReturnValue = CallFunc_BP_AddWidget_ReturnValue;
	Parms.CallFunc_BP_AddWidget_ReturnValue_1 = CallFunc_BP_AddWidget_ReturnValue_1;
	Parms.K2Node_Event_IsAwake = K2Node_Event_IsAwake;

	UObject::ProcessEvent(Func, &Parms);

}

}


