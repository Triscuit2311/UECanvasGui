#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Loadout_Overview.W_Loadout_Overview_C
// (None)

class UClass* UW_Loadout_Overview_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Loadout_Overview_C");

	return Clss;
}


// W_Loadout_Overview_C W_Loadout_Overview.Default__W_Loadout_Overview_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Loadout_Overview_C* UW_Loadout_Overview_C::GetDefaultObj()
{
	static class UW_Loadout_Overview_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Loadout_Overview_C*>(UW_Loadout_Overview_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Loadout_Overview.W_Loadout_Overview_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Overview_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "BackPage");

	Params::UW_Loadout_Overview_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "GetFocusTarget");

	Params::UW_Loadout_Overview_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.ShowPresetModified
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Modified                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_StringNotEmpty_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_Loadout_Overview_C::ShowPresetModified(bool Modified, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_StringNotEmpty_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "ShowPresetModified");

	Params::UW_Loadout_Overview_C_ShowPresetModified_Params Parms{};

	Parms.Modified = Modified;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_StringNotEmpty_ReturnValue = CallFunc_StringNotEmpty_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.InitializeOverviewPreview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               PreviewLoadout                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               CallFunc_GetLoadoutInfo_Active_Loadout                           (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                K2Node_DynamicCast_AsPanel_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelWidget*                K2Node_DynamicCast_AsPanel_Widget_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_2                            (ReferenceParm, ContainsInstancedReference)

void UW_Loadout_Overview_C::InitializeOverviewPreview(const struct FSavedLoadout& PreviewLoadout, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FSavedLoadout& CallFunc_GetLoadoutInfo_Active_Loadout, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable_1, float CallFunc_Add_FloatFloat_ReturnValue, class UWidget* CallFunc_Array_Get_Item, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UPanelWidget* K2Node_DynamicCast_AsPanel_Widget, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, class UPanelWidget* K2Node_DynamicCast_AsPanel_Widget_1, bool K2Node_DynamicCast_bSuccess_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "InitializeOverviewPreview");

	Params::UW_Loadout_Overview_C_InitializeOverviewPreview_Params Parms{};

	Parms.PreviewLoadout = PreviewLoadout;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetLoadoutInfo_Active_Loadout = CallFunc_GetLoadoutInfo_Active_Loadout;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI = K2Node_DynamicCast_AsReady_or_Not_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPanel_Widget = K2Node_DynamicCast_AsPanel_Widget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPanel_Widget_1 = K2Node_DynamicCast_AsPanel_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetAllChildren_ReturnValue_2 = CallFunc_GetAllChildren_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.GetLoadoutInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSavedLoadout               Active_Loadout                                                   (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSavedLoadout               K2Node_Select_Default                                            (None)

void UW_Loadout_Overview_C::GetLoadoutInfo(struct FSavedLoadout* Active_Loadout, bool Temp_bool_Variable, const struct FSavedLoadout& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "GetLoadoutInfo");

	Params::UW_Loadout_Overview_C_GetLoadoutInfo_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Active_Loadout != nullptr)
		*Active_Loadout = std::move(Parms.Active_Loadout);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.InitializeLoadoutPresets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               CallFunc_GetLoadoutInfo_Active_Loadout                           (None)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::InitializeLoadoutPresets(const class FString& Temp_string_Variable, class FText Temp_text_Variable, const class FString& Temp_string_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSavedLoadout& CallFunc_GetLoadoutInfo_Active_Loadout, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "InitializeLoadoutPresets");

	Params::UW_Loadout_Overview_C_InitializeLoadoutPresets_Params Parms{};

	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLoadoutInfo_Active_Loadout = CallFunc_GetLoadoutInfo_Active_Loadout;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.GetAttachmentSlotByType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWeaponAttachmentType   AttachmentSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_Attachment_C* AttachmentSlotRef                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_Attachment_C* L_AttachmentSlot                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_Attachment_C* K2Node_DynamicCast_AsW_Loadout_Slot_Attachment                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Overview_C::GetAttachmentSlotByType(enum class EWeaponAttachmentType AttachmentSlot, class UW_LoadoutSlot_Attachment_C** AttachmentSlotRef, class UW_LoadoutSlot_Attachment_C* L_AttachmentSlot, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UW_LoadoutSlot_Attachment_C* K2Node_DynamicCast_AsW_Loadout_Slot_Attachment, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "GetAttachmentSlotByType");

	Params::UW_Loadout_Overview_C_GetAttachmentSlotByType_Params Parms{};

	Parms.AttachmentSlot = AttachmentSlot;
	Parms.L_AttachmentSlot = L_AttachmentSlot;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Loadout_Slot_Attachment = K2Node_DynamicCast_AsW_Loadout_Slot_Attachment;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AttachmentSlotRef != nullptr)
		*AttachmentSlotRef = Parms.AttachmentSlotRef;

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.InitializeArmorSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ArmorData                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class FText>   CoverageOptionsMap                                               (Edit, BlueprintVisible)
// enum class EArmourCoverage         ArmorCoverage                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsSWATArmour                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_ByteByte_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_RemoveSpacesFromString_ReturnString                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_RemoveSpacesFromString_ReturnText                       (None)
// class FName                        CallFunc_RemoveSpacesFromString_ReturnName                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               CallFunc_GetLoadoutInfo_Active_Loadout                           (None)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_ByteByte_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSavedLoadout               CallFunc_GetLoadoutInfo_Active_Loadout_1                         (None)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_RemoveSpacesFromString_ReturnString_1                   (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_RemoveSpacesFromString_ReturnText_1                     (None)
// class FName                        CallFunc_RemoveSpacesFromString_ReturnName_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Overview_C::InitializeArmorSettings(class UClass* ItemData, class UClass* ArmorData, TMap<class FString, class FText> CoverageOptionsMap, enum class EArmourCoverage ArmorCoverage, class UClass* K2Node_ClassDynamicCast_AsSWATArmour, bool K2Node_ClassDynamicCast_bSuccess, int32 Temp_int_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_ByteByte_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const class FString& CallFunc_RemoveSpacesFromString_ReturnString, class FText CallFunc_RemoveSpacesFromString_ReturnText, class FName CallFunc_RemoveSpacesFromString_ReturnName, const struct FSavedLoadout& CallFunc_GetLoadoutInfo_Active_Loadout, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, bool CallFunc_LessEqual_ByteByte_ReturnValue_1, const struct FSavedLoadout& CallFunc_GetLoadoutInfo_Active_Loadout_1, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_RemoveSpacesFromString_ReturnString_1, class FText CallFunc_RemoveSpacesFromString_ReturnText_1, class FName CallFunc_RemoveSpacesFromString_ReturnName_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "InitializeArmorSettings");

	Params::UW_Loadout_Overview_C_InitializeArmorSettings_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.ArmorData = ArmorData;
	Parms.CoverageOptionsMap = CoverageOptionsMap;
	Parms.ArmorCoverage = ArmorCoverage;
	Parms.K2Node_ClassDynamicCast_AsSWATArmour = K2Node_ClassDynamicCast_AsSWATArmour;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_ByteByte_ReturnValue = CallFunc_LessEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_RemoveSpacesFromString_ReturnString = CallFunc_RemoveSpacesFromString_ReturnString;
	Parms.CallFunc_RemoveSpacesFromString_ReturnText = CallFunc_RemoveSpacesFromString_ReturnText;
	Parms.CallFunc_RemoveSpacesFromString_ReturnName = CallFunc_RemoveSpacesFromString_ReturnName;
	Parms.CallFunc_GetLoadoutInfo_Active_Loadout = CallFunc_GetLoadoutInfo_Active_Loadout;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2;
	Parms.CallFunc_LessEqual_ByteByte_ReturnValue_1 = CallFunc_LessEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetLoadoutInfo_Active_Loadout_1 = CallFunc_GetLoadoutInfo_Active_Loadout_1;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_RemoveSpacesFromString_ReturnString_1 = CallFunc_RemoveSpacesFromString_ReturnString_1;
	Parms.CallFunc_RemoveSpacesFromString_ReturnText_1 = CallFunc_RemoveSpacesFromString_ReturnText_1;
	Parms.CallFunc_RemoveSpacesFromString_ReturnName_1 = CallFunc_RemoveSpacesFromString_ReturnName_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.SelectTactical
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::SelectTactical(class UClass* ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "SelectTactical");

	Params::UW_Loadout_Overview_C_SelectTactical_Params Parms{};

	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.SelectGrenade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::SelectGrenade(class UClass* ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "SelectGrenade");

	Params::UW_Loadout_Overview_C_SelectGrenade_Params Parms{};

	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.ApplyWeaponPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPrimary                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeaponPreset               WeaponPreset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// TSubclassOf<class USkinComponent>  PresetSkin                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>PresetAmmunition                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>PresetIlluminator                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>PresetGrip                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>PresetStock                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>PresetOverbarrel                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>PresetUnderbarrel                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>PresetMuzzle                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>PresetScope                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UWeaponAttachment>Temp_class_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UWeaponAttachment>K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UWeaponAttachment>Temp_class_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UWeaponAttachment>K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>Temp_class_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UWeaponAttachment>K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>Temp_class_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UWeaponAttachment>K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSavedWeaponAttachmentData  CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UWeaponAttachment>Temp_class_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UWeaponAttachment>K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FSavedLoadout               CallFunc_GetLoadoutInfo_Active_Loadout                           (None)
