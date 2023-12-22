#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ReplayLoadingScreen.W_ReplayLoadingScreen_C
// (None)

class UClass* UW_ReplayLoadingScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ReplayLoadingScreen_C");

	return Clss;
}


// W_ReplayLoadingScreen_C W_ReplayLoadingScreen.Default__W_ReplayLoadingScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ReplayLoadingScreen_C* UW_ReplayLoadingScreen_C::GetDefaultObj()
{
	static class UW_ReplayLoadingScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ReplayLoadingScreen_C*>(UW_ReplayLoadingScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ReplayLoadingScreen.W_ReplayLoadingScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayLoadingScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayLoadingScreen_C", "Tick");

	Params::UW_ReplayLoadingScreen_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayLoadingScreen.W_ReplayLoadingScreen_C.ExecuteUbergraph_W_ReplayLoadingScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayLoadingScreen_C::ExecuteUbergraph_W_ReplayLoadingScreen(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayLoadingScreen_C", "ExecuteUbergraph_W_ReplayLoadingScreen");

	Params::UW_ReplayLoadingScreen_C_ExecuteUbergraph_W_ReplayLoadingScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


