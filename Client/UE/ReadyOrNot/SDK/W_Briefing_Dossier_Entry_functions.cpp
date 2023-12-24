#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing_Dossier_Entry.W_Briefing_Dossier_Entry_C
// (None)

class UClass* UW_Briefing_Dossier_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_Dossier_Entry_C");

	return Clss;
}


// W_Briefing_Dossier_Entry_C W_Briefing_Dossier_Entry.Default__W_Briefing_Dossier_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_Dossier_Entry_C* UW_Briefing_Dossier_Entry_C::GetDefaultObj()
{
	static class UW_Briefing_Dossier_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_Dossier_Entry_C*>(UW_Briefing_Dossier_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing_Dossier_Entry.W_Briefing_Dossier_Entry_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Briefing_Dossier_Entry_C::SetValue(class FText Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Dossier_Entry_C", "SetValue");

	Params::UW_Briefing_Dossier_Entry_C_SetValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Dossier_Entry.W_Briefing_Dossier_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Dossier_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Dossier_Entry_C", "PreConstruct");

	Params::UW_Briefing_Dossier_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Dossier_Entry.W_Briefing_Dossier_Entry_C.ExecuteUbergraph_W_Briefing_Dossier_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Dossier_Entry_C::ExecuteUbergraph_W_Briefing_Dossier_Entry(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Dossier_Entry_C", "ExecuteUbergraph_W_Briefing_Dossier_Entry");

	Params::UW_Briefing_Dossier_Entry_C_ExecuteUbergraph_W_Briefing_Dossier_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


