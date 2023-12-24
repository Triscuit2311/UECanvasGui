#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C
// (None)

class UClass* UW_LoadoutSlot_Attachment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_LoadoutSlot_Attachment_C");

	return Clss;
}


// W_LoadoutSlot_Attachment_C W_LoadoutSlot_Attachment.Default__W_LoadoutSlot_Attachment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_LoadoutSlot_Attachment_C* UW_LoadoutSlot_Attachment_C::GetDefaultObj()
{
	static class UW_LoadoutSlot_Attachment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_LoadoutSlot_Attachment_C*>(UW_LoadoutSlot_Attachment_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutSlot_Attachment_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "BackPage");

	Params::UW_LoadoutSlot_Attachment_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "GetFocusTarget");

	Params::UW_LoadoutSlot_Attachment_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.GetIsNullAttachment
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      AttachmentData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsNull                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWeaponAttachmentType   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorld*                      CallFunc_GetWorldBP_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemData*                   CallFunc_GetItemData_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutSlot_Attachment_C::GetIsNullAttachment(class UClass* AttachmentData, bool* IsNull, enum class EWeaponAttachmentType Temp_byte_Variable, bool CallFunc_IsValidClass_ReturnValue, class UClass* Temp_class_Variable, bool CallFunc_Not_PreBool_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UWorld* CallFunc_GetWorldBP_ReturnValue, class UItemData* CallFunc_GetItemData_ReturnValue, class UClass* K2Node_Select_Default, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "GetIsNullAttachment");

	Params::UW_LoadoutSlot_Attachment_C_GetIsNullAttachment_Params Parms{};

	Parms.AttachmentData = AttachmentData;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetWorldBP_ReturnValue = CallFunc_GetWorldBP_ReturnValue;
	Parms.CallFunc_GetItemData_ReturnValue = CallFunc_GetItemData_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsNull != nullptr)
		*IsNull = Parms.IsNull;

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Equipped                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsNullAttachment_IsNull                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutSlot_Attachment_C::SetEquipped(bool Equipped, bool CallFunc_GetIsNullAttachment_IsNull, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "SetEquipped");

	Params::UW_LoadoutSlot_Attachment_C_SetEquipped_Params Parms{};

	Parms.Equipped = Equipped;
	Parms.CallFunc_GetIsNullAttachment_IsNull = CallFunc_GetIsNullAttachment_IsNull;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.RefreshItemInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::RefreshItemInfo(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "RefreshItemInfo");

	Params::UW_LoadoutSlot_Attachment_C_RefreshItemInfo_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetMinimalLayout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MinimalLayout                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::SetMinimalLayout(bool MinimalLayout, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, float Temp_float_Variable, float Temp_float_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, float K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "SetMinimalLayout");

	Params::UW_LoadoutSlot_Attachment_C_SetMinimalLayout_Params Parms{};

	Parms.MinimalLayout = MinimalLayout;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.GetHoverState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UW_LoadoutSlot_Attachment_C::GetHoverState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "GetHoverState");

	Params::UW_LoadoutSlot_Attachment_C_GetHoverState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetActive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHoverState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Style_Text              K2Node_Select_Default                                            (HasGetValueTypeHash)
