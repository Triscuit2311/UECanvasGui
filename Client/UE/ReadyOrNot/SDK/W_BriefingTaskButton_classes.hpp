#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x2D8 - 0x260)
// WidgetBlueprintGeneratedClass W_BriefingTaskButton.W_BriefingTaskButton_C
class UW_BriefingTaskButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            BtnText;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CheckMark;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             CheckMark_Scale;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Cross;                                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             Cross_Scale;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               MainBtn;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ButtonText;                                        // 0x298(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         IsChecked;                                         // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FE5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MissionAudioName;                                  // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bIsReadyButton;                                    // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bIsLoadoutButton;                                  // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_FEF[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_BriefingMain_C*                     BriefingMain;                                      // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_BriefingTaskButton_C* GetDefaultObj();

	void GetBriefingMainWidget(class UW_BriefingMain_C** BriefingMainWidget, bool* Success, TArray<class UW_BriefingMain_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UW_BriefingMain_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__MainBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MainBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MainBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_W_BriefingTaskButton(int32 EntryPoint, class UPreMissionPlanning* CallFunc_GetPremissionPlanning_ReturnValue, class UW_PreMission_C* K2Node_DynamicCast_AsW_Pre_Mission, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, TArray<class UW_BriefingMain_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_BriefingMain_C* CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsEmpty_ReturnValue, class UW_BriefingMain_C* CallFunc_GetBriefingMainWidget_BriefingMainWidget, bool CallFunc_GetBriefingMainWidget_Success, class UPreMissionPlanning* CallFunc_GetPremissionPlanning_ReturnValue_1, class UW_PreMission_C* K2Node_DynamicCast_AsW_Pre_Mission_1, bool K2Node_DynamicCast_bSuccess_2);
};

}


