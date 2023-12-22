#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_AnimatedIconWidget.W_AnimatedIconWidget_C
// (None)

class UClass* UW_AnimatedIconWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_AnimatedIconWidget_C");

	return Clss;
}


// W_AnimatedIconWidget_C W_AnimatedIconWidget.Default__W_AnimatedIconWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_AnimatedIconWidget_C* UW_AnimatedIconWidget_C::GetDefaultObj()
{
	static class UW_AnimatedIconWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_AnimatedIconWidget_C*>(UW_AnimatedIconWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_AnimatedIconWidget.W_AnimatedIconWidget_C.SetInteractState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bValid                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_AnimatedIconWidget_C::SetInteractState(bool bValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AnimatedIconWidget_C", "SetInteractState");

	Params::UW_AnimatedIconWidget_C_SetInteractState_Params Parms{};

	Parms.bValid = bValid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AnimatedIconWidget.W_AnimatedIconWidget_C.ExecuteUbergraph_W_AnimatedIconWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bValid                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UW_AnimatedIconWidget_C::ExecuteUbergraph_W_AnimatedIconWidget(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, bool K2Node_Event_bValid, float K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AnimatedIconWidget_C", "ExecuteUbergraph_W_AnimatedIconWidget");

	Params::UW_AnimatedIconWidget_C_ExecuteUbergraph_W_AnimatedIconWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Event_bValid = K2Node_Event_bValid;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


