#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x360 - 0x340)
// WidgetBlueprintGeneratedClass W_TeamView_Tablet.W_TeamView_Tablet_C
class UW_TeamView_Tablet_C : public UTeamViewWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                CloseView_ProgressCircle_Image;                    // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          TeamView_Data;                                     // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_ProgressCircle;                                // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_TeamView_Tablet_C* GetDefaultObj();

	void Construct();
	void Tick_TeamViewOn();
	void ExecuteUbergraph_W_TeamView_Tablet(int32 EntryPoint, bool CallFunc_LoadHUDSettings_bShowHud, bool CallFunc_LoadHUDSettings_bCurvedHUD, bool CallFunc_LoadHUDSettings_bShowCompass, bool CallFunc_LoadHUDSettings_bShowWeaponHUD, bool CallFunc_LoadHUDSettings_bShowMagazineHUD, bool CallFunc_LoadHUDSettings_bShowChat, bool CallFunc_LoadHUDSettings_bSwayHUD, bool CallFunc_LoadHUDSettings_b2DReload, float CallFunc_LoadHUDSettings_IconScale, float CallFunc_LoadHUDSettings_QuickThrowScale, int32 CallFunc_LoadHUDSettings_FireModeDisplayOption, bool CallFunc_LoadHUDSettings_bShowPlayerNames, bool CallFunc_LoadHUDSettings_bShowButtonPrompts, bool CallFunc_LoadHUDSettings_ReturnValue, bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float K2Node_Select_Default_1);
};

}


