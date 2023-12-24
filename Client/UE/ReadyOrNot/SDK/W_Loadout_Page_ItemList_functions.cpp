#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C
// (None)

class UClass* UW_Loadout_Page_ItemList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Loadout_Page_ItemList_C");

	return Clss;
}


// W_Loadout_Page_ItemList_C W_Loadout_Page_ItemList.Default__W_Loadout_Page_ItemList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Loadout_Page_ItemList_C* UW_Loadout_Page_ItemList_C::GetDefaultObj()
{
	static class UW_Loadout_Page_ItemList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Loadout_Page_ItemList_C*>(UW_Loadout_Page_ItemList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_v2_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetFocusTarget_Focus_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_ItemList_C::GetFocusTarget(class UWidget** Focus, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, class UW_LoadoutSlot_v2_C* CallFunc_Array_Get_Item, class UWidget* CallFunc_GetFocusTarget_Focus, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI_1, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetFocusTarget_Focus_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "GetFocusTarget");

	Params::UW_Loadout_Page_ItemList_C_GetFocusTarget_Params Parms{};

	Parms.K2Node_DynamicCast_AsReady_or_Not_UI = K2Node_DynamicCast_AsReady_or_Not_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI_1 = K2Node_DynamicCast_AsReady_or_Not_UI_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetFocusTarget_Focus_1 = CallFunc_GetFocusTarget_Focus_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_ItemList_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "BackPage");

	Params::UW_Loadout_Page_ItemList_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.RefreshListItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_LoadoutSlot_v2_C*> CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckItemEquipped_IsEquipped                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_ItemList_C::RefreshListItems(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UW_LoadoutSlot_v2_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, int32 CallFunc_Array_Length_ReturnValue, class UW_LoadoutSlot_v2_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_CheckItemEquipped_IsEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "RefreshListItems");

	Params::UW_Loadout_Page_ItemList_C_RefreshListItems_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CheckItemEquipped_IsEquipped = CallFunc_CheckItemEquipped_IsEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Loadout_Page_ItemList_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "BP_GetDesiredFocusTarget");

	Params::UW_Loadout_Page_ItemList_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.GetFirst
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Loadout_Page_ItemList_C::GetFirst(bool* Valid, bool CallFunc_HasAnyChildren_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "GetFirst");

	Params::UW_Loadout_Page_ItemList_C_GetFirst_Params Parms{};

	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

	return Parms.ReturnValue;

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.RefreshAttachments
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_LoadoutSlot_v2_C*> CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UWeaponAttachment>CallFunc_GetAttachmentClass_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_CheckIfEquippedAttachment_IsEquipped                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_ItemList_C::RefreshAttachments(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UW_LoadoutSlot_v2_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, int32 CallFunc_Array_Length_ReturnValue, class UW_LoadoutSlot_v2_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TSubclassOf<class UWeaponAttachment> CallFunc_GetAttachmentClass_ReturnValue, bool CallFunc_CheckIfEquippedAttachment_IsEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "RefreshAttachments");

	Params::UW_Loadout_Page_ItemList_C_RefreshAttachments_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAttachmentClass_ReturnValue = CallFunc_GetAttachmentClass_ReturnValue;
	Parms.CallFunc_CheckIfEquippedAttachment_IsEquipped = CallFunc_CheckIfEquippedAttachment_IsEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_ItemList_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "Clear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.CheckIfEquippedAttachment
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Secondary                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEquipped                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseItem*                   Weapon                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>CallFunc_GetActivePrimaryAttachmentByType_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UWeaponAttachment>CallFunc_GetActiveSecondaryAttachmentByType_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_ItemList_C::CheckIfEquippedAttachment(bool Secondary, class UClass* Attachment, bool* IsEquipped, class ABaseItem* Weapon, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, TSubclassOf<class UWeaponAttachment> CallFunc_GetActivePrimaryAttachmentByType_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, TSubclassOf<class UWeaponAttachment> CallFunc_GetActiveSecondaryAttachmentByType_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "CheckIfEquippedAttachment");

	Params::UW_Loadout_Page_ItemList_C_CheckIfEquippedAttachment_Params Parms{};

	Parms.Secondary = Secondary;
	Parms.Attachment = Attachment;
	Parms.Weapon = Weapon;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.CallFunc_GetActivePrimaryAttachmentByType_ReturnValue = CallFunc_GetActivePrimaryAttachmentByType_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetActiveSecondaryAttachmentByType_ReturnValue = CallFunc_GetActiveSecondaryAttachmentByType_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEquipped != nullptr)
		*IsEquipped = Parms.IsEquipped;

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.AddAttachmentItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWeaponAttachmentType   AttachmentType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Secondary                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_v2_C*         CurrentSlotWidget                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponAttachment*           CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckIfEquippedAttachment_IsEquipped                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)

