#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C
// (None)

class UClass* UW_Briefing_Dossier_Rapsheet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_Dossier_Rapsheet_C");

	return Clss;
}


// W_Briefing_Dossier_Rapsheet_C W_Briefing_Dossier_Rapsheet.Default__W_Briefing_Dossier_Rapsheet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_Dossier_Rapsheet_C* UW_Briefing_Dossier_Rapsheet_C::GetDefaultObj()
{
	static class UW_Briefing_Dossier_Rapsheet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_Dossier_Rapsheet_C*>(UW_Briefing_Dossier_Rapsheet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Dossier_Rapsheet_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Dossier_Rapsheet_C", "PreConstruct");

	Params::UW_Briefing_Dossier_Rapsheet_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C.Initialize
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCriminalRecord>     CriminalRecord                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_Briefing_Dossier_Rapsheet_C::Initialize(TArray<struct FCriminalRecord>& CriminalRecord)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Dossier_Rapsheet_C", "Initialize");

	Params::UW_Briefing_Dossier_Rapsheet_C_Initialize_Params Parms{};

	Parms.CriminalRecord = CriminalRecord;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C.ExecuteUbergraph_W_Briefing_Dossier_Rapsheet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FCriminalRecord>     K2Node_CustomEvent_CriminalRecord                                (ConstParm, ReferenceParm)
// class UW_Briefing_Dossier_Rapsheet_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCriminalRecord             CallFunc_Array_Get_Item                                          (None)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Dossier_Rapsheet_C::ExecuteUbergraph_W_Briefing_Dossier_Rapsheet(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, TArray<struct FCriminalRecord>& K2Node_CustomEvent_CriminalRecord, class UW_Briefing_Dossier_Rapsheet_Entry_C* CallFunc_Create_ReturnValue, const struct FCriminalRecord& CallFunc_Array_Get_Item, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Dossier_Rapsheet_C", "ExecuteUbergraph_W_Briefing_Dossier_Rapsheet");

	Params::UW_Briefing_Dossier_Rapsheet_C_ExecuteUbergraph_W_Briefing_Dossier_Rapsheet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_CriminalRecord = K2Node_CustomEvent_CriminalRecord;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


