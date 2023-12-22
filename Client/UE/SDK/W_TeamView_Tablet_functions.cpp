#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_TeamView_Tablet.W_TeamView_Tablet_C
// (None)

class UClass* UW_TeamView_Tablet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_TeamView_Tablet_C");

	return Clss;
}


// W_TeamView_Tablet_C W_TeamView_Tablet.Default__W_TeamView_Tablet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_TeamView_Tablet_C* UW_TeamView_Tablet_C::GetDefaultObj()
{
	static class UW_TeamView_Tablet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_TeamView_Tablet_C*>(UW_TeamView_Tablet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_TeamView_Tablet.W_TeamView_Tablet_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_TeamView_Tablet_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TeamView_Tablet_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TeamView_Tablet.W_TeamView_Tablet_C.Tick_TeamViewOn
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_TeamView_Tablet_C::Tick_TeamViewOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TeamView_Tablet_C", "Tick_TeamViewOn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_TeamView_Tablet.W_TeamView_Tablet_C.ExecuteUbergraph_W_TeamView_Tablet
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TeamView_Tablet_C::ExecuteUbergraph_W_TeamView_Tablet(int32 EntryPoint, bool CallFunc_LoadHUDSettings_bShowHud, bool CallFunc_LoadHUDSettings_bCurvedHUD, bool CallFunc_LoadHUDSettings_bShowCompass, bool CallFunc_LoadHUDSettings_bShowWeaponHUD, bool CallFunc_LoadHUDSettings_bShowMagazineHUD, bool CallFunc_LoadHUDSettings_bShowChat, bool CallFunc_LoadHUDSettings_bSwayHUD, bool CallFunc_LoadHUDSettings_b2DReload, float CallFunc_LoadHUDSettings_IconScale, float CallFunc_LoadHUDSettings_QuickThrowScale, int32 CallFunc_LoadHUDSettings_FireModeDisplayOption, bool CallFunc_LoadHUDSettings_bShowPlayerNames, bool CallFunc_LoadHUDSettings_bShowButtonPrompts, bool CallFunc_LoadHUDSettings_ReturnValue, bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TeamView_Tablet_C", "ExecuteUbergraph_W_TeamView_Tablet");

	Params::UW_TeamView_Tablet_C_ExecuteUbergraph_W_TeamView_Tablet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
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
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


