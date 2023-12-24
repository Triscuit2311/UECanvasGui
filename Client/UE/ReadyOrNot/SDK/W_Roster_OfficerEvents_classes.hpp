#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass W_Roster_OfficerEvents.W_Roster_OfficerEvents_C
class UW_Roster_OfficerEvents_C : public UUserWidget
{
public:
	class UCommonBorder*                         Events;                                            // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonHierarchicalScrollBox*          Scroll_Events;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_OfficerEvent_Entry_C*        W_Roster_OfficerEvent_Entry;                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_OfficerEvent_Entry_C*        W_Roster_OfficerEvent_Entry_1;                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_OfficerEvent_Entry_C*        W_Roster_OfficerEvent_Entry_2;                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_OfficerEvent_Entry_C*        W_Roster_OfficerEvent_Entry_3;                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URosterCharacter*                      RosterCharacter;                                   // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Roster_OfficerEvents_C* GetDefaultObj();

	void UpdateEvents(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_TextIsNotEmpty_NotEmpty, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}