// struct FST_Style_Text              K2Node_Select_Default_1                                          (HasGetValueTypeHash)
// struct FST_Style_Text              K2Node_Select_Default_2                                          (HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::SetActive(bool IsActive, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, bool CallFunc_GetHoverState_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_2, const struct FST_Style_Text& K2Node_Select_Default, const struct FST_Style_Text& K2Node_Select_Default_1, const struct FST_Style_Text& K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "SetActive");

	Params::UW_LoadoutSlot_Attachment_C_SetActive_Params Parms{};

	Parms.IsActive = IsActive;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;
	Parms.CallFunc_GetHoverState_ReturnValue = CallFunc_GetHoverState_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_SelectColor_ReturnValue_2 = CallFunc_SelectColor_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_LoadoutSlot_Attachment_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutSlot_Attachment_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "PreConstruct");

	Params::UW_LoadoutSlot_Attachment_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutSlot_Attachment_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "SetInputMode");

	Params::UW_LoadoutSlot_Attachment_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "HeaderSubpageNavigation");

	Params::UW_LoadoutSlot_Attachment_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature");

	Params::UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LoadoutSlot_Attachment_C::BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.InitializeAsSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutSlot_Attachment_C::InitializeAsSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "InitializeAsSlot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "OnListItemObjectSet");

	Params::UW_LoadoutSlot_Attachment_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature");

	Params::UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.InitializeAttachmentData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      AttachmentData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::InitializeAttachmentData(class UClass* AttachmentData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "InitializeAttachmentData");

	Params::UW_LoadoutSlot_Attachment_C_InitializeAttachmentData_Params Parms{};

	Parms.AttachmentData = AttachmentData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutSlot_Attachment_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "BP_OnItemSelectionChanged");

	Params::UW_LoadoutSlot_Attachment_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.InitializeAsListItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutSlot_Attachment_C::InitializeAsListItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "InitializeAsListItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");

	Params::UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature");

	Params::UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LoadoutSlot_Attachment_C::BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_7_DoubleClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_7_DoubleClicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_7_DoubleClicked__DelegateSignature");

	Params::UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_7_DoubleClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_LoadoutSlot_Attachment_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "UpdateActiveLoadout");

	Params::UW_LoadoutSlot_Attachment_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutSlot_Attachment_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "BP_OnItemExpansionChanged");

	Params::UW_LoadoutSlot_Attachment_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetLoadoutWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_C*                LoadoutWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "SetLoadoutWidget");

	Params::UW_LoadoutSlot_Attachment_C_SetLoadoutWidget_Params Parms{};

	Parms.LoadoutWidget = LoadoutWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutSlot_Attachment_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "Hide");

	Params::UW_LoadoutSlot_Attachment_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "Reveal");

	Params::UW_LoadoutSlot_Attachment_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.ForceClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutSlot_Attachment_C::ForceClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "ForceClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_LoadoutSlot_Attachment_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_LoadoutSlot_Attachment_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "UpdateCurrentItemMap");

	Params::UW_LoadoutSlot_Attachment_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.UpdateCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "UpdateCurrentSlot");

	Params::UW_LoadoutSlot_Attachment_C_UpdateCurrentSlot_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "ChangePage");

	Params::UW_LoadoutSlot_Attachment_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.ExecuteUbergraph_W_LoadoutSlot_Attachment
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAttachmentSlotText_SlotText                          (None)
// class UClass*                      K2Node_CustomEvent_AttachmentData                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// struct FVector2D                   K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Loadout_C*                K2Node_Event_LoadoutWidget                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsNullAttachment_IsNull                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// class UW_LoadoutSlot_C*            K2Node_Event_CurrentSlot                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::ExecuteUbergraph_W_LoadoutSlot_Attachment(int32 EntryPoint, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool K2Node_Event_IsDesignTime, bool K2Node_Event_IsGamepad, class FName K2Node_Event_OptionNameID, class UW_Button_C* K2Node_ComponentBoundEvent_Button_5, class UW_Button_C* K2Node_ComponentBoundEvent_Button_4, class UObject* K2Node_Event_ListItemObject, class UW_Button_C* K2Node_ComponentBoundEvent_Button_3, class FText CallFunc_GetAttachmentSlotText_SlotText, class UClass* K2Node_CustomEvent_AttachmentData, bool CallFunc_IsValidClass_ReturnValue, bool K2Node_Event_bIsSelected, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool Temp_bool_Variable_1, class UClass* K2Node_Select_Default, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, const struct FVector2D& K2Node_Select_Default_1, bool K2Node_Event_bIsExpanded, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, float K2Node_Event_Delay, bool CallFunc_GetIsNullAttachment_IsNull, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, class FName K2Node_Event_PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "ExecuteUbergraph_W_LoadoutSlot_Attachment");

	Params::UW_LoadoutSlot_Attachment_C_ExecuteUbergraph_W_LoadoutSlot_Attachment_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.CallFunc_GetAttachmentSlotText_SlotText = CallFunc_GetAttachmentSlotText_SlotText;
	Parms.K2Node_CustomEvent_AttachmentData = K2Node_CustomEvent_AttachmentData;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_LoadoutWidget = K2Node_Event_LoadoutWidget;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.CallFunc_GetIsNullAttachment_IsNull = CallFunc_GetIsNullAttachment_IsNull;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.K2Node_Event_CurrentSlot = K2Node_Event_CurrentSlot;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnDoubleClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_Attachment_C* TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::OnDoubleClicked__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "OnDoubleClicked__DelegateSignature");

	Params::UW_LoadoutSlot_Attachment_C_OnDoubleClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_Attachment_C* TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::OnUnhovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "OnUnhovered__DelegateSignature");

	Params::UW_LoadoutSlot_Attachment_C_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_Attachment_C* TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::OnHovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "OnHovered__DelegateSignature");

	Params::UW_LoadoutSlot_Attachment_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_Attachment_C* TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutSlot_Attachment_C::OnClicked__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutSlot_Attachment_C", "OnClicked__DelegateSignature");

	Params::UW_LoadoutSlot_Attachment_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}

}


