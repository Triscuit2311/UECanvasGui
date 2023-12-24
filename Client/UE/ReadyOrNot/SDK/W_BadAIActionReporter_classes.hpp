#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass W_BadAIActionReporter.W_BadAIActionReporter_C
class UW_BadAIActionReporter_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           Cancel_Button;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableTextBox*             Description_EditableMultilineText;                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           Report_Button;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ReportLocation_Text;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      Summary_EditableText;                              // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_BadAIActionReporter_C* GetDefaultObj();

	bool IsReportButtonEnabled(class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Construct();
	void BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button);
	void ExecuteUbergraph_W_BadAIActionReporter(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, class ABadAIAction* CallFunc_GetMostRecentBadAIActionReport_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_RemoveBadAIActionReport_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class FText CallFunc_GetText_ReturnValue, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_TextIsEmpty_ReturnValue, class ABadAIAction* CallFunc_GetMostRecentBadAIActionReport_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class FText CallFunc_Conv_VectorToText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, class FText CallFunc_GetText_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_2, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State_2, bool K2Node_DynamicCast_bSuccess_2, class ABadAIAction* CallFunc_GetMostRecentBadAIActionReport_ReturnValue_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool CallFunc_ReportBadAIAction_ReturnValue);
};

}


