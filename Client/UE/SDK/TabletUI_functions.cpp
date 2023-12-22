#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TabletUI.TabletUI_C
// (None)

class UClass* ITabletUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TabletUI_C");

	return Clss;
}


// TabletUI_C TabletUI.Default__TabletUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ITabletUI_C* ITabletUI_C::GetDefaultObj()
{
	static class ITabletUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ITabletUI_C*>(ITabletUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TabletUI.TabletUI_C.AudioPlayerVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AudioPlayer_C*            PlayerWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayerVisible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ITabletUI_C::AudioPlayerVisible(class UW_AudioPlayer_C* PlayerWidget, bool PlayerVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabletUI_C", "AudioPlayerVisible");

	Params::ITabletUI_C_AudioPlayerVisible_Params Parms{};

	Parms.PlayerWidget = PlayerWidget;
	Parms.PlayerVisible = PlayerVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabletUI.TabletUI_C.SetVisualTheme
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseDarkTheme                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ITabletUI_C::SetVisualTheme(bool UseDarkTheme)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabletUI_C", "SetVisualTheme");

	Params::ITabletUI_C_SetVisualTheme_Params Parms{};

	Parms.UseDarkTheme = UseDarkTheme;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabletUI.TabletUI_C.SetTabletState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsAwake                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ITabletUI_C::SetTabletState(bool IsAwake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabletUI_C", "SetTabletState");

	Params::ITabletUI_C_SetTabletState_Params Parms{};

	Parms.IsAwake = IsAwake;

	UObject::ProcessEvent(Func, &Parms);

}

}


