#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6A (0x2CA - 0x260)
// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Objectives_Entry.W_PreMission_Tablet_Objectives_Entry_C
class UW_PreMission_Tablet_Objectives_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                             CheckBox_14;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Description;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Objective;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Objective_Count;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AObjective*                            Objective;                                         // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                ObjectiveClass;                                    // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  ObjectiveName;                                     // 0x298(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ObjectiveDescription;                              // 0x2B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EObjectiveStatus                  ObjectiveStatus;                                   // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsBombDefusal;                                    // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_PreMission_Tablet_Objectives_Entry_C* GetDefaultObj();

	void UpdateObjectiveState(enum class EObjectiveStatus Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, bool CallFunc_IsValid_ReturnValue, enum class EObjectiveStatus CallFunc_GetObjectiveStatus_ReturnValue, enum class EObjectiveStatus Temp_byte_Variable_1, enum class ECheckBoxState Temp_byte_Variable_2, enum class ECheckBoxState Temp_byte_Variable_3, enum class ECheckBoxState Temp_byte_Variable_4, enum class ECheckBoxState K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1);
	void UpdateObjectiveInfo();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnObjectiveUpdated(class AObjective* Objective);
	void ExecuteUbergraph_W_PreMission_Tablet_Objectives_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class EObjectiveStatus CallFunc_GetObjectiveStatus_ReturnValue, class AObjective* CallFunc_GetClassDefaultObject_ReturnValue, class FText CallFunc_GetFormattedDescription_ReturnValue, class FText CallFunc_GetFormattedName_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class FText CallFunc_GetFormattedDescription_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetFormattedName_ReturnValue_1, class AObjective* K2Node_CustomEvent_Objective, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ADefuseBombThreats* K2Node_DynamicCast_AsDefuse_Bomb_Threats, bool K2Node_DynamicCast_bSuccess);
};

}


