#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Cursor_Default.Cursor_Default_C
// (None)

class UClass* UCursor_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cursor_Default_C");

	return Clss;
}


// Cursor_Default_C Cursor_Default.Default__Cursor_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCursor_Default_C* UCursor_Default_C::GetDefaultObj()
{
	static class UCursor_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCursor_Default_C*>(UCursor_Default_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cursor_Default.Cursor_Default_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCursor_Default_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cursor_Default_C", "Tick");

	Params::UCursor_Default_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cursor_Default.Cursor_Default_C.ExecuteUbergraph_Cursor_Default
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCursor_Default_C::ExecuteUbergraph_Cursor_Default(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_Conv_BoolToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cursor_Default_C", "ExecuteUbergraph_Cursor_Default");

	Params::UCursor_Default_C_ExecuteUbergraph_Cursor_Default_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


