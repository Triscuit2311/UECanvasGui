#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass W_MagCheck.W_MagCheck_C
class UW_MagCheck_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Fade;                                         // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            AmmoTypeText;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MagIcon_Image;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MagIcon_SizeBox;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_MagIcon;                                       // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_MagCheck_C* GetDefaultObj();

	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_W_MagCheck(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess_1, class AShotgun* K2Node_DynamicCast_AsShotgun, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetCurrentAmmoPercentage_ReturnValue, const struct FMagazine& CallFunc_GetCurrentMagazine_ReturnValue, class FText CallFunc_GetMagazineScreenName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_LoadHUDSettings_bShowHud, bool CallFunc_LoadHUDSettings_bCurvedHUD, bool CallFunc_LoadHUDSettings_bShowCompass, bool CallFunc_LoadHUDSettings_bShowWeaponHUD, bool CallFunc_LoadHUDSettings_bShowMagazineHUD, bool CallFunc_LoadHUDSettings_bShowChat, bool CallFunc_LoadHUDSettings_bSwayHUD, bool CallFunc_LoadHUDSettings_b2DReload, float CallFunc_LoadHUDSettings_IconScale, float CallFunc_LoadHUDSettings_QuickThrowScale, int32 CallFunc_LoadHUDSettings_FireModeDisplayOption, bool CallFunc_LoadHUDSettings_bShowPlayerNames, bool CallFunc_LoadHUDSettings_bShowButtonPrompts, bool CallFunc_LoadHUDSettings_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector& K2Node_Select_Default_1, const struct FVector2D& CallFunc_ProjectWorldToScreen_ScreenPosition, bool CallFunc_ProjectWorldToScreen_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
};

}


