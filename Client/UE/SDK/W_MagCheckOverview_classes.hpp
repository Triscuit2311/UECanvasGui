#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x308 - 0x260)
// WidgetBlueprintGeneratedClass W_MagCheckOverview.W_MagCheckOverview_C
class UW_MagCheckOverview_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_OnMagCheck;                                   // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*               MagCheck_MagStatus_1;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*               MagCheck_MagStatus_2;                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*               MagCheck_MagStatus_3;                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*               MagCheck_MagStatus_4;                              // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*               MagCheck_MagStatus_5;                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*               MagCheck_MagStatus_6;                              // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*               MagCheck_MagStatus_7;                              // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*               MagCheck_MagStatus_8;                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*               MagCheck_MagStatus_9;                              // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*               MagCheck_MagStatus_10;                             // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*               MagCheck_MagStatus_11;                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*               MagCheck_MagStatus_12;                             // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*               MagCheck_MagStatus_13;                             // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*               MagCheck_MagStatus_14;                             // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*               MagCheck_MagStatus_15;                             // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MagCheck_MagStatus_C*               MagCheck_MagStatus_16;                             // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Mags_Container;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UW_MagCheck_MagStatus_C*>       MagCheckStatusWidgets;                             // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UW_MagCheckOverview_C* GetDefaultObj();

	void CollapseAllMagStatusWidget();
	void IndexToMagStatusWidget(int32 Index, class UW_MagCheck_MagStatus_C** Return_Value, bool K2Node_SwitchInteger_CmpSuccess);
	void UnhighlightAllMags(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_MagCheck_MagStatus_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void HighlightCurrentMag(class ABaseMagazineWeapon* MagazineWeapon, bool CallFunc_IsValid_ReturnValue, class UW_MagCheck_MagStatus_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1);
	void RefreshMags(class ABaseMagazineWeapon* MagazineWeapon, class FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FMagazine& CallFunc_Array_Get_Item, class UW_MagCheck_MagStatus_C* CallFunc_IndexToMagStatusWidget_Return_Value, class FText CallFunc_GetMagazineScreenName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool Temp_bool_Variable, class FText K2Node_Select_Default);
	void Construct();
	void OnWeaponMagCheck_Event_0(class ABaseMagazineWeapon* MagazineWeapon);
	void ExecuteUbergraph_W_MagCheckOverview(int32 EntryPoint, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ABaseMagazineWeapon* K2Node_CustomEvent_MagazineWeapon, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess_1);
};

}


