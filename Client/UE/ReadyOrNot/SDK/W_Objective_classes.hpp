#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA1 (0x301 - 0x260)
// WidgetBlueprintGeneratedClass W_Objective.W_Objective_C
class UW_Objective_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_Complete;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_ObjTitle;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_SubObjectiveList;                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SubObjective_Entry_C*               W_SubObjective_Entry_34;                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AObjective*                            Objective;                                         // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  CompleteText;                                      // 0x290(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  FailedText;                                        // 0x2A8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UClass*                                ObjectiveClass;                                    // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bSimplifiedObjectives;                             // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3717[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ObjectiveName;                                     // 0x2D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ObjectiveDescription;                              // 0x2E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EObjectiveStatus                  ObjectiveStatus;                                   // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Objective_C* GetDefaultObj();

	void UpdateDescription(class UW_SubObjective_Entry_C* CallFunc_Create_ReturnValue, class UW_SubObjective_Entry_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UW_SubObjective_Entry_C* CallFunc_Create_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_2, enum class EObjectiveStatus CallFunc_GetObjectiveStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_W_Objective(int32 EntryPoint, enum class EObjectiveStatus CallFunc_GetObjectiveStatus_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime);
};

}


