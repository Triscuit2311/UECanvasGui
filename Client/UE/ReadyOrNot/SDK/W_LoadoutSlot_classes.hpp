#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE48 (0x1270 - 0x428)
// WidgetBlueprintGeneratedClass W_LoadoutSlot.W_LoadoutSlot_C
class UW_LoadoutSlot_C : public ULoadoutSlotWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimReveal_Expand;                                 // 0x430(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimCollapse;                                      // 0x438(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x440(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimHideAugment;                                   // 0x448(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimRevealAugment;                                 // 0x450(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               AugmentContainer;                                  // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_1;                                          // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_DivBot;                                        // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_ItemImage;                                     // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Equipped;                                      // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Name;                                              // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Equipped;                                       // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             SB_Icon;                                           // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             Scale_Name;                                        // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           SlotButton;                                        // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               SlotContents;                                      // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Augment;                                       // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Category;                                      // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Count;                                         // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Name;                                          // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         StartCollapsed;                                    // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B00[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ItemName;                                          // 0x4E0(0x18)(Edit, BlueprintVisible)
	class FText                                  Category;                                          // 0x4F8(0x18)(Edit, BlueprintVisible)
	bool                                         HasAugment;                                        // 0x510(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B04[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Augment;                                           // 0x518(0x18)(Edit, BlueprintVisible)
	bool                                         CompactLayout;                                     // 0x530(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         MinimalLayout;                                     // 0x531(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B05[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ItemIcon;                                          // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StartActive;                                       // 0x540(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Is_Active;                                         // 0x541(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B07[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_Style_Text                        NameTextStyle;                                     // 0x548(0xA0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FMargin                               NormalNamePadding;                                 // 0x5E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FButtonStyle                          NormalButtonStyle;                                 // 0x5F8(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_Style_Text                        NameTextStyle_Active;                              // 0x870(0xA0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FButtonStyle                          ActiveButtonStyle;                                 // 0x910(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnSlotClicked;                                     // 0xB88(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSlotHovered;                                     // 0xB98(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSlotUnhovered;                                   // 0xBA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EItemClass                        Item_Class;                                        // 0xBB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3B08[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemCategory>             Item_Categories;                                   // 0xBC0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FItemVisualData                       Visuals;                                           // 0xBD0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                            Icon;                                              // 0xC00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSlotDoubleClicked;                               // 0xC08(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FLoadoutCategory>              Gear_Category_Classes;                             // 0xC18(0x10)(Edit, BlueprintVisible)
	struct FST_Style_Text                        MinimalNameTextStyle;                              // 0xC28(0xA0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FMargin                               MinimalNamePadding;                                // 0xCC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FST_Style_Text                        MinimalNameTextStyle_Active;                       // 0xCD8(0xA0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         IsListItem;                                        // 0xD78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         Equipped;                                          // 0xD79(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3B09[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          NormalColor;                                       // 0xD7C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ActiveColor;                                       // 0xD8C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          EquippedColor;                                     // 0xD9C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          AugmentTextColor;                                  // 0xDAC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          EquippedButtonStyle;                               // 0xDC0(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EItemType                         ItemType;                                          // 0x1038(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Attachment;                                        // 0x1039(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3B0B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedLoadout                         Active_Loadout;                                    // 0x1040(0x188)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         AugmentDisplayed;                                  // 0x11C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B0C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CurrentAugment;                                    // 0x11D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        EquippedLabelHeight;                               // 0x11E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NewItem;                                           // 0x11EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FirstInitialization;                               // 0x11ED(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B0D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CameraTag;                                         // 0x11F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                PreviewAnimation;                                  // 0x11F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FName                                  AmmoType_0;                                        // 0x1208(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AmmoMax;                                           // 0x1210(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Hidden;                                            // 0x1214(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B0E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Loadout_C*                          LoadoutWidget;                                     // 0x1218(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CustomCategoryText;                                // 0x1220(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UArmourMaterial*                       ArmourMaterialData_0;                              // 0x1238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAmmunition;                                      // 0x1240(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsArmourMaterial;                                  // 0x1241(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPrimary;                                         // 0x1242(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Refreshing;                                        // 0x1243(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B0F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  AmmoCaliber;                                       // 0x1248(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsCollapsed;                                       // 0x1260(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B10[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimalHeight;                                     // 0x1264(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CompactHeight;                                     // 0x1268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FullHeight;                                        // 0x126C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_LoadoutSlot_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus);
	void SequenceEvent__ENTRYPOINTW_LoadoutSlot_0();
	void DisableInteraction(bool Disabled);
	void SetCompactLayout(bool CompactLayout);
	void SetExclusiveLock(bool CallFunc_IsDLCLocked_ReturnValue);
	void ApplyIcon(const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_AppendMultiple_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void RefreshArmourMaterialInfo();
	void GetLoadoutWidget(class UW_Loadout_C** LoadoutWidget, bool CallFunc_IsValid_ReturnValue, TArray<class UW_Loadout_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_Loadout_C* CallFunc_Array_Get_Item);
	void GetAmmoCategoryText(class UClass* ItemData, class FText* Text, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UClass* K2Node_ClassDynamicCast_AsPepperball_Gun, bool K2Node_ClassDynamicCast_bSuccess, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class UClass* K2Node_ClassDynamicCast_AsTaser, bool K2Node_ClassDynamicCast_bSuccess_1, class FText CallFunc_Format_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsShotgun, bool K2Node_ClassDynamicCast_bSuccess_2, class UClass* K2Node_ClassDynamicCast_AsBase_Magazine_Weapon, bool K2Node_ClassDynamicCast_bSuccess_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Format_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_3);
	void RefreshAmmoInfo(class FText CallFunc_GetAmmoCategoryText_Text, bool CallFunc_GetItemDataTableInfo_DataFound, const struct FItemLookupTable& CallFunc_GetItemDataTableInfo_ItemLookupData, class UClass* K2Node_ClassDynamicCast_AsBase_Magazine_Weapon, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void SetCountText(class FText Text, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void GetInvetoryCount(int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWorld* CallFunc_GetWorldBP_ReturnValue, class UItemData* CallFunc_GetItemData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDeviceData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Format_ReturnValue);
	void SetEquipped(bool Equipped);
	void GetItemIcon(TSoftObjectPtr<class UTexture2D>* Image, TSoftObjectPtr<class UTexture2D> OutImage, class UItemData* GameItemData, bool FoundItem, const TArray<struct FWeaponData>& Weapons, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable_2, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool Temp_bool_True_if_break_was_hit_Variable_3, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_5, const struct FArmourData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_4, const struct FWeaponData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, const struct FArmourData& CallFunc_Array_Get_Item_2, const struct FDeviceData& CallFunc_Array_Get_Item_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, const struct FDeviceData& CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_EqualEqual_ClassClass_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_5, const struct FWeaponData& CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_ClassClass_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_4, bool Temp_bool_True_if_break_was_hit_Variable_5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWorld* CallFunc_GetWorldBP_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_5, class UItemData* CallFunc_GetItemData_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_5);
	void RefreshItemInfo(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_GetIsSuppressed_IsSuppressed, class UClass* K2Node_ClassDynamicCast_AsSWATArmour, bool K2Node_ClassDynamicCast_bSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_GetItemClassText_Category_Text, class FText CallFunc_GetLoadoutCategoryText_Category_Text, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1);
	void SetLayout(bool MinimalLayout, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, float K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, float K2Node_Select_Default_2, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, const struct FMargin& K2Node_Select_Default_3);
	void GetIsSuppressed(bool* IsSuppressed, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool K2Node_Select_Default, bool K2Node_Select_Default_1);
	bool GetHoverState();
	void Set_Active_Old(bool IsActive, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, bool CallFunc_GetHoverState_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_3, const struct FST_Style_Text& K2Node_Select_Default, const struct FST_Style_Text& K2Node_Select_Default_1, const struct FST_Style_Text& K2Node_Select_Default_2);
	void OnLoaded_2301B5524398E883D7B4A9A8DD59E91D(class UObject* Loaded);
	void Collapse();
	void ForceDoubleClick();
	void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
	void InitializeArmourMaterialData(class UArmourMaterial* ArmourMaterial);
	void InitializeItemData(class UClass* ItemData);
	void ReinitializeAmmoData(bool Primary, class FName AmmoType, class UClass* Weapon, int32 AmmoCount);
	void ReinitializeArmorMaterialData(class UArmourMaterial* ArmourMaterial);
	void ForceClick();
	void BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature(class UW_Button_C* Button);
	void InitializeAmmoData(bool Primary, class FName AmmoType, class UClass* Weapon, int32 AmmoCount);
	void ReinitializeItemData(class UClass* ItemData);
	void InitializeAsSlot();
	void ApplyAugment();
	void BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature();
	void Hide(float Delay, bool Collapse);
	void BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button);
	void Reveal(float Delay);
	void UpdateAugment(class FText AugmentText);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void InitializeAsListItem();
	void PreConstruct(bool IsDesignTime);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
	void UpdateAmmoCount(int32 Count);
	void ChangePage(class FName PageName);
	void SetInputMode(bool IsGamepad);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExpandReveal();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void BP_OnEntryReleased();
	void ExecuteUbergraph_W_LoadoutSlot(int32 EntryPoint, class UClass* K2Node_CustomEvent_ItemData_1, bool K2Node_CustomEvent_Primary_1, class FName K2Node_CustomEvent_AmmoType_1, class UClass* K2Node_CustomEvent_Weapon_1, int32 K2Node_CustomEvent_AmmoCount_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UArmourMaterial* K2Node_CustomEvent_ArmourMaterial, class UArmourMaterial* K2Node_CustomEvent_ArmourMaterial_1, class UW_Loadout_C* K2Node_Event_LoadoutWidget, float CallFunc_GetEndTime_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, bool K2Node_CustomEvent_Primary, class FName K2Node_CustomEvent_AmmoType, class UClass* K2Node_CustomEvent_Weapon, int32 K2Node_CustomEvent_AmmoCount, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Image, class UClass* K2Node_CustomEvent_ItemData, bool CallFunc_IsValidClass_ReturnValue, class UDataTable* CallFunc_GetItemLookupDataTable_ReturnValue, class UDataTable* CallFunc_GetAmmoLookupDataTable_ReturnValue, const struct FAmmoTypeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, float K2Node_Event_Delay, class FText K2Node_CustomEvent_AugmentText, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_OptionNameID, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, int32 K2Node_CustomEvent_Count, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class UObject* K2Node_CustomEvent_Loaded, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FName K2Node_Event_PageName, bool K2Node_Event_IsGamepad, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsSelected, bool K2Node_Event_bIsExpanded, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, bool CallFunc_BooleanAND_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue_1, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1);
	void OnSlotDoubleClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
	void OnSlotUnhovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
	void OnSlotHovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
	void OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
};

}