// struct FSavedLoadout               CallFunc_GetLoadoutInfo_Active_Loadout_1                         (None)
// struct FSavedLoadout               K2Node_SetFieldsInStruct_StructOut                               (None)
// struct FSavedLoadout               K2Node_SetFieldsInStruct_StructOut_1                             (None)
// TSubclassOf<class UWeaponAttachment>Temp_class_Variable_6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UWeaponAttachment>Temp_class_Variable_7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWeaponAttachment>K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UWeaponAttachment>K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UW_Loadout_Overview_C::ApplyWeaponPreset(class UClass* Weapon, bool IsPrimary, const struct FWeaponPreset& WeaponPreset, TSubclassOf<class USkinComponent> PresetSkin, TSubclassOf<class UWeaponAttachment> PresetAmmunition, TSubclassOf<class UWeaponAttachment> PresetIlluminator, TSubclassOf<class UWeaponAttachment> PresetGrip, TSubclassOf<class UWeaponAttachment> PresetStock, TSubclassOf<class UWeaponAttachment> PresetOverbarrel, TSubclassOf<class UWeaponAttachment> PresetUnderbarrel, TSubclassOf<class UWeaponAttachment> PresetMuzzle, TSubclassOf<class UWeaponAttachment> PresetScope, TSubclassOf<class UWeaponAttachment> Temp_class_Variable, bool Temp_bool_Variable, TSubclassOf<class UWeaponAttachment> Temp_class_Variable_1, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue_2, bool CallFunc_IsValidClass_ReturnValue_3, bool CallFunc_IsValidClass_ReturnValue_4, bool CallFunc_IsValidClass_ReturnValue_5, bool CallFunc_IsValidClass_ReturnValue_6, TSubclassOf<class UWeaponAttachment> K2Node_Select_Default, bool CallFunc_IsValidClass_ReturnValue_7, bool Temp_bool_Variable_1, TSubclassOf<class UWeaponAttachment> Temp_class_Variable_2, bool Temp_bool_Variable_2, TSubclassOf<class UWeaponAttachment> K2Node_Select_Default_1, TSubclassOf<class UWeaponAttachment> Temp_class_Variable_3, bool Temp_bool_Variable_3, TSubclassOf<class UWeaponAttachment> K2Node_Select_Default_2, TSubclassOf<class UWeaponAttachment> Temp_class_Variable_4, bool Temp_bool_Variable_4, TSubclassOf<class UWeaponAttachment> K2Node_Select_Default_3, TSubclassOf<class UWeaponAttachment> K2Node_Select_Default_4, bool CallFunc_Map_Remove_ReturnValue, const struct FSavedWeaponAttachmentData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TSubclassOf<class UWeaponAttachment> Temp_class_Variable_5, bool Temp_bool_Variable_5, TSubclassOf<class UWeaponAttachment> K2Node_Select_Default_5, const struct FSavedLoadout& CallFunc_GetLoadoutInfo_Active_Loadout, const struct FSavedLoadout& CallFunc_GetLoadoutInfo_Active_Loadout_1, const struct FSavedLoadout& K2Node_SetFieldsInStruct_StructOut, const struct FSavedLoadout& K2Node_SetFieldsInStruct_StructOut_1, TSubclassOf<class UWeaponAttachment> Temp_class_Variable_6, bool Temp_bool_Variable_6, TSubclassOf<class UWeaponAttachment> Temp_class_Variable_7, TSubclassOf<class UWeaponAttachment> K2Node_Select_Default_6, bool Temp_bool_Variable_7, TSubclassOf<class UWeaponAttachment> K2Node_Select_Default_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "ApplyWeaponPreset");

	Params::UW_Loadout_Overview_C_ApplyWeaponPreset_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.IsPrimary = IsPrimary;
	Parms.WeaponPreset = WeaponPreset;
	Parms.PresetSkin = PresetSkin;
	Parms.PresetAmmunition = PresetAmmunition;
	Parms.PresetIlluminator = PresetIlluminator;
	Parms.PresetGrip = PresetGrip;
	Parms.PresetStock = PresetStock;
	Parms.PresetOverbarrel = PresetOverbarrel;
	Parms.PresetUnderbarrel = PresetUnderbarrel;
	Parms.PresetMuzzle = PresetMuzzle;
	Parms.PresetScope = PresetScope;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;
	Parms.CallFunc_IsValidClass_ReturnValue_2 = CallFunc_IsValidClass_ReturnValue_2;
	Parms.CallFunc_IsValidClass_ReturnValue_3 = CallFunc_IsValidClass_ReturnValue_3;
	Parms.CallFunc_IsValidClass_ReturnValue_4 = CallFunc_IsValidClass_ReturnValue_4;
	Parms.CallFunc_IsValidClass_ReturnValue_5 = CallFunc_IsValidClass_ReturnValue_5;
	Parms.CallFunc_IsValidClass_ReturnValue_6 = CallFunc_IsValidClass_ReturnValue_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValidClass_ReturnValue_7 = CallFunc_IsValidClass_ReturnValue_7;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_class_Variable_2 = Temp_class_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_class_Variable_3 = Temp_class_Variable_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_class_Variable_4 = Temp_class_Variable_4;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_class_Variable_5 = Temp_class_Variable_5;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_GetLoadoutInfo_Active_Loadout = CallFunc_GetLoadoutInfo_Active_Loadout;
	Parms.CallFunc_GetLoadoutInfo_Active_Loadout_1 = CallFunc_GetLoadoutInfo_Active_Loadout_1;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.K2Node_SetFieldsInStruct_StructOut_1 = K2Node_SetFieldsInStruct_StructOut_1;
	Parms.Temp_class_Variable_6 = Temp_class_Variable_6;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_class_Variable_7 = Temp_class_Variable_7;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.DeselectCurrentWeaponPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponPreset               CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponPreset               K2Node_SetFieldsInStruct_StructOut                               (NoDestructor)

