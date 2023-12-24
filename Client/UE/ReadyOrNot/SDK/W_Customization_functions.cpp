#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Customization.W_Customization_C
// (None)

class UClass* UW_Customization_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Customization_C");

	return Clss;
}


// W_Customization_C W_Customization.Default__W_Customization_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Customization_C* UW_Customization_C::GetDefaultObj()
{
	static class UW_Customization_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Customization_C*>(UW_Customization_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Customization.W_Customization_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_GetFocusTarget_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetFocusTarget_Focus_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_C::GetFocusTarget(class UWidget** Focus, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetFocusTarget_Focus, TScriptInterface<class IReadyOrNotUI_C> CallFunc_GetFocusTarget_self_CastInput, class UWidget* CallFunc_GetFocusTarget_Focus_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "GetFocusTarget");

	Params::UW_Customization_C_GetFocusTarget_Params Parms{};

	Parms.K2Node_DynamicCast_AsReady_or_Not_UI = K2Node_DynamicCast_AsReady_or_Not_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;
	Parms.CallFunc_GetFocusTarget_self_CastInput = CallFunc_GetFocusTarget_self_CastInput;
	Parms.CallFunc_GetFocusTarget_Focus_1 = CallFunc_GetFocusTarget_Focus_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Customization.W_Customization_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BackPage");

	Params::UW_Customization_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Customization.W_Customization_C.GroupItemFamily
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ULoadoutCustomization*       InItem                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ULoadoutCustomization*>Family                                                           (Parm, OutParm)
// TArray<class ULoadoutCustomization*>ItemArray                                                        (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::GroupItemFamily(class ULoadoutCustomization* InItem, TArray<class ULoadoutCustomization*>* Family, const TArray<class ULoadoutCustomization*>& ItemArray, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "GroupItemFamily");

	Params::UW_Customization_C_GroupItemFamily_Params Parms{};

	Parms.InItem = InItem;
	Parms.ItemArray = ItemArray;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Family != nullptr)
		*Family = std::move(Parms.Family);

}


// Function W_Customization.W_Customization_C.SelectItemSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULoadoutCustomization*       SlotItem                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutCustomization*       SelectedItem                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ULoadoutCustomization*>CallFunc_GroupItemFamily_Family                                  (ReferenceParm)
// class ULoadoutCustomization*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_C::SelectItemSlot(class ULoadoutCustomization* SlotItem, class ULoadoutCustomization* SelectedItem, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ULoadoutCustomization*>& CallFunc_GroupItemFamily_Family, class ULoadoutCustomization* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "SelectItemSlot");

	Params::UW_Customization_C_SelectItemSlot_Params Parms{};

	Parms.SlotItem = SlotItem;
	Parms.SelectedItem = SelectedItem;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GroupItemFamily_Family = CallFunc_GroupItemFamily_Family;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.IsHoveredEquipped
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_Customization_C::IsHoveredEquipped(bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "IsHoveredEquipped");

	Params::UW_Customization_C_IsHoveredEquipped_Params Parms{};

	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Customization.W_Customization_C.IsItemFamilyEquipped
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ULoadoutCustomization*       Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEquipped                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               B                                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ULoadoutCustomization*>ItemArray                                                        (Edit, BlueprintVisible)
// TArray<class ULoadoutCustomization*>CallFunc_GroupItemFamily_Family                                  (ReferenceParm)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutCustomization*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULoadoutCustomization*       CallFunc_GetEquippedCustomizationItem_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_C::IsItemFamilyEquipped(class ULoadoutCustomization* Item, bool* IsEquipped, bool B, const TArray<class ULoadoutCustomization*>& ItemArray, TArray<class ULoadoutCustomization*>& CallFunc_GroupItemFamily_Family, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class ULoadoutCustomization* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ULoadoutCustomization* CallFunc_GetEquippedCustomizationItem_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "IsItemFamilyEquipped");

	Params::UW_Customization_C_IsItemFamilyEquipped_Params Parms{};

	Parms.Item = Item;
	Parms.B = B;
	Parms.ItemArray = ItemArray;
	Parms.CallFunc_GroupItemFamily_Family = CallFunc_GroupItemFamily_Family;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetEquippedCustomizationItem_ReturnValue = CallFunc_GetEquippedCustomizationItem_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEquipped != nullptr)
		*IsEquipped = Parms.IsEquipped;

}


// Function W_Customization.W_Customization_C.GetGroupSlotsByCategory
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECustomizationType      Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_Customization_Slot_C*>ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// enum class E_CustomizationGroups   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_Customization_Slot_C*>Temp_object_Variable                                             (ReferenceParm, ContainsInstancedReference)
// TArray<class UW_Customization_Slot_C*>Temp_object_Variable_1                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UW_Customization_Slot_C*>Temp_object_Variable_2                                           (ReferenceParm, ContainsInstancedReference)
// enum class E_CustomizationGroups   CallFunc_GetBrowsingGroupByCategory_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_Customization_Slot_C*>K2Node_Select_Default                                            (ReferenceParm, ContainsInstancedReference)

TArray<class UW_Customization_Slot_C*> UW_Customization_C::GetGroupSlotsByCategory(enum class ECustomizationType Category, enum class E_CustomizationGroups Temp_byte_Variable, TArray<class UW_Customization_Slot_C*>& Temp_object_Variable, TArray<class UW_Customization_Slot_C*>& Temp_object_Variable_1, TArray<class UW_Customization_Slot_C*>& Temp_object_Variable_2, enum class E_CustomizationGroups CallFunc_GetBrowsingGroupByCategory_ReturnValue, TArray<class UW_Customization_Slot_C*>& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "GetGroupSlotsByCategory");

	Params::UW_Customization_C_GetGroupSlotsByCategory_Params Parms{};

	Parms.Category = Category;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.CallFunc_GetBrowsingGroupByCategory_ReturnValue = CallFunc_GetBrowsingGroupByCategory_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Customization.W_Customization_C.SetHoveredItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::SetHoveredItem(class UW_Customization_Slot_C* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "SetHoveredItem");

	Params::UW_Customization_C_SetHoveredItem_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.CheckItemEquipped
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ULoadoutCustomization*       Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEquipped                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECustomizationType      CallFunc_GetCustomizationType_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutCustomization*       CallFunc_GetEquippedCustomizationItem_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_C::CheckItemEquipped(class ULoadoutCustomization* Item, bool* IsEquipped, enum class ECustomizationType CallFunc_GetCustomizationType_ReturnValue, class ULoadoutCustomization* CallFunc_GetEquippedCustomizationItem_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "CheckItemEquipped");

	Params::UW_Customization_C_CheckItemEquipped_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_GetCustomizationType_ReturnValue = CallFunc_GetCustomizationType_ReturnValue;
	Parms.CallFunc_GetEquippedCustomizationItem_ReturnValue = CallFunc_GetEquippedCustomizationItem_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEquipped != nullptr)
		*IsEquipped = Parms.IsEquipped;

}


