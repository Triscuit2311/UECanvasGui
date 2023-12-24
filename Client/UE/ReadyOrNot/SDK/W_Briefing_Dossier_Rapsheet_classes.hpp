#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2B8 - 0x260)
// WidgetBlueprintGeneratedClass W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C
class UW_Briefing_Dossier_Rapsheet_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_23;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Code;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Rapsheet;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_RapsheetEntries;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FCriminalRecord>               RapSheet;                                          // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_Character_RapSheet                DebugRapsheet;                                     // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FCriminalRecord>               CriminalRecord;                                    // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_Briefing_Dossier_Rapsheet_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Initialize(TArray<struct FCriminalRecord>& CriminalRecord);
	void ExecuteUbergraph_W_Briefing_Dossier_Rapsheet(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, TArray<struct FCriminalRecord>& K2Node_CustomEvent_CriminalRecord, class UW_Briefing_Dossier_Rapsheet_Entry_C* CallFunc_Create_ReturnValue, const struct FCriminalRecord& CallFunc_Array_Get_Item, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


