#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Library_UI_BriefingFunctions.Library_UI_BriefingFunctions_C
class ULibrary_UI_BriefingFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibrary_UI_BriefingFunctions_C* GetDefaultObj();

	void GetTimelineEventTestData(class UObject* __WorldContext, class USoundWave** Audio_Asset, TArray<struct FTimelineEvent>* Events, TMap<float, struct FTimelineEvent>* EventEntries, TMap<float, struct FTimelineEvent> TestDataEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FST_Briefing_Entry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FTimelineEvent& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