void UW_Loadout_Overview_C::DeselectCurrentWeaponPreset(const struct FWeaponPreset& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, const struct FWeaponPreset& K2Node_SetFieldsInStruct_StructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "DeselectCurrentWeaponPreset");

	Params::UW_Loadout_Overview_C_DeselectCurrentWeaponPreset_Params Parms{};

	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.SelectWeaponPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PresetID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeaponPreset               CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeaponPreset               K2Node_SetFieldsInStruct_StructOut                               (NoDestructor)

void UW_Loadout_Overview_C::SelectWeaponPreset(const class FString& PresetID, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FWeaponPreset& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FWeaponPreset& K2Node_SetFieldsInStruct_StructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "SelectWeaponPreset");

	Params::UW_Loadout_Overview_C_SelectWeaponPreset_Params Parms{};

	Parms.PresetID = PresetID;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.AttachmentSlotAutoSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWeaponAttachmentType   AutoSelectAttachmentSlot                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_ByteToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_Attachment_C* K2Node_DynamicCast_AsW_Loadout_Slot_Attachment                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Overview_C::AttachmentSlotAutoSelect(enum class EWeaponAttachmentType AutoSelectAttachmentSlot, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Conv_ByteToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UW_LoadoutSlot_Attachment_C* K2Node_DynamicCast_AsW_Loadout_Slot_Attachment, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "AttachmentSlotAutoSelect");

	Params::UW_Loadout_Overview_C_AttachmentSlotAutoSelect_Params Parms{};

	Parms.AutoSelectAttachmentSlot = AutoSelectAttachmentSlot;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_ByteToString_ReturnValue = CallFunc_Conv_ByteToString_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Loadout_Slot_Attachment = K2Node_DynamicCast_AsW_Loadout_Slot_Attachment;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.InitializeWeaponPresetOptions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class ABaseItem>       Weapon                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedWeaponPreset          CallFunc_GetWeaponPresetsData_ReturnValue                        (None)