// Function W_Customization.W_Customization_C.UpdateVariantListEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     NewEquippedSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::UpdateVariantListEquipped(class UW_Customization_Slot_C* NewEquippedSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "UpdateVariantListEquipped");

	Params::UW_Customization_C_UpdateVariantListEquipped_Params Parms{};

	Parms.NewEquippedSlot = NewEquippedSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.LeaveVariantList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_C::LeaveVariantList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "LeaveVariantList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization.W_Customization_C.CloseVariantList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnToItemList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_Hide_self_CastInput                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_C::CloseVariantList(bool ReturnToItemList, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Hide_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "CloseVariantList");

	Params::UW_Customization_C_CloseVariantList_Params Parms{};

	Parms.ReturnToItemList = ReturnToItemList;
	Parms.CallFunc_Hide_self_CastInput = CallFunc_Hide_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.OpenVariantList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_Reveal_self_CastInput                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_C::OpenVariantList(TScriptInterface<class IReadyOrNotUI_C> CallFunc_Reveal_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "OpenVariantList");

	Params::UW_Customization_C_OpenVariantList_Params Parms{};

	Parms.CallFunc_Reveal_self_CastInput = CallFunc_Reveal_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.ViewItemVariants
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULoadoutCustomization*       Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Customization_Slot_C*     DefaultWidget                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Customization_Slot_C*     NewWidget                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutCustomization*       NewItem                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ULoadoutCustomization*>Variants                                                         (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECustomizationType      CallFunc_GetCustomizationType_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutCustomization*       CallFunc_GetEquippedCustomizationItem_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::ViewItemVariants(class ULoadoutCustomization* Item, class UW_Customization_Slot_C* DefaultWidget, class UW_Customization_Slot_C* NewWidget, class ULoadoutCustomization* NewItem, const TArray<class ULoadoutCustomization*>& Variants, bool CallFunc_IsValid_ReturnValue, enum class ECustomizationType CallFunc_GetCustomizationType_ReturnValue, class ULoadoutCustomization* CallFunc_GetEquippedCustomizationItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "ViewItemVariants");

	Params::UW_Customization_C_ViewItemVariants_Params Parms{};

	Parms.Item = Item;
	Parms.DefaultWidget = DefaultWidget;
	Parms.NewWidget = NewWidget;
	Parms.NewItem = NewItem;
	Parms.Variants = Variants;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCustomizationType_ReturnValue = CallFunc_GetCustomizationType_ReturnValue;
	Parms.CallFunc_GetEquippedCustomizationItem_ReturnValue = CallFunc_GetEquippedCustomizationItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.UpdateVoiceSelector
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, class FText>     VoiceOptions                                                     (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetEquippedNameID_OutName                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ULoadoutCustomization*>CallFunc_GetCustomizationItems_ReturnValue                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutCustomization*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_TextToName_OutName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::UpdateVoiceSelector(TMap<class FName, class FText> VoiceOptions, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_GetEquippedNameID_OutName, TArray<class ULoadoutCustomization*>& CallFunc_GetCustomizationItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ULoadoutCustomization* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_TextToName_OutName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "UpdateVoiceSelector");

	Params::UW_Customization_C_UpdateVoiceSelector_Params Parms{};

	Parms.VoiceOptions = VoiceOptions;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetEquippedNameID_OutName = CallFunc_GetEquippedNameID_OutName;
	Parms.CallFunc_GetCustomizationItems_ReturnValue = CallFunc_GetCustomizationItems_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_TextToName_OutName = CallFunc_TextToName_OutName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.ViewCategoryItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECustomizationType      Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Customization_Slot_C*     EquippedSlot                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Customization_Slot_C*     NewSlot                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutCustomization*       NewItem                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UW_Customization_Slot_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsItemFamilyEquipped_IsEquipped                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_BoxShape              CallFunc_GetSlotShapeByCategory_Shape                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ULoadoutCustomization*>CallFunc_GetCustomizationItems_ReturnValue                       (ReferenceParm)
// class ULoadoutCustomization*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWrapBoxSlot*                CallFunc_AddChildToWrapBox_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::ViewCategoryItems(enum class ECustomizationType Category, class UW_Customization_Slot_C* EquippedSlot, class UW_Customization_Slot_C* NewSlot, class ULoadoutCustomization* NewItem, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UW_Customization_Slot_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsItemFamilyEquipped_IsEquipped, enum class E_BoxShape CallFunc_GetSlotShapeByCategory_Shape, TArray<class ULoadoutCustomization*>& CallFunc_GetCustomizationItems_ReturnValue, class ULoadoutCustomization* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 Temp_int_Loop_Counter_Variable, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "ViewCategoryItems");

	Params::UW_Customization_C_ViewCategoryItems_Params Parms{};

	Parms.Category = Category;
	Parms.EquippedSlot = EquippedSlot;
	Parms.NewSlot = NewSlot;
	Parms.NewItem = NewItem;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsItemFamilyEquipped_IsEquipped = CallFunc_IsItemFamilyEquipped_IsEquipped;
	Parms.CallFunc_GetSlotShapeByCategory_Shape = CallFunc_GetSlotShapeByCategory_Shape;
	Parms.CallFunc_GetCustomizationItems_ReturnValue = CallFunc_GetCustomizationItems_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_AddChildToWrapBox_ReturnValue = CallFunc_AddChildToWrapBox_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.CreateItemListEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_C::CreateItemListEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "CreateItemListEntry");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization.W_Customization_C.UpdateItemListEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     NewEquippedSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_C::UpdateItemListEquipped(class UW_Customization_Slot_C* NewEquippedSlot, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "UpdateItemListEquipped");

	Params::UW_Customization_C_UpdateItemListEquipped_Params Parms{};

	Parms.NewEquippedSlot = NewEquippedSlot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.ChangeCurrentCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECustomizationType      CurrentCategory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      NewPoseTag                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FName                        NewCameraTag                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Map_Find_Value_1                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)

