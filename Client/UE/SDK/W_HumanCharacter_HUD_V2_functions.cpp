#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C
// (None)

class UClass* UW_HumanCharacter_HUD_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_HumanCharacter_HUD_V2_C");

	return Clss;
}


// W_HumanCharacter_HUD_V2_C W_HumanCharacter_HUD_V2.Default__W_HumanCharacter_HUD_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_HumanCharacter_HUD_V2_C* UW_HumanCharacter_HUD_V2_C::GetDefaultObj()
{
	static class UW_HumanCharacter_HUD_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_HumanCharacter_HUD_V2_C*>(UW_HumanCharacter_HUD_V2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.GetTutorialWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTutorialWidget*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTutorialWidget* UW_HumanCharacter_HUD_V2_C::GetTutorialWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "GetTutorialWidget");

	Params::UW_HumanCharacter_HUD_V2_C_GetTutorialWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateSwatTeamStatusVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShowTeamStatus_bShowTeamStatus                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowTeamStatus_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HumanCharacter_HUD_V2_C::UpdateSwatTeamStatusVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_LoadShowTeamStatus_bShowTeamStatus, bool CallFunc_LoadShowTeamStatus_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "UpdateSwatTeamStatusVisibility");

	Params::UW_HumanCharacter_HUD_V2_C_UpdateSwatTeamStatusVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_LoadShowTeamStatus_bShowTeamStatus = CallFunc_LoadShowTeamStatus_bShowTeamStatus;
	Parms.CallFunc_LoadShowTeamStatus_ReturnValue = CallFunc_LoadShowTeamStatus_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.GetOwningPlayerCharacter
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerCharacter*            Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_HumanCharacter_HUD_V2_C::GetOwningPlayerCharacter(class APlayerCharacter** Return_Value, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "GetOwningPlayerCharacter");

	Params::UW_HumanCharacter_HUD_V2_C_GetOwningPlayerCharacter_Params Parms{};

	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowFireModes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseWeapon*                 Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_HumanCharacter_HUD_V2_C::ShowFireModes(class ABaseWeapon* Weapon, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "ShowFireModes");

	Params::UW_HumanCharacter_HUD_V2_C_ShowFireModes_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowMagCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseMagazineWeapon*         Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HumanCharacter_HUD_V2_C::ShowMagCheck(class ABaseMagazineWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "ShowMagCheck");

	Params::UW_HumanCharacter_HUD_V2_C_ShowMagCheck_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnWeaponFireModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFireMode               NewFireMode                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseWeapon*                 K2Node_DynamicCast_AsBase_Weapon                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HumanCharacter_HUD_V2_C::OnWeaponFireModeChanged(enum class EFireMode NewFireMode, bool CallFunc_NotEqual_ByteByte_ReturnValue, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, class ABaseWeapon* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "OnWeaponFireModeChanged");

	Params::UW_HumanCharacter_HUD_V2_C_OnWeaponFireModeChanged_Params Parms{};

	Parms.NewFireMode = NewFireMode;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value = CallFunc_GetOwningPlayerCharacter_Return_Value;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Weapon = K2Node_DynamicCast_AsBase_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.TickCommandContext
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_LoadShowCommandContextHintSetting_bShowCommandContextHint(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowCommandContextHintSetting_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USWATManager*                CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSWATTeamDead_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKeyFromInputActionName_ReturnValue                   (HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRonKey                     CallFunc_ConvertUnrealKeyToRonKey_ReturnValue                    (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_1                                          (None)

void UW_HumanCharacter_HUD_V2_C::TickCommandContext(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, class FText Temp_text_Variable, bool CallFunc_LoadShowCommandContextHintSetting_bShowCommandContextHint, bool CallFunc_LoadShowCommandContextHintSetting_ReturnValue, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value_1, bool CallFunc_IsActive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value_3, bool CallFunc_BooleanOR_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, class USWATManager* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsSWATTeamDead_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FKey& CallFunc_GetKeyFromInputActionName_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct FRonKey& CallFunc_ConvertUnrealKeyToRonKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "TickCommandContext");

	Params::UW_HumanCharacter_HUD_V2_C_TickCommandContext_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value = CallFunc_GetOwningPlayerCharacter_Return_Value;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_LoadShowCommandContextHintSetting_bShowCommandContextHint = CallFunc_LoadShowCommandContextHintSetting_bShowCommandContextHint;
	Parms.CallFunc_LoadShowCommandContextHintSetting_ReturnValue = CallFunc_LoadShowCommandContextHintSetting_ReturnValue;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value_1 = CallFunc_GetOwningPlayerCharacter_Return_Value_1;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value_2 = CallFunc_GetOwningPlayerCharacter_Return_Value_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value_3 = CallFunc_GetOwningPlayerCharacter_Return_Value_3;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsSWATTeamDead_ReturnValue = CallFunc_IsSWATTeamDead_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetKeyFromInputActionName_ReturnValue = CallFunc_GetKeyFromInputActionName_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_ConvertUnrealKeyToRonKey_ReturnValue = CallFunc_ConvertUnrealKeyToRonKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue = CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.AddMapActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapActorComponent*          MapActorComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UMapActorWidget> MapActorIconWidgetClass                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FSlateBrush                 IconBrush                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FLinearColor                IconColor                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                IconTextColor                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RotationOffset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMapActorWidget*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UMapActorWidget* UW_HumanCharacter_HUD_V2_C::AddMapActor(class UMapActorComponent* MapActorComponent, TSubclassOf<class UMapActorWidget> MapActorIconWidgetClass, struct FSlateBrush& IconBrush, struct FLinearColor& IconColor, struct FLinearColor& IconTextColor, float RotationOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "AddMapActor");

	Params::UW_HumanCharacter_HUD_V2_C_AddMapActor_Params Parms{};

	Parms.MapActorComponent = MapActorComponent;
	Parms.MapActorIconWidgetClass = MapActorIconWidgetClass;
	Parms.IconBrush = IconBrush;
	Parms.IconColor = IconColor;
	Parms.IconTextColor = IconTextColor;
	Parms.RotationOffset = RotationOffset;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.PreviousTabletMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::PreviousTabletMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "PreviousTabletMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.NextTabletMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::NextTabletMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "NextTabletMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.HideTablet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::HideTablet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "HideTablet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowTablet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::ShowTablet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "ShowTablet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateCurrentFireMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseItem*                   CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseWeapon*                 K2Node_DynamicCast_AsBase_Weapon                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_HumanCharacter_HUD_V2_C::UpdateCurrentFireMode(class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value, bool CallFunc_IsValid_ReturnValue, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, class ABaseWeapon* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "UpdateCurrentFireMode");

	Params::UW_HumanCharacter_HUD_V2_C_UpdateCurrentFireMode_Params Parms{};

	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value = CallFunc_GetOwningPlayerCharacter_Return_Value;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Weapon = K2Node_DynamicCast_AsBase_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.FadeInHUD
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HumanCharacter_HUD_V2_C::FadeInHUD(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "FadeInHUD");

	Params::UW_HumanCharacter_HUD_V2_C_FadeInHUD_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.InitializeItemSelectionPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bForce                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UW_HumanCharacter_HUD_V2_C::InitializeItemSelectionPanel(bool bForce, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "InitializeItemSelectionPanel");

	Params::UW_HumanCharacter_HUD_V2_C_InitializeItemSelectionPanel_Params Parms{};

	Parms.bForce = bForce;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value = CallFunc_GetOwningPlayerCharacter_Return_Value;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.EnabledCurvedHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::EnabledCurvedHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "EnabledCurvedHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.DisableCurvedHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::DisableCurvedHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "DisableCurvedHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.IsCurvedHUDEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_HumanCharacter_HUD_V2_C::IsCurvedHUDEnabled(bool* Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "IsCurvedHUDEnabled");

	Params::UW_HumanCharacter_HUD_V2_C_IsCurvedHUDEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateCurveHUDValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HumanCharacter_HUD_V2_C::UpdateCurveHUDValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "UpdateCurveHUDValue");

	Params::UW_HumanCharacter_HUD_V2_C_UpdateCurveHUDValue_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ToggleCurvedHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::ToggleCurvedHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "ToggleCurvedHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ToggleHUDSway
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_HumanCharacter_HUD_V2_C::ToggleHUDSway(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "ToggleHUDSway");

	Params::UW_HumanCharacter_HUD_V2_C_ToggleHUDSway_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateMapFloors
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBuildingFloor>      Floors                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_HumanCharacter_HUD_V2_C::UpdateMapFloors(TArray<struct FBuildingFloor>& Floors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "UpdateMapFloors");

	Params::UW_HumanCharacter_HUD_V2_C_UpdateMapFloors_Params Parms{};

	Parms.Floors = Floors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ChatPressed
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::ChatPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "ChatPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnWeaponMagCheck_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseMagazineWeapon*         MagazineWeapon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HumanCharacter_HUD_V2_C::OnWeaponMagCheck_Event_0(class ABaseMagazineWeapon* MagazineWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "OnWeaponMagCheck_Event_0");

	Params::UW_HumanCharacter_HUD_V2_C_OnWeaponMagCheck_Event_0_Params Parms{};

	Parms.MagazineWeapon = MagazineWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnInventoryItemsChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::OnInventoryItemsChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "OnInventoryItemsChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.AddScorePopup
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ScoreText                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              ScoreValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bGive                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_HumanCharacter_HUD_V2_C::AddScorePopup(class FText& ScoreText, int32 ScoreValue, bool bGive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "AddScorePopup");

	Params::UW_HumanCharacter_HUD_V2_C_AddScorePopup_Params Parms{};

	Parms.ScoreText = ScoreText;
	Parms.ScoreValue = ScoreValue;
	Parms.bGive = bGive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowTutorialPrompt
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      MessageID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bFirstShowing                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        MessageTitle                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FText>                MessageContent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_HumanCharacter_HUD_V2_C::ShowTutorialPrompt(const class FString& MessageID, bool bFirstShowing, class FText& MessageTitle, TArray<class FText>& MessageContent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "ShowTutorialPrompt");

	Params::UW_HumanCharacter_HUD_V2_C_ShowTutorialPrompt_Params Parms{};

	Parms.MessageID = MessageID;
	Parms.bFirstShowing = bFirstShowing;
	Parms.MessageTitle = MessageTitle;
	Parms.MessageContent = MessageContent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.HideTutorialPrompt
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      MessageID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_HumanCharacter_HUD_V2_C::HideTutorialPrompt(const class FString& MessageID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "HideTutorialPrompt");

	Params::UW_HumanCharacter_HUD_V2_C_HideTutorialPrompt_Params Parms{};

	Parms.MessageID = MessageID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ShowTutorialOverview
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      MessageID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        MessageTitle                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FText>                MessageContent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_HumanCharacter_HUD_V2_C::ShowTutorialOverview(const class FString& MessageID, class FText& MessageTitle, TArray<class FText>& MessageContent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "ShowTutorialOverview");

	Params::UW_HumanCharacter_HUD_V2_C_ShowTutorialOverview_Params Parms{};

	Parms.MessageID = MessageID;
	Parms.MessageTitle = MessageTitle;
	Parms.MessageContent = MessageContent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnTeamViewSet_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        NewViewCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HumanCharacter_HUD_V2_C::OnTeamViewSet_Event_0(class AReadyOrNotCharacter* NewViewCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "OnTeamViewSet_Event_0");

	Params::UW_HumanCharacter_HUD_V2_C_OnTeamViewSet_Event_0_Params Parms{};

	Parms.NewViewCharacter = NewViewCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnMenuOpened_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::OnMenuOpened_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "OnMenuOpened_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemEquipped_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HumanCharacter_HUD_V2_C::OnItemEquipped_Event_0(class ABaseItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "OnItemEquipped_Event_0");

	Params::UW_HumanCharacter_HUD_V2_C_OnItemEquipped_Event_0_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Reconstruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::Reconstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "Reconstruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemGroupSelection_Pressed_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GroupIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HumanCharacter_HUD_V2_C::OnItemGroupSelection_Pressed_Event_0(int32 GroupIndex, int32 CategoryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "OnItemGroupSelection_Pressed_Event_0");

	Params::UW_HumanCharacter_HUD_V2_C_OnItemGroupSelection_Pressed_Event_0_Params Parms{};

	Parms.GroupIndex = GroupIndex;
	Parms.CategoryIndex = CategoryIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemGroupSelection_Released_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GroupIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HumanCharacter_HUD_V2_C::OnItemGroupSelection_Released_Event_0(int32 GroupIndex, int32 CategoryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "OnItemGroupSelection_Released_Event_0");

	Params::UW_HumanCharacter_HUD_V2_C_OnItemGroupSelection_Released_Event_0_Params Parms{};

	Parms.GroupIndex = GroupIndex;
	Parms.CategoryIndex = CategoryIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.UpdateItemSelectionPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::UpdateItemSelectionPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "UpdateItemSelectionPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnCharacterTakeDamage_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InstigatorCharacter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        DamagedCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HealthRemaining                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HumanCharacter_HUD_V2_C::OnCharacterTakeDamage_Event_0(class AReadyOrNotCharacter* InstigatorCharacter, class AReadyOrNotCharacter* DamagedCharacter, class AActor* DamageCauser, float Damage, float HealthRemaining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "OnCharacterTakeDamage_Event_0");

	Params::UW_HumanCharacter_HUD_V2_C_OnCharacterTakeDamage_Event_0_Params Parms{};

	Parms.InstigatorCharacter = InstigatorCharacter;
	Parms.DamagedCharacter = DamagedCharacter;
	Parms.DamageCauser = DamageCauser;
	Parms.Damage = Damage;
	Parms.HealthRemaining = HealthRemaining;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnItemGroupSelection_ItemChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GroupIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CategoryIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HumanCharacter_HUD_V2_C::OnItemGroupSelection_ItemChanged_Event_0(int32 GroupIndex, int32 CategoryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "OnItemGroupSelection_ItemChanged_Event_0");

	Params::UW_HumanCharacter_HUD_V2_C_OnItemGroupSelection_ItemChanged_Event_0_Params Parms{};

	Parms.GroupIndex = GroupIndex;
	Parms.CategoryIndex = CategoryIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnTabletNotificationEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::OnTabletNotificationEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "OnTabletNotificationEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.RemoveMapActor
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapActorComponent*          MapActorComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HumanCharacter_HUD_V2_C::RemoveMapActor(class UMapActorComponent* MapActorComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "RemoveMapActor");

	Params::UW_HumanCharacter_HUD_V2_C_RemoveMapActor_Params Parms{};

	Parms.MapActorComponent = MapActorComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnTabletOpen
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::OnTabletOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "OnTabletOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.TeamChatPressed
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::TeamChatPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "TeamChatPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ReflectHUDSettings
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::ReflectHUDSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "ReflectHUDSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.InitalizeDelegateEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::InitalizeDelegateEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "InitalizeDelegateEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnWeaponFireModeChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*            PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFireMode               NewFireMode                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFireMode               LastFireMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HumanCharacter_HUD_V2_C::OnWeaponFireModeChanged_Event_0(class APlayerCharacter* PlayerCharacter, enum class EFireMode NewFireMode, enum class EFireMode LastFireMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "OnWeaponFireModeChanged_Event_0");

	Params::UW_HumanCharacter_HUD_V2_C_OnWeaponFireModeChanged_Event_0_Params Parms{};

	Parms.PlayerCharacter = PlayerCharacter;
	Parms.NewFireMode = NewFireMode;
	Parms.LastFireMode = LastFireMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Re-Initialize Item Selection Menu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::ReMinusInitialize_Item_Selection_Menu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "Re-Initialize Item Selection Menu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ClearText                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAnimate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bLoopAnimation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_HumanCharacter_HUD_V2_C::CustomEvent_0(class FText InText, bool ClearText, bool bAnimate, bool bLoopAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "CustomEvent_0");

	Params::UW_HumanCharacter_HUD_V2_C_CustomEvent_0_Params Parms{};

	Parms.InText = InText;
	Parms.ClearText = ClearText;
	Parms.bAnimate = bAnimate;
	Parms.bLoopAnimation = bLoopAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ClearText                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAnimate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bLoopAnimation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_HumanCharacter_HUD_V2_C::CustomEvent_1(class FText InText, bool ClearText, bool bAnimate, bool bLoopAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "CustomEvent_1");

	Params::UW_HumanCharacter_HUD_V2_C_CustomEvent_1_Params Parms{};

	Parms.InText = InText;
	Parms.ClearText = ClearText;
	Parms.bAnimate = bAnimate;
	Parms.bLoopAnimation = bLoopAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ClearText                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAnimate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bLoopAnimation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_HumanCharacter_HUD_V2_C::CustomEvent_2(class FText InText, bool ClearText, bool bAnimate, bool bLoopAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "CustomEvent_2");

	Params::UW_HumanCharacter_HUD_V2_C_CustomEvent_2_Params Parms{};

	Parms.InText = InText;
	Parms.ClearText = ClearText;
	Parms.bAnimate = bAnimate;
	Parms.bLoopAnimation = bLoopAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ClearText                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAnimate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bLoopAnimation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_HumanCharacter_HUD_V2_C::CustomEvent_3(class FText InText, bool ClearText, bool bAnimate, bool bLoopAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "CustomEvent_3");

	Params::UW_HumanCharacter_HUD_V2_C_CustomEvent_3_Params Parms{};

	Parms.InText = InText;
	Parms.ClearText = ClearText;
	Parms.bAnimate = bAnimate;
	Parms.bLoopAnimation = bLoopAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ClearText                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAnimate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bLoopAnimation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_HumanCharacter_HUD_V2_C::CustomEvent_4(class FText InText, bool ClearText, bool bAnimate, bool bLoopAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "CustomEvent_4");

	Params::UW_HumanCharacter_HUD_V2_C_CustomEvent_4_Params Parms{};

	Parms.InText = InText;
	Parms.ClearText = ClearText;
	Parms.bAnimate = bAnimate;
	Parms.bLoopAnimation = bLoopAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.CustomEvent_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ClearText                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAnimate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bLoopAnimation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_HumanCharacter_HUD_V2_C::CustomEvent_5(class FText InText, bool ClearText, bool bAnimate, bool bLoopAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "CustomEvent_5");

	Params::UW_HumanCharacter_HUD_V2_C_CustomEvent_5_Params Parms{};

	Parms.InText = InText;
	Parms.ClearText = ClearText;
	Parms.bAnimate = bAnimate;
	Parms.bLoopAnimation = bLoopAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HumanCharacter_HUD_V2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "Tick");

	Params::UW_HumanCharacter_HUD_V2_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnExitSettingsMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::OnExitSettingsMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "OnExitSettingsMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.LocalReadyStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bReady                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_HumanCharacter_HUD_V2_C::LocalReadyStateChanged(bool bReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "LocalReadyStateChanged");

	Params::UW_HumanCharacter_HUD_V2_C_LocalReadyStateChanged_Params Parms{};

	Parms.bReady = bReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ReadiedPlayersChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::ReadiedPlayersChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "ReadiedPlayersChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.OnMissionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HumanCharacter_HUD_V2_C::OnMissionSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "OnMissionSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.AddObjectivePopup
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        PopupText                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_HumanCharacter_HUD_V2_C::AddObjectivePopup(class FText& PopupText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "AddObjectivePopup");

	Params::UW_HumanCharacter_HUD_V2_C_AddObjectivePopup_Params Parms{};

	Parms.PopupText = PopupText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HumanCharacter_HUD_V2.W_HumanCharacter_HUD_V2_C.ExecuteUbergraph_W_HumanCharacter_HUD_V2
// (Final, UbergraphFunction, HasDefaults)
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
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// TArray<struct FBuildingFloor>      K2Node_Event_Floors                                              (ConstParm, ReferenceParm)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseMagazineWeapon*         K2Node_CustomEvent_MagazineWeapon                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_ScoreText                                           (ConstParm)
// int32                              K2Node_Event_ScoreValue                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bGive                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowHealthIconSetting_bShowHealthIcons              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowHealthIconSetting_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHotkeyHintSetting_bShowHotkeyHint                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHotkeyHintSetting_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Event_MessageID_2                                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFirstShowing                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_MessageTitle_1                                      (ConstParm)
// TArray<class FText>                K2Node_Event_MessageContent_1                                    (ConstParm, ReferenceParm)
// class FString                      K2Node_Event_MessageID_1                                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_MessageID                                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_MessageTitle                                        (ConstParm)
// TArray<class FText>                K2Node_Event_MessageContent                                      (ConstParm, ReferenceParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_TutorialOverviewText_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_CustomEvent_NewViewCharacter                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseWeapon*                 K2Node_DynamicCast_AsBase_Weapon                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value_6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value_7                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value_8                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value_9                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value_10                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value_11                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_GroupIndex_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_CategoryIndex_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value_12                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_GroupIndex_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_CategoryIndex_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_CustomEvent_InstigatorCharacter                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_CustomEvent_DamagedCharacter                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_HealthRemaining                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value_13                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_GroupIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_CategoryIndex                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            CallFunc_GetOwningPlayerCharacter_Return_Value_14                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         CallFunc_GetEquippedWeapon_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMapActorComponent*          K2Node_Event_MapActorComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadHUDSettings_bShowHud_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bCurvedHUD_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowCompass_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowWeaponHUD_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowMagazineHUD_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowChat_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bSwayHUD_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_b2DReload_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_LoadHUDSettings_IconScale_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadHUDSettings_QuickThrowScale_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadHUDSettings_FireModeDisplayOption_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadHUDSettings_bShowPlayerNames_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_bShowButtonPrompts_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHUDSettings_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_CustomEvent_PlayerCharacter                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFireMode               K2Node_CustomEvent_NewFireMode                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFireMode               K2Node_CustomEvent_LastFireMode                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_InText_5                                      (None)
// bool                               K2Node_CustomEvent_clearText_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bAnimate_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bLoopAnimation_5                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_InText_4                                      (None)
// bool                               K2Node_CustomEvent_clearText_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bAnimate_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bLoopAnimation_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_InText_3                                      (None)
// bool                               K2Node_CustomEvent_clearText_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bAnimate_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bLoopAnimation_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_InText_2                                      (None)
// bool                               K2Node_CustomEvent_clearText_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bAnimate_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bLoopAnimation_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_InText_1                                      (None)
// bool                               K2Node_CustomEvent_clearText_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bAnimate_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bLoopAnimation_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_InText                                        (None)
// bool                               K2Node_CustomEvent_clearText                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bAnimate                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bLoopAnimation                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue_2                                   (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue_3                                   (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue_4                                   (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue_5                                   (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bReady                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMissionPortal*              CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_PopupText                                           (ConstParm)

void UW_HumanCharacter_HUD_V2_C::ExecuteUbergraph_W_HumanCharacter_HUD_V2(int32 EntryPoint, bool CallFunc_LoadHUDSettings_bShowHud, bool CallFunc_LoadHUDSettings_bCurvedHUD, bool CallFunc_LoadHUDSettings_bShowCompass, bool CallFunc_LoadHUDSettings_bShowWeaponHUD, bool CallFunc_LoadHUDSettings_bShowMagazineHUD, bool CallFunc_LoadHUDSettings_bShowChat, bool CallFunc_LoadHUDSettings_bSwayHUD, bool CallFunc_LoadHUDSettings_b2DReload, float CallFunc_LoadHUDSettings_IconScale, float CallFunc_LoadHUDSettings_QuickThrowScale, int32 CallFunc_LoadHUDSettings_FireModeDisplayOption, bool CallFunc_LoadHUDSettings_bShowPlayerNames, bool CallFunc_LoadHUDSettings_bShowButtonPrompts, bool CallFunc_LoadHUDSettings_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, TArray<struct FBuildingFloor>& K2Node_Event_Floors, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, class ABaseMagazineWeapon* K2Node_CustomEvent_MagazineWeapon, class FText K2Node_Event_ScoreText, int32 K2Node_Event_ScoreValue, bool K2Node_Event_bGive, bool CallFunc_LoadShowHealthIconSetting_bShowHealthIcons, bool CallFunc_LoadShowHealthIconSetting_ReturnValue, bool CallFunc_LoadHotkeyHintSetting_bShowHotkeyHint, bool CallFunc_LoadHotkeyHintSetting_ReturnValue, const class FString& K2Node_Event_MessageID_2, bool K2Node_Event_bFirstShowing, class FText K2Node_Event_MessageTitle_1, TArray<class FText>& K2Node_Event_MessageContent_1, const class FString& K2Node_Event_MessageID_1, const class FString& K2Node_Event_MessageID, class FText K2Node_Event_MessageTitle, TArray<class FText>& K2Node_Event_MessageContent, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UW_TutorialOverviewText_C* CallFunc_Create_ReturnValue, class AReadyOrNotCharacter* K2Node_CustomEvent_NewViewCharacter, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class ABaseItem* K2Node_CustomEvent_Item, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value_1, class ABaseWeapon* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, enum class ESlateVisibility Temp_byte_Variable_2, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value_2, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value_3, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value_4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value_5, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value_6, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value_7, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value_8, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value_9, bool CallFunc_IsValid_ReturnValue_3, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value_10, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value_11, int32 K2Node_CustomEvent_GroupIndex_2, int32 K2Node_CustomEvent_CategoryIndex_2, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value_12, int32 K2Node_CustomEvent_GroupIndex_1, int32 K2Node_CustomEvent_CategoryIndex_1, class AReadyOrNotCharacter* K2Node_CustomEvent_InstigatorCharacter, class AReadyOrNotCharacter* K2Node_CustomEvent_DamagedCharacter, class AActor* K2Node_CustomEvent_DamageCauser, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_HealthRemaining, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value_13, int32 K2Node_CustomEvent_GroupIndex, int32 K2Node_CustomEvent_CategoryIndex, class APlayerCharacter* CallFunc_GetOwningPlayerCharacter_Return_Value_14, class ABaseMagazineWeapon* CallFunc_GetEquippedWeapon_ReturnValue, class UMapActorComponent* K2Node_Event_MapActorComponent, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_LoadHUDSettings_bShowHud_1, bool CallFunc_LoadHUDSettings_bCurvedHUD_1, bool CallFunc_LoadHUDSettings_bShowCompass_1, bool CallFunc_LoadHUDSettings_bShowWeaponHUD_1, bool CallFunc_LoadHUDSettings_bShowMagazineHUD_1, bool CallFunc_LoadHUDSettings_bShowChat_1, bool CallFunc_LoadHUDSettings_bSwayHUD_1, bool CallFunc_LoadHUDSettings_b2DReload_1, float CallFunc_LoadHUDSettings_IconScale_1, float CallFunc_LoadHUDSettings_QuickThrowScale_1, int32 CallFunc_LoadHUDSettings_FireModeDisplayOption_1, bool CallFunc_LoadHUDSettings_bShowPlayerNames_1, bool CallFunc_LoadHUDSettings_bShowButtonPrompts_1, bool CallFunc_LoadHUDSettings_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_1, class APlayerCharacter* K2Node_CustomEvent_PlayerCharacter, enum class EFireMode K2Node_CustomEvent_NewFireMode, enum class EFireMode K2Node_CustomEvent_LastFireMode, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText K2Node_CustomEvent_InText_5, bool K2Node_CustomEvent_clearText_5, bool K2Node_CustomEvent_bAnimate_5, bool K2Node_CustomEvent_bLoopAnimation_5, class FText K2Node_CustomEvent_InText_4, bool K2Node_CustomEvent_clearText_4, bool K2Node_CustomEvent_bAnimate_4, bool K2Node_CustomEvent_bLoopAnimation_4, class FText K2Node_CustomEvent_InText_3, bool K2Node_CustomEvent_clearText_3, bool K2Node_CustomEvent_bAnimate_3, bool K2Node_CustomEvent_bLoopAnimation_3, class FText K2Node_CustomEvent_InText_2, bool K2Node_CustomEvent_clearText_2, bool K2Node_CustomEvent_bAnimate_2, bool K2Node_CustomEvent_bLoopAnimation_2, class FText K2Node_CustomEvent_InText_1, bool K2Node_CustomEvent_clearText_1, bool K2Node_CustomEvent_bAnimate_1, bool K2Node_CustomEvent_bLoopAnimation_1, class FText K2Node_CustomEvent_InText, bool K2Node_CustomEvent_clearText, bool K2Node_CustomEvent_bAnimate, bool K2Node_CustomEvent_bLoopAnimation, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class ESlateVisibility Temp_byte_Variable_4, class FText CallFunc_GetText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, bool CallFunc_EqualEqual_TextText_ReturnValue_1, class FText CallFunc_GetText_ReturnValue_2, bool CallFunc_EqualEqual_TextText_ReturnValue_2, class FText CallFunc_GetText_ReturnValue_3, bool CallFunc_EqualEqual_TextText_ReturnValue_3, class FText CallFunc_GetText_ReturnValue_4, bool CallFunc_EqualEqual_TextText_ReturnValue_4, class FText CallFunc_GetText_ReturnValue_5, bool CallFunc_EqualEqual_TextText_ReturnValue_5, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_4, enum class ESlateVisibility K2Node_Select_Default_3, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility K2Node_Select_Default_4, bool K2Node_Event_bReady, class AMissionPortal* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class FText K2Node_Event_PopupText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HumanCharacter_HUD_V2_C", "ExecuteUbergraph_W_HumanCharacter_HUD_V2");

	Params::UW_HumanCharacter_HUD_V2_C_ExecuteUbergraph_W_HumanCharacter_HUD_V2_Params Parms{};

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
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_Event_Floors = K2Node_Event_Floors;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value = CallFunc_GetOwningPlayerCharacter_Return_Value;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CustomEvent_MagazineWeapon = K2Node_CustomEvent_MagazineWeapon;
	Parms.K2Node_Event_ScoreText = K2Node_Event_ScoreText;
	Parms.K2Node_Event_ScoreValue = K2Node_Event_ScoreValue;
	Parms.K2Node_Event_bGive = K2Node_Event_bGive;
	Parms.CallFunc_LoadShowHealthIconSetting_bShowHealthIcons = CallFunc_LoadShowHealthIconSetting_bShowHealthIcons;
	Parms.CallFunc_LoadShowHealthIconSetting_ReturnValue = CallFunc_LoadShowHealthIconSetting_ReturnValue;
	Parms.CallFunc_LoadHotkeyHintSetting_bShowHotkeyHint = CallFunc_LoadHotkeyHintSetting_bShowHotkeyHint;
	Parms.CallFunc_LoadHotkeyHintSetting_ReturnValue = CallFunc_LoadHotkeyHintSetting_ReturnValue;
	Parms.K2Node_Event_MessageID_2 = K2Node_Event_MessageID_2;
	Parms.K2Node_Event_bFirstShowing = K2Node_Event_bFirstShowing;
	Parms.K2Node_Event_MessageTitle_1 = K2Node_Event_MessageTitle_1;
	Parms.K2Node_Event_MessageContent_1 = K2Node_Event_MessageContent_1;
	Parms.K2Node_Event_MessageID_1 = K2Node_Event_MessageID_1;
	Parms.K2Node_Event_MessageID = K2Node_Event_MessageID;
	Parms.K2Node_Event_MessageTitle = K2Node_Event_MessageTitle;
	Parms.K2Node_Event_MessageContent = K2Node_Event_MessageContent;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_NewViewCharacter = K2Node_CustomEvent_NewViewCharacter;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value_1 = CallFunc_GetOwningPlayerCharacter_Return_Value_1;
	Parms.K2Node_DynamicCast_AsBase_Weapon = K2Node_DynamicCast_AsBase_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value_2 = CallFunc_GetOwningPlayerCharacter_Return_Value_2;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value_3 = CallFunc_GetOwningPlayerCharacter_Return_Value_3;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value_4 = CallFunc_GetOwningPlayerCharacter_Return_Value_4;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value_5 = CallFunc_GetOwningPlayerCharacter_Return_Value_5;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value_6 = CallFunc_GetOwningPlayerCharacter_Return_Value_6;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value_7 = CallFunc_GetOwningPlayerCharacter_Return_Value_7;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value_8 = CallFunc_GetOwningPlayerCharacter_Return_Value_8;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value_9 = CallFunc_GetOwningPlayerCharacter_Return_Value_9;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value_10 = CallFunc_GetOwningPlayerCharacter_Return_Value_10;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value_11 = CallFunc_GetOwningPlayerCharacter_Return_Value_11;
	Parms.K2Node_CustomEvent_GroupIndex_2 = K2Node_CustomEvent_GroupIndex_2;
	Parms.K2Node_CustomEvent_CategoryIndex_2 = K2Node_CustomEvent_CategoryIndex_2;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value_12 = CallFunc_GetOwningPlayerCharacter_Return_Value_12;
	Parms.K2Node_CustomEvent_GroupIndex_1 = K2Node_CustomEvent_GroupIndex_1;
	Parms.K2Node_CustomEvent_CategoryIndex_1 = K2Node_CustomEvent_CategoryIndex_1;
	Parms.K2Node_CustomEvent_InstigatorCharacter = K2Node_CustomEvent_InstigatorCharacter;
	Parms.K2Node_CustomEvent_DamagedCharacter = K2Node_CustomEvent_DamagedCharacter;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_HealthRemaining = K2Node_CustomEvent_HealthRemaining;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value_13 = CallFunc_GetOwningPlayerCharacter_Return_Value_13;
	Parms.K2Node_CustomEvent_GroupIndex = K2Node_CustomEvent_GroupIndex;
	Parms.K2Node_CustomEvent_CategoryIndex = K2Node_CustomEvent_CategoryIndex;
	Parms.CallFunc_GetOwningPlayerCharacter_Return_Value_14 = CallFunc_GetOwningPlayerCharacter_Return_Value_14;
	Parms.CallFunc_GetEquippedWeapon_ReturnValue = CallFunc_GetEquippedWeapon_ReturnValue;
	Parms.K2Node_Event_MapActorComponent = K2Node_Event_MapActorComponent;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_LoadHUDSettings_bShowHud_1 = CallFunc_LoadHUDSettings_bShowHud_1;
	Parms.CallFunc_LoadHUDSettings_bCurvedHUD_1 = CallFunc_LoadHUDSettings_bCurvedHUD_1;
	Parms.CallFunc_LoadHUDSettings_bShowCompass_1 = CallFunc_LoadHUDSettings_bShowCompass_1;
	Parms.CallFunc_LoadHUDSettings_bShowWeaponHUD_1 = CallFunc_LoadHUDSettings_bShowWeaponHUD_1;
	Parms.CallFunc_LoadHUDSettings_bShowMagazineHUD_1 = CallFunc_LoadHUDSettings_bShowMagazineHUD_1;
	Parms.CallFunc_LoadHUDSettings_bShowChat_1 = CallFunc_LoadHUDSettings_bShowChat_1;
	Parms.CallFunc_LoadHUDSettings_bSwayHUD_1 = CallFunc_LoadHUDSettings_bSwayHUD_1;
	Parms.CallFunc_LoadHUDSettings_b2DReload_1 = CallFunc_LoadHUDSettings_b2DReload_1;
	Parms.CallFunc_LoadHUDSettings_IconScale_1 = CallFunc_LoadHUDSettings_IconScale_1;
	Parms.CallFunc_LoadHUDSettings_QuickThrowScale_1 = CallFunc_LoadHUDSettings_QuickThrowScale_1;
	Parms.CallFunc_LoadHUDSettings_FireModeDisplayOption_1 = CallFunc_LoadHUDSettings_FireModeDisplayOption_1;
	Parms.CallFunc_LoadHUDSettings_bShowPlayerNames_1 = CallFunc_LoadHUDSettings_bShowPlayerNames_1;
	Parms.CallFunc_LoadHUDSettings_bShowButtonPrompts_1 = CallFunc_LoadHUDSettings_bShowButtonPrompts_1;
	Parms.CallFunc_LoadHUDSettings_ReturnValue_1 = CallFunc_LoadHUDSettings_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CustomEvent_PlayerCharacter = K2Node_CustomEvent_PlayerCharacter;
	Parms.K2Node_CustomEvent_NewFireMode = K2Node_CustomEvent_NewFireMode;
	Parms.K2Node_CustomEvent_LastFireMode = K2Node_CustomEvent_LastFireMode;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CustomEvent_InText_5 = K2Node_CustomEvent_InText_5;
	Parms.K2Node_CustomEvent_clearText_5 = K2Node_CustomEvent_clearText_5;
	Parms.K2Node_CustomEvent_bAnimate_5 = K2Node_CustomEvent_bAnimate_5;
	Parms.K2Node_CustomEvent_bLoopAnimation_5 = K2Node_CustomEvent_bLoopAnimation_5;
	Parms.K2Node_CustomEvent_InText_4 = K2Node_CustomEvent_InText_4;
	Parms.K2Node_CustomEvent_clearText_4 = K2Node_CustomEvent_clearText_4;
	Parms.K2Node_CustomEvent_bAnimate_4 = K2Node_CustomEvent_bAnimate_4;
	Parms.K2Node_CustomEvent_bLoopAnimation_4 = K2Node_CustomEvent_bLoopAnimation_4;
	Parms.K2Node_CustomEvent_InText_3 = K2Node_CustomEvent_InText_3;
	Parms.K2Node_CustomEvent_clearText_3 = K2Node_CustomEvent_clearText_3;
	Parms.K2Node_CustomEvent_bAnimate_3 = K2Node_CustomEvent_bAnimate_3;
	Parms.K2Node_CustomEvent_bLoopAnimation_3 = K2Node_CustomEvent_bLoopAnimation_3;
	Parms.K2Node_CustomEvent_InText_2 = K2Node_CustomEvent_InText_2;
	Parms.K2Node_CustomEvent_clearText_2 = K2Node_CustomEvent_clearText_2;
	Parms.K2Node_CustomEvent_bAnimate_2 = K2Node_CustomEvent_bAnimate_2;
	Parms.K2Node_CustomEvent_bLoopAnimation_2 = K2Node_CustomEvent_bLoopAnimation_2;
	Parms.K2Node_CustomEvent_InText_1 = K2Node_CustomEvent_InText_1;
	Parms.K2Node_CustomEvent_clearText_1 = K2Node_CustomEvent_clearText_1;
	Parms.K2Node_CustomEvent_bAnimate_1 = K2Node_CustomEvent_bAnimate_1;
	Parms.K2Node_CustomEvent_bLoopAnimation_1 = K2Node_CustomEvent_bLoopAnimation_1;
	Parms.K2Node_CustomEvent_InText = K2Node_CustomEvent_InText;
	Parms.K2Node_CustomEvent_clearText = K2Node_CustomEvent_clearText;
	Parms.K2Node_CustomEvent_bAnimate = K2Node_CustomEvent_bAnimate;
	Parms.K2Node_CustomEvent_bLoopAnimation = K2Node_CustomEvent_bLoopAnimation;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue_1 = CallFunc_GetReadyOrNotPlayerController_ReturnValue_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_1 = CallFunc_EqualEqual_TextText_ReturnValue_1;
	Parms.CallFunc_GetText_ReturnValue_2 = CallFunc_GetText_ReturnValue_2;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_2 = CallFunc_EqualEqual_TextText_ReturnValue_2;
	Parms.CallFunc_GetText_ReturnValue_3 = CallFunc_GetText_ReturnValue_3;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_3 = CallFunc_EqualEqual_TextText_ReturnValue_3;
	Parms.CallFunc_GetText_ReturnValue_4 = CallFunc_GetText_ReturnValue_4;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_4 = CallFunc_EqualEqual_TextText_ReturnValue_4;
	Parms.CallFunc_GetText_ReturnValue_5 = CallFunc_GetText_ReturnValue_5;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_5 = CallFunc_EqualEqual_TextText_ReturnValue_5;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Event_bReady = K2Node_Event_bReady;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_Event_PopupText = K2Node_Event_PopupText;

	UObject::ProcessEvent(Func, &Parms);

}

}


