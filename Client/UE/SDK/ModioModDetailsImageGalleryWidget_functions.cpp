#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ModioModDetailsImageGalleryWidget.ModioModDetailsImageGalleryWidget_C
// (None)

class UClass* UModioModDetailsImageGalleryWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModDetailsImageGalleryWidget_C");

	return Clss;
}


// ModioModDetailsImageGalleryWidget_C ModioModDetailsImageGalleryWidget.Default__ModioModDetailsImageGalleryWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModioModDetailsImageGalleryWidget_C* UModioModDetailsImageGalleryWidget_C::GetDefaultObj()
{
	static class UModioModDetailsImageGalleryWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModDetailsImageGalleryWidget_C*>(UModioModDetailsImageGalleryWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioModDetailsImageGalleryWidget.ModioModDetailsImageGalleryWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModioModDetailsImageGalleryWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsImageGalleryWidget_C", "Tick");

	Params::UModioModDetailsImageGalleryWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ModioModDetailsImageGalleryWidget.ModioModDetailsImageGalleryWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UModioModDetailsImageGalleryWidget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsImageGalleryWidget_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ModioModDetailsImageGalleryWidget.ModioModDetailsImageGalleryWidget_C.ExecuteUbergraph_ModioModDetailsImageGalleryWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModioModDetailsImageGalleryWidget_C::ExecuteUbergraph_ModioModDetailsImageGalleryWidget(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsImageGalleryWidget_C", "ExecuteUbergraph_ModioModDetailsImageGalleryWidget");

	Params::UModioModDetailsImageGalleryWidget_C_ExecuteUbergraph_ModioModDetailsImageGalleryWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