void UW_Customization_C::ChangeCurrentCategory(enum class ECustomizationType CurrentCategory, const class FString& NewPoseTag, class FName NewCameraTag, bool Temp_bool_Variable, const class FString& Temp_string_Variable, bool Temp_bool_Variable_1, class FName Temp_name_Variable, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class FName K2Node_Select_Default, const class FString& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "ChangeCurrentCategory");

	Params::UW_Customization_C_ChangeCurrentCategory_Params Parms{};

	Parms.CurrentCategory = CurrentCategory;
	Parms.NewPoseTag = NewPoseTag;
	Parms.NewCameraTag = NewCameraTag;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.GetEquippedNameID
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECustomizationType      Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        OutName                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutCustomization*       CallFunc_GetEquippedCustomizationItem_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_TextToName_OutName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::GetEquippedNameID(enum class ECustomizationType Type, class FName* OutName, class ULoadoutCustomization* CallFunc_GetEquippedCustomizationItem_ReturnValue, class FName CallFunc_TextToName_OutName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "GetEquippedNameID");

	Params::UW_Customization_C_GetEquippedNameID_Params Parms{};

	Parms.Type = Type;
	Parms.CallFunc_GetEquippedCustomizationItem_ReturnValue = CallFunc_GetEquippedCustomizationItem_ReturnValue;
	Parms.CallFunc_TextToName_OutName = CallFunc_TextToName_OutName;

	UObject::ProcessEvent(Func, &Parms);

	if (OutName != nullptr)
		*OutName = Parms.OutName;

}


// Function W_Customization.W_Customization_C.UpdateCharacterSelector
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, class FText>     CharacterOptions                                                 (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetEquippedNameID_OutName                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ULoadoutCustomization*>CallFunc_GetCustomizationItems_ReturnValue                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutCustomization*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_TextToName_OutName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::UpdateCharacterSelector(TMap<class FName, class FText> CharacterOptions, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_GetEquippedNameID_OutName, TArray<class ULoadoutCustomization*>& CallFunc_GetCustomizationItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ULoadoutCustomization* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_TextToName_OutName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "UpdateCharacterSelector");

	Params::UW_Customization_C_UpdateCharacterSelector_Params Parms{};

	Parms.CharacterOptions = CharacterOptions;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetEquippedNameID_OutName = CallFunc_GetEquippedNameID_OutName;
	Parms.CallFunc_GetCustomizationItems_ReturnValue = CallFunc_GetCustomizationItems_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_TextToName_OutName = CallFunc_TextToName_OutName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.SelectSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_C::SelectSlot(class UW_Customization_Slot_C* Slot, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "SelectSlot");

	Params::UW_Customization_C_SelectSlot_Params Parms{};

	Parms.Slot = Slot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.GetBrowsingGroupByCategory
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECustomizationType      Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationType      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   Temp_byte_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class E_CustomizationGroups UW_Customization_C::GetBrowsingGroupByCategory(enum class ECustomizationType Category, enum class ECustomizationType Temp_byte_Variable, enum class E_CustomizationGroups Temp_byte_Variable_1, enum class E_CustomizationGroups Temp_byte_Variable_2, enum class E_CustomizationGroups Temp_byte_Variable_3, enum class E_CustomizationGroups Temp_byte_Variable_4, enum class E_CustomizationGroups Temp_byte_Variable_5, enum class E_CustomizationGroups Temp_byte_Variable_6, enum class E_CustomizationGroups Temp_byte_Variable_7, enum class E_CustomizationGroups Temp_byte_Variable_8, enum class E_CustomizationGroups Temp_byte_Variable_9, enum class E_CustomizationGroups Temp_byte_Variable_10, enum class E_CustomizationGroups Temp_byte_Variable_11, enum class E_CustomizationGroups Temp_byte_Variable_12, enum class E_CustomizationGroups Temp_byte_Variable_13, enum class E_CustomizationGroups Temp_byte_Variable_14, enum class E_CustomizationGroups Temp_byte_Variable_15, enum class E_CustomizationGroups Temp_byte_Variable_16, enum class E_CustomizationGroups K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "GetBrowsingGroupByCategory");

	Params::UW_Customization_C_GetBrowsingGroupByCategory_Params Parms{};

	Parms.Category = Category;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.Temp_byte_Variable_12 = Temp_byte_Variable_12;
	Parms.Temp_byte_Variable_13 = Temp_byte_Variable_13;
	Parms.Temp_byte_Variable_14 = Temp_byte_Variable_14;
	Parms.Temp_byte_Variable_15 = Temp_byte_Variable_15;
	Parms.Temp_byte_Variable_16 = Temp_byte_Variable_16;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Customization.W_Customization_C.SetCarouselOptionMap
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UW_Customization_Slot_C*>Slots                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Customization_Slot_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCustomizationCategoryText_Category_Text              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCategoryNameID_NameID                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::SetCarouselOptionMap(TArray<class UW_Customization_Slot_C*>& Slots, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UW_Customization_Slot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetCustomizationCategoryText_Category_Text, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_GetCategoryNameID_NameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "SetCarouselOptionMap");

	Params::UW_Customization_C_SetCarouselOptionMap_Params Parms{};

	Parms.Slots = Slots;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetCustomizationCategoryText_Category_Text = CallFunc_GetCustomizationCategoryText_Category_Text;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCategoryNameID_NameID = CallFunc_GetCategoryNameID_NameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.SetCarouselOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECustomizationType      ActiveCategory                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetOptionAtIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CustomizationGroups   CallFunc_GetBrowsingGroupByCategory_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCategoryNameID_NameID                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::SetCarouselOptions(enum class ECustomizationType ActiveCategory, bool Temp_bool_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, class FName CallFunc_GetOptionAtIndex_ReturnValue, enum class E_CustomizationGroups CallFunc_GetBrowsingGroupByCategory_ReturnValue, class FName CallFunc_GetCategoryNameID_NameID, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "SetCarouselOptions");

	Params::UW_Customization_C_SetCarouselOptions_Params Parms{};

	Parms.ActiveCategory = ActiveCategory;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOptionAtIndex_ReturnValue = CallFunc_GetOptionAtIndex_ReturnValue;
	Parms.CallFunc_GetBrowsingGroupByCategory_ReturnValue = CallFunc_GetBrowsingGroupByCategory_ReturnValue;
	Parms.CallFunc_GetCategoryNameID_NameID = CallFunc_GetCategoryNameID_NameID;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.GetCategoryNameID
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECustomizationType      Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NameID                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::GetCategoryNameID(enum class ECustomizationType Category, class FName* NameID, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Replace_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "GetCategoryNameID");

	Params::UW_Customization_C_GetCategoryNameID_Params Parms{};

	Parms.Category = Category;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue_1 = CallFunc_Replace_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NameID != nullptr)
		*NameID = Parms.NameID;

}


