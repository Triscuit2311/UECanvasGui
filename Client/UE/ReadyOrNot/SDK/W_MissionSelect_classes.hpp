#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x3E0 - 0x340)
// WidgetBlueprintGeneratedClass W_MissionSelect.W_MissionSelect_C
class UW_MissionSelect_C : public UMissionSelectWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimFadeIn;                                        // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_29;                                          // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_LeftFade;                                      // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          LevelsVerticalBox;                                 // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Scroll_Levels;                                     // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_ViewLevelLocation;                             // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_ViewLevelName;                                 // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                      W_PageWrapper;                                     // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                               LevelListPadding;                                  // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UW_MissionSelect_Level_C*>      MissionWidgets;                                    // 0x3A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class ULevelData*                            CurrentMission;                                    // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_MissionSelect_Level_C*              LastMissionButton;                                 // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_MissionSelect_EntryPoint_C*> EntryPointWidgets;                                 // 0x3C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UW_MissionSelect_Level_C*              CurrentSelection;                                  // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_MissionSelect_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTW_MissionSelect_0(class UW_PageWrapper_C* W_PageWrapper);
	void SetMissionDetails(class ULevelData* LevelData, bool CallFunc_IsValid_ReturnValue);
	void PopulateLevelList(bool bIsLastWidget, class UW_MissionSelect_Level_C* NewLevelWidget, class ULevelData* NewLevelData, class UW_MissionSelect_Level_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FMargin& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_Array_Add_ReturnValue, const struct FMargin& K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, TArray<class ULevelData*>& CallFunc_GetLevelDataList_ReturnValue, class ULevelData* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnMissionClicked(class UW_MissionSelect_Level_C* Button, class ULevelData* LevelData, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void SelectLevelButton(class UW_MissionSelect_Level_C* ButtonToSelect, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void GetDesiredMissionSelectButton(class UWidget** Widget, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_MissionSelect_Level_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue);
	class UWidget* EscapeMissionListNavigate(enum class EUINavigation Navigation, bool CallFunc_IsValid_ReturnValue);
	class UWidget* AcceptMissionNavigate(enum class EUINavigation Navigation, class UWidget* CallFunc_GetDesiredMissionSelectButton_Widget);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetDesiredMissionSelectButton_Widget);
	void W_PageWrapper_Event_0(class UW_PageWrapper_C* W_PageWrapper);
	void Construct();
	void SetupMissionList();
	void BP_OnActivated();
	void SetupNavigation(bool UsingGamepad);
	void OnMissionHovered(class UW_MissionSelect_Level_C* Button);
	void ScrollToSelection(class UW_MissionSelect_Level_C* LevelButton);
	void BndEvt__W_MissionSelect_W_PageWrapper_K2Node_ComponentBoundEvent_3_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID);
	void AcceptMission();
	void ExecuteUbergraph_W_MissionSelect(int32 EntryPoint, enum class ECommonInputType Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, class UW_PageWrapper_C* K2Node_CustomEvent_W_PageWrapper, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_CustomEvent_UsingGamepad, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UW_MissionSelect_Level_C* K2Node_CustomEvent_Button, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_Select_Default, class UW_MissionSelect_Level_C* K2Node_CustomEvent_LevelButton, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess);
};

}


