#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C
// (None)

class UClass* UW_Loadout_Page_WeaponEdit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Loadout_Page_WeaponEdit_C");

	return Clss;
}


// W_Loadout_Page_WeaponEdit_C W_Loadout_Page_WeaponEdit.Default__W_Loadout_Page_WeaponEdit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Loadout_Page_WeaponEdit_C* UW_Loadout_Page_WeaponEdit_C::GetDefaultObj()
{
	static class UW_Loadout_Page_WeaponEdit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Loadout_Page_WeaponEdit_C*>(UW_Loadout_Page_WeaponEdit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "GetFocusTarget");

	Params::UW_Loadout_Page_WeaponEdit_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::BackPage(bool* Handled, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "BackPage");

	Params::UW_Loadout_Page_WeaponEdit_C_BackPage_Params Parms{};

	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2;

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.GetWeaponObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABaseWeapon*                 WeaponObject                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::GetWeaponObject(class ABaseWeapon** WeaponObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "GetWeaponObject");

	Params::UW_Loadout_Page_WeaponEdit_C_GetWeaponObject_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WeaponObject != nullptr)
		*WeaponObject = Parms.WeaponObject;

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.InitializeSecondary
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ABaseWeapon>     CallFunc_GetActiveSecondary_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::InitializeSecondary(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseWeapon> CallFunc_GetActiveSecondary_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "InitializeSecondary");

	Params::UW_Loadout_Page_WeaponEdit_C_InitializeSecondary_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetActiveSecondary_ReturnValue = CallFunc_GetActiveSecondary_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.InitializePrimary
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ABaseWeapon>     CallFunc_GetActivePrimary_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::InitializePrimary(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseWeapon> CallFunc_GetActivePrimary_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "InitializePrimary");

	Params::UW_Loadout_Page_WeaponEdit_C_InitializePrimary_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetActivePrimary_ReturnValue = CallFunc_GetActivePrimary_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.CloseAttachmentSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_LoadoutSlot_v2_C*> CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)