// Function W_Customization.W_Customization_C.OpenItemList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULoadoutCustomization*       CallFunc_GetEquippedCustomizationItem_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::OpenItemList(class ULoadoutCustomization* CallFunc_GetEquippedCustomizationItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "OpenItemList");

	Params::UW_Customization_C_OpenItemList_Params Parms{};

	Parms.CallFunc_GetEquippedCustomizationItem_ReturnValue = CallFunc_GetEquippedCustomizationItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.CloseItemList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CustomizationGroups   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable_1                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_Hide_self_CastInput                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::CloseItemList(enum class E_CustomizationGroups Temp_byte_Variable, class UWidget* Temp_object_Variable, class UWidget* Temp_object_Variable_1, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Hide_self_CastInput, bool CallFunc_Not_PreBool_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "CloseItemList");

	Params::UW_Customization_C_CloseItemList_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_Hide_self_CastInput = CallFunc_Hide_self_CastInput;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.SetBrowsingGroupByCurrentCategory
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_Customization_Gamepad_GroupButton_C*>CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Customization_Gamepad_GroupButton_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_CustomizationGroups   CallFunc_GetCustomizationGroupByCategory_Group                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::SetBrowsingGroupByCurrentCategory(bool CallFunc_NotEqual_ByteByte_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UW_Customization_Gamepad_GroupButton_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, bool CallFunc_IsValid_ReturnValue_1, class UW_Customization_Gamepad_GroupButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, enum class E_CustomizationGroups CallFunc_GetCustomizationGroupByCategory_Group)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "SetBrowsingGroupByCurrentCategory");

	Params::UW_Customization_C_SetBrowsingGroupByCurrentCategory_Params Parms{};

	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetCustomizationGroupByCategory_Group = CallFunc_GetCustomizationGroupByCategory_Group;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BackPage_Handled                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_Customization_C::BP_OnHandleBackAction(bool CallFunc_BackPage_Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BP_OnHandleBackAction");

	Params::UW_Customization_C_BP_OnHandleBackAction_Params Parms{};

	Parms.CallFunc_BackPage_Handled = CallFunc_BackPage_Handled;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Customization.W_Customization_C.FocusNewItemList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     EquippedSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::FocusNewItemList(class UW_Customization_Slot_C* EquippedSlot, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "FocusNewItemList");

	Params::UW_Customization_C_FocusNewItemList_Params Parms{};

	Parms.EquippedSlot = EquippedSlot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.GetCategoryByName
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationType      Category                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationType      NewCategory                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_C::GetCategoryByName(class FName Name, enum class ECustomizationType* Category, enum class ECustomizationType NewCategory, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "GetCategoryByName");

	Params::UW_Customization_C_GetCategoryByName_Params Parms{};

	Parms.Name = Name;
	Parms.NewCategory = NewCategory;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Category != nullptr)
		*Category = Parms.Category;

}


// Function W_Customization.W_Customization_C.GetSlotShapeByCategory
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECustomizationType      Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BoxShape              Shape                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationType      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BoxShape              Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BoxShape              Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BoxShape              Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BoxShape              Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BoxShape              Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BoxShape              Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BoxShape              Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BoxShape              Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BoxShape              Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BoxShape              Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BoxShape              Temp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BoxShape              Temp_byte_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BoxShape              Temp_byte_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BoxShape              Temp_byte_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BoxShape              Temp_byte_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BoxShape              Temp_byte_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BoxShape              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::GetSlotShapeByCategory(enum class ECustomizationType Category, enum class E_BoxShape* Shape, enum class ECustomizationType Temp_byte_Variable, enum class E_BoxShape Temp_byte_Variable_1, enum class E_BoxShape Temp_byte_Variable_2, enum class E_BoxShape Temp_byte_Variable_3, enum class E_BoxShape Temp_byte_Variable_4, enum class E_BoxShape Temp_byte_Variable_5, enum class E_BoxShape Temp_byte_Variable_6, enum class E_BoxShape Temp_byte_Variable_7, enum class E_BoxShape Temp_byte_Variable_8, enum class E_BoxShape Temp_byte_Variable_9, enum class E_BoxShape Temp_byte_Variable_10, enum class E_BoxShape Temp_byte_Variable_11, enum class E_BoxShape Temp_byte_Variable_12, enum class E_BoxShape Temp_byte_Variable_13, enum class E_BoxShape Temp_byte_Variable_14, enum class E_BoxShape Temp_byte_Variable_15, enum class E_BoxShape Temp_byte_Variable_16, enum class E_BoxShape K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "GetSlotShapeByCategory");

	Params::UW_Customization_C_GetSlotShapeByCategory_Params Parms{};

	Parms.Category = Category;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.Temp_byte_Variable_12 = Temp_byte_Variable_12;
	Parms.Temp_byte_Variable_13 = Temp_byte_Variable_13;
	Parms.Temp_byte_Variable_14 = Temp_byte_Variable_14;
	Parms.Temp_byte_Variable_15 = Temp_byte_Variable_15;
	Parms.Temp_byte_Variable_16 = Temp_byte_Variable_16;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Shape != nullptr)
		*Shape = Parms.Shape;

}


