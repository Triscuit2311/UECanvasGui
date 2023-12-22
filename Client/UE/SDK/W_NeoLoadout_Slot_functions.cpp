#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_NeoLoadout_Slot.W_NeoLoadout_Slot_C
// (None)

class UClass* UW_NeoLoadout_Slot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_NeoLoadout_Slot_C");

	return Clss;
}


// W_NeoLoadout_Slot_C W_NeoLoadout_Slot.Default__W_NeoLoadout_Slot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_NeoLoadout_Slot_C* UW_NeoLoadout_Slot_C::GetDefaultObj()
{
	static class UW_NeoLoadout_Slot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_NeoLoadout_Slot_C*>(UW_NeoLoadout_Slot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_NeoLoadout_Slot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_Slot_C", "PreConstruct");

	Params::UW_NeoLoadout_Slot_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_NeoLoadout_Slot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_Slot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.SetEquippedItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULoadoutItem*                Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Subtext                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_NeoLoadout_Slot_C::SetEquippedItem(class ULoadoutItem* Item, class FText Subtext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_Slot_C", "SetEquippedItem");

	Params::UW_NeoLoadout_Slot_C_SetEquippedItem_Params Parms{};

	Parms.Item = Item;
	Parms.Subtext = Subtext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.SetSelectableItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULoadoutItem*                Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEquipped                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_NeoLoadout_Slot_C::SetSelectableItem(class ULoadoutItem* Item, bool IsEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_Slot_C", "SetSelectableItem");

	Params::UW_NeoLoadout_Slot_C_SetSelectableItem_Params Parms{};

	Parms.Item = Item;
	Parms.IsEquipped = IsEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.BndEvt__W_LoadoutV2_Slot_ItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_NeoLoadout_Slot_C::BndEvt__W_LoadoutV2_Slot_ItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_Slot_C", "BndEvt__W_LoadoutV2_Slot_ItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.BndEvt__W_LoadoutV2_Slot_ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_NeoLoadout_Slot_C::BndEvt__W_LoadoutV2_Slot_ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_Slot_C", "BndEvt__W_LoadoutV2_Slot_ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.BndEvt__W_LoadoutV2_Slot_ItemButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_NeoLoadout_Slot_C::BndEvt__W_LoadoutV2_Slot_ItemButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_Slot_C", "BndEvt__W_LoadoutV2_Slot_ItemButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.BndEvt__W_LoadoutV2_Slot_ItemButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_NeoLoadout_Slot_C::BndEvt__W_LoadoutV2_Slot_ItemButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_Slot_C", "BndEvt__W_LoadoutV2_Slot_ItemButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.SetHighlighted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Highlighted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_NeoLoadout_Slot_C::SetHighlighted(bool Highlighted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_Slot_C", "SetHighlighted");

	Params::UW_NeoLoadout_Slot_C_SetHighlighted_Params Parms{};

	Parms.Highlighted = Highlighted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.SetItemDetails
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULoadoutItem*                Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Subtext                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_NeoLoadout_Slot_C::SetItemDetails(class ULoadoutItem* Item, class FText Subtext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_Slot_C", "SetItemDetails");

	Params::UW_NeoLoadout_Slot_C_SetItemDetails_Params Parms{};

	Parms.Item = Item;
	Parms.Subtext = Subtext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.BndEvt__W_LoadoutV2_Slot_ItemButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_NeoLoadout_Slot_C::BndEvt__W_LoadoutV2_Slot_ItemButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_Slot_C", "BndEvt__W_LoadoutV2_Slot_ItemButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.ExecuteUbergraph_W_NeoLoadout_Slot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULoadoutItem*                K2Node_CustomEvent_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Subtext_1                                     (None)
// class ULoadoutItem*                K2Node_CustomEvent_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsEquipped                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Highlighted                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class ULoadoutItem*                K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Subtext                                       (None)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_NeoLoadout_Slot_C::ExecuteUbergraph_W_NeoLoadout_Slot(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool K2Node_Event_IsDesignTime, class ULoadoutItem* K2Node_CustomEvent_Item_2, class FText K2Node_CustomEvent_Subtext_1, class ULoadoutItem* K2Node_CustomEvent_Item_1, bool K2Node_CustomEvent_IsEquipped, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_CustomEvent_Highlighted, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class ULoadoutItem* K2Node_CustomEvent_Item, class FText K2Node_CustomEvent_Subtext, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_Slot_C", "ExecuteUbergraph_W_NeoLoadout_Slot");

	Params::UW_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Item_2 = K2Node_CustomEvent_Item_2;
	Parms.K2Node_CustomEvent_Subtext_1 = K2Node_CustomEvent_Subtext_1;
	Parms.K2Node_CustomEvent_Item_1 = K2Node_CustomEvent_Item_1;
	Parms.K2Node_CustomEvent_IsEquipped = K2Node_CustomEvent_IsEquipped;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Highlighted = K2Node_CustomEvent_Highlighted;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CustomEvent_Subtext = K2Node_CustomEvent_Subtext;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULoadoutItem*                Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_NeoLoadout_Slot_C*        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_NeoLoadout_Slot_C::OnClicked__DelegateSignature(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_NeoLoadout_Slot_C", "OnClicked__DelegateSignature");

	Params::UW_NeoLoadout_Slot_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}

}


