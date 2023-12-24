#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Overview_V2.W_Overview_V2_C
// (None)

class UClass* UW_Overview_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Overview_V2_C");

	return Clss;
}


// W_Overview_V2_C W_Overview_V2.Default__W_Overview_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Overview_V2_C* UW_Overview_V2_C::GetDefaultObj()
{
	static class UW_Overview_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Overview_V2_C*>(UW_Overview_V2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Overview_V2.W_Overview_V2_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Overview_V2_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BackPage");

	Params::UW_Overview_V2_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Overview_V2.W_Overview_V2_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULoadoutSlot_V2*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Overview_V2_C::GetFocusTarget(class UWidget** Focus, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, class ULoadoutSlot_V2* CallFunc_Array_Get_Item, class UWidget* CallFunc_GetFocusTarget_Focus, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "GetFocusTarget");

	Params::UW_Overview_V2_C_GetFocusTarget_Params Parms{};

	Parms.K2Node_DynamicCast_AsReady_or_Not_UI = K2Node_DynamicCast_AsReady_or_Not_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Overview_V2.W_Overview_V2_C.InitializeLoadoutPresets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               CallFunc_GetActiveLoadout_ReturnValue                            (None)
// TScriptInterface<class ILoadoutUI_C>K2Node_DynamicCast_AsLoadout_UI                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Overview_V2_C::InitializeLoadoutPresets(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, const struct FSavedLoadout& CallFunc_GetActiveLoadout_ReturnValue, TScriptInterface<class ILoadoutUI_C> K2Node_DynamicCast_AsLoadout_UI, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "InitializeLoadoutPresets");

	Params::UW_Overview_V2_C_InitializeLoadoutPresets_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetActiveLoadout_ReturnValue = CallFunc_GetActiveLoadout_ReturnValue;
	Parms.K2Node_DynamicCast_AsLoadout_UI = K2Node_DynamicCast_AsLoadout_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.UpdateHeadwear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ABaseItem>       CallFunc_GetActiveHeadwear_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::UpdateHeadwear(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveHeadwear_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "UpdateHeadwear");

	Params::UW_Overview_V2_C_UpdateHeadwear_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetActiveHeadwear_ReturnValue = CallFunc_GetActiveHeadwear_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.UpdateMunitions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Overview_V2_C::UpdateMunitions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "UpdateMunitions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Overview_V2.W_Overview_V2_C.UpdateBodyArmor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ABaseItem>       CallFunc_GetActiveBodyArmor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// enum class EArmourCoverage         CallFunc_GetArmorCoverage_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArmourMaterial*             CallFunc_GetActiveArmorMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::UpdateBodyArmor(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveBodyArmor_ReturnValue, enum class EArmourCoverage CallFunc_GetArmorCoverage_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, class UArmourMaterial* CallFunc_GetActiveArmorMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "UpdateBodyArmor");

	Params::UW_Overview_V2_C_UpdateBodyArmor_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetActiveBodyArmor_ReturnValue = CallFunc_GetActiveBodyArmor_ReturnValue;
	Parms.CallFunc_GetArmorCoverage_ReturnValue = CallFunc_GetArmorCoverage_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_GetActiveArmorMaterial_ReturnValue = CallFunc_GetActiveArmorMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.UpdateLongTactical
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ABaseItem>       CallFunc_GetActiveLongTactical_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::UpdateLongTactical(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveLongTactical_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "UpdateLongTactical");

	Params::UW_Overview_V2_C_UpdateLongTactical_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetActiveLongTactical_ReturnValue = CallFunc_GetActiveLongTactical_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.UpdateSecondary
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ABaseWeapon>     CallFunc_GetActiveSecondary_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ABaseWeapon*                 CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::UpdateSecondary(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseWeapon> CallFunc_GetActiveSecondary_ReturnValue, class ABaseWeapon* CallFunc_GetClassDefaultObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "UpdateSecondary");

	Params::UW_Overview_V2_C_UpdateSecondary_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetActiveSecondary_ReturnValue = CallFunc_GetActiveSecondary_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.UpdatePrimary
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ABaseWeapon>     CallFunc_GetActivePrimary_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ABaseWeapon*                 CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::UpdatePrimary(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseWeapon> CallFunc_GetActivePrimary_ReturnValue, class ABaseWeapon* CallFunc_GetClassDefaultObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "UpdatePrimary");

	Params::UW_Overview_V2_C_UpdatePrimary_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetActivePrimary_ReturnValue = CallFunc_GetActivePrimary_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseGamepad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UCommonButtonStyle>Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UCommonButtonStyle>Temp_class_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UCommonButtonStyle>K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::UpdateStyle(bool bUseGamepad, bool Temp_bool_Variable, TSubclassOf<class UCommonButtonStyle> Temp_class_Variable, TSubclassOf<class UCommonButtonStyle> Temp_class_Variable_1, bool Temp_bool_Variable_1, const struct FMargin& Temp_struct_Variable, const struct FMargin& K2Node_MakeStruct_Margin, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, const struct FMargin& K2Node_Select_Default_1, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TSubclassOf<class UCommonButtonStyle> K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "UpdateStyle");

	Params::UW_Overview_V2_C_UpdateStyle_Params Parms{};

	Parms.bUseGamepad = bUseGamepad;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue = CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.RefreshOverviewSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Overview_V2_C::RefreshOverviewSlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "RefreshOverviewSlots");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Overview_V2.W_Overview_V2_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Overview_V2_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BP_GetDesiredFocusTarget");

	Params::UW_Overview_V2_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Overview_V2.W_Overview_V2_C.Update Active Character
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsCurrentPresetDirty_IsDirty                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetActiveSwatMemberLabel_ReturnValue                    (ZeroConstructor, HasGetValueTypeHash)

void UW_Overview_V2_C::Update_Active_Character(bool CallFunc_IsCurrentPresetDirty_IsDirty, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const class FString& CallFunc_GetActiveSwatMemberLabel_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "Update Active Character");

	Params::UW_Overview_V2_C_Update_Active_Character_Params Parms{};

	Parms.CallFunc_IsCurrentPresetDirty_IsDirty = CallFunc_IsCurrentPresetDirty_IsDirty;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_GetActiveSwatMemberLabel_ReturnValue = CallFunc_GetActiveSwatMemberLabel_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.OnCharacterSelectionNext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEquippingSwat          CallFunc_NextActiveSwatMember_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::OnCharacterSelectionNext(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, enum class EEquippingSwat CallFunc_NextActiveSwatMember_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "OnCharacterSelectionNext");

	Params::UW_Overview_V2_C_OnCharacterSelectionNext_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_NextActiveSwatMember_ReturnValue = CallFunc_NextActiveSwatMember_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.OnCharacterSelectionPrevious
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEquippingSwat          CallFunc_PreviousActiveSwatMember_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::OnCharacterSelectionPrevious(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, enum class EEquippingSwat CallFunc_PreviousActiveSwatMember_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "OnCharacterSelectionPrevious");

	Params::UW_Overview_V2_C_OnCharacterSelectionPrevious_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_PreviousActiveSwatMember_ReturnValue = CallFunc_PreviousActiveSwatMember_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature");

	Params::UW_Overview_V2_C_BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Overview_V2_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "SetInputMode");

	Params::UW_Overview_V2_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Overview_V2_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "Hide");

	Params::UW_Overview_V2_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature");

	Params::UW_Overview_V2_C_BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "ChangePage");

	Params::UW_Overview_V2_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Overview_V2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Overview_V2.W_Overview_V2_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "Reveal");

	Params::UW_Overview_V2_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "Tick");

	Params::UW_Overview_V2_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Overview_V2_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_CharacterSelect_Dropdown_K2Node_ComponentBoundEvent_16_OnEquippingUnitSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FST_EquippingUnit           EquippingUnitInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Overview_V2_C::BndEvt__W_Overview_V2_CharacterSelect_Dropdown_K2Node_ComponentBoundEvent_16_OnEquippingUnitSelected__DelegateSignature(const struct FST_EquippingUnit& EquippingUnitInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_CharacterSelect_Dropdown_K2Node_ComponentBoundEvent_16_OnEquippingUnitSelected__DelegateSignature");

	Params::UW_Overview_V2_C_BndEvt__W_Overview_V2_CharacterSelect_Dropdown_K2Node_ComponentBoundEvent_16_OnEquippingUnitSelected__DelegateSignature_Params Parms{};

	Parms.EquippingUnitInfo = EquippingUnitInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::InputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "InputMethodChanged");

	Params::UW_Overview_V2_C_InputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_20_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_20_OnClick__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_20_OnClick__DelegateSignature");

	Params::UW_Overview_V2_C_BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_20_OnClick__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_ArmorOverview_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_ArmorOverviewSlot_C*      TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::BndEvt__W_Overview_V2_ArmorOverview_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UW_ArmorOverviewSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_ArmorOverview_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	Params::UW_Overview_V2_C_BndEvt__W_Overview_V2_ArmorOverview_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_W_MunitionsSlot_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Overview_V2_C::BndEvt__W_Overview_V2_W_MunitionsSlot_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_W_MunitionsSlot_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_btn_TacticalGear_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::BndEvt__W_Overview_V2_btn_TacticalGear_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_btn_TacticalGear_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");

	Params::UW_Overview_V2_C_BndEvt__W_Overview_V2_btn_TacticalGear_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_W_LoadoutSlot_v2_K2Node_ComponentBoundEvent_21_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::BndEvt__W_Overview_V2_W_LoadoutSlot_v2_K2Node_ComponentBoundEvent_21_OnClick__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_W_LoadoutSlot_v2_K2Node_ComponentBoundEvent_21_OnClick__DelegateSignature");

	Params::UW_Overview_V2_C_BndEvt__W_Overview_V2_W_LoadoutSlot_v2_K2Node_ComponentBoundEvent_21_OnClick__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.SetLastHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::SetLastHovered(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "SetLastHovered");

	Params::UW_Overview_V2_C_SetLastHovered_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature");

	Params::UW_Overview_V2_C_BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_6_OnHover__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_6_OnHover__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_6_OnHover__DelegateSignature");

	Params::UW_Overview_V2_C_BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_6_OnHover__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature");

	Params::UW_Overview_V2_C_BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Overview_V2_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_btn_ArmorMunitions_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::BndEvt__W_Overview_V2_btn_ArmorMunitions_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_btn_ArmorMunitions_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature");

	Params::UW_Overview_V2_C_BndEvt__W_Overview_V2_btn_ArmorMunitions_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_12_OnUnhover__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Overview_V2_C::BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_12_OnUnhover__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_12_OnUnhover__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_13_OnUnhover__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Overview_V2_C::BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_13_OnUnhover__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_13_OnUnhover__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_CharacterSelect_Dropdown_K2Node_ComponentBoundEvent_0_OnCarouselNext__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Overview_V2_C::BndEvt__W_Overview_V2_CharacterSelect_Dropdown_K2Node_ComponentBoundEvent_0_OnCarouselNext__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_CharacterSelect_Dropdown_K2Node_ComponentBoundEvent_0_OnCarouselNext__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_CharacterSelect_Dropdown_K2Node_ComponentBoundEvent_7_OnCarouselPrevious__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Overview_V2_C::BndEvt__W_Overview_V2_CharacterSelect_Dropdown_K2Node_ComponentBoundEvent_7_OnCarouselPrevious__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_CharacterSelect_Dropdown_K2Node_ComponentBoundEvent_7_OnCarouselPrevious__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Overview_V2.W_Overview_V2_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Overview_V2_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_11_OnPresetSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      PresetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Overview_V2_C::BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_11_OnPresetSelected__DelegateSignature(const class FString& PresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_11_OnPresetSelected__DelegateSignature");

	Params::UW_Overview_V2_C_BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_11_OnPresetSelected__DelegateSignature_Params Parms{};

	Parms.PresetName = PresetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_14_OnSaveModifiedPresetClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      ModifiedPreset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Overview_V2_C::BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_14_OnSaveModifiedPresetClicked__DelegateSignature(const class FString& ModifiedPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_14_OnSaveModifiedPresetClicked__DelegateSignature");

	Params::UW_Overview_V2_C_BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_14_OnSaveModifiedPresetClicked__DelegateSignature_Params Parms{};

	Parms.ModifiedPreset = ModifiedPreset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_15_OnSaveNewPresetClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Overview_V2_C::BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_15_OnSaveNewPresetClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_15_OnSaveNewPresetClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Overview_V2.W_Overview_V2_C.PresetModified
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PresetDirty                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Overview_V2_C::PresetModified(bool PresetDirty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "PresetModified");

	Params::UW_Overview_V2_C_PresetModified_Params Parms{};

	Parms.PresetDirty = PresetDirty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_17_OnDeletePresetClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      PresetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Overview_V2_C::BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_17_OnDeletePresetClicked__DelegateSignature(const class FString& PresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_17_OnDeletePresetClicked__DelegateSignature");

	Params::UW_Overview_V2_C_BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_17_OnDeletePresetClicked__DelegateSignature_Params Parms{};

	Parms.PresetName = PresetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_18_OnDefaultPresetSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Overview_V2_C::BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_18_OnDefaultPresetSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_18_OnDefaultPresetSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Overview_V2.W_Overview_V2_C.PresetApplied
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSavedLoadout               Loadout                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_Overview_V2_C::PresetApplied(const class FString& Name, struct FSavedLoadout& Loadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "PresetApplied");

	Params::UW_Overview_V2_C_PresetApplied_Params Parms{};

	Parms.Name = Name;
	Parms.Loadout = Loadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_19_OnPresetHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FSavedLoadout               SavedLoadout                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Overview_V2_C::BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_19_OnPresetHovered__DelegateSignature(const struct FSavedLoadout& SavedLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_19_OnPresetHovered__DelegateSignature");

	Params::UW_Overview_V2_C_BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_19_OnPresetHovered__DelegateSignature_Params Parms{};

	Parms.SavedLoadout = SavedLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_22_OnPresetMenuClosed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Overview_V2_C::BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_22_OnPresetMenuClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_22_OnPresetMenuClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_23_OnUnhover__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Overview_V2_C::BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_23_OnUnhover__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_23_OnUnhover__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_Headwear_K2Node_ComponentBoundEvent_24_OnUnhover__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Overview_V2_C::BndEvt__W_Overview_V2_Headwear_K2Node_ComponentBoundEvent_24_OnUnhover__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_Headwear_K2Node_ComponentBoundEvent_24_OnUnhover__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_Headwear_K2Node_ComponentBoundEvent_25_OnHover__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Overview_V2_C::BndEvt__W_Overview_V2_Headwear_K2Node_ComponentBoundEvent_25_OnHover__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "BndEvt__W_Overview_V2_Headwear_K2Node_ComponentBoundEvent_25_OnHover__DelegateSignature");

	Params::UW_Overview_V2_C_BndEvt__W_Overview_V2_Headwear_K2Node_ComponentBoundEvent_25_OnHover__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.ExecuteUbergraph_W_Overview_V2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ULoadoutSlot_V2*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot_8                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot_7                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_EquippingUnit           K2Node_ComponentBoundEvent_EquippingUnitInfo                     (ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCurrentPresetDisplayName_ReturnValue                 (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot_6                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ArmorOverviewSlot_C*      K2Node_ComponentBoundEvent_TriggeringSlot_5                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot_4                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_ChangePage_self_CastInput                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_ChangePage_self_CastInput_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_ChangePage_self_CastInput_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_ChangePage_self_CastInput_3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_5                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_6                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_ChangePage_self_CastInput_4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_ChangePage_self_CastInput_5                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot_3                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot_2                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemClassText_Category_Text                          (None)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ULoadoutSlot_V2*>     CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_7                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_8                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_9                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_PresetName_1                          (ZeroConstructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_10                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_ModifiedPreset                        (ZeroConstructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_11                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_12                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_PresetDirty                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_PresetName                            (ZeroConstructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_13                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Name                                          (ZeroConstructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_CustomEvent_Loadout                                       (ConstParm)
// struct FSavedLoadout               K2Node_ComponentBoundEvent_SavedLoadout                          (None)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_14                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_15                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_16                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemClassText_Category_Text_1                        (None)

void UW_Overview_V2_C::ExecuteUbergraph_W_Overview_V2(int32 EntryPoint, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ULoadoutSlot_V2* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_8, bool K2Node_Event_IsGamepad, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_7, class FName K2Node_Event_PageName, float K2Node_Event_Delay, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FST_EquippingUnit& K2Node_ComponentBoundEvent_EquippingUnitInfo, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_2, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_6, class UW_ArmorOverviewSlot_C* K2Node_ComponentBoundEvent_TriggeringSlot_5, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_4, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2, TScriptInterface<class IReadyOrNotUI_C> CallFunc_ChangePage_self_CastInput, TScriptInterface<class IReadyOrNotUI_C> CallFunc_ChangePage_self_CastInput_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4, TScriptInterface<class IReadyOrNotUI_C> CallFunc_ChangePage_self_CastInput_2, TScriptInterface<class IReadyOrNotUI_C> CallFunc_ChangePage_self_CastInput_3, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_5, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_6, TScriptInterface<class IReadyOrNotUI_C> CallFunc_ChangePage_self_CastInput_4, TScriptInterface<class IReadyOrNotUI_C> CallFunc_ChangePage_self_CastInput_5, class UWidget* K2Node_CustomEvent_Widget, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_3, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_2, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_1, class FText CallFunc_GetItemClassText_Category_Text, class UW_Button_C* K2Node_ComponentBoundEvent_Button, TArray<class ULoadoutSlot_V2*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_7, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_8, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_9, const class FString& K2Node_ComponentBoundEvent_PresetName_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_10, const class FString& K2Node_ComponentBoundEvent_ModifiedPreset, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_11, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_12, bool K2Node_CustomEvent_PresetDirty, const class FString& K2Node_ComponentBoundEvent_PresetName, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_13, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_3, const class FString& K2Node_CustomEvent_Name, const struct FSavedLoadout& K2Node_CustomEvent_Loadout, const struct FSavedLoadout& K2Node_ComponentBoundEvent_SavedLoadout, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_14, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_15, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_16, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot, class FText CallFunc_GetItemClassText_Category_Text_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "ExecuteUbergraph_W_Overview_V2");

	Params::UW_Overview_V2_C_ExecuteUbergraph_W_Overview_V2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot_8 = K2Node_ComponentBoundEvent_TriggeringSlot_8;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot_7 = K2Node_ComponentBoundEvent_TriggeringSlot_7;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_ComponentBoundEvent_EquippingUnitInfo = K2Node_ComponentBoundEvent_EquippingUnitInfo;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_2 = CallFunc_GetReadyOrNotGameState_ReturnValue_2;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_GetCurrentPresetDisplayName_ReturnValue = CallFunc_GetCurrentPresetDisplayName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot_6 = K2Node_ComponentBoundEvent_TriggeringSlot_6;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot_5 = K2Node_ComponentBoundEvent_TriggeringSlot_5;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot_4 = K2Node_ComponentBoundEvent_TriggeringSlot_4;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2;
	Parms.CallFunc_ChangePage_self_CastInput = CallFunc_ChangePage_self_CastInput;
	Parms.CallFunc_ChangePage_self_CastInput_1 = CallFunc_ChangePage_self_CastInput_1;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4;
	Parms.CallFunc_ChangePage_self_CastInput_2 = CallFunc_ChangePage_self_CastInput_2;
	Parms.CallFunc_ChangePage_self_CastInput_3 = CallFunc_ChangePage_self_CastInput_3;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_5 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_5;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_6 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_6;
	Parms.CallFunc_ChangePage_self_CastInput_4 = CallFunc_ChangePage_self_CastInput_4;
	Parms.CallFunc_ChangePage_self_CastInput_5 = CallFunc_ChangePage_self_CastInput_5;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot_3 = K2Node_ComponentBoundEvent_TriggeringSlot_3;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot_2 = K2Node_ComponentBoundEvent_TriggeringSlot_2;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot_1 = K2Node_ComponentBoundEvent_TriggeringSlot_1;
	Parms.CallFunc_GetItemClassText_Category_Text = CallFunc_GetItemClassText_Category_Text;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_7 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_7;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_8 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_8;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_9 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_9;
	Parms.K2Node_ComponentBoundEvent_PresetName_1 = K2Node_ComponentBoundEvent_PresetName_1;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_10 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_10;
	Parms.K2Node_ComponentBoundEvent_ModifiedPreset = K2Node_ComponentBoundEvent_ModifiedPreset;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_11 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_11;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_12 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_12;
	Parms.K2Node_CustomEvent_PresetDirty = K2Node_CustomEvent_PresetDirty;
	Parms.K2Node_ComponentBoundEvent_PresetName = K2Node_ComponentBoundEvent_PresetName;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_13 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_13;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_3 = CallFunc_GetReadyOrNotGameState_ReturnValue_3;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.K2Node_CustomEvent_Loadout = K2Node_CustomEvent_Loadout;
	Parms.K2Node_ComponentBoundEvent_SavedLoadout = K2Node_ComponentBoundEvent_SavedLoadout;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_14 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_14;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_15 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_15;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_16 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_16;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot = K2Node_ComponentBoundEvent_TriggeringSlot;
	Parms.CallFunc_GetItemClassText_Category_Text_1 = CallFunc_GetItemClassText_Category_Text_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Overview_V2.W_Overview_V2_C.CharacterChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Overview_V2_C::CharacterChanged__DelegateSignature(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Overview_V2_C", "CharacterChanged__DelegateSignature");

	Params::UW_Overview_V2_C_CharacterChanged__DelegateSignature_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}

}


