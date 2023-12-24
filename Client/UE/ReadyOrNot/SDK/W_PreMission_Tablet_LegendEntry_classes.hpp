#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x284 - 0x260)
// WidgetBlueprintGeneratedClass W_PreMission_Tablet_LegendEntry.W_PreMission_Tablet_LegendEntry_C
class UW_PreMission_Tablet_LegendEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScaleBox*                             Scale_Icon;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Label;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  MarkerName;                                        // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        IconRotation;                                      // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_PreMission_Tablet_LegendEntry_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_PreMission_Tablet_LegendEntry(int32 EntryPoint, class UW_PreMission_Tablet_MapMarker_C* CallFunc_Create_ReturnValue, class UW_OfficerMarker_C* CallFunc_Create_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, bool K2Node_Event_IsDesignTime, const struct FPlanningMarker& K2Node_MakeStruct_PlanningMarker, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1);
};

}


