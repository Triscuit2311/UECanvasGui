#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SettingContainer.W_SettingContainer_C
// (None)

class UClass* UW_SettingContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SettingContainer_C");

	return Clss;
}


// W_SettingContainer_C W_SettingContainer.Default__W_SettingContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SettingContainer_C* UW_SettingContainer_C::GetDefaultObj()
{
	static class UW_SettingContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SettingContainer_C*>(UW_SettingContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_SettingContainer.W_SettingContainer_C.DisplayDependents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowDependents                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingContainer_C::DisplayDependents(bool ShowDependents, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingContainer_C", "DisplayDependents");

	Params::UW_SettingContainer_C_DisplayDependents_Params Parms{};

	Parms.ShowDependents = ShowDependents;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingContainer.W_SettingContainer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingContainer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingContainer_C", "PreConstruct");

	Params::UW_SettingContainer_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingContainer.W_SettingContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_SettingContainer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingContainer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingContainer.W_SettingContainer_C.ExecuteUbergraph_W_SettingContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingContainer_C::ExecuteUbergraph_W_SettingContainer(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingContainer_C", "ExecuteUbergraph_W_SettingContainer");

	Params::UW_SettingContainer_C_ExecuteUbergraph_W_SettingContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


