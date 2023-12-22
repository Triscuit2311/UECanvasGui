#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing_Objectives_List.W_Briefing_Objectives_List_C
// (None)

class UClass* UW_Briefing_Objectives_List_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_Objectives_List_C");

	return Clss;
}


// W_Briefing_Objectives_List_C W_Briefing_Objectives_List.Default__W_Briefing_Objectives_List_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_Objectives_List_C* UW_Briefing_Objectives_List_C::GetDefaultObj()
{
	static class UW_Briefing_Objectives_List_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_Objectives_List_C*>(UW_Briefing_Objectives_List_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Briefing_Objectives_List_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Objectives_List_C", "PreConstruct");

	Params::UW_Briefing_Objectives_List_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.InitObjectives
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AObjective*>          Objectives                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_Briefing_Objectives_List_C::InitObjectives(TArray<class AObjective*>& Objectives)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Objectives_List_C", "InitObjectives");

	Params::UW_Briefing_Objectives_List_C_InitObjectives_Params Parms{};

	Parms.Objectives = Objectives;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.InitChallenges
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_SubObjective_Entry>Challenges                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_Briefing_Objectives_List_C::InitChallenges(TArray<struct FST_SubObjective_Entry>& Challenges)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Objectives_List_C", "InitChallenges");

	Params::UW_Briefing_Objectives_List_C_InitChallenges_Params Parms{};

	Parms.Challenges = Challenges;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.ClearObjectives
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Objectives_List_C::ClearObjectives()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Objectives_List_C", "ClearObjectives");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Objectives_List.W_Briefing_Objectives_List_C.ExecuteUbergraph_W_Briefing_Objectives_List
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Objective_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AObjective*>          K2Node_CustomEvent_Objectives                                    (ConstParm, ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AObjective*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_IsObjectiveCompleted_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_SubObjective_Entry>K2Node_CustomEvent_Challenges                                    (ConstParm, ReferenceParm)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Objectives_List_C::ExecuteUbergraph_W_Briefing_Objectives_List(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class FText Temp_text_Variable, int32 Temp_int_Variable, class FText Temp_text_Variable_1, bool K2Node_Event_IsDesignTime, class UW_Objective_C* CallFunc_Create_ReturnValue, TArray<class AObjective*>& K2Node_CustomEvent_Objectives, bool Temp_bool_Variable, class AObjective* CallFunc_Array_Get_Item, class FText K2Node_Select_Default, bool CallFunc_IsObjectiveCompleted_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FST_SubObjective_Entry>& K2Node_CustomEvent_Challenges, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 Temp_int_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Objectives_List_C", "ExecuteUbergraph_W_Briefing_Objectives_List");

	Params::UW_Briefing_Objectives_List_C_ExecuteUbergraph_W_Briefing_Objectives_List_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_Objectives = K2Node_CustomEvent_Objectives;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsObjectiveCompleted_ReturnValue = CallFunc_IsObjectiveCompleted_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CustomEvent_Challenges = K2Node_CustomEvent_Challenges;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


