#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Glasses_Widget.Glasses_Widget_C
// (None)

class UClass* UGlasses_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Glasses_Widget_C");

	return Clss;
}


// Glasses_Widget_C Glasses_Widget.Default__Glasses_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGlasses_Widget_C* UGlasses_Widget_C::GetDefaultObj()
{
	static class UGlasses_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlasses_Widget_C*>(UGlasses_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Glasses_Widget.Glasses_Widget_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGlasses_Widget_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Glasses_Widget_C", "CustomEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Glasses_Widget.Glasses_Widget_C.ExecuteUbergraph_Glasses_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGlasses_Widget_C::ExecuteUbergraph_Glasses_Widget(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Glasses_Widget_C", "ExecuteUbergraph_Glasses_Widget");

	Params::UGlasses_Widget_C_ExecuteUbergraph_Glasses_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