void UW_Loadout_Page_ItemList_C::AddAttachmentItem(enum class EWeaponAttachmentType AttachmentType, class UClass* Attachment, bool Secondary, class UW_LoadoutSlot_v2_C* CurrentSlotWidget, int32 CallFunc_Array_Add_ReturnValue, class UW_LoadoutSlot_v2_C* CallFunc_Create_ReturnValue, class UWeaponAttachment* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_CheckIfEquippedAttachment_IsEquipped, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "AddAttachmentItem");

	Params::UW_Loadout_Page_ItemList_C_AddAttachmentItem_Params Parms{};

	Parms.AttachmentType = AttachmentType;
	Parms.Attachment = Attachment;
	Parms.Secondary = Secondary;
	Parms.CurrentSlotWidget = CurrentSlotWidget;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_CheckIfEquippedAttachment_IsEquipped = CallFunc_CheckIfEquippedAttachment_IsEquipped;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.GetWeaponImage
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABaseItem*                   NewItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash)
// class ABaseItem*                   Weapon                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLongTacticalItemImage_ReturnValue                    (UObjectWrapper, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetSecondaryWeaponImage_ReturnValue                     (UObjectWrapper, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetPrimaryWeaponImage_ReturnValue                       (UObjectWrapper, HasGetValueTypeHash)

TSoftObjectPtr<class UTexture2D> UW_Loadout_Page_ItemList_C::GetWeaponImage(class ABaseItem* NewItem, class ABaseItem* Weapon, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetLongTacticalItemImage_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetSecondaryWeaponImage_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, TSoftObjectPtr<class UTexture2D> CallFunc_GetPrimaryWeaponImage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "GetWeaponImage");

	Params::UW_Loadout_Page_ItemList_C_GetWeaponImage_Params Parms{};

	Parms.NewItem = NewItem;
	Parms.Weapon = Weapon;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetLongTacticalItemImage_ReturnValue = CallFunc_GetLongTacticalItemImage_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetSecondaryWeaponImage_ReturnValue = CallFunc_GetSecondaryWeaponImage_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_2 = CallFunc_GetReadyOrNotGameState_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_GetPrimaryWeaponImage_ReturnValue = CallFunc_GetPrimaryWeaponImage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.AddItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseItem*                   BaseItem                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         CurrentLoadoutSlot                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CurrentItem                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckItemEquipped_IsEquipped                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_v2_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)

