#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Goggles_Widget.Goggles_Widget_C
// (None)

class UClass* UGoggles_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Goggles_Widget_C");

	return Clss;
}


// Goggles_Widget_C Goggles_Widget.Default__Goggles_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGoggles_Widget_C* UGoggles_Widget_C::GetDefaultObj()
{
	static class UGoggles_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGoggles_Widget_C*>(UGoggles_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Goggles_Widget.Goggles_Widget_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGoggles_Widget_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Goggles_Widget_C", "CustomEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Goggles_Widget.Goggles_Widget_C.ExecuteUbergraph_Goggles_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGoggles_Widget_C::ExecuteUbergraph_Goggles_Widget(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Goggles_Widget_C", "ExecuteUbergraph_Goggles_Widget");

	Params::UGoggles_Widget_C_ExecuteUbergraph_Goggles_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


