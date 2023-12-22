#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Hotkeys.W_Hotkeys_C
// (None)

class UClass* UW_Hotkeys_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Hotkeys_C");

	return Clss;
}


// W_Hotkeys_C W_Hotkeys.Default__W_Hotkeys_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Hotkeys_C* UW_Hotkeys_C::GetDefaultObj()
{
	static class UW_Hotkeys_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Hotkeys_C*>(UW_Hotkeys_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Hotkeys.W_Hotkeys_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Hotkeys_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Hotkeys_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Hotkeys.W_Hotkeys_C.OnQuickThrowStart_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   LastItemBeforeQuickThrow                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   QuickThrowGrenade                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Hotkeys_C::OnQuickThrowStart_Event_0(class AReadyOrNotCharacter* Character, class ABaseItem* LastItemBeforeQuickThrow, class ABaseItem* QuickThrowGrenade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Hotkeys_C", "OnQuickThrowStart_Event_0");

	Params::UW_Hotkeys_C_OnQuickThrowStart_Event_0_Params Parms{};

	Parms.Character = Character;
	Parms.LastItemBeforeQuickThrow = LastItemBeforeQuickThrow;
	Parms.QuickThrowGrenade = QuickThrowGrenade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Hotkeys.W_Hotkeys_C.OnQuickThrowEnd_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseItem*                   QuickThrowGrenade                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Hotkeys_C::OnQuickThrowEnd_Event_0(class ABaseItem* QuickThrowGrenade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Hotkeys_C", "OnQuickThrowEnd_Event_0");

	Params::UW_Hotkeys_C_OnQuickThrowEnd_Event_0_Params Parms{};

	Parms.QuickThrowGrenade = QuickThrowGrenade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Hotkeys.W_Hotkeys_C.OnSecondarySightToggled_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingSecondarySight                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseMagazineWeapon*         Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Hotkeys_C::OnSecondarySightToggled_Event_0(bool bUsingSecondarySight, class ABaseMagazineWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Hotkeys_C", "OnSecondarySightToggled_Event_0");

	Params::UW_Hotkeys_C_OnSecondarySightToggled_Event_0_Params Parms{};

	Parms.bUsingSecondarySight = bUsingSecondarySight;
	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Hotkeys.W_Hotkeys_C.OnAttachmentLightToggled_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Hotkeys_C::OnAttachmentLightToggled_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Hotkeys_C", "OnAttachmentLightToggled_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Hotkeys.W_Hotkeys_C.OnNightVisionGogglesToggled_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOn                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Hotkeys_C::OnNightVisionGogglesToggled_Event_0(class AReadyOrNotCharacter* Character, bool bOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Hotkeys_C", "OnNightVisionGogglesToggled_Event_0");

	Params::UW_Hotkeys_C_OnNightVisionGogglesToggled_Event_0_Params Parms{};

	Parms.Character = Character;
	Parms.bOn = bOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Hotkeys.W_Hotkeys_C.RefreshHotkeyInput
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Hotkeys_C::RefreshHotkeyInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Hotkeys_C", "RefreshHotkeyInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Hotkeys.W_Hotkeys_C.ExecuteUbergraph_W_Hotkeys
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class AReadyOrNotCharacter*        K2Node_CustomEvent_Character_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   K2Node_CustomEvent_LastItemBeforeQuickThrow                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   K2Node_CustomEvent_QuickThrowGrenade_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   K2Node_CustomEvent_QuickThrowGrenade                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUsingSecondarySight                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseMagazineWeapon*         K2Node_CustomEvent_Weapon                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_CustomEvent_Character                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bOn                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EquippedWeaponHasLaserAttachment_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EquippedWeaponHasLightAttachment_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Hotkeys_C::ExecuteUbergraph_W_Hotkeys(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AReadyOrNotCharacter* K2Node_CustomEvent_Character_1, class ABaseItem* K2Node_CustomEvent_LastItemBeforeQuickThrow, class ABaseItem* K2Node_CustomEvent_QuickThrowGrenade_1, class ABaseItem* K2Node_CustomEvent_QuickThrowGrenade, bool K2Node_CustomEvent_bUsingSecondarySight, class ABaseMagazineWeapon* K2Node_CustomEvent_Weapon, class AReadyOrNotCharacter* K2Node_CustomEvent_Character, bool K2Node_CustomEvent_bOn, bool CallFunc_EquippedWeaponHasLaserAttachment_ReturnValue, bool CallFunc_EquippedWeaponHasLightAttachment_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Hotkeys_C", "ExecuteUbergraph_W_Hotkeys");

	Params::UW_Hotkeys_C_ExecuteUbergraph_W_Hotkeys_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_Character_1 = K2Node_CustomEvent_Character_1;
	Parms.K2Node_CustomEvent_LastItemBeforeQuickThrow = K2Node_CustomEvent_LastItemBeforeQuickThrow;
	Parms.K2Node_CustomEvent_QuickThrowGrenade_1 = K2Node_CustomEvent_QuickThrowGrenade_1;
	Parms.K2Node_CustomEvent_QuickThrowGrenade = K2Node_CustomEvent_QuickThrowGrenade;
	Parms.K2Node_CustomEvent_bUsingSecondarySight = K2Node_CustomEvent_bUsingSecondarySight;
	Parms.K2Node_CustomEvent_Weapon = K2Node_CustomEvent_Weapon;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.K2Node_CustomEvent_bOn = K2Node_CustomEvent_bOn;
	Parms.CallFunc_EquippedWeaponHasLaserAttachment_ReturnValue = CallFunc_EquippedWeaponHasLaserAttachment_ReturnValue;
	Parms.CallFunc_EquippedWeaponHasLightAttachment_ReturnValue = CallFunc_EquippedWeaponHasLightAttachment_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


