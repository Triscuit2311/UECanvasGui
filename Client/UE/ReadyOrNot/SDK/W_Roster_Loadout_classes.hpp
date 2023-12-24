#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x123 (0x453 - 0x330)
// WidgetBlueprintGeneratedClass W_Roster_Loadout.W_Roster_Loadout_C
class UW_Roster_Loadout_C : public URosterSelectionWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HB_Deployables_Horiz;                              // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Deployables_Vert;                               // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Loadout;                                        // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_div_2;                                         // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_div_8;                                         // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_LongTactical_Horiz;                            // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_LongTactical_Vert;                             // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_NoDeployables;                                 // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Primary_Horiz;                                 // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Primary_Vert;                                  // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Sidearm_Horiz;                                 // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Sidearm_Vert;                                  // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              LongTacticalSize_Horiz;                            // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              LongTacticalVert;                                  // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PrimarySize_Horiz;                                 // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              PrimaryVert;                                       // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SidearmHoriz;                                      // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SidearmSize_Horiz;                                 // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SidearmVert;                                       // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_LongTactical_Horiz;                            // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_LongTactical_Vert;                             // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Primary_Horiz;                                 // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Primary_Vert;                                  // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Sidearm_Horiz;                                 // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Sidearm_Vert;                                  // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Loadout;                                        // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_LongTactical;                                   // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Primary_Vert;                                   // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Sidearm_Vert;                                   // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Munition_SummaryEntry_C*    W_Loadout_Munition_SummaryEntry;                   // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Munition_SummaryEntry_C*    W_Loadout_Munition_SummaryEntry_1;                 // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Munition_SummaryEntry_C*    W_Loadout_Munition_SummaryEntry_2;                 // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Munition_SummaryEntry_C*    W_Loadout_Munition_SummaryEntry_3;                 // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Munition_SummaryEntry_C*    W_Loadout_Munition_SummaryEntry_4;                 // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Munition_SummaryEntry_C*    W_Loadout_Munition_SummaryEntry_5;                 // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ShowSidearm;                                       // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bHorizontalLayout;                                 // 0x451(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bInitialized;                                      // 0x452(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_Roster_Loadout_C* GetDefaultObj();

	class UHorizontalBox* GetDeployablesHorizBox(bool Temp_bool_Variable, class UHorizontalBox* K2Node_Select_Default);
	class UCommonTextBlock* GetLongTacticalText(bool Temp_bool_Variable, class UCommonTextBlock* K2Node_Select_Default);
	class UCommonTextBlock* GetSidearmText(bool Temp_bool_Variable, class UCommonTextBlock* K2Node_Select_Default);
	class UCommonTextBlock* GetPrimaryText(bool Temp_bool_Variable, class UCommonTextBlock* K2Node_Select_Default);
	class UImage* GetLongTacticalImage(bool Temp_bool_Variable, class UImage* K2Node_Select_Default);
	class UImage* GetSidearmImage(bool Temp_bool_Variable, class UImage* K2Node_Select_Default);
	class UImage* GetPrimaryImage(bool Temp_bool_Variable, class UImage* K2Node_Select_Default);
	void InitLayout(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void BlankLoadout(class UCommonTextBlock* CallFunc_GetLongTacticalText_ReturnValue, class UCommonTextBlock* CallFunc_GetSidearmText_ReturnValue, class UCommonTextBlock* CallFunc_GetPrimaryText_ReturnValue, class UImage* CallFunc_GetLongTacticalImage_ReturnValue, class UImage* CallFunc_GetSidearmImage_ReturnValue, class UImage* CallFunc_GetPrimaryImage_ReturnValue);
	void Update_Character_Loadout(const struct FRosterLoadout& NewLoadout, TMap<class UClass*, int32> DeployablesSorted, const TArray<TSubclassOf<class ABaseItem>>& Deployables);
	void UpdatePlayerLoadout(struct FSavedLoadout& NewLoadout, TMap<class UClass*, int32> DeployablesSorted, const TArray<TSubclassOf<class ABaseItem>>& Deployables);
	void SetDeployables(TArray<class UClass*>& Grenades, TArray<class UClass*>& Tactical, TMap<class UClass*, int32> DeployablesSorted, const TArray<TSubclassOf<class ABaseItem>>& Deployables, int32 Temp_int_Array_Index_Variable, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UHorizontalBox* CallFunc_GetDeployablesHorizBox_ReturnValue, class UHorizontalBox* CallFunc_GetDeployablesHorizBox_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UHorizontalBox* CallFunc_GetDeployablesHorizBox_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<class UClass*>& CallFunc_Map_Keys_Keys, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UW_Loadout_Munition_SummaryEntry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UClass* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2);
	void SetSidearmInfo(class UClass* SidearmItemClass, class UImage* CallFunc_GetSidearmImage_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UImage* CallFunc_GetSidearmImage_ReturnValue_1, class UCommonTextBlock* CallFunc_GetSidearmText_ReturnValue, class UCommonTextBlock* CallFunc_GetSidearmText_ReturnValue_1);
	void SetLongTacticalInfo(class UClass* LongTacticalItemClass, class UCommonTextBlock* CallFunc_GetLongTacticalText_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UImage* CallFunc_GetLongTacticalImage_ReturnValue, class UImage* CallFunc_GetLongTacticalImage_ReturnValue_1, class UCommonTextBlock* CallFunc_GetLongTacticalText_ReturnValue_1);
	void SetPrimaryInfo(class UClass* PrimaryItemClass, class UImage* CallFunc_GetPrimaryImage_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UImage* CallFunc_GetPrimaryImage_ReturnValue_1, class UCommonTextBlock* CallFunc_GetPrimaryText_ReturnValue, class UCommonTextBlock* CallFunc_GetPrimaryText_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_W_Roster_Loadout(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default);
};

}


