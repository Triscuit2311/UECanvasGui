#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x278 - 0x268)
// WidgetBlueprintGeneratedClass W_COOPScorePopUp.W_COOPScorePopUp_C
class UW_COOPScorePopUp_C : public UCOOPScorePopUp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          ScoreNotify_Container;                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_COOPScorePopUp_C* GetDefaultObj();

	void AddScorePopup(class FText InScoreText, int32 InCalculatedScore, bool bGive);
	void AddObjectivePopup(class FText InObjectiveText);
	void ExecuteUbergraph_W_COOPScorePopUp(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_ObjectiveNotify_C* CallFunc_Create_ReturnValue, class FText K2Node_CustomEvent_InScoreText, int32 K2Node_CustomEvent_InCalculatedScore, bool K2Node_CustomEvent_bGive, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class FText K2Node_CustomEvent_InObjectiveText, class UW_ScoreNotify_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1);
};

}


