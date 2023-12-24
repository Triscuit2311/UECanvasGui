#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MagCheck.W_MagCheck_C
// (None)

class UClass* UW_MagCheck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MagCheck_C");

	return Clss;
}


// W_MagCheck_C W_MagCheck.Default__W_MagCheck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MagCheck_C* UW_MagCheck_C::GetDefaultObj()
{
	static class UW_MagCheck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MagCheck_C*>(UW_MagCheck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_MagCheck.W_MagCheck_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_MagCheck_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MagCheck_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MagCheck.W_MagCheck_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MagCheck_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MagCheck_C", "Tick");

	Params::UW_MagCheck_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MagCheck.W_MagCheck_C.ExecuteUbergraph_W_MagCheck
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         K2Node_DynamicCast_AsBase_Magazine_Weapon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AShotgun*                    K2Node_DynamicCast_AsShotgun                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentAmmoPercentage_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMagazine                   CallFunc_GetCurrentMagazine_ReturnValue                          (NoDestructor)
// class FText                        CallFunc_GetMagazineScreenName_ReturnValue                       (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadHUDSettings_bShowHud                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bCurvedHUD                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowCompass                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowWeaponHUD                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowMagazineHUD                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowChat                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bSwayHUD                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_b2DReload                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_LoadHUDSettings_IconScale                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadHUDSettings_QuickThrowScale                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadHUDSettings_FireModeDisplayOption                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadHUDSettings_bShowPlayerNames                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowButtonPrompts                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default_1                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_ProjectWorldToScreen_ScreenPosition                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ProjectWorldToScreen_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_MagCheck_C::ExecuteUbergraph_W_MagCheck(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess_1, class AShotgun* K2Node_DynamicCast_AsShotgun, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetCurrentAmmoPercentage_ReturnValue, const struct FMagazine& CallFunc_GetCurrentMagazine_ReturnValue, class FText CallFunc_GetMagazineScreenName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_LoadHUDSettings_bShowHud, bool CallFunc_LoadHUDSettings_bCurvedHUD, bool CallFunc_LoadHUDSettings_bShowCompass, bool CallFunc_LoadHUDSettings_bShowWeaponHUD, bool CallFunc_LoadHUDSettings_bShowMagazineHUD, bool CallFunc_LoadHUDSettings_bShowChat, bool CallFunc_LoadHUDSettings_bSwayHUD, bool CallFunc_LoadHUDSettings_b2DReload, float CallFunc_LoadHUDSettings_IconScale, float CallFunc_LoadHUDSettings_QuickThrowScale, int32 CallFunc_LoadHUDSettings_FireModeDisplayOption, bool CallFunc_LoadHUDSettings_bShowPlayerNames, bool CallFunc_LoadHUDSettings_bShowButtonPrompts, bool CallFunc_LoadHUDSettings_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector& K2Node_Select_Default_1, const struct FVector2D& CallFunc_ProjectWorldToScreen_ScreenPosition, bool CallFunc_ProjectWorldToScreen_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MagCheck_C", "ExecuteUbergraph_W_MagCheck");

	Params::UW_MagCheck_C_ExecuteUbergraph_W_MagCheck_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon = K2Node_DynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsShotgun = K2Node_DynamicCast_AsShotgun;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetCurrentAmmoPercentage_ReturnValue = CallFunc_GetCurrentAmmoPercentage_ReturnValue;
	Parms.CallFunc_GetCurrentMagazine_ReturnValue = CallFunc_GetCurrentMagazine_ReturnValue;
	Parms.CallFunc_GetMagazineScreenName_ReturnValue = CallFunc_GetMagazineScreenName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_LoadHUDSettings_bShowHud = CallFunc_LoadHUDSettings_bShowHud;
	Parms.CallFunc_LoadHUDSettings_bCurvedHUD = CallFunc_LoadHUDSettings_bCurvedHUD;
	Parms.CallFunc_LoadHUDSettings_bShowCompass = CallFunc_LoadHUDSettings_bShowCompass;
	Parms.CallFunc_LoadHUDSettings_bShowWeaponHUD = CallFunc_LoadHUDSettings_bShowWeaponHUD;
	Parms.CallFunc_LoadHUDSettings_bShowMagazineHUD = CallFunc_LoadHUDSettings_bShowMagazineHUD;
	Parms.CallFunc_LoadHUDSettings_bShowChat = CallFunc_LoadHUDSettings_bShowChat;
	Parms.CallFunc_LoadHUDSettings_bSwayHUD = CallFunc_LoadHUDSettings_bSwayHUD;
	Parms.CallFunc_LoadHUDSettings_b2DReload = CallFunc_LoadHUDSettings_b2DReload;
	Parms.CallFunc_LoadHUDSettings_IconScale = CallFunc_LoadHUDSettings_IconScale;
	Parms.CallFunc_LoadHUDSettings_QuickThrowScale = CallFunc_LoadHUDSettings_QuickThrowScale;
	Parms.CallFunc_LoadHUDSettings_FireModeDisplayOption = CallFunc_LoadHUDSettings_FireModeDisplayOption;
	Parms.CallFunc_LoadHUDSettings_bShowPlayerNames = CallFunc_LoadHUDSettings_bShowPlayerNames;
	Parms.CallFunc_LoadHUDSettings_bShowButtonPrompts = CallFunc_LoadHUDSettings_bShowButtonPrompts;
	Parms.CallFunc_LoadHUDSettings_ReturnValue = CallFunc_LoadHUDSettings_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_ProjectWorldToScreen_ScreenPosition = CallFunc_ProjectWorldToScreen_ScreenPosition;
	Parms.CallFunc_ProjectWorldToScreen_ReturnValue = CallFunc_ProjectWorldToScreen_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