void UW_Loadout_Page_ItemList_C::AddItem(class ABaseItem* BaseItem, class UW_LoadoutSlot_v2_C* CurrentLoadoutSlot, class ABaseItem* CurrentItem, bool CallFunc_CheckItemEquipped_IsEquipped, class UW_LoadoutSlot_v2_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "AddItem");

	Params::UW_Loadout_Page_ItemList_C_AddItem_Params Parms{};

	Parms.BaseItem = BaseItem;
	Parms.CurrentLoadoutSlot = CurrentLoadoutSlot;
	Parms.CurrentItem = CurrentItem;
	Parms.CallFunc_CheckItemEquipped_IsEquipped = CallFunc_CheckItemEquipped_IsEquipped;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.CheckItemEquipped
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABaseItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEquipped                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ABaseWeapon>     CallFunc_GetActivePrimary_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class ABaseItem>       CallFunc_GetActiveHeadwear_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class ABaseItem>       CallFunc_GetActiveBodyArmor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class ABaseItem>       CallFunc_GetActiveLongTactical_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class ABaseWeapon>     CallFunc_GetActiveSecondary_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<class UClass*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_ItemList_C::CheckItemEquipped(class ABaseItem* Item, bool* IsEquipped, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, TSubclassOf<class ABaseWeapon> CallFunc_GetActivePrimary_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveHeadwear_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveBodyArmor_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveLongTactical_ReturnValue, TSubclassOf<class ABaseWeapon> CallFunc_GetActiveSecondary_ReturnValue, TArray<class UClass*>& K2Node_MakeArray_Array, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "CheckItemEquipped");

	Params::UW_Loadout_Page_ItemList_C_CheckItemEquipped_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetActivePrimary_ReturnValue = CallFunc_GetActivePrimary_ReturnValue;
	Parms.CallFunc_GetActiveHeadwear_ReturnValue = CallFunc_GetActiveHeadwear_ReturnValue;
	Parms.CallFunc_GetActiveBodyArmor_ReturnValue = CallFunc_GetActiveBodyArmor_ReturnValue;
	Parms.CallFunc_GetActiveLongTactical_ReturnValue = CallFunc_GetActiveLongTactical_ReturnValue;
	Parms.CallFunc_GetActiveSecondary_ReturnValue = CallFunc_GetActiveSecondary_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEquipped != nullptr)
		*IsEquipped = Parms.IsEquipped;

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ItemList_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "Reveal");

	Params::UW_Loadout_Page_ItemList_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_ItemList_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "Hide");

	Params::UW_Loadout_Page_ItemList_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_ItemList_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "SetInputMode");

	Params::UW_Loadout_Page_ItemList_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ItemList_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "ChangePage");

	Params::UW_Loadout_Page_ItemList_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Page_ItemList_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "UpdateActiveLoadout");

	Params::UW_Loadout_Page_ItemList_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.UpdateCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ItemList_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "UpdateCurrentSlot");

	Params::UW_Loadout_Page_ItemList_C_UpdateCurrentSlot_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Page_ItemList_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "UpdateCurrentItemMap");

	Params::UW_Loadout_Page_ItemList_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.SetLoadoutWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_C*                LoadoutWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ItemList_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "SetLoadoutWidget");

	Params::UW_Loadout_Page_ItemList_C_SetLoadoutWidget_Params Parms{};

	Parms.LoadoutWidget = LoadoutWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ItemList_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "HeaderSubpageNavigation");

	Params::UW_Loadout_Page_ItemList_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_ItemList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.ItemHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ItemList_C::ItemHovered(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "ItemHovered");

	Params::UW_Loadout_Page_ItemList_C_ItemHovered_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.ItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ItemList_C::ItemClicked(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "ItemClicked");

	Params::UW_Loadout_Page_ItemList_C_ItemClicked_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.ItemUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_ItemList_C::ItemUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "ItemUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.AttachmentClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ItemList_C::AttachmentClicked(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "AttachmentClicked");

	Params::UW_Loadout_Page_ItemList_C_AttachmentClicked_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.AttachmentHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ItemList_C::AttachmentHovered(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "AttachmentHovered");

	Params::UW_Loadout_Page_ItemList_C_AttachmentHovered_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.AttachmentUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_ItemList_C::AttachmentUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "AttachmentUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.InitializeWeapons
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELoadoutCategory        LoadoutCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemClass              ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFilterByItemClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_ItemList_C::InitializeWeapons(enum class ELoadoutCategory LoadoutCategory, enum class EItemClass ItemClass, bool bFilterByItemClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "InitializeWeapons");

	Params::UW_Loadout_Page_ItemList_C_InitializeWeapons_Params Parms{};

	Parms.LoadoutCategory = LoadoutCategory;
	Parms.ItemClass = ItemClass;
	Parms.bFilterByItemClass = bFilterByItemClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.InitializeHeadwear
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_ItemList_C::InitializeHeadwear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "InitializeHeadwear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_ItemList_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ItemList_C::InputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "InputMethodChanged");

	Params::UW_Loadout_Page_ItemList_C_InputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.ExecuteUbergraph_W_Loadout_Page_ItemList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// class UW_LoadoutSlot_C*            K2Node_Event_CurrentSlot                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// class UW_Loadout_C*                K2Node_Event_LoadoutWidget                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_CustomEvent_TriggeringSlot_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_CustomEvent_TriggeringSlot_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseWeapon*                 K2Node_DynamicCast_AsBase_Weapon                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBase_Magazine_Weapon                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_v2_C*         K2Node_CustomEvent_TriggeringSlot_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_CustomEvent_TriggeringSlot                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>CallFunc_GetAttachmentClass_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// enum class ELoadoutCategory        K2Node_CustomEvent_LoadoutCategory                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemClass              K2Node_CustomEvent_ItemClass                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bFilterByItemClass                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABaseItem*>           CallFunc_GetItemsByLoadoutCategory_ReturnValue                   (ReferenceParm)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABaseItem*>           CallFunc_GetHeadwears_ReturnValue                                (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_LoadoutSlot_v2_C*> CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)
