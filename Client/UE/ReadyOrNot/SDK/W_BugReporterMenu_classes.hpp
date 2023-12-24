#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2B0 - 0x260)
// WidgetBlueprintGeneratedClass W_BugReporterMenu.W_BugReporterMenu_C
class UW_BugReporterMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           btn_Cancel;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Submit;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StandardCombobox_New_C*             BugCategory;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableTextBox*             BugDescriptionText;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableTextBox*             BugSummaryText;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Category;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Description;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Subject;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Title;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_BugReporterMenu_C* GetDefaultObj();

	bool GetOkButtonEnabled(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Len_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__btn_Submit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button);
	void ExecuteUbergraph_W_BugReporterMenu(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button, const class FString& CallFunc_GetCurrentOptionAsString_OptionAsString, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_PostBugReport_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