// class UW_LoadoutSlot_v2_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_WeaponEdit_C::CloseAttachmentSelect(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetFocusTarget_Focus, TArray<class UW_LoadoutSlot_v2_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, class UW_LoadoutSlot_v2_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "CloseAttachmentSelect");

	Params::UW_Loadout_Page_WeaponEdit_C_CloseAttachmentSelect_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI = K2Node_DynamicCast_AsReady_or_Not_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.CloseWeaponSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_WeaponEdit_C::CloseWeaponSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "CloseWeaponSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UW_Loadout_Page_WeaponEdit_C::BP_GetDesiredFocusTarget(TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI_1, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetFocusTarget_Focus, class UWidget* CallFunc_GetFocusTarget_Focus_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "BP_GetDesiredFocusTarget");

	Params::UW_Loadout_Page_WeaponEdit_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.K2Node_DynamicCast_AsReady_or_Not_UI = K2Node_DynamicCast_AsReady_or_Not_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI_1 = K2Node_DynamicCast_AsReady_or_Not_UI_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;
	Parms.CallFunc_GetFocusTarget_Focus_1 = CallFunc_GetFocusTarget_Focus_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseGamepad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_WeaponEdit_C::UpdateStyle(bool bUseGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "UpdateStyle");

	Params::UW_Loadout_Page_WeaponEdit_C_UpdateStyle_Params Parms{};

	Parms.bUseGamepad = bUseGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.GetCurrentAttachmentByType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWeaponAttachmentType   Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponAttachment*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>CallFunc_GetActivePrimaryAttachmentByType_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>CallFunc_GetActiveSecondaryAttachmentByType_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UWeaponAttachment*           CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWeaponAttachment* UW_Loadout_Page_WeaponEdit_C::GetCurrentAttachmentByType(enum class EWeaponAttachmentType Type, bool Temp_bool_Variable, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class UWeaponAttachment> CallFunc_GetActivePrimaryAttachmentByType_ReturnValue, TSubclassOf<class UWeaponAttachment> CallFunc_GetActiveSecondaryAttachmentByType_ReturnValue, TSubclassOf<class UWeaponAttachment> K2Node_Select_Default, class UWeaponAttachment* CallFunc_GetClassDefaultObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "GetCurrentAttachmentByType");

	Params::UW_Loadout_Page_WeaponEdit_C_GetCurrentAttachmentByType_Params Parms{};

	Parms.Type = Type;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetActivePrimaryAttachmentByType_ReturnValue = CallFunc_GetActivePrimaryAttachmentByType_ReturnValue;
	Parms.CallFunc_GetActiveSecondaryAttachmentByType_ReturnValue = CallFunc_GetActiveSecondaryAttachmentByType_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.GetStoredAttachmentByType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSubclassOf<class ABaseWeapon>     Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponAttachment*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponAttachment*           CallFunc_GetDefaultAttachmentByType_Attachment                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponAttachment*           CallFunc_GetStoredAttachmentByWeaponAndType_ReturnValue          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWeaponAttachment*           K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWeaponAttachment* UW_Loadout_Page_WeaponEdit_C::GetStoredAttachmentByType(TSubclassOf<class ABaseWeapon> Weapon, enum class EWeaponAttachmentType Type, bool Temp_bool_Variable, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class UWeaponAttachment* CallFunc_GetDefaultAttachmentByType_Attachment, class UWeaponAttachment* CallFunc_GetStoredAttachmentByWeaponAndType_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWeaponAttachment* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "GetStoredAttachmentByType");

	Params::UW_Loadout_Page_WeaponEdit_C_GetStoredAttachmentByType_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.Type = Type;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetDefaultAttachmentByType_Attachment = CallFunc_GetDefaultAttachmentByType_Attachment;
	Parms.CallFunc_GetStoredAttachmentByWeaponAndType_ReturnValue = CallFunc_GetStoredAttachmentByWeaponAndType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.InitializeByPageID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_WeaponEdit_C::InitializeByPageID(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "InitializeByPageID");

	Params::UW_Loadout_Page_WeaponEdit_C_InitializeByPageID_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.GetDefaultAttachmentByType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EWeaponAttachmentType   Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponAttachment*           Attachment                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>CallFunc_GetActiveSecondaryAttachmentByType_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>CallFunc_GetActivePrimaryAttachmentByType_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UWeaponAttachment*           CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::GetDefaultAttachmentByType(enum class EWeaponAttachmentType Type, class UWeaponAttachment** Attachment, bool Temp_bool_Variable, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, TSubclassOf<class UWeaponAttachment> CallFunc_GetActiveSecondaryAttachmentByType_ReturnValue, TSubclassOf<class UWeaponAttachment> CallFunc_GetActivePrimaryAttachmentByType_ReturnValue, TSubclassOf<class UWeaponAttachment> K2Node_Select_Default, class UWeaponAttachment* CallFunc_GetClassDefaultObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "GetDefaultAttachmentByType");

	Params::UW_Loadout_Page_WeaponEdit_C_GetDefaultAttachmentByType_Params Parms{};

	Parms.Type = Type;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.CallFunc_GetActiveSecondaryAttachmentByType_ReturnValue = CallFunc_GetActiveSecondaryAttachmentByType_ReturnValue;
	Parms.CallFunc_GetActivePrimaryAttachmentByType_ReturnValue = CallFunc_GetActivePrimaryAttachmentByType_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Attachment != nullptr)
		*Attachment = Parms.Attachment;

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.PopulateAttachmentCategories
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         NewSlot                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   Type                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_v2_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UWeaponAttachment*           CallFunc_GetCurrentAttachmentByType_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAttachmentSlotText_SlotText                          (None)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EWeaponAttachmentType>CallFunc_GetAvailableAttachmentTypesByWeapon_ReturnValue         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_WeaponEdit_C::PopulateAttachmentCategories(class UW_LoadoutSlot_v2_C* NewSlot, enum class EWeaponAttachmentType Type, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UW_LoadoutSlot_v2_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UWeaponAttachment* CallFunc_GetCurrentAttachmentByType_ReturnValue, class FText CallFunc_GetAttachmentSlotText_SlotText, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TArray<enum class EWeaponAttachmentType>& CallFunc_GetAvailableAttachmentTypesByWeapon_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, enum class EWeaponAttachmentType CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "PopulateAttachmentCategories");

	Params::UW_Loadout_Page_WeaponEdit_C_PopulateAttachmentCategories_Params Parms{};

	Parms.NewSlot = NewSlot;
	Parms.Type = Type;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetCurrentAttachmentByType_ReturnValue = CallFunc_GetCurrentAttachmentByType_ReturnValue;
	Parms.CallFunc_GetAttachmentSlotText_SlotText = CallFunc_GetAttachmentSlotText_SlotText;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetAvailableAttachmentTypesByWeapon_ReturnValue = CallFunc_GetAvailableAttachmentTypesByWeapon_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.GetWeaponImage
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetSecondaryWeaponImage_ReturnValue                     (UObjectWrapper, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetPrimaryWeaponImage_ReturnValue                       (UObjectWrapper, HasGetValueTypeHash)

TSoftObjectPtr<class UTexture2D> UW_Loadout_Page_WeaponEdit_C::GetWeaponImage(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSecondaryWeaponImage_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetPrimaryWeaponImage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "GetWeaponImage");

	Params::UW_Loadout_Page_WeaponEdit_C_GetWeaponImage_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetSecondaryWeaponImage_ReturnValue = CallFunc_GetSecondaryWeaponImage_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.CallFunc_GetPrimaryWeaponImage_ReturnValue = CallFunc_GetPrimaryWeaponImage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.BndEvt__W_Loadout_Page_WeaponEdit_AttachmentList_K2Node_ComponentBoundEvent_0_OnAttachmentHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWeaponAttachment*           Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   AttachmentType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::BndEvt__W_Loadout_Page_WeaponEdit_AttachmentList_K2Node_ComponentBoundEvent_0_OnAttachmentHovered__DelegateSignature(class UWeaponAttachment* Attachment, enum class EWeaponAttachmentType AttachmentType, class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "BndEvt__W_Loadout_Page_WeaponEdit_AttachmentList_K2Node_ComponentBoundEvent_0_OnAttachmentHovered__DelegateSignature");

	Params::UW_Loadout_Page_WeaponEdit_C_BndEvt__W_Loadout_Page_WeaponEdit_AttachmentList_K2Node_ComponentBoundEvent_0_OnAttachmentHovered__DelegateSignature_Params Parms{};

	Parms.Attachment = Attachment;
	Parms.AttachmentType = AttachmentType;
	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.BndEvt__W_Loadout_Page_WeaponEdit_AttachmentList_K2Node_ComponentBoundEvent_1_OnAttachmentUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_Page_WeaponEdit_C::BndEvt__W_Loadout_Page_WeaponEdit_AttachmentList_K2Node_ComponentBoundEvent_1_OnAttachmentUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "BndEvt__W_Loadout_Page_WeaponEdit_AttachmentList_K2Node_ComponentBoundEvent_1_OnAttachmentUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.BndEvt__W_Loadout_Page_WeaponEdit_AttachmentList_K2Node_ComponentBoundEvent_2_OnAttachmentClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TSubclassOf<class UWeaponAttachment>AttachmentClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   AttachmentType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::BndEvt__W_Loadout_Page_WeaponEdit_AttachmentList_K2Node_ComponentBoundEvent_2_OnAttachmentClicked__DelegateSignature(TSubclassOf<class UWeaponAttachment> AttachmentClass, enum class EWeaponAttachmentType AttachmentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "BndEvt__W_Loadout_Page_WeaponEdit_AttachmentList_K2Node_ComponentBoundEvent_2_OnAttachmentClicked__DelegateSignature");

	Params::UW_Loadout_Page_WeaponEdit_C_BndEvt__W_Loadout_Page_WeaponEdit_AttachmentList_K2Node_ComponentBoundEvent_2_OnAttachmentClicked__DelegateSignature_Params Parms{};

	Parms.AttachmentClass = AttachmentClass;
	Parms.AttachmentType = AttachmentType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.AttachmentCategoryUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_WeaponEdit_C::AttachmentCategoryUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "AttachmentCategoryUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.AttachmentCategoryHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::AttachmentCategoryHovered(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "AttachmentCategoryHovered");

	Params::UW_Loadout_Page_WeaponEdit_C_AttachmentCategoryHovered_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.AttachmentCategoryClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::AttachmentCategoryClicked(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "AttachmentCategoryClicked");

	Params::UW_Loadout_Page_WeaponEdit_C_AttachmentCategoryClicked_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.BndEvt__W_Loadout_Page_WeaponEdit_CurrentWeapon_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::BndEvt__W_Loadout_Page_WeaponEdit_CurrentWeapon_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "BndEvt__W_Loadout_Page_WeaponEdit_CurrentWeapon_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");

	Params::UW_Loadout_Page_WeaponEdit_C_BndEvt__W_Loadout_Page_WeaponEdit_CurrentWeapon_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_4_OnWeaponHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABaseWeapon*                 Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_4_OnWeaponHovered__DelegateSignature(class ABaseWeapon* Weapon, class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_4_OnWeaponHovered__DelegateSignature");

	Params::UW_Loadout_Page_WeaponEdit_C_BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_4_OnWeaponHovered__DelegateSignature_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_5_OnWeaponUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_Page_WeaponEdit_C::BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_5_OnWeaponUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_5_OnWeaponUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_6_OnWeaponClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TSubclassOf<class ABaseWeapon>     Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_6_OnWeaponClicked__DelegateSignature(TSubclassOf<class ABaseWeapon> Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_6_OnWeaponClicked__DelegateSignature");

	Params::UW_Loadout_Page_WeaponEdit_C_BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_6_OnWeaponClicked__DelegateSignature_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.InitializeWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Secondary                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::InitializeWeapon(bool Secondary, class UClass* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "InitializeWeapon");

	Params::UW_Loadout_Page_WeaponEdit_C_InitializeWeapon_Params Parms{};

	Parms.Secondary = Secondary;
	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_WeaponEdit_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_WeaponEdit_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "HeaderSubpageNavigation");

	Params::UW_Loadout_Page_WeaponEdit_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.SetLoadoutWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_C*                LoadoutWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "SetLoadoutWidget");

	Params::UW_Loadout_Page_WeaponEdit_C_SetLoadoutWidget_Params Parms{};

	Parms.LoadoutWidget = LoadoutWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Page_WeaponEdit_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "UpdateCurrentItemMap");

	Params::UW_Loadout_Page_WeaponEdit_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.UpdateCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "UpdateCurrentSlot");

	Params::UW_Loadout_Page_WeaponEdit_C_UpdateCurrentSlot_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Page_WeaponEdit_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "UpdateActiveLoadout");

	Params::UW_Loadout_Page_WeaponEdit_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_WeaponEdit_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "SetInputMode");

	Params::UW_Loadout_Page_WeaponEdit_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::InputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "InputMethodChanged");

	Params::UW_Loadout_Page_WeaponEdit_C_InputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.BndEvt__W_Loadout_Page_WeaponEdit_CurrentWeapon_K2Node_ComponentBoundEvent_7_OnHover__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::BndEvt__W_Loadout_Page_WeaponEdit_CurrentWeapon_K2Node_ComponentBoundEvent_7_OnHover__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "BndEvt__W_Loadout_Page_WeaponEdit_CurrentWeapon_K2Node_ComponentBoundEvent_7_OnHover__DelegateSignature");

	Params::UW_Loadout_Page_WeaponEdit_C_BndEvt__W_Loadout_Page_WeaponEdit_CurrentWeapon_K2Node_ComponentBoundEvent_7_OnHover__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_WeaponEdit_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "Hide");

	Params::UW_Loadout_Page_WeaponEdit_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "Reveal");

	Params::UW_Loadout_Page_WeaponEdit_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "ChangePage");

	Params::UW_Loadout_Page_WeaponEdit_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.ExecuteUbergraph_W_Loadout_Page_WeaponEdit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponAttachment*           K2Node_ComponentBoundEvent_Attachment                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   K2Node_ComponentBoundEvent_AttachmentType_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot_3                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>K2Node_ComponentBoundEvent_AttachmentClass                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   K2Node_ComponentBoundEvent_AttachmentType                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_CustomEvent_TriggeringSlot_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_CustomEvent_TriggeringSlot                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot_2                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseWeapon*                 K2Node_ComponentBoundEvent_Weapon_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class ABaseWeapon>     K2Node_ComponentBoundEvent_Weapon                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// enum class EItemType               CallFunc_GetItemType_Item_Type                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSubclassOf<class UWeaponAttachment>>CallFunc_GetAttachmentByWeaponAndType_ReturnValue                (ReferenceParm)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Secondary                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_Weapon                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_C*                K2Node_Event_LoadoutWidget                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// class UW_LoadoutSlot_C*            K2Node_Event_CurrentSlot                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_GetAttachmentSlotText_SlotText                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseWeapon*                 CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::ExecuteUbergraph_W_Loadout_Page_WeaponEdit(int32 EntryPoint, class UWeaponAttachment* K2Node_ComponentBoundEvent_Attachment, enum class EWeaponAttachmentType K2Node_ComponentBoundEvent_AttachmentType_1, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_3, TSubclassOf<class UWeaponAttachment> K2Node_ComponentBoundEvent_AttachmentClass, enum class EWeaponAttachmentType K2Node_ComponentBoundEvent_AttachmentType, class UW_LoadoutSlot_v2_C* K2Node_CustomEvent_TriggeringSlot_1, class UW_LoadoutSlot_v2_C* K2Node_CustomEvent_TriggeringSlot, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 Temp_int_Array_Index_Variable, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_2, class ABaseWeapon* K2Node_ComponentBoundEvent_Weapon_1, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_1, TSubclassOf<class ABaseWeapon> K2Node_ComponentBoundEvent_Weapon, enum class EItemType CallFunc_GetItemType_Item_Type, bool CallFunc_NotEqual_ByteByte_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, TArray<TSubclassOf<class UWeaponAttachment>>& CallFunc_GetAttachmentByWeaponAndType_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_Secondary, class UClass* K2Node_CustomEvent_Weapon, class UWidget* CallFunc_GetFocusTarget_Focus, class FName K2Node_Event_OptionNameID, class UW_Loadout_C* K2Node_Event_LoadoutWidget, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, bool K2Node_Event_IsGamepad, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, float K2Node_Event_Delay, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetAttachmentSlotText_SlotText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class FText CallFunc_Format_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI_1, bool K2Node_DynamicCast_bSuccess_1, class ABaseWeapon* CallFunc_GetClassDefaultObject_ReturnValue, class UWidget* CallFunc_GetFocusTarget_Focus_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2, class FName K2Node_Event_PageName, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "ExecuteUbergraph_W_Loadout_Page_WeaponEdit");

	Params::UW_Loadout_Page_WeaponEdit_C_ExecuteUbergraph_W_Loadout_Page_WeaponEdit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Attachment = K2Node_ComponentBoundEvent_Attachment;
	Parms.K2Node_ComponentBoundEvent_AttachmentType_1 = K2Node_ComponentBoundEvent_AttachmentType_1;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot_3 = K2Node_ComponentBoundEvent_TriggeringSlot_3;
	Parms.K2Node_ComponentBoundEvent_AttachmentClass = K2Node_ComponentBoundEvent_AttachmentClass;
	Parms.K2Node_ComponentBoundEvent_AttachmentType = K2Node_ComponentBoundEvent_AttachmentType;
	Parms.K2Node_CustomEvent_TriggeringSlot_1 = K2Node_CustomEvent_TriggeringSlot_1;
	Parms.K2Node_CustomEvent_TriggeringSlot = K2Node_CustomEvent_TriggeringSlot;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot_2 = K2Node_ComponentBoundEvent_TriggeringSlot_2;
	Parms.K2Node_ComponentBoundEvent_Weapon_1 = K2Node_ComponentBoundEvent_Weapon_1;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot_1 = K2Node_ComponentBoundEvent_TriggeringSlot_1;
	Parms.K2Node_ComponentBoundEvent_Weapon = K2Node_ComponentBoundEvent_Weapon;
	Parms.CallFunc_GetItemType_Item_Type = CallFunc_GetItemType_Item_Type;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.CallFunc_GetAttachmentByWeaponAndType_ReturnValue = CallFunc_GetAttachmentByWeaponAndType_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI = K2Node_DynamicCast_AsReady_or_Not_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Secondary = K2Node_CustomEvent_Secondary;
	Parms.K2Node_CustomEvent_Weapon = K2Node_CustomEvent_Weapon;
	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.K2Node_Event_LoadoutWidget = K2Node_Event_LoadoutWidget;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.K2Node_Event_CurrentSlot = K2Node_Event_CurrentSlot;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot = K2Node_ComponentBoundEvent_TriggeringSlot;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAttachmentSlotText_SlotText = CallFunc_GetAttachmentSlotText_SlotText;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI_1 = K2Node_DynamicCast_AsReady_or_Not_UI_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_GetFocusTarget_Focus_1 = CallFunc_GetFocusTarget_Focus_1;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.OnCurrentWeaponClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Secondary                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemClass              ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::OnCurrentWeaponClicked__DelegateSignature(bool Secondary, enum class EItemClass ItemClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "OnCurrentWeaponClicked__DelegateSignature");

	Params::UW_Loadout_Page_WeaponEdit_C_OnCurrentWeaponClicked__DelegateSignature_Params Parms{};

	Parms.Secondary = Secondary;
	Parms.ItemClass = ItemClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.OnAttachmentClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      AttachmentClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   AttachmentType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::OnAttachmentClicked__DelegateSignature(class UClass* AttachmentClass, enum class EWeaponAttachmentType AttachmentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "OnAttachmentClicked__DelegateSignature");

	Params::UW_Loadout_Page_WeaponEdit_C_OnAttachmentClicked__DelegateSignature_Params Parms{};

	Parms.AttachmentClass = AttachmentClass;
	Parms.AttachmentType = AttachmentType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.OnAttachmentUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_WeaponEdit_C::OnAttachmentUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "OnAttachmentUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.OnAttachmentHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWeaponAttachment*           Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   AttachmentType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_WeaponEdit_C::OnAttachmentHovered__DelegateSignature(class UWeaponAttachment* Attachment, enum class EWeaponAttachmentType AttachmentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_WeaponEdit_C", "OnAttachmentHovered__DelegateSignature");

	Params::UW_Loadout_Page_WeaponEdit_C_OnAttachmentHovered__DelegateSignature_Params Parms{};

	Parms.Attachment = Attachment;
	Parms.AttachmentType = AttachmentType;

	UObject::ProcessEvent(Func, &Parms);

}

}


