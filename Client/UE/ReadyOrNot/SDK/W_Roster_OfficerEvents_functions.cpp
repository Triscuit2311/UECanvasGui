#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Roster_OfficerEvents.W_Roster_OfficerEvents_C
// (None)

class UClass* UW_Roster_OfficerEvents_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Roster_OfficerEvents_C");

	return Clss;
}


// W_Roster_OfficerEvents_C W_Roster_OfficerEvents.Default__W_Roster_OfficerEvents_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Roster_OfficerEvents_C* UW_Roster_OfficerEvents_C::GetDefaultObj()
{
	static class UW_Roster_OfficerEvents_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Roster_OfficerEvents_C*>(UW_Roster_OfficerEvents_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Roster_OfficerEvents.W_Roster_OfficerEvents_C.UpdateEvents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_TextIsNotEmpty_NotEmpty                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_OfficerEvents_C::UpdateEvents(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_TextIsNotEmpty_NotEmpty, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_OfficerEvents_C", "UpdateEvents");

	Params::UW_Roster_OfficerEvents_C_UpdateEvents_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_TextIsNotEmpty_NotEmpty = CallFunc_TextIsNotEmpty_NotEmpty;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


