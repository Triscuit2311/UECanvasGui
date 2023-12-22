#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B9 (0x519 - 0x260)
// WidgetBlueprintGeneratedClass W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C
class UW_Loadout_Munition_SummaryEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HB_Icons;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_icon;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Tag;                                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Tag;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                            PrimaryMagazine;                                   // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            SidearmMagazine;                                   // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Shotgun;                                           // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Pepperball;                                        // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Taser;                                             // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            IconImage;                                         // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ItemData;                                          // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsAmmunition;                                      // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsPrimary;                                         // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_183C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AmmoType;                                          // 0x2C4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        ItemCount;                                         // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateBrush                           BrushStyle;                                        // 0x2D0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSavedLoadout                         ActiveLoadout;                                     // 0x358(0x188)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UW_Loadout_C*                          LoadoutWidget;                                     // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Ammo_Variety;                                      // 0x4E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Ammo_Caliber;                                      // 0x500(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HideCount;                                         // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_Loadout_Munition_SummaryEntry_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus);
	void CreateIcon(class UImage* Image, class UScaleBox* ScaleBox, class USizeBox* SizeBox, class UImage* CallFunc_SpawnObject_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScaleBox* CallFunc_SpawnObject_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class USizeBox* CallFunc_SpawnObject_ReturnValue_2);
	void GetAmmoIcon(bool Temp_bool_Variable, enum class EItemCategory Temp_byte_Variable, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class UTexture2D* K2Node_Select_Default, class UClass* K2Node_ClassDynamicCast_AsShotgun, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsTaser, bool K2Node_ClassDynamicCast_bSuccess_1, class UClass* K2Node_ClassDynamicCast_AsPepperball_Gun, bool K2Node_ClassDynamicCast_bSuccess_2);
	void GetAmmoName(class FText* AmmoName, class UDataTable* CallFunc_GetAmmoLookupDataTable_ReturnValue, const struct FAmmoTypeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	class UTexture2D* GetItemIcon(bool CallFunc_IsValidClass_ReturnValue);
	void GetAmmoInfo(class UDataTable* CallFunc_GetAmmoLookupDataTable_ReturnValue, const struct FAmmoTypeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
	void UpdateAmmunition(class UClass* Weapon, class FName AmmoType, int32 Count);
	void UpdateItem(class UClass* ItemData, int32 Count);
	void ExecuteUbergraph_W_Loadout_Munition_SummaryEntry(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class FName K2Node_Event_OptionNameID, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class UClass* K2Node_CustomEvent_Weapon, class FName K2Node_CustomEvent_AmmoType, int32 K2Node_CustomEvent_Count_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UTexture2D* CallFunc_GetItemIcon_ReturnValue, class UClass* K2Node_CustomEvent_ItemData, int32 K2Node_CustomEvent_Count, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
};

}