// struct FWeaponPreset               CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Overview_C::InitializeWeaponPresetOptions(TSubclassOf<class ABaseItem>& Weapon, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSavedWeaponPreset& CallFunc_GetWeaponPresetsData_ReturnValue, const struct FWeaponPreset& CallFunc_Array_Get_Item, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "InitializeWeaponPresetOptions");

	Params::UW_Loadout_Overview_C_InitializeWeaponPresetOptions_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetWeaponPresetsData_ReturnValue = CallFunc_GetWeaponPresetsData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.CreateQuartermasterAttachment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWeaponAttachmentType   AttachmentType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RevealDelay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_Attachment_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UClass*                      Temp_class_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               CallFunc_GetLoadoutInfo_Active_Loadout                           (None)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UClass*                      K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_Reveal_self_CastInput                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)

void UW_Loadout_Overview_C::CreateQuartermasterAttachment(enum class EWeaponAttachmentType AttachmentType, float RevealDelay, class UClass* Temp_class_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UW_LoadoutSlot_Attachment_C* CallFunc_Create_ReturnValue, enum class EWeaponAttachmentType Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable_1, enum class EWeaponAttachmentType Temp_byte_Variable_1, const struct FSavedLoadout& CallFunc_GetLoadoutInfo_Active_Loadout, class UClass* K2Node_Select_Default, class UClass* K2Node_Select_Default_1, class UClass* K2Node_Select_Default_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UClass* K2Node_Select_Default_3, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Reveal_self_CastInput, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "CreateQuartermasterAttachment");

	Params::UW_Loadout_Overview_C_CreateQuartermasterAttachment_Params Parms{};

	Parms.AttachmentType = AttachmentType;
	Parms.RevealDelay = RevealDelay;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetLoadoutInfo_Active_Loadout = CallFunc_GetLoadoutInfo_Active_Loadout;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Reveal_self_CastInput = CallFunc_Reveal_self_CastInput;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OpenWeaponQuartermaster
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemToModify                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemLookupTable            ItemLookupTable                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               AcceptsMagazine                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AcceptsIlluminator                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AcceptsGrip                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AcceptsStock                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AcceptsOverbarrel                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AcceptsUnderbarrel                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AcceptsMuzzle                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AcceptsScope                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              RevealDelay                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      AttachingItem                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_Reveal_self_CastInput                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::OpenWeaponQuartermaster(class UClass* ItemToModify, struct FItemLookupTable& ItemLookupTable, bool AcceptsMagazine, bool AcceptsIlluminator, bool AcceptsGrip, bool AcceptsStock, bool AcceptsOverbarrel, bool AcceptsUnderbarrel, bool AcceptsMuzzle, bool AcceptsScope, float RevealDelay, class UClass* AttachingItem, enum class EItemCategory Temp_byte_Variable, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Reveal_self_CastInput, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_Variable, class UW_Button_C* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OpenWeaponQuartermaster");

	Params::UW_Loadout_Overview_C_OpenWeaponQuartermaster_Params Parms{};

	Parms.ItemToModify = ItemToModify;
	Parms.ItemLookupTable = ItemLookupTable;
	Parms.AcceptsMagazine = AcceptsMagazine;
	Parms.AcceptsIlluminator = AcceptsIlluminator;
	Parms.AcceptsGrip = AcceptsGrip;
	Parms.AcceptsStock = AcceptsStock;
	Parms.AcceptsOverbarrel = AcceptsOverbarrel;
	Parms.AcceptsUnderbarrel = AcceptsUnderbarrel;
	Parms.AcceptsMuzzle = AcceptsMuzzle;
	Parms.AcceptsScope = AcceptsScope;
	Parms.RevealDelay = RevealDelay;
	Parms.AttachingItem = AttachingItem;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Reveal_self_CastInput = CallFunc_Reveal_self_CastInput;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.SetupBindings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// TArray<class UW_LoadoutSlot_C*>    K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Overview_C::SetupBindings(int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, TArray<class UW_LoadoutSlot_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UW_LoadoutSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UW_LoadoutSlot_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class UW_LoadoutSlot_C* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, class UW_LoadoutSlot_C* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "SetupBindings");

	Params::UW_Loadout_Overview_C_SetupBindings_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.SetActiveQuatermasterWeaponButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPrimary                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_C*            K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::SetActiveQuatermasterWeaponButton(bool IsPrimary, bool Temp_bool_Variable, class UW_LoadoutSlot_C* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "SetActiveQuatermasterWeaponButton");

	Params::UW_Loadout_Overview_C_SetActiveQuatermasterWeaponButton_Params Parms{};

	Parms.IsPrimary = IsPrimary;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.InitializeOverviewList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RemotePlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               CallFunc_GetLoadoutInfo_Active_Loadout                           (None)
// class UW_LoadoutSlot_C*            K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLoadoutPreset>      K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                K2Node_DynamicCast_AsPanel_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelWidget*                K2Node_DynamicCast_AsPanel_Widget_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_2                            (ReferenceParm, ContainsInstancedReference)

void UW_Loadout_Overview_C::InitializeOverviewList(bool RemotePlayer, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, const struct FSavedLoadout& CallFunc_GetLoadoutInfo_Active_Loadout, class UW_LoadoutSlot_C* K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_Variable_1, class UW_Button_C* K2Node_Select_Default_1, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, TArray<struct FLoadoutPreset>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable_3, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, class UPanelWidget* K2Node_DynamicCast_AsPanel_Widget, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, class UPanelWidget* K2Node_DynamicCast_AsPanel_Widget_1, bool K2Node_DynamicCast_bSuccess_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "InitializeOverviewList");

	Params::UW_Loadout_Overview_C_InitializeOverviewList_Params Parms{};

	Parms.RemotePlayer = RemotePlayer;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetLoadoutInfo_Active_Loadout = CallFunc_GetLoadoutInfo_Active_Loadout;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI = K2Node_DynamicCast_AsReady_or_Not_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPanel_Widget = K2Node_DynamicCast_AsPanel_Widget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsPanel_Widget_1 = K2Node_DynamicCast_AsPanel_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetAllChildren_ReturnValue_2 = CallFunc_GetAllChildren_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.Finished_607C2935489AA67033764DA335DA7382
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Overview_C::Finished_607C2935489AA67033764DA335DA7382()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "Finished_607C2935489AA67033764DA335DA7382");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.Finished_340D92A941109D40A716A09F93EFD3B1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Overview_C::Finished_340D92A941109D40A716A09F93EFD3B1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "Finished_340D92A941109D40A716A09F93EFD3B1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.Finished_1C1140E544F6D72CBF82B4B0A003F591
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Overview_C::Finished_1C1140E544F6D72CBF82B4B0A003F591()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "Finished_1C1140E544F6D72CBF82B4B0A003F591");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.Finished_42BB49A3444AA78D7A547F8D1ED2AB88
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Overview_C::Finished_42BB49A3444AA78D7A547F8D1ED2AB88()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "Finished_42BB49A3444AA78D7A547F8D1ED2AB88");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "HeaderSubpageNavigation");

	Params::UW_Loadout_Overview_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "Reveal");

	Params::UW_Loadout_Overview_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Overview_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "Hide");

	Params::UW_Loadout_Overview_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Overview_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "SetInputMode");

	Params::UW_Loadout_Overview_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "ChangePage");

	Params::UW_Loadout_Overview_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Overview_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "PreConstruct");

	Params::UW_Loadout_Overview_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_Overview_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.ClearQuartermasterList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Overview_C::ClearQuartermasterList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "ClearQuartermasterList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Overview_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "UpdateActiveLoadout");

	Params::UW_Loadout_Overview_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OverviewItemDoubleClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::OverviewItemDoubleClick(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OverviewItemDoubleClick");

	Params::UW_Loadout_Overview_C_OverviewItemDoubleClick_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OverviewItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::OverviewItemClicked(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OverviewItemClicked");

	Params::UW_Loadout_Overview_C_OverviewItemClicked_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OverviewItemHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::OverviewItemHover(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OverviewItemHover");

	Params::UW_Loadout_Overview_C_OverviewItemHover_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OverviewItemUnhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::OverviewItemUnhover(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OverviewItemUnhover");

	Params::UW_Loadout_Overview_C_OverviewItemUnhover_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_btn_CleanWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_btn_CleanWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "BndEvt__W_Loadout_Overview_btn_CleanWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_btn_CleanWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OpenQuartermaster
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemToModify                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemLookupTable            ItemLookupTable                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Overview_C::OpenQuartermaster(class UClass* ItemToModify, const struct FItemLookupTable& ItemLookupTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OpenQuartermaster");

	Params::UW_Loadout_Overview_C_OpenQuartermaster_Params Parms{};

	Parms.ItemToModify = ItemToModify;
	Parms.ItemLookupTable = ItemLookupTable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.UpdateCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "UpdateCurrentSlot");

	Params::UW_Loadout_Overview_C_UpdateCurrentSlot_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Overview_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "UpdateCurrentItemMap");

	Params::UW_Loadout_Overview_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.SwapQuartermasterWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPrimary                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_Overview_C::SwapQuartermasterWeapon(bool IsPrimary)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "SwapQuartermasterWeapon");

	Params::UW_Loadout_Overview_C_SwapQuartermasterWeapon_Params Parms{};

	Parms.IsPrimary = IsPrimary;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.AttachmentSlotClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_Attachment_C* TriggeringAttachmentSlot                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::AttachmentSlotClicked(class UW_LoadoutSlot_Attachment_C* TriggeringAttachmentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "AttachmentSlotClicked");

	Params::UW_Loadout_Overview_C_AttachmentSlotClicked_Params Parms{};

	Parms.TriggeringAttachmentSlot = TriggeringAttachmentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.AttachmentSlotHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_Attachment_C* TriggeringAttachmentSlot                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::AttachmentSlotHovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachmentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "AttachmentSlotHovered");

	Params::UW_Loadout_Overview_C_AttachmentSlotHovered_Params Parms{};

	Parms.TriggeringAttachmentSlot = TriggeringAttachmentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.SetLoadoutWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_C*                LoadoutWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "SetLoadoutWidget");

	Params::UW_Loadout_Overview_C_SetLoadoutWidget_Params Parms{};

	Parms.LoadoutWidget = LoadoutWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.RefreshQuartermasterList
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemToModify                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemLookupTable            ItemLookupTable                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_Loadout_Overview_C::RefreshQuartermasterList(class UClass* ItemToModify, struct FItemLookupTable& ItemLookupTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "RefreshQuartermasterList");

	Params::UW_Loadout_Overview_C_RefreshQuartermasterList_Params Parms{};

	Parms.ItemToModify = ItemToModify;
	Parms.ItemLookupTable = ItemLookupTable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.CloseQuartermasterList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Overview_C::CloseQuartermasterList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "CloseQuartermasterList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.HideOverviewWidgets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AnimationOffset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::HideOverviewWidgets(float AnimationOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "HideOverviewWidgets");

	Params::UW_Loadout_Overview_C_HideOverviewWidgets_Params Parms{};

	Parms.AnimationOffset = AnimationOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_WeaponPresets_K2Node_ComponentBoundEvent_3_OnOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_WeaponPresets_K2Node_ComponentBoundEvent_3_OnOptionSelected__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "BndEvt__W_Loadout_Overview_WeaponPresets_K2Node_ComponentBoundEvent_3_OnOptionSelected__DelegateSignature");

	Params::UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_WeaponPresets_K2Node_ComponentBoundEvent_3_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OpenArmorEditor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Overview_C::OpenArmorEditor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OpenArmorEditor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.FadeOverviewToQuartermaster
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Overview_C::FadeOverviewToQuartermaster()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "FadeOverviewToQuartermaster");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.FadeOverviewToArmorEditor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Overview_C::FadeOverviewToArmorEditor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "FadeOverviewToArmorEditor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.CloseArmorQuartermaster
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Overview_C::CloseArmorQuartermaster()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "CloseArmorQuartermaster");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.NewArmorEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Overview_C::NewArmorEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "NewArmorEquipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_Dropdown_ArmorCoverage_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_Dropdown_ArmorCoverage_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "BndEvt__W_Loadout_Overview_Dropdown_ArmorCoverage_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature");

	Params::UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_Dropdown_ArmorCoverage_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.NewArmourMaterialEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Overview_C::NewArmourMaterialEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "NewArmourMaterialEquipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.AttachmentSlotUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_Attachment_C* TriggeringAttachmentSlot                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::AttachmentSlotUnhovered(class UW_LoadoutSlot_Attachment_C* TriggeringAttachmentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "AttachmentSlotUnhovered");

	Params::UW_Loadout_Overview_C_AttachmentSlotUnhovered_Params Parms{};

	Parms.TriggeringAttachmentSlot = TriggeringAttachmentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_6_OnOptionHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_6_OnOptionHovered__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_6_OnOptionHovered__DelegateSignature");

	Params::UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_6_OnOptionHovered__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_7_OnOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_7_OnOptionSelected__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_7_OnOptionSelected__DelegateSignature");

	Params::UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_7_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_8_OnFooterOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_8_OnFooterOptionSelected__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_8_OnFooterOptionSelected__DelegateSignature");

	Params::UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_8_OnFooterOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_btn_ModifiedPreset_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_btn_ModifiedPreset_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "BndEvt__W_Loadout_Overview_btn_ModifiedPreset_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature");

	Params::UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_btn_ModifiedPreset_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_btn_ClearPresetWarning_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_btn_ClearPresetWarning_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "BndEvt__W_Loadout_Overview_btn_ClearPresetWarning_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature");

	Params::UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_btn_ClearPresetWarning_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_btn_Quartermaster_Primary_K2Node_ComponentBoundEvent_5_Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_btn_Quartermaster_Primary_K2Node_ComponentBoundEvent_5_Selected__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "BndEvt__W_Loadout_Overview_btn_Quartermaster_Primary_K2Node_ComponentBoundEvent_5_Selected__DelegateSignature");

	Params::UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_btn_Quartermaster_Primary_K2Node_ComponentBoundEvent_5_Selected__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_btn_Quartermaster_Sidearm_K2Node_ComponentBoundEvent_11_Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::BndEvt__W_Loadout_Overview_btn_Quartermaster_Sidearm_K2Node_ComponentBoundEvent_11_Selected__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "BndEvt__W_Loadout_Overview_btn_Quartermaster_Sidearm_K2Node_ComponentBoundEvent_11_Selected__DelegateSignature");

	Params::UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_btn_Quartermaster_Sidearm_K2Node_ComponentBoundEvent_11_Selected__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.ExecuteUbergraph_W_Loadout_Overview
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TriggeringSlot_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TriggeringSlot_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TriggeringSlot_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_C*            K2Node_CustomEvent_TriggeringSlot                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_ItemToModify_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemLookupTable            K2Node_CustomEvent_ItemLookupTable_1                             (None)
// class UW_LoadoutSlot_C*            K2Node_Event_CurrentSlot                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// bool                               K2Node_CustomEvent_IsPrimary                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UW_LoadoutSlot_Attachment_C* K2Node_CustomEvent_TriggeringAttachmentSlot_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_Attachment_C* K2Node_CustomEvent_TriggeringAttachmentSlot_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_C*                K2Node_Event_LoadoutWidget                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_ItemToModify                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemLookupTable            K2Node_CustomEvent_ItemLookupTable                               (ConstParm)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_AnimationOffset                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_OptionID_4                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_C*            K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_OptionID_3                            (ZeroConstructor, HasGetValueTypeHash)
// enum class EArmourCoverage         CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_Hide_self_CastInput                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class UW_LoadoutSlot_Attachment_C* K2Node_CustomEvent_TriggeringAttachmentSlot                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_OptionID_2                            (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_OptionID_1                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_StringNotEmpty_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_OptionID                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLoadoutPreset              CallFunc_Map_Find_Value_1                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLoadoutPreset              CallFunc_Map_Find_Value_2                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSavedLoadout               CallFunc_GetLoadoutInfo_Active_Loadout                           (None)
// struct FSavedLoadout               CallFunc_GetLoadoutInfo_Active_Loadout_1                         (None)
// struct FSavedLoadout               CallFunc_GetLoadoutInfo_Active_Loadout_2                         (None)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::ExecuteUbergraph_W_Loadout_Overview(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FName K2Node_Event_OptionNameID, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class UW_LoadoutSlot_C* K2Node_CustomEvent_TriggeringSlot_3, class UW_LoadoutSlot_C* K2Node_CustomEvent_TriggeringSlot_2, class UW_LoadoutSlot_C* K2Node_CustomEvent_TriggeringSlot_1, class UW_LoadoutSlot_C* K2Node_CustomEvent_TriggeringSlot, class UW_Button_C* K2Node_ComponentBoundEvent_Button_4, class UClass* K2Node_CustomEvent_ItemToModify_1, const struct FItemLookupTable& K2Node_CustomEvent_ItemLookupTable_1, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, bool K2Node_CustomEvent_IsPrimary, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UW_LoadoutSlot_Attachment_C* K2Node_CustomEvent_TriggeringAttachmentSlot_2, class UW_LoadoutSlot_Attachment_C* K2Node_CustomEvent_TriggeringAttachmentSlot_1, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class UClass* K2Node_CustomEvent_ItemToModify, const struct FItemLookupTable& K2Node_CustomEvent_ItemLookupTable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float K2Node_CustomEvent_AnimationOffset, const class FString& K2Node_ComponentBoundEvent_OptionID_4, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool Temp_bool_Variable, class UW_LoadoutSlot_C* K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_2, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_3, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, const class FString& K2Node_ComponentBoundEvent_OptionID_3, enum class EArmourCoverage CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Hide_self_CastInput, class UWidget* CallFunc_Array_Get_Item_1, float CallFunc_Add_FloatFloat_ReturnValue_2, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FText CallFunc_MakeLiteralText_ReturnValue, class UW_LoadoutSlot_Attachment_C* K2Node_CustomEvent_TriggeringAttachmentSlot, const class FString& K2Node_ComponentBoundEvent_OptionID_2, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& K2Node_ComponentBoundEvent_OptionID_1, bool CallFunc_StringNotEmpty_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const class FString& K2Node_ComponentBoundEvent_OptionID, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FLoadoutPreset& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, const struct FLoadoutPreset& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FSavedLoadout& CallFunc_GetLoadoutInfo_Active_Loadout, const struct FSavedLoadout& CallFunc_GetLoadoutInfo_Active_Loadout_1, const struct FSavedLoadout& CallFunc_GetLoadoutInfo_Active_Loadout_2, bool CallFunc_Map_Remove_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_3, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "ExecuteUbergraph_W_Loadout_Overview");

	Params::UW_Loadout_Overview_C_ExecuteUbergraph_W_Loadout_Overview_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.K2Node_CustomEvent_TriggeringSlot_3 = K2Node_CustomEvent_TriggeringSlot_3;
	Parms.K2Node_CustomEvent_TriggeringSlot_2 = K2Node_CustomEvent_TriggeringSlot_2;
	Parms.K2Node_CustomEvent_TriggeringSlot_1 = K2Node_CustomEvent_TriggeringSlot_1;
	Parms.K2Node_CustomEvent_TriggeringSlot = K2Node_CustomEvent_TriggeringSlot;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_CustomEvent_ItemToModify_1 = K2Node_CustomEvent_ItemToModify_1;
	Parms.K2Node_CustomEvent_ItemLookupTable_1 = K2Node_CustomEvent_ItemLookupTable_1;
	Parms.K2Node_Event_CurrentSlot = K2Node_Event_CurrentSlot;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.K2Node_CustomEvent_IsPrimary = K2Node_CustomEvent_IsPrimary;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_TriggeringAttachmentSlot_2 = K2Node_CustomEvent_TriggeringAttachmentSlot_2;
	Parms.K2Node_CustomEvent_TriggeringAttachmentSlot_1 = K2Node_CustomEvent_TriggeringAttachmentSlot_1;
	Parms.K2Node_Event_LoadoutWidget = K2Node_Event_LoadoutWidget;
	Parms.K2Node_CustomEvent_ItemToModify = K2Node_CustomEvent_ItemToModify;
	Parms.K2Node_CustomEvent_ItemLookupTable = K2Node_CustomEvent_ItemLookupTable;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI = K2Node_DynamicCast_AsReady_or_Not_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_AnimationOffset = K2Node_CustomEvent_AnimationOffset;
	Parms.K2Node_ComponentBoundEvent_OptionID_4 = K2Node_ComponentBoundEvent_OptionID_4;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_2 = CallFunc_CreatePlayAnimationProxyObject_Result_2;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_3 = CallFunc_CreatePlayAnimationProxyObject_Result_3;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_OptionID_3 = K2Node_ComponentBoundEvent_OptionID_3;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Hide_self_CastInput = CallFunc_Hide_self_CastInput;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI_1 = K2Node_DynamicCast_AsReady_or_Not_UI_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_CustomEvent_TriggeringAttachmentSlot = K2Node_CustomEvent_TriggeringAttachmentSlot;
	Parms.K2Node_ComponentBoundEvent_OptionID_2 = K2Node_ComponentBoundEvent_OptionID_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OptionID_1 = K2Node_ComponentBoundEvent_OptionID_1;
	Parms.CallFunc_StringNotEmpty_ReturnValue = CallFunc_StringNotEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_OptionID = K2Node_ComponentBoundEvent_OptionID;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_GetLoadoutInfo_Active_Loadout = CallFunc_GetLoadoutInfo_Active_Loadout;
	Parms.CallFunc_GetLoadoutInfo_Active_Loadout_1 = CallFunc_GetLoadoutInfo_Active_Loadout_1;
	Parms.CallFunc_GetLoadoutInfo_Active_Loadout_2 = CallFunc_GetLoadoutInfo_Active_Loadout_2;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OnAttachmentSlotUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_Attachment_C* TriggeringAttachment                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::OnAttachmentSlotUnhovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OnAttachmentSlotUnhovered__DelegateSignature");

	Params::UW_Loadout_Overview_C_OnAttachmentSlotUnhovered__DelegateSignature_Params Parms{};

	Parms.TriggeringAttachment = TriggeringAttachment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OnArmorEditorClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Overview_C::OnArmorEditorClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OnArmorEditorClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OnArmorEditorOpen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Overview_C::OnArmorEditorOpen__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OnArmorEditorOpen__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewOpen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Overview_C::OnOverviewOpen__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OnOverviewOpen__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewWidgetsHidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Overview_C::OnOverviewWidgetsHidden__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OnOverviewWidgetsHidden__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OnQuartermasterClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Overview_C::OnQuartermasterClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OnQuartermasterClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OnQuartermasterOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Overview_C::OnQuartermasterOpened__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OnQuartermasterOpened__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OnAttachmentSlotHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_Attachment_C* TriggeringAttachment                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::OnAttachmentSlotHovered__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OnAttachmentSlotHovered__DelegateSignature");

	Params::UW_Loadout_Overview_C_OnAttachmentSlotHovered__DelegateSignature_Params Parms{};

	Parms.TriggeringAttachment = TriggeringAttachment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OnAttachmentSlotClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_Attachment_C* TriggeringAttachment                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::OnAttachmentSlotClicked__DelegateSignature(class UW_LoadoutSlot_Attachment_C* TriggeringAttachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OnAttachmentSlotClicked__DelegateSignature");

	Params::UW_Loadout_Overview_C_OnAttachmentSlotClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringAttachment = TriggeringAttachment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OnQuartermasterWeaponSwapped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPrimary                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_C*            NewLoadoutSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::OnQuartermasterWeaponSwapped__DelegateSignature(bool IsPrimary, class UW_LoadoutSlot_C* NewLoadoutSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OnQuartermasterWeaponSwapped__DelegateSignature");

	Params::UW_Loadout_Overview_C_OnQuartermasterWeaponSwapped__DelegateSignature_Params Parms{};

	Parms.IsPrimary = IsPrimary;
	Parms.NewLoadoutSlot = NewLoadoutSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OnCleanWeaponClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Overview_C::OnCleanWeaponClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OnCleanWeaponClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewItemDoubleClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::OnOverviewItemDoubleClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OnOverviewItemDoubleClicked__DelegateSignature");

	Params::UW_Loadout_Overview_C_OnOverviewItemDoubleClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::OnOverviewItemClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OnOverviewItemClicked__DelegateSignature");

	Params::UW_Loadout_Overview_C_OnOverviewItemClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewItemUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::OnOverviewItemUnhovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OnOverviewItemUnhovered__DelegateSignature");

	Params::UW_Loadout_Overview_C_OnOverviewItemUnhovered__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Overview_C::OnOverviewItemHovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Overview_C", "OnOverviewItemHovered__DelegateSignature");

	Params::UW_Loadout_Overview_C_OnOverviewItemHovered__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}

}