// Function W_Customization.W_Customization_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Customization_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BP_GetDesiredFocusTarget");

	Params::UW_Customization_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Customization.W_Customization_C.GroupAccessoryButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     K2Node_DynamicCast_AsW_Customization_Slot                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_Customization_Slot_C*>CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)

void UW_Customization_C::GroupAccessoryButton(class UW_Customization_Slot_C* K2Node_DynamicCast_AsW_Customization_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue, TArray<class UW_Customization_Slot_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "GroupAccessoryButton");

	Params::UW_Customization_C_GroupAccessoryButton_Params Parms{};

	Parms.K2Node_DynamicCast_AsW_Customization_Slot = K2Node_DynamicCast_AsW_Customization_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.GroupGearButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     K2Node_DynamicCast_AsW_Customization_Slot                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_Customization_Slot_C*>CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)

void UW_Customization_C::GroupGearButton(class UW_Customization_Slot_C* K2Node_DynamicCast_AsW_Customization_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue, TArray<class UW_Customization_Slot_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "GroupGearButton");

	Params::UW_Customization_C_GroupGearButton_Params Parms{};

	Parms.K2Node_DynamicCast_AsW_Customization_Slot = K2Node_DynamicCast_AsW_Customization_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.UngroupButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Customization_Slot_C*     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Customization_Slot_C*     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_C::UngroupButtons(class UW_Customization_Slot_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UW_Customization_Slot_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class UW_Customization_Slot_C* CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "UngroupButtons");

	Params::UW_Customization_C_UngroupButtons_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.GroupUniformButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     K2Node_DynamicCast_AsW_Customization_Slot                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_Customization_Slot_C*>CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)

void UW_Customization_C::GroupUniformButton(class UW_Customization_Slot_C* K2Node_DynamicCast_AsW_Customization_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue, TArray<class UW_Customization_Slot_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "GroupUniformButton");

	Params::UW_Customization_C_GroupUniformButton_Params Parms{};

	Parms.K2Node_DynamicCast_AsW_Customization_Slot = K2Node_DynamicCast_AsW_Customization_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.UpdateStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseGamepad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_CustomizationGroups   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_Customization_Slot_C*>Temp_object_Variable                                             (ReferenceParm, ContainsInstancedReference)
// TArray<class UW_Customization_Slot_C*>Temp_object_Variable_1                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UW_Customization_Slot_C*>Temp_object_Variable_2                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UW_Customization_Slot_C*>K2Node_Select_Default                                            (ReferenceParm, ContainsInstancedReference)