// TArray<class UW_LoadoutSlot_v2_C*> CallFunc_WidgetGetChildrenOfClass_ChildWidgets_1                 (ReferenceParm, ContainsInstancedReference)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Page_ItemList_C::ExecuteUbergraph_W_Loadout_Page_ItemList(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class FName K2Node_Event_OptionNameID, class UW_LoadoutSlot_v2_C* K2Node_CustomEvent_TriggeringSlot_3, class UW_LoadoutSlot_v2_C* K2Node_CustomEvent_TriggeringSlot_2, class ABaseWeapon* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBase_Magazine_Weapon, bool K2Node_ClassDynamicCast_bSuccess, class UW_LoadoutSlot_v2_C* K2Node_CustomEvent_TriggeringSlot_1, class UW_LoadoutSlot_v2_C* K2Node_CustomEvent_TriggeringSlot, TSubclassOf<class UWeaponAttachment> CallFunc_GetAttachmentClass_ReturnValue, enum class ELoadoutCategory K2Node_CustomEvent_LoadoutCategory, enum class EItemClass K2Node_CustomEvent_ItemClass, bool K2Node_CustomEvent_bFilterByItemClass, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TArray<class ABaseItem*>& CallFunc_GetItemsByLoadoutCategory_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, TArray<class ABaseItem*>& CallFunc_GetHeadwears_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class ABaseItem* CallFunc_Array_Get_Item, class ABaseItem* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* CallFunc_GetFocusTarget_Focus, TArray<class UW_LoadoutSlot_v2_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, TArray<class UW_LoadoutSlot_v2_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets_1, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, int32 Temp_int_Loop_Counter_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "ExecuteUbergraph_W_Loadout_Page_ItemList");

	Params::UW_Loadout_Page_ItemList_C_ExecuteUbergraph_W_Loadout_Page_ItemList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.K2Node_Event_CurrentSlot = K2Node_Event_CurrentSlot;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.K2Node_Event_LoadoutWidget = K2Node_Event_LoadoutWidget;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.K2Node_CustomEvent_TriggeringSlot_3 = K2Node_CustomEvent_TriggeringSlot_3;
	Parms.K2Node_CustomEvent_TriggeringSlot_2 = K2Node_CustomEvent_TriggeringSlot_2;
	Parms.K2Node_DynamicCast_AsBase_Weapon = K2Node_DynamicCast_AsBase_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsBase_Magazine_Weapon = K2Node_ClassDynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_TriggeringSlot_1 = K2Node_CustomEvent_TriggeringSlot_1;
	Parms.K2Node_CustomEvent_TriggeringSlot = K2Node_CustomEvent_TriggeringSlot;
	Parms.CallFunc_GetAttachmentClass_ReturnValue = CallFunc_GetAttachmentClass_ReturnValue;
	Parms.K2Node_CustomEvent_LoadoutCategory = K2Node_CustomEvent_LoadoutCategory;
	Parms.K2Node_CustomEvent_ItemClass = K2Node_CustomEvent_ItemClass;
	Parms.K2Node_CustomEvent_bFilterByItemClass = K2Node_CustomEvent_bFilterByItemClass;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetItemsByLoadoutCategory_ReturnValue = CallFunc_GetItemsByLoadoutCategory_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetHeadwears_ReturnValue = CallFunc_GetHeadwears_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets_1 = CallFunc_WidgetGetChildrenOfClass_ChildWidgets_1;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.OnSlotClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ItemList_C::OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "OnSlotClicked__DelegateSignature");

	Params::UW_Loadout_Page_ItemList_C_OnSlotClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.OnSlotUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_ItemList_C::OnSlotUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "OnSlotUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.OnSlotHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ItemList_C::OnSlotHovered__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "OnSlotHovered__DelegateSignature");

	Params::UW_Loadout_Page_ItemList_C_OnSlotHovered__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.OnWeaponClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class ABaseWeapon>     Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UW_Loadout_Page_ItemList_C::OnWeaponClicked__DelegateSignature(TSubclassOf<class ABaseWeapon> Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "OnWeaponClicked__DelegateSignature");

	Params::UW_Loadout_Page_ItemList_C_OnWeaponClicked__DelegateSignature_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.OnWeaponUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_ItemList_C::OnWeaponUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "OnWeaponUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.OnWeaponHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseWeapon*                 Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UW_Loadout_Page_ItemList_C::OnWeaponHovered__DelegateSignature(class ABaseWeapon* Weapon, class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "OnWeaponHovered__DelegateSignature");

	Params::UW_Loadout_Page_ItemList_C_OnWeaponHovered__DelegateSignature_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.OnAttachmentClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UWeaponAttachment>AttachmentClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   AttachmentType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_ItemList_C::OnAttachmentClicked__DelegateSignature(TSubclassOf<class UWeaponAttachment> AttachmentClass, enum class EWeaponAttachmentType AttachmentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "OnAttachmentClicked__DelegateSignature");

	Params::UW_Loadout_Page_ItemList_C_OnAttachmentClicked__DelegateSignature_Params Parms{};

	Parms.AttachmentClass = AttachmentClass;
	Parms.AttachmentType = AttachmentType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.OnAttachmentUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_ItemList_C::OnAttachmentUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "OnAttachmentUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_ItemList.W_Loadout_Page_ItemList_C.OnAttachmentHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWeaponAttachment*           Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   AttachmentType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UW_Loadout_Page_ItemList_C::OnAttachmentHovered__DelegateSignature(class UWeaponAttachment* Attachment, enum class EWeaponAttachmentType AttachmentType, class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_ItemList_C", "OnAttachmentHovered__DelegateSignature");

	Params::UW_Loadout_Page_ItemList_C_OnAttachmentHovered__DelegateSignature_Params Parms{};

	Parms.Attachment = Attachment;
	Parms.AttachmentType = AttachmentType;
	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}

}


