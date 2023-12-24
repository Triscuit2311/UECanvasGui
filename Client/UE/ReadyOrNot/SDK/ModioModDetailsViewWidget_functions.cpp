#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioModDetailsViewWidget.ModioModDetailsViewWidget_C
// (None)

class UClass* UModioModDetailsViewWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModDetailsViewWidget_C");

	return Clss;
}


// ModioModDetailsViewWidget_C ModioModDetailsViewWidget.Default__ModioModDetailsViewWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioModDetailsViewWidget_C* UModioModDetailsViewWidget_C::GetDefaultObj()
{
	static class UModioModDetailsViewWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModDetailsViewWidget_C*>(UModioModDetailsViewWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioModDetailsViewWidget.ModioModDetailsViewWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModioModDetailsViewWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsViewWidget_C", "Tick");

	Params::UModioModDetailsViewWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ModioModDetailsViewWidget.ModioModDetailsViewWidget_C.ExecuteUbergraph_ModioModDetailsViewWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModioModDetailsViewWidget_C::ExecuteUbergraph_ModioModDetailsViewWidget(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsViewWidget_C", "ExecuteUbergraph_ModioModDetailsViewWidget");

	Params::UModioModDetailsViewWidget_C_ExecuteUbergraph_ModioModDetailsViewWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


