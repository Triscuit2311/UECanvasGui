#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Ballistic_Widget.Ballistic_Widget_C
// (None)

class UClass* UBallistic_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ballistic_Widget_C");

	return Clss;
}


// Ballistic_Widget_C Ballistic_Widget.Default__Ballistic_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBallistic_Widget_C* UBallistic_Widget_C::GetDefaultObj()
{
	static class UBallistic_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBallistic_Widget_C*>(UBallistic_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ballistic_Widget.Ballistic_Widget_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBallistic_Widget_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistic_Widget_C", "CustomEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ballistic_Widget.Ballistic_Widget_C.ExecuteUbergraph_Ballistic_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBallistic_Widget_C::ExecuteUbergraph_Ballistic_Widget(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ballistic_Widget_C", "ExecuteUbergraph_Ballistic_Widget");

	Params::UBallistic_Widget_C_ExecuteUbergraph_Ballistic_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


