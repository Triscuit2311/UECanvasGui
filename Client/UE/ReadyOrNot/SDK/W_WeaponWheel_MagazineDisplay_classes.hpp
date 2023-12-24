#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x300 - 0x260)
// WidgetBlueprintGeneratedClass W_WeaponWheel_MagazineDisplay.W_WeaponWheel_MagazineDisplay_C
class UW_WeaponWheel_MagazineDisplay_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          Container_MagSlot;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UImage*>                        Mags;                                              // 0x270(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class ABaseMagazineWeapon*                   MagazineWeapon;                                    // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TotalMags;                                         // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxAmmo;                                           // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EmptyMags;                                         // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IconSize;                                          // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_WeaponWheel_MagazineSlot_C*> MagSlots;                                          // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         bOnlyShowOneSlot;                                  // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EE0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxMagsPerSlot;                                    // 0x2AC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMap<int32, int32>                           SlotIndexToMags;                                   // 0x2B0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_WeaponWheel_MagazineDisplay_C* GetDefaultObj();

	void PopulateSlotIndexToMagsMap(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_GetMaxSlots_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 K2Node_Select_Default_1);
	int32 GetMaxSlots(bool Temp_bool_Variable, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select_Default);
	class UW_WeaponWheel_MagazineSlot_C* CreateMagSlot(const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UW_WeaponWheel_MagazineSlot_C* CallFunc_SpawnObject_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue);
	void UpdateMagIcon(int32 MagIndex, float CurrentAmmo, class UW_WeaponWheel_MagazineSlot_C* CallFunc_Array_Get_Item, float CallFunc_MapRangeClamped_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UImage* CallFunc_GetMag_Return_Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Initialize(class ABaseMagazineWeapon* InMagazineWeapon, float IconSize);
	void CreateMags(int32 CurrentIndex, class UW_WeaponWheel_MagazineSlot_C* CurrentMagSlot, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetMaxSlots_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UW_WeaponWheel_MagazineSlot_C* CallFunc_CreateMagSlot_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UImage* CallFunc_Array_Get_Item, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_GetMagazineCount_ReturnValue, class AShotgun* K2Node_DynamicCast_AsShotgun, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2);
	void CreateMagOutline(class UW_WeaponWheel_MagazineSlot_C*& MagSlot);
	void CreateMag(class UW_WeaponWheel_MagazineSlot_C*& MagSlot);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_WeaponWheel_MagazineDisplay(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_GetMagazineCount_ReturnValue, float CallFunc_GetAmmoInMagazine_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
};

}


