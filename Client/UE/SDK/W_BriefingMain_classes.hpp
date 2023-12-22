#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x340 - 0x2D0)
// WidgetBlueprintGeneratedClass W_BriefingMain.W_BriefingMain_C
class UW_BriefingMain_C : public UBriefingWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            BriefingText;                                      // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          CivilianBios;                                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LevelNickname;                                     // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ObjectiveString;                                   // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SuspectBios;                                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TimelineString;                                    // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BriefingTaskButton_C*               W_BriefingTaskButton;                              // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BriefingTaskButton_C*               W_BriefingTaskButton_1;                            // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BriefingTaskButton_C*               W_BriefingTaskButton_2;                            // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BriefingTaskButton_C*               W_BriefingTaskButton_3;                            // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPreMissionPlanning*                   PreMissionPlanning;                                // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_BriefingTaskButton_C*>       BriefingTaskButtons;                               // 0x330(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UW_BriefingMain_C* GetDefaultObj();

	void SetBriefingTaskButtonsActive(bool Active, bool IsActive, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_BriefingTaskButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_W_BriefingMain(int32 EntryPoint, class UPreMissionPlanning* CallFunc_GetPremissionPlanning_ReturnValue, class UW_BriefingBio_ProfileRight_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class UW_BriefingTaskButton_C* CallFunc_Array_Get_Item, bool CallFunc_DoesLevelHaveMissionAudio_bHasMissionAudio, bool CallFunc_IsEmpty_ReturnValue, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_GetWhiteboardObjectiveText_OutString, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_GetLevelNickname_OutNickname, TArray<struct FCharacterBio>& CallFunc_GetBios_OutBios, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FCharacterBio& CallFunc_Array_Get_Item_1, TArray<struct FCriminalRecord>& CallFunc_GetBioDetails_RapSheet, class UTexture2D* CallFunc_GetBioDetails_ProfileImage, const class FString& CallFunc_GetBioDetails_OutDescription, const class FString& CallFunc_GetBioDetails_OutBioText, int32 CallFunc_Array_Length_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FCharacterBio>& CallFunc_GetBios_OutBios_1, const struct FCharacterBio& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, TArray<struct FCriminalRecord>& CallFunc_GetBioDetails_RapSheet_1, class UTexture2D* CallFunc_GetBioDetails_ProfileImage_1, const class FString& CallFunc_GetBioDetails_OutDescription_1, const class FString& CallFunc_GetBioDetails_OutBioText_1, bool CallFunc_Less_IntInt_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const class FString& CallFunc_GetWhiteboardTimelineAsString_OutString, class FText CallFunc_Conv_StringToText_ReturnValue_7, TArray<class UW_BriefingTaskButton_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_BriefingBio_ProfileLeft_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1);
};

}


