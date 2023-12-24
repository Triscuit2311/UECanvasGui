#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x848 (0xAA8 - 0x260)
// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Objectives.W_PreMission_Tablet_Objectives_C
class UW_PreMission_Tablet_Objectives_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Text_C*                             Lbl_Objectives;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Situation;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_ObjectiveList;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLevelDataLookupTable                 LevelData;                                         // 0x280(0x788)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                MissionURL;                                        // 0xA08(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        ObjectiveSpacing;                                  // 0xA18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ADF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           DividerBrush;                                      // 0xA20(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_PreMission_Tablet_Objectives_C* GetDefaultObj();

	void AddObjectiveToList(class UW_PreMission_Tablet_Objectives_Entry_C* ObjectiveEntry, bool IsLast, class UImage* Divider, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UImage* CallFunc_SpawnObject_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1);
	void OnLoaded_3BD6E0A444807EC303095394A3607018(TSubclassOf<class UObject> Loaded);
	void Construct();
	void MissionChanged(const class FString& MissionURL, const struct FLevelDataLookupTable& LevelData);
	void UpdateObjectives();
	void GetObjectivesByClass();
	void CustomEvent_0();
	void ExecuteUbergraph_W_PreMission_Tablet_Objectives(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_Event_MissionURL, const struct FLevelDataLookupTable& K2Node_Event_LevelData, const class FString& CallFunc_GetSelectedMode_OutMode, bool CallFunc_GetSelectedMode_ReturnValue, enum class ECOOPMode CallFunc_GetCoopModeFromModeName_ReturnValue, TSoftClassPtr<class AObjective> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UW_PreMission_Tablet_Objectives_Entry_C* CallFunc_Create_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, class AObjective* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UW_PreMission_Tablet_Objectives_Entry_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsObjective, bool K2Node_ClassDynamicCast_bSuccess, const class FString& CallFunc_GetSelectedModeName_OutName, bool CallFunc_GetSelectedModeName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsInLobby_ReturnValue);
};

}


