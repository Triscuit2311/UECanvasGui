#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Library_UI_BriefingFunctions.Library_UI_BriefingFunctions_C
// (None)

class UClass* ULibrary_UI_BriefingFunctions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Library_UI_BriefingFunctions_C");

	return Clss;
}


// Library_UI_BriefingFunctions_C Library_UI_BriefingFunctions.Default__Library_UI_BriefingFunctions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibrary_UI_BriefingFunctions_C* ULibrary_UI_BriefingFunctions_C::GetDefaultObj()
{
	static class ULibrary_UI_BriefingFunctions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibrary_UI_BriefingFunctions_C*>(ULibrary_UI_BriefingFunctions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Library_UI_BriefingFunctions.Library_UI_BriefingFunctions_C.GetTimelineEventTestData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundWave*                  Audio_Asset                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTimelineEvent>      Events                                                           (Parm, OutParm)
// TMap<float, struct FTimelineEvent> EventEntries                                                     (Parm, OutParm)
// TMap<float, struct FTimelineEvent> TestDataEntries                                                  (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Briefing_Entry          CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimelineEvent              CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibrary_UI_BriefingFunctions_C::GetTimelineEventTestData(class UObject* __WorldContext, class USoundWave** Audio_Asset, TArray<struct FTimelineEvent>* Events, TMap<float, struct FTimelineEvent>* EventEntries, TMap<float, struct FTimelineEvent> TestDataEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FST_Briefing_Entry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FTimelineEvent& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Library_UI_BriefingFunctions_C", "GetTimelineEventTestData");

	Params::ULibrary_UI_BriefingFunctions_C_GetTimelineEventTestData_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.TestDataEntries = TestDataEntries;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Audio_Asset != nullptr)
		*Audio_Asset = Parms.Audio_Asset;

	if (Events != nullptr)
		*Events = std::move(Parms.Events);

	if (EventEntries != nullptr)
		*EventEntries = Parms.EventEntries;

}

}