void UW_Customization_C::UpdateStyle(bool bUseGamepad, bool CallFunc_IsValid_ReturnValue, enum class E_CustomizationGroups Temp_byte_Variable, TArray<class UW_Customization_Slot_C*>& Temp_object_Variable, TArray<class UW_Customization_Slot_C*>& Temp_object_Variable_1, TArray<class UW_Customization_Slot_C*>& Temp_object_Variable_2, TArray<class UW_Customization_Slot_C*>& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "UpdateStyle");

	Params::UW_Customization_C_UpdateStyle_Params Parms{};

	Parms.bUseGamepad = bUseGamepad;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UW_Customization_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "OnMouseButtonDown_0");

	Params::UW_Customization_C_OnMouseButtonDown_0_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Customization.W_Customization_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Customization_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "UpdateActiveLoadout");

	Params::UW_Customization_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.UpdateCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "UpdateCurrentSlot");

	Params::UW_Customization_C_UpdateCurrentSlot_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Customization_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "UpdateCurrentItemMap");

	Params::UW_Customization_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.SetLoadoutWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_C*                LoadoutWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "SetLoadoutWidget");

	Params::UW_Customization_C_SetLoadoutWidget_Params Parms{};

	Parms.LoadoutWidget = LoadoutWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "HeaderSubpageNavigation");

	Params::UW_Customization_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "Reveal");

	Params::UW_Customization_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "Hide");

	Params::UW_Customization_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "SetInputMode");

	Params::UW_Customization_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "ChangePage");

	Params::UW_Customization_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Customization_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization.W_Customization_C.BndEvt__W_CustomizationTest_DoneButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Customization_C::BndEvt__W_CustomizationTest_DoneButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_CustomizationTest_DoneButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization.W_Customization_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Customization_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization.W_Customization_C.SetupEquippedList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_C::SetupEquippedList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "SetupEquippedList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization.W_Customization_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_Customization_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "OnFocusLost");

	Params::UW_Customization_C_OnFocusLost_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.ListItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::ListItemClicked(class UW_Customization_Slot_C* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "ListItemClicked");

	Params::UW_Customization_C_ListItemClicked_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.UpdateCategorySlots
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_C::UpdateCategorySlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "UpdateCategorySlots");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization.W_Customization_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Customization_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization.W_Customization_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::InputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "InputMethodChanged");

	Params::UW_Customization_C_InputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.CategorySlotHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::CategorySlotHovered(class UW_Customization_Slot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "CategorySlotHovered");

	Params::UW_Customization_C_CategorySlotHovered_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.CategorySlotUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_C::CategorySlotUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "CategorySlotUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization.W_Customization_C.CategorySlotClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::CategorySlotClicked(class UW_Customization_Slot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "CategorySlotClicked");

	Params::UW_Customization_C_CategorySlotClicked_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.ListItemHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::ListItemHovered(class UW_Customization_Slot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "ListItemHovered");

	Params::UW_Customization_C_ListItemHovered_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.ListItemUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_C::ListItemUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "ListItemUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_W_ItemCategoryCarousel_K2Node_ComponentBoundEvent_12_OnOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::BndEvt__W_Customization_W_ItemCategoryCarousel_K2Node_ComponentBoundEvent_12_OnOptionSelected__DelegateSignature(class FName OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_W_ItemCategoryCarousel_K2Node_ComponentBoundEvent_12_OnOptionSelected__DelegateSignature");

	Params::UW_Customization_C_BndEvt__W_Customization_W_ItemCategoryCarousel_K2Node_ComponentBoundEvent_12_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_Selector_Character_K2Node_ComponentBoundEvent_1_OptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::BndEvt__W_Customization_Selector_Character_K2Node_ComponentBoundEvent_1_OptionSelected__DelegateSignature(class FName OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_Selector_Character_K2Node_ComponentBoundEvent_1_OptionSelected__DelegateSignature");

	Params::UW_Customization_C_BndEvt__W_Customization_Selector_Character_K2Node_ComponentBoundEvent_1_OptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_btn_Group_Uniform_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::BndEvt__W_Customization_btn_Group_Uniform_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_btn_Group_Uniform_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_Customization_C_BndEvt__W_Customization_btn_Group_Uniform_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_btn_Group_Gear_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::BndEvt__W_Customization_btn_Group_Gear_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_btn_Group_Gear_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_Customization_C_BndEvt__W_Customization_btn_Group_Gear_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_btn_Group_Uniform_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::BndEvt__W_Customization_btn_Group_Uniform_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_btn_Group_Uniform_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_Customization_C_BndEvt__W_Customization_btn_Group_Uniform_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_btn_Group_Gear_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::BndEvt__W_Customization_btn_Group_Gear_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_btn_Group_Gear_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_Customization_C_BndEvt__W_Customization_btn_Group_Gear_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_btn_Group_Accessories_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::BndEvt__W_Customization_btn_Group_Accessories_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_btn_Group_Accessories_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_Customization_C_BndEvt__W_Customization_btn_Group_Accessories_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_btn_Group_Accessories_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::BndEvt__W_Customization_btn_Group_Accessories_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_btn_Group_Accessories_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_Customization_C_BndEvt__W_Customization_btn_Group_Accessories_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_Selector_Voice_K2Node_ComponentBoundEvent_15_OptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::BndEvt__W_Customization_Selector_Voice_K2Node_ComponentBoundEvent_15_OptionSelected__DelegateSignature(class FName OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_Selector_Voice_K2Node_ComponentBoundEvent_15_OptionSelected__DelegateSignature");

	Params::UW_Customization_C_BndEvt__W_Customization_Selector_Voice_K2Node_ComponentBoundEvent_15_OptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_Selector_Voice_K2Node_ComponentBoundEvent_16_OnSelectorClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Customization_Selector_C* TriggeringSelector                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::BndEvt__W_Customization_Selector_Voice_K2Node_ComponentBoundEvent_16_OnSelectorClicked__DelegateSignature(class UW_Customization_Selector_C* TriggeringSelector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_Selector_Voice_K2Node_ComponentBoundEvent_16_OnSelectorClicked__DelegateSignature");

	Params::UW_Customization_C_BndEvt__W_Customization_Selector_Voice_K2Node_ComponentBoundEvent_16_OnSelectorClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringSelector = TriggeringSelector;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_Selector_Character_K2Node_ComponentBoundEvent_6_OnDropdownClosed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Customization_C::BndEvt__W_Customization_Selector_Character_K2Node_ComponentBoundEvent_6_OnDropdownClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_Selector_Character_K2Node_ComponentBoundEvent_6_OnDropdownClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_Selector_Character_K2Node_ComponentBoundEvent_7_OnOptionHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::BndEvt__W_Customization_Selector_Character_K2Node_ComponentBoundEvent_7_OnOptionHovered__DelegateSignature(class FName OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_Selector_Character_K2Node_ComponentBoundEvent_7_OnOptionHovered__DelegateSignature");

	Params::UW_Customization_C_BndEvt__W_Customization_Selector_Character_K2Node_ComponentBoundEvent_7_OnOptionHovered__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_Selector_Voice_K2Node_ComponentBoundEvent_8_OnOptionHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::BndEvt__W_Customization_Selector_Voice_K2Node_ComponentBoundEvent_8_OnOptionHovered__DelegateSignature(class FName OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_Selector_Voice_K2Node_ComponentBoundEvent_8_OnOptionHovered__DelegateSignature");

	Params::UW_Customization_C_BndEvt__W_Customization_Selector_Voice_K2Node_ComponentBoundEvent_8_OnOptionHovered__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_Selector_Voice_K2Node_ComponentBoundEvent_9_OnDropdownClosed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Customization_C::BndEvt__W_Customization_Selector_Voice_K2Node_ComponentBoundEvent_9_OnDropdownClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_Selector_Voice_K2Node_ComponentBoundEvent_9_OnDropdownClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_W_Customization_VariantCarousel_K2Node_ComponentBoundEvent_10_OnVariantListPopulated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               HasVariants                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_C::BndEvt__W_Customization_W_Customization_VariantCarousel_K2Node_ComponentBoundEvent_10_OnVariantListPopulated__DelegateSignature(bool HasVariants)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_W_Customization_VariantCarousel_K2Node_ComponentBoundEvent_10_OnVariantListPopulated__DelegateSignature");

	Params::UW_Customization_C_BndEvt__W_Customization_W_Customization_VariantCarousel_K2Node_ComponentBoundEvent_10_OnVariantListPopulated__DelegateSignature_Params Parms{};

	Parms.HasVariants = HasVariants;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_VariantList_K2Node_ComponentBoundEvent_11_OnVariantClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::BndEvt__W_Customization_VariantList_K2Node_ComponentBoundEvent_11_OnVariantClicked__DelegateSignature(class UW_Customization_Slot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_VariantList_K2Node_ComponentBoundEvent_11_OnVariantClicked__DelegateSignature");

	Params::UW_Customization_C_BndEvt__W_Customization_VariantList_K2Node_ComponentBoundEvent_11_OnVariantClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_VariantList_K2Node_ComponentBoundEvent_17_OnVariantHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::BndEvt__W_Customization_VariantList_K2Node_ComponentBoundEvent_17_OnVariantHovered__DelegateSignature(class UW_Customization_Slot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_VariantList_K2Node_ComponentBoundEvent_17_OnVariantHovered__DelegateSignature");

	Params::UW_Customization_C_BndEvt__W_Customization_VariantList_K2Node_ComponentBoundEvent_17_OnVariantHovered__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_VariantList_K2Node_ComponentBoundEvent_18_OnVariantUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Customization_C::BndEvt__W_Customization_VariantList_K2Node_ComponentBoundEvent_18_OnVariantUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_VariantList_K2Node_ComponentBoundEvent_18_OnVariantUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_VariantList_K2Node_ComponentBoundEvent_20_OnVariantSlotEquipped__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     EquippedSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::BndEvt__W_Customization_VariantList_K2Node_ComponentBoundEvent_20_OnVariantSlotEquipped__DelegateSignature(class UW_Customization_Slot_C* EquippedSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_VariantList_K2Node_ComponentBoundEvent_20_OnVariantSlotEquipped__DelegateSignature");

	Params::UW_Customization_C_BndEvt__W_Customization_VariantList_K2Node_ComponentBoundEvent_20_OnVariantSlotEquipped__DelegateSignature_Params Parms{};

	Parms.EquippedSlot = EquippedSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_VariantList_K2Node_ComponentBoundEvent_19_OnVariantHighlighted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::BndEvt__W_Customization_VariantList_K2Node_ComponentBoundEvent_19_OnVariantHighlighted__DelegateSignature(class UW_Customization_Slot_C* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_VariantList_K2Node_ComponentBoundEvent_19_OnVariantHighlighted__DelegateSignature");

	Params::UW_Customization_C_BndEvt__W_Customization_VariantList_K2Node_ComponentBoundEvent_19_OnVariantHighlighted__DelegateSignature_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.ListItemRightClickPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Slot_C*     TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::ListItemRightClickPressed(class UW_Customization_Slot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "ListItemRightClickPressed");

	Params::UW_Customization_C_ListItemRightClickPressed_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.ListItemRightClickReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_C::ListItemRightClickReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "ListItemRightClickReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization.W_Customization_C.BndEvt__W_Customization_W_Loadout_UnitSelect_K2Node_ComponentBoundEvent_21_OnEquippingUnitSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FST_EquippingUnit           EquippingUnitInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Customization_C::BndEvt__W_Customization_W_Loadout_UnitSelect_K2Node_ComponentBoundEvent_21_OnEquippingUnitSelected__DelegateSignature(const struct FST_EquippingUnit& EquippingUnitInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "BndEvt__W_Customization_W_Loadout_UnitSelect_K2Node_ComponentBoundEvent_21_OnEquippingUnitSelected__DelegateSignature");

	Params::UW_Customization_C_BndEvt__W_Customization_W_Loadout_UnitSelect_K2Node_ComponentBoundEvent_21_OnEquippingUnitSelected__DelegateSignature_Params Parms{};

	Parms.EquippingUnitInfo = EquippingUnitInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.ExecuteUbergraph_W_Customization
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Loadout_C*                K2Node_Event_LoadoutWidget                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// class UW_LoadoutSlot_C*            K2Node_Event_CurrentSlot                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Customization_Slot_C*     K2Node_CustomEvent_Slot                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_Customization_Slot_C*>CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Customization_Slot_C*     K2Node_CustomEvent_TriggeringSlot_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULoadoutCustomization*       CallFunc_GetEquippedCustomizationItem_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UW_Customization_Slot_C*     K2Node_CustomEvent_TriggeringSlot_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        CallFunc_GetCategoryNameID_NameID                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCustomizationCategoryText_Category_Text              (None)
// class UW_Customization_Slot_C*     K2Node_CustomEvent_TriggeringSlot_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Customization_Slot_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutCustomization*       CallFunc_GetEquippedCustomizationItem_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_OptionID_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationType      CallFunc_GetCategoryByName_Category                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_Customization_Slot_C*>CallFunc_GetGroupSlotsByCategory_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// class UW_Customization_Slot_C*     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_Hide_self_CastInput                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_OptionID_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutCustomization*       CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetEquippedNameID_OutName                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_OptionID_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetEquippedNameID_OutName_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULoadoutCustomization*       CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Customization_Selector_C* K2Node_ComponentBoundEvent_TriggeringSelector                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_OptionID_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutCustomization*       CallFunc_Map_Find_Value_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutCustomization*       CallFunc_GetEquippedCustomizationItem_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_OptionID                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutCustomization*       CallFunc_Map_Find_Value_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_HasVariants                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Customization_Slot_C*     K2Node_ComponentBoundEvent_TriggeringSlot_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Customization_Slot_C*     K2Node_ComponentBoundEvent_TriggeringSlot                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Customization_Slot_C*     K2Node_ComponentBoundEvent_EquippedSlot                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Customization_Slot_C*     K2Node_ComponentBoundEvent_NewParam                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Customization_Slot_C*     K2Node_CustomEvent_TriggeringSlot                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHoveredEquipped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_EquippingUnit           K2Node_ComponentBoundEvent_EquippingUnitInfo                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMultiplayer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_C::ExecuteUbergraph_W_Customization(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class FName K2Node_Event_OptionNameID, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FFocusEvent& K2Node_Event_InFocusEvent, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, class UW_Customization_Slot_C* K2Node_CustomEvent_Slot, TArray<class UW_Customization_Slot_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class UW_Customization_Slot_C* K2Node_CustomEvent_TriggeringSlot_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ULoadoutCustomization* CallFunc_GetEquippedCustomizationItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UW_Customization_Slot_C* K2Node_CustomEvent_TriggeringSlot_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName CallFunc_GetCategoryNameID_NameID, class FText CallFunc_GetCustomizationCategoryText_Category_Text, class UW_Customization_Slot_C* K2Node_CustomEvent_TriggeringSlot_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UW_Customization_Slot_C* CallFunc_Array_Get_Item, class ULoadoutCustomization* CallFunc_GetEquippedCustomizationItem_ReturnValue_1, class FName K2Node_ComponentBoundEvent_OptionID_4, enum class ECustomizationType CallFunc_GetCategoryByName_Category, TArray<class UW_Customization_Slot_C*>& CallFunc_GetGroupSlotsByCategory_ReturnValue, class UW_Customization_Slot_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Hide_self_CastInput, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_ComponentBoundEvent_OptionID_3, class ULoadoutCustomization* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FName CallFunc_GetEquippedNameID_OutName, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UWidget* CallFunc_GetFocusTarget_Focus, class FName K2Node_ComponentBoundEvent_OptionID_2, class FName CallFunc_GetEquippedNameID_OutName_1, bool CallFunc_NotEqual_NameName_ReturnValue_1, class ULoadoutCustomization* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class UW_Customization_Selector_C* K2Node_ComponentBoundEvent_TriggeringSelector, class FName K2Node_ComponentBoundEvent_OptionID_1, int32 Temp_int_Loop_Counter_Variable, class ULoadoutCustomization* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ULoadoutCustomization* CallFunc_GetEquippedCustomizationItem_ReturnValue_2, class FName K2Node_ComponentBoundEvent_OptionID, class ULoadoutCustomization* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, bool K2Node_ComponentBoundEvent_HasVariants, class UW_Customization_Slot_C* K2Node_ComponentBoundEvent_TriggeringSlot_1, class UW_Customization_Slot_C* K2Node_ComponentBoundEvent_TriggeringSlot, bool CallFunc_IsValid_ReturnValue_7, class UW_Customization_Slot_C* K2Node_ComponentBoundEvent_EquippedSlot, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable_1, class UW_Customization_Slot_C* K2Node_ComponentBoundEvent_NewParam, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UW_Customization_Slot_C* K2Node_CustomEvent_TriggeringSlot, bool CallFunc_IsHoveredEquipped_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, const struct FST_EquippingUnit& K2Node_ComponentBoundEvent_EquippingUnitInfo, bool CallFunc_IsMultiplayer_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "ExecuteUbergraph_W_Customization");

	Params::UW_Customization_C_ExecuteUbergraph_W_Customization_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_LoadoutWidget = K2Node_Event_LoadoutWidget;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.K2Node_Event_CurrentSlot = K2Node_Event_CurrentSlot;
	Parms.K2Node_CustomEvent_Slot = K2Node_CustomEvent_Slot;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.K2Node_CustomEvent_TriggeringSlot_3 = K2Node_CustomEvent_TriggeringSlot_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEquippedCustomizationItem_ReturnValue = CallFunc_GetEquippedCustomizationItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_TriggeringSlot_2 = K2Node_CustomEvent_TriggeringSlot_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetCategoryNameID_NameID = CallFunc_GetCategoryNameID_NameID;
	Parms.CallFunc_GetCustomizationCategoryText_Category_Text = CallFunc_GetCustomizationCategoryText_Category_Text;
	Parms.K2Node_CustomEvent_TriggeringSlot_1 = K2Node_CustomEvent_TriggeringSlot_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetEquippedCustomizationItem_ReturnValue_1 = CallFunc_GetEquippedCustomizationItem_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_OptionID_4 = K2Node_ComponentBoundEvent_OptionID_4;
	Parms.CallFunc_GetCategoryByName_Category = CallFunc_GetCategoryByName_Category;
	Parms.CallFunc_GetGroupSlotsByCategory_ReturnValue = CallFunc_GetGroupSlotsByCategory_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1 = K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Hide_self_CastInput = CallFunc_Hide_self_CastInput;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_ComponentBoundEvent_OptionID_3 = K2Node_ComponentBoundEvent_OptionID_3;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetEquippedNameID_OutName = CallFunc_GetEquippedNameID_OutName;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;
	Parms.K2Node_ComponentBoundEvent_OptionID_2 = K2Node_ComponentBoundEvent_OptionID_2;
	Parms.CallFunc_GetEquippedNameID_OutName_1 = CallFunc_GetEquippedNameID_OutName_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_TriggeringSelector = K2Node_ComponentBoundEvent_TriggeringSelector;
	Parms.K2Node_ComponentBoundEvent_OptionID_1 = K2Node_ComponentBoundEvent_OptionID_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetEquippedCustomizationItem_ReturnValue_2 = CallFunc_GetEquippedCustomizationItem_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_OptionID = K2Node_ComponentBoundEvent_OptionID;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_ComponentBoundEvent_HasVariants = K2Node_ComponentBoundEvent_HasVariants;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot_1 = K2Node_ComponentBoundEvent_TriggeringSlot_1;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot = K2Node_ComponentBoundEvent_TriggeringSlot;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_ComponentBoundEvent_EquippedSlot = K2Node_ComponentBoundEvent_EquippedSlot;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_ComponentBoundEvent_NewParam = K2Node_ComponentBoundEvent_NewParam;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_TriggeringSlot = K2Node_CustomEvent_TriggeringSlot;
	Parms.CallFunc_IsHoveredEquipped_ReturnValue = CallFunc_IsHoveredEquipped_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_EquippingUnitInfo = K2Node_ComponentBoundEvent_EquippingUnitInfo;
	Parms.CallFunc_IsMultiplayer_ReturnValue = CallFunc_IsMultiplayer_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization.W_Customization_C.OnCategorySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CameraTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CharacterPose                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Customization_C::OnCategorySelected__DelegateSignature(class FName CameraTag, const class FString& CharacterPose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_C", "OnCategorySelected__DelegateSignature");

	Params::UW_Customization_C_OnCategorySelected__DelegateSignature_Params Parms{};

	Parms.CameraTag = CameraTag;
	Parms.CharacterPose = CharacterPose;

	UObject::ProcessEvent(Func, &Parms);

}

}


