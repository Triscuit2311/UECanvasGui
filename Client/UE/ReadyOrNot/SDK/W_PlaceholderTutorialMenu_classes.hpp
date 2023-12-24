#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2C0 - 0x280)
// WidgetBlueprintGeneratedClass W_PlaceholderTutorialMenu.W_PlaceholderTutorialMenu_C
class UW_PlaceholderTutorialMenu_C : public UTutorialMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_TutorialMissionButton_C*            W_ArrestButton;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TutorialMissionButton_C*            W_ArrestButton_1;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TutorialMissionButton_C*            W_GrenadesButton;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TutorialMissionButton_C*            W_MirrorgunButton;                                 // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TutorialMissionButton_C*            W_MovementButton;                                  // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TutorialMissionButton_C*            W_ShootingRangeButton;                             // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TutorialMissionButton_C*            W_StackUpButton;                                   // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_PlaceholderTutorialMenu_C* GetDefaultObj();

	void MoveToLoadout(class UW_StandardButton_C* CallingButton);
	void Construct();
	void ExecuteUbergraph_W_PlaceholderTutorialMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UW_StandardButton_C* K2Node_CustomEvent_CallingButton, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FSavedLoadout& K2Node_MakeStruct_SavedLoadout, const struct FTutorialMissionData& K2Node_MakeStruct_TutorialMissionData, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGS_Tutorial_C* K2Node_DynamicCast_AsGS_Tutorial, bool K2Node_DynamicCast_bSuccess, const struct FSavedLoadout& K2Node_MakeStruct_SavedLoadout_1, const struct FTutorialMissionData& K2Node_MakeStruct_TutorialMissionData_1, const struct FSavedLoadout& K2Node_MakeStruct_SavedLoadout_2, const struct FTutorialMissionData& K2Node_MakeStruct_TutorialMissionData_2, const struct FSavedLoadout& K2Node_MakeStruct_SavedLoadout_3, const struct FSavedLoadout& K2Node_MakeStruct_SavedLoadout_4, const struct FTutorialMissionData& K2Node_MakeStruct_TutorialMissionData_3, const struct FTutorialMissionData& K2Node_MakeStruct_TutorialMissionData_4, const struct FSavedLoadout& K2Node_MakeStruct_SavedLoadout_5, const struct FTutorialMissionData& K2Node_MakeStruct_TutorialMissionData_5, const struct FSavedLoadout& K2Node_MakeStruct_SavedLoadout_6, const struct FTutorialMissionData& K2Node_MakeStruct_TutorialMissionData_6);
};

}


