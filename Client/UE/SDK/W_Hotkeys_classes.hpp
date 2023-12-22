#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2D0 - 0x2C8)
// WidgetBlueprintGeneratedClass W_Hotkeys.W_Hotkeys_C
class UW_Hotkeys_C : public UHotkeysWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UW_Hotkeys_C* GetDefaultObj();

	void Construct();
	void OnQuickThrowStart_Event_0(class AReadyOrNotCharacter* Character, class ABaseItem* LastItemBeforeQuickThrow, class ABaseItem* QuickThrowGrenade);
	void OnQuickThrowEnd_Event_0(class ABaseItem* QuickThrowGrenade);
	void OnSecondarySightToggled_Event_0(bool bUsingSecondarySight, class ABaseMagazineWeapon* Weapon);
	void OnAttachmentLightToggled_Event_0();
	void OnNightVisionGogglesToggled_Event_0(class AReadyOrNotCharacter* Character, bool bOn);
	void RefreshHotkeyInput();
	void ExecuteUbergraph_W_Hotkeys(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AReadyOrNotCharacter* K2Node_CustomEvent_Character_1, class ABaseItem* K2Node_CustomEvent_LastItemBeforeQuickThrow, class ABaseItem* K2Node_CustomEvent_QuickThrowGrenade_1, class ABaseItem* K2Node_CustomEvent_QuickThrowGrenade, bool K2Node_CustomEvent_bUsingSecondarySight, class ABaseMagazineWeapon* K2Node_CustomEvent_Weapon, class AReadyOrNotCharacter* K2Node_CustomEvent_Character, bool K2Node_CustomEvent_bOn, bool CallFunc_EquippedWeaponHasLaserAttachment_ReturnValue, bool CallFunc_EquippedWeaponHasLightAttachment_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
};

}


