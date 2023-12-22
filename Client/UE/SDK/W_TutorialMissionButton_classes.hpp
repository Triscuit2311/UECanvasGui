#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1AC (0x718 - 0x56C)
// WidgetBlueprintGeneratedClass W_TutorialMissionButton.W_TutorialMissionButton_C
class UW_TutorialMissionButton_C : public UW_StandardButton_C
{
public:
	uint8                                        Pad_1B5A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTutorialMissionData                  TutorialData;                                      // 0x578(0x1A0)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_TutorialMissionButton_C* GetDefaultObj();

	void Construct();
	void UpdateTutorialMissionData(class UW_StandardButton_C* CallingButton);
	void Destruct();
	void ExecuteUbergraph_W_TutorialMissionButton(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ATutorialGS* K2Node_DynamicCast_AsTutorial_GS, bool K2Node_DynamicCast_bSuccess, class UW_StandardButton_C* K2Node_CustomEvent_CallingButton);
};

}


