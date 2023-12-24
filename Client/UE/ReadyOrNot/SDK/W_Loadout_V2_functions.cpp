#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Loadout_V2.W_Loadout_V2_C
// (None)

class UClass* UW_Loadout_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Loadout_V2_C");

	return Clss;
}


// W_Loadout_V2_C W_Loadout_V2.Default__W_Loadout_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Loadout_V2_C* UW_Loadout_V2_C::GetDefaultObj()
{
	static class UW_Loadout_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Loadout_V2_C*>(UW_Loadout_V2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Loadout_V2.W_Loadout_V2_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonActivatableWidget*    CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Overview_V2_C*            K2Node_DynamicCast_AsW_Overview_V2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_BackPage_self_CastInput                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BackPage_Handled                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BackPage_Handled_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonActivatableWidget*    CallFunc_GetActiveWidget_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::BackPage(bool* Handled, class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue, class UW_Overview_V2_C* K2Node_DynamicCast_AsW_Overview_V2, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IReadyOrNotUI_C> CallFunc_BackPage_self_CastInput, bool CallFunc_BackPage_Handled, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BackPage_Handled_1, class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "BackPage");

	Params::UW_Loadout_V2_C_BackPage_Params Parms{};

	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Overview_V2 = K2Node_DynamicCast_AsW_Overview_V2;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BackPage_self_CastInput = CallFunc_BackPage_self_CastInput;
	Parms.CallFunc_BackPage_Handled = CallFunc_BackPage_Handled;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI = K2Node_DynamicCast_AsReady_or_Not_UI;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BackPage_Handled_1 = CallFunc_BackPage_Handled_1;
	Parms.CallFunc_GetActiveWidget_ReturnValue_1 = CallFunc_GetActiveWidget_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Loadout_V2.W_Loadout_V2_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "GetFocusTarget");

	Params::UW_Loadout_V2_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Loadout_V2.W_Loadout_V2_C.AmmoHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AmmoName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CategoryText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_V2_C::AmmoHovered(class FName AmmoName, class FText CategoryText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "AmmoHovered");

	Params::UW_Loadout_V2_C_AmmoHovered_Params Parms{};

	Parms.AmmoName = AmmoName;
	Parms.CategoryText = CategoryText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.ClosePresetPreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatableWidget*    CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_Preset_Preview_C* K2Node_DynamicCast_AsW_Loadout_Preset_Preview                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_Hide_self_CastInput                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_V2_C::ClosePresetPreview(class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue, class UW_Loadout_Preset_Preview_C* K2Node_DynamicCast_AsW_Loadout_Preset_Preview, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Hide_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "ClosePresetPreview");

	Params::UW_Loadout_V2_C_ClosePresetPreview_Params Parms{};

	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Loadout_Preset_Preview = K2Node_DynamicCast_AsW_Loadout_Preset_Preview;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Hide_self_CastInput = CallFunc_Hide_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.PreviewPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               PreviewLoadout                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UW_Loadout_Preset_Preview_C* CallFunc_BP_AddWidget_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_Preset_Preview_C* K2Node_DynamicCast_AsW_Loadout_Preset_Preview                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_V2_C::PreviewPreset(const struct FSavedLoadout& PreviewLoadout, class UW_Loadout_Preset_Preview_C* CallFunc_BP_AddWidget_ReturnValue, class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue, class UW_Loadout_Preset_Preview_C* K2Node_DynamicCast_AsW_Loadout_Preset_Preview, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "PreviewPreset");

	Params::UW_Loadout_V2_C_PreviewPreset_Params Parms{};

	Parms.PreviewLoadout = PreviewLoadout;
	Parms.CallFunc_BP_AddWidget_ReturnValue = CallFunc_BP_AddWidget_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Loadout_Preset_Preview = K2Node_DynamicCast_AsW_Loadout_Preset_Preview;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.PresetModified
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PresetDirty                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_V2_C::PresetModified(bool PresetDirty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "PresetModified");

	Params::UW_Loadout_V2_C_PresetModified_Params Parms{};

	Parms.PresetDirty = PresetDirty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.CancelSavePreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::CancelSavePreset(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "CancelSavePreset");

	Params::UW_Loadout_V2_C_CancelSavePreset_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.DeleteLoadoutPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          TriggeringModal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSavedLoadout               CurrentLoadout                                                   (Edit, BlueprintVisible)
// class FString                      PresetName                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Overwriting                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ConfirmOverwrite                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StringIsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_V2_C::DeleteLoadoutPreset(class UW_StandardModal_C* TriggeringModal, class FText TextEntry, const struct FSavedLoadout& CurrentLoadout, const class FString& PresetName, bool Overwriting, bool ConfirmOverwrite, const class FString& CallFunc_Conv_TextToString_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, bool CallFunc_StringIsEmpty_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "DeleteLoadoutPreset");

	Params::UW_Loadout_V2_C_DeleteLoadoutPreset_Params Parms{};

	Parms.TriggeringModal = TriggeringModal;
	Parms.TextEntry = TextEntry;
	Parms.CurrentLoadout = CurrentLoadout;
	Parms.PresetName = PresetName;
	Parms.Overwriting = Overwriting;
	Parms.ConfirmOverwrite = ConfirmOverwrite;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_StringIsEmpty_ReturnValue = CallFunc_StringIsEmpty_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SaveLoadoutPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          TriggeringModal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSavedLoadout               CurrentLoadout                                                   (Edit, BlueprintVisible)
// class FString                      PresetName                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Overwriting                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ConfirmOverwrite                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_GetAllPresetNames_ReturnValue                           (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_V2_C::SaveLoadoutPreset(class UW_StandardModal_C* TriggeringModal, class FText TextEntry, const struct FSavedLoadout& CurrentLoadout, const class FString& PresetName, bool Overwriting, bool ConfirmOverwrite, const class FString& CallFunc_Conv_TextToString_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, bool CallFunc_NotEqual_StrStr_ReturnValue, TArray<class FString>& CallFunc_GetAllPresetNames_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SaveLoadoutPreset");

	Params::UW_Loadout_V2_C_SaveLoadoutPreset_Params Parms{};

	Parms.TriggeringModal = TriggeringModal;
	Parms.TextEntry = TextEntry;
	Parms.CurrentLoadout = CurrentLoadout;
	Parms.PresetName = PresetName;
	Parms.Overwriting = Overwriting;
	Parms.ConfirmOverwrite = ConfirmOverwrite;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetAllPresetNames_ReturnValue = CallFunc_GetAllPresetNames_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OpenPresetSaveModal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CurrentPreset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bDelete                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_4                                             (None)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetAllPresetNames_ReturnValue                           (ReferenceParm)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_Select_Default_2                                          (ConstParm, ZeroConstructor, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::OpenPresetSaveModal(const class FString& CurrentPreset, bool bDelete, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, const struct FAnchors& K2Node_MakeStruct_Anchors, bool Temp_bool_Variable_2, class FText Temp_text_Variable_4, class UW_StandardModal_C* CallFunc_Create_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TArray<class FString>& CallFunc_GetAllPresetNames_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Format_ReturnValue, const struct FVector2D& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_Select_Default_2, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OpenPresetSaveModal");

	Params::UW_Loadout_V2_C_OpenPresetSaveModal_Params Parms{};

	Parms.CurrentPreset = CurrentPreset;
	Parms.bDelete = bDelete;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetAllPresetNames_ReturnValue = CallFunc_GetAllPresetNames_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.ShowMainNav
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::ShowMainNav()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "ShowMainNav");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.ShowWeaponClassNav
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemClass              SelectedClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSecondary                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bShowLessLethal                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemClass              NewCategory                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<enum class EItemClass>        SecondaryClasses                                                 (Edit, BlueprintVisible)
// TMap<class FName, class FText>     TempOptionMap                                                    (Edit, BlueprintVisible)
// TSet<enum class EItemClass>        PrimaryClasses                                                   (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemClassText_Category_Text                          (None)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<enum class EItemClass>        K2Node_MakeVariable_MakeVariableOutput                           (None)
// TSet<enum class EItemClass>        K2Node_MakeVariable_MakeVariableOutput_1                         (None)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<enum class EItemClass>        K2Node_Select_Default                                            (None)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_V2_C::ShowWeaponClassNav(enum class EItemClass SelectedClass, bool bIsSecondary, bool bShowLessLethal, enum class EItemClass NewCategory, TSet<enum class EItemClass> SecondaryClasses, TMap<class FName, class FText> TempOptionMap, TSet<enum class EItemClass> PrimaryClasses, bool Temp_bool_Variable, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_GetItemClassText_Category_Text, class FName CallFunc_Conv_StringToName_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, TSet<enum class EItemClass> K2Node_MakeVariable_MakeVariableOutput, TSet<enum class EItemClass> K2Node_MakeVariable_MakeVariableOutput_1, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_1, TSet<enum class EItemClass> K2Node_Select_Default, bool CallFunc_Set_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "ShowWeaponClassNav");

	Params::UW_Loadout_V2_C_ShowWeaponClassNav_Params Parms{};

	Parms.SelectedClass = SelectedClass;
	Parms.bIsSecondary = bIsSecondary;
	Parms.bShowLessLethal = bShowLessLethal;
	Parms.NewCategory = NewCategory;
	Parms.SecondaryClasses = SecondaryClasses;
	Parms.TempOptionMap = TempOptionMap;
	Parms.PrimaryClasses = PrimaryClasses;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetItemClassText_Category_Text = CallFunc_GetItemClassText_Category_Text;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.K2Node_MakeVariable_MakeVariableOutput_1 = K2Node_MakeVariable_MakeVariableOutput_1;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_GetFocusTarget_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Loadout_V2_C::BP_GetDesiredFocusTarget(TScriptInterface<class IReadyOrNotUI_C> CallFunc_GetFocusTarget_self_CastInput, class UWidget* CallFunc_GetFocusTarget_Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "BP_GetDesiredFocusTarget");

	Params::UW_Loadout_V2_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetFocusTarget_self_CastInput = CallFunc_GetFocusTarget_self_CastInput;
	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_V2.W_Loadout_V2_C.SetCameraAndPose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CameraTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      PoseTag                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              BlendTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StringIsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::SetCameraAndPose(class FName CameraTag, const class FString& PoseTag, float BlendTime, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, bool CallFunc_StringIsEmpty_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SetCameraAndPose");

	Params::UW_Loadout_V2_C_SetCameraAndPose_Params Parms{};

	Parms.CameraTag = CameraTag;
	Parms.PoseTag = PoseTag;
	Parms.BlendTime = BlendTime;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_StringIsEmpty_ReturnValue = CallFunc_StringIsEmpty_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SetCameraAndPoseByPageID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageNameID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BlendTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Map_Find_Value_1                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::SetCameraAndPoseByPageID(class FName PageNameID, float BlendTime, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SetCameraAndPoseByPageID");

	Params::UW_Loadout_V2_C_SetCameraAndPoseByPageID_Params Parms{};

	Parms.PageNameID = PageNameID;
	Parms.BlendTime = BlendTime;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SlotUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::SlotUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SlotUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.ArmorMaterialHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmourMaterial*             ArmorMaterial                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_V2_C::ArmorMaterialHovered(class UArmourMaterial* ArmorMaterial, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "ArmorMaterialHovered");

	Params::UW_Loadout_V2_C_ArmorMaterialHovered_Params Parms{};

	Parms.ArmorMaterial = ArmorMaterial;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.AttachmentHovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWeaponAttachment*           Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   AttachmentType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAttachmentSlotText_SlotText                          (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_V2_C::AttachmentHovered(class UWeaponAttachment* Attachment, enum class EWeaponAttachmentType AttachmentType, class FText CallFunc_GetAttachmentSlotText_SlotText, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "AttachmentHovered");

	Params::UW_Loadout_V2_C_AttachmentHovered_Params Parms{};

	Parms.Attachment = Attachment;
	Parms.AttachmentType = AttachmentType;
	Parms.CallFunc_GetAttachmentSlotText_SlotText = CallFunc_GetAttachmentSlotText_SlotText;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.ItemHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseItem*                   BaseItem                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CategoryText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_V2_C::ItemHovered(class ABaseItem* BaseItem, class FText CategoryText, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "ItemHovered");

	Params::UW_Loadout_V2_C_ItemHovered_Params Parms{};

	Parms.BaseItem = BaseItem;
	Parms.CategoryText = CategoryText;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.WeaponHovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseWeapon*                 BaseWeaponItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Secondary                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// class UClass*                      CallFunc_GetClassFromObject_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBase_Weapon                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_V2_C::WeaponHovered(class ABaseWeapon* BaseWeaponItem, bool Secondary, class FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, class FText Temp_text_Variable_1, bool Temp_bool_Variable, class FText K2Node_Select_Default, class UClass* CallFunc_GetClassFromObject_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBase_Weapon, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "WeaponHovered");

	Params::UW_Loadout_V2_C_WeaponHovered_Params Parms{};

	Parms.BaseWeaponItem = BaseWeaponItem;
	Parms.Secondary = Secondary;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetClassFromObject_ReturnValue = CallFunc_GetClassFromObject_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsBase_Weapon = K2Node_ClassDynamicCast_AsBase_Weapon;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BackPage_Handled                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_Loadout_V2_C::BP_OnHandleBackAction(bool CallFunc_BackPage_Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "BP_OnHandleBackAction");

	Params::UW_Loadout_V2_C_BP_OnHandleBackAction_Params Parms{};

	Parms.CallFunc_BackPage_Handled = CallFunc_BackPage_Handled;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_V2.W_Loadout_V2_C.CheckOverviewIsActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               TURR                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverview_V2*                K2Node_DynamicCast_AsOverview_V2                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_V2_C::CheckOverviewIsActive(bool* TURR, class UOverview_V2* K2Node_DynamicCast_AsOverview_V2, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "CheckOverviewIsActive");

	Params::UW_Loadout_V2_C_CheckOverviewIsActive_Params Parms{};

	Parms.K2Node_DynamicCast_AsOverview_V2 = K2Node_DynamicCast_AsOverview_V2;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (TURR != nullptr)
		*TURR = Parms.TURR;

}


// Function W_Loadout_V2.W_Loadout_V2_C.SetCategoryPoses
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemCategory           Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::SetCategoryPoses(enum class EItemCategory Temp_byte_Variable, const class FString& Temp_string_Variable, enum class EItemCategory Temp_byte_Variable_1, const class FString& Temp_string_Variable_1, enum class EItemCategory Temp_byte_Variable_2, const class FString& Temp_string_Variable_2, enum class EItemCategory Temp_byte_Variable_3, const class FString& Temp_string_Variable_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SetCategoryPoses");

	Params::UW_Loadout_V2_C_SetCategoryPoses_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SetCategoryCameraTags
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemCategory           Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::SetCategoryCameraTags(enum class EItemCategory Temp_byte_Variable, class FName Temp_name_Variable, enum class EItemCategory Temp_byte_Variable_1, class FName Temp_name_Variable_1, enum class EItemCategory Temp_byte_Variable_2, class FName Temp_name_Variable_2, enum class EItemCategory Temp_byte_Variable_3, class FName Temp_name_Variable_3, enum class EItemCategory Temp_byte_Variable_4, class FName Temp_name_Variable_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SetCategoryCameraTags");

	Params::UW_Loadout_V2_C_SetCategoryCameraTags_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.UpdateAllPreviewWeaponAttachments
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsWorkbench                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class ABaseItem>       Weapon                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               IsSidearm                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class UClass*>              Attachments                                                      (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSavedWeaponAttachmentData  K2Node_MakeStruct_SavedWeaponAttachmentData                      (NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSavedWeaponAttachmentData  K2Node_MakeStruct_SavedWeaponAttachmentData_1                    (NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSavedWeaponAttachmentData  K2Node_Select_Default                                            (ConstParm, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               CallFunc_GetActiveLoadout_ReturnValue                            (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorld*                      CallFunc_GetWorldBP_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedWeaponAttachmentData  CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemData*                   CallFunc_GetItemData_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedWeaponAttachmentData  K2Node_MakeStruct_SavedWeaponAttachmentData_2                    (NoDestructor)
// struct FSavedWeaponAttachmentData  K2Node_Select_Default_1                                          (ConstParm, NoDestructor)
// struct FSavedWeaponAttachmentData  K2Node_Select_Default_2                                          (ConstParm, NoDestructor)
// class UClass*                      K2Node_Select_Default_3                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::UpdateAllPreviewWeaponAttachments(bool IsWorkbench, TSubclassOf<class ABaseItem>& Weapon, bool IsSidearm, const struct FSavedLoadout& ActiveLoadout, const TArray<class UClass*>& Attachments, bool Temp_bool_Variable, const struct FSavedWeaponAttachmentData& K2Node_MakeStruct_SavedWeaponAttachmentData, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const struct FSavedWeaponAttachmentData& K2Node_MakeStruct_SavedWeaponAttachmentData_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_BooleanOR_ReturnValue, const struct FSavedWeaponAttachmentData& K2Node_Select_Default, bool Temp_bool_Variable_2, int32 Temp_int_Variable, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 Temp_int_Variable_1, const struct FSavedLoadout& CallFunc_GetActiveLoadout_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UWorld* CallFunc_GetWorldBP_ReturnValue, const struct FSavedWeaponAttachmentData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UItemData* CallFunc_GetItemData_ReturnValue, const struct FSavedWeaponAttachmentData& K2Node_MakeStruct_SavedWeaponAttachmentData_2, const struct FSavedWeaponAttachmentData& K2Node_Select_Default_1, const struct FSavedWeaponAttachmentData& K2Node_Select_Default_2, class UClass* K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "UpdateAllPreviewWeaponAttachments");

	Params::UW_Loadout_V2_C_UpdateAllPreviewWeaponAttachments_Params Parms{};

	Parms.IsWorkbench = IsWorkbench;
	Parms.Weapon = Weapon;
	Parms.IsSidearm = IsSidearm;
	Parms.ActiveLoadout = ActiveLoadout;
	Parms.Attachments = Attachments;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_SavedWeaponAttachmentData = K2Node_MakeStruct_SavedWeaponAttachmentData;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.K2Node_MakeStruct_SavedWeaponAttachmentData_1 = K2Node_MakeStruct_SavedWeaponAttachmentData_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetActiveLoadout_ReturnValue = CallFunc_GetActiveLoadout_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetWorldBP_ReturnValue = CallFunc_GetWorldBP_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetItemData_ReturnValue = CallFunc_GetItemData_ReturnValue;
	Parms.K2Node_MakeStruct_SavedWeaponAttachmentData_2 = K2Node_MakeStruct_SavedWeaponAttachmentData_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.EquipArmourMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmourMaterial*             ArmourMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::EquipArmourMaterial(class UArmourMaterial* ArmourMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "EquipArmourMaterial");

	Params::UW_Loadout_V2_C_EquipArmourMaterial_Params Parms{};

	Parms.ArmourMaterial = ArmourMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SetPresetModified
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PresetDirty                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_V2_C::SetPresetModified(bool PresetDirty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SetPresetModified");

	Params::UW_Loadout_V2_C_SetPresetModified_Params Parms{};

	Parms.PresetDirty = PresetDirty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.EquipItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EItemCategory>   ItemCategories                                                   (Edit, BlueprintVisible)
// enum class EItemClass              EquippingItemClass                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      EquippingItem                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBase_Weapon                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeaponData                 K2Node_MakeStruct_WeaponData                                     (None)
// enum class EItemCategory           Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_LoadoutSlot_C*            K2Node_DynamicCast_AsW_Loadout_Slot                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  CallFunc_GetItemLookupDataTable_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemLookupTable            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_V2_C::EquipItem(class UClass* ItemData, const TArray<enum class EItemCategory>& ItemCategories, enum class EItemClass EquippingItemClass, class UClass* EquippingItem, enum class EItemCategory Temp_byte_Variable, class UClass* K2Node_ClassDynamicCast_AsBase_Weapon, bool K2Node_ClassDynamicCast_bSuccess, const struct FWeaponData& K2Node_MakeStruct_WeaponData, enum class EItemCategory Temp_byte_Variable_1, enum class EItemCategory Temp_byte_Variable_2, enum class EItemCategory Temp_byte_Variable_3, enum class EItemCategory Temp_byte_Variable_4, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, class UW_LoadoutSlot_C* K2Node_DynamicCast_AsW_Loadout_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_3, class UDataTable* CallFunc_GetItemLookupDataTable_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_4, const struct FItemLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "EquipItem");

	Params::UW_Loadout_V2_C_EquipItem_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.ItemCategories = ItemCategories;
	Parms.EquippingItemClass = EquippingItemClass;
	Parms.EquippingItem = EquippingItem;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_ClassDynamicCast_AsBase_Weapon = K2Node_ClassDynamicCast_AsBase_Weapon;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_WeaponData = K2Node_MakeStruct_WeaponData;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsW_Loadout_Slot = K2Node_DynamicCast_AsW_Loadout_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_2 = CallFunc_Array_Contains_ReturnValue_2;
	Parms.CallFunc_Array_Contains_ReturnValue_3 = CallFunc_Array_Contains_ReturnValue_3;
	Parms.CallFunc_GetItemLookupDataTable_ReturnValue = CallFunc_GetItemLookupDataTable_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_4 = CallFunc_Array_Contains_ReturnValue_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OpenItemList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               VerticalList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemCategory           LoadoutSlot                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLoadoutCategory>    GearCategoryClasses                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UW_Loadout_ItemList_Vertical_C*ItemList                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLoadoutCategoryText_Category_Text                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_Loadout_V2_C::OpenItemList(bool VerticalList, enum class EItemCategory LoadoutSlot, TArray<struct FLoadoutCategory>& GearCategoryClasses, class UW_Loadout_ItemList_Vertical_C* ItemList, class FText CallFunc_GetLoadoutCategoryText_Category_Text, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OpenItemList");

	Params::UW_Loadout_V2_C_OpenItemList_Params Parms{};

	Parms.VerticalList = VerticalList;
	Parms.LoadoutSlot = LoadoutSlot;
	Parms.GearCategoryClasses = GearCategoryClasses;
	Parms.ItemList = ItemList;
	Parms.CallFunc_GetLoadoutCategoryText_Category_Text = CallFunc_GetLoadoutCategoryText_Category_Text;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SetPreMissionCameraBySlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemCategory           LoadoutSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BlendTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Map_Find_Value_1                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_V2_C::SetPreMissionCameraBySlot(enum class EItemCategory LoadoutSlot, float BlendTime, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SetPreMissionCameraBySlot");

	Params::UW_Loadout_V2_C_SetPreMissionCameraBySlot_Params Parms{};

	Parms.LoadoutSlot = LoadoutSlot;
	Parms.BlendTime = BlendTime;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.HolsterPreviewCharacterWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHolstering                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotCharacter*        CallFunc_GetDefaultPreviewCharacter_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetLastTableMontagePlayed_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::HolsterPreviewCharacterWeapon(bool* IsHolstering, class AReadyOrNotCharacter* CallFunc_GetDefaultPreviewCharacter_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_GetLastTableMontagePlayed_ReturnValue, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, float CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining, bool CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "HolsterPreviewCharacterWeapon");

	Params::UW_Loadout_V2_C_HolsterPreviewCharacterWeapon_Params Parms{};

	Parms.CallFunc_GetDefaultPreviewCharacter_ReturnValue = CallFunc_GetDefaultPreviewCharacter_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetLastTableMontagePlayed_ReturnValue = CallFunc_GetLastTableMontagePlayed_ReturnValue;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining = CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining;
	Parms.CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue = CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue_1 = CallFunc_SelectString_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHolstering != nullptr)
		*IsHolstering = Parms.IsHolstering;

}


// Function W_Loadout_V2.W_Loadout_V2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Tick");

	Params::UW_Loadout_V2_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_V2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "PreConstruct");

	Params::UW_Loadout_V2_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "HeaderSubpageNavigation");

	Params::UW_Loadout_V2_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SetLoadoutWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Loadout_C*                LoadoutWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SetLoadoutWidget");

	Params::UW_Loadout_V2_C_SetLoadoutWidget_Params Parms{};

	Parms.LoadoutWidget = LoadoutWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_V2_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "UpdateCurrentItemMap");

	Params::UW_Loadout_V2_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.UpdateCurrentSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutSlot_C*            CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "UpdateCurrentSlot");

	Params::UW_Loadout_V2_C_UpdateCurrentSlot_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_V2_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "UpdateActiveLoadout");

	Params::UW_Loadout_V2_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_V2_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SetInputMode");

	Params::UW_Loadout_V2_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_V2_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Hide");

	Params::UW_Loadout_V2_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Reveal");

	Params::UW_Loadout_V2_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OnAttachmentSlotClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Attaching_Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Attachment_Data                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::OnAttachmentSlotClicked(class UClass* Attaching_Weapon, class UClass* Attachment_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OnAttachmentSlotClicked");

	Params::UW_Loadout_V2_C_OnAttachmentSlotClicked_Params Parms{};

	Parms.Attaching_Weapon = Attaching_Weapon;
	Parms.Attachment_Data = Attachment_Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::InputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "InputMethodChanged");

	Params::UW_Loadout_V2_C_InputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SetPreMissionCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              BlendTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::SetPreMissionCamera(class FName Tag, const class FString& Animation, float BlendTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SetPreMissionCamera");

	Params::UW_Loadout_V2_C_SetPreMissionCamera_Params Parms{};

	Parms.Tag = Tag;
	Parms.Animation = Animation;
	Parms.BlendTime = BlendTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SetCurrentPageID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrentPageID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::SetCurrentPageID(class FName CurrentPageID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SetCurrentPageID");

	Params::UW_Loadout_V2_C_SetCurrentPageID_Params Parms{};

	Parms.CurrentPageID = CurrentPageID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "ChangePage");

	Params::UW_Loadout_V2_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.BndEvt__W_Loadout_V2_Header_K2Node_ComponentBoundEvent_1_OnNavOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::BndEvt__W_Loadout_V2_Header_K2Node_ComponentBoundEvent_1_OnNavOptionSelected__DelegateSignature(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "BndEvt__W_Loadout_V2_Header_K2Node_ComponentBoundEvent_1_OnNavOptionSelected__DelegateSignature");

	Params::UW_Loadout_V2_C_BndEvt__W_Loadout_V2_Header_K2Node_ComponentBoundEvent_1_OnNavOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OpenCustomization
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::OpenCustomization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OpenCustomization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SwitchToLoadout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::SwitchToLoadout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SwitchToLoadout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SwitchToCustomization
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::SwitchToCustomization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SwitchToCustomization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.BndEvt__W_Loadout_V2_CustomizationWidget_K2Node_ComponentBoundEvent_4_OnCategorySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        CameraTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CharacterPose                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::BndEvt__W_Loadout_V2_CustomizationWidget_K2Node_ComponentBoundEvent_4_OnCategorySelected__DelegateSignature(class FName CameraTag, const class FString& CharacterPose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "BndEvt__W_Loadout_V2_CustomizationWidget_K2Node_ComponentBoundEvent_4_OnCategorySelected__DelegateSignature");

	Params::UW_Loadout_V2_C_BndEvt__W_Loadout_V2_CustomizationWidget_K2Node_ComponentBoundEvent_4_OnCategorySelected__DelegateSignature_Params Parms{};

	Parms.CameraTag = CameraTag;
	Parms.CharacterPose = CharacterPose;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.BndEvt__W_Loadout_V2_PageHeader_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::BndEvt__W_Loadout_V2_PageHeader_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "BndEvt__W_Loadout_V2_PageHeader_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature");

	Params::UW_Loadout_V2_C_BndEvt__W_Loadout_V2_PageHeader_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature_Params Parms{};

	Parms.ButtonID = ButtonID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.ExecuteUbergraph_W_Loadout_V2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HolsterPreviewCharacterWeapon_IsHolstering              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_C*                K2Node_Event_LoadoutWidget                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// class UW_LoadoutSlot_C*            K2Node_Event_CurrentSlot                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Attaching_Weapon                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Attachment_Data                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               CallFunc_GetActiveLoadout_ReturnValue                            (None)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Tag                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Animation                                     (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_BlendTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonActivatableWidget*    CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_CheckOverviewIsActive_True                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_CurrentPageID                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BackPage_Handled                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonActivatableWidget*    CallFunc_BP_AddWidget_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_OptionNameID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_CameraTag                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_CharacterPose                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_ButtonID                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsWithInterface_FoundWidgets                 (ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutUI_C>K2Node_DynamicCast_AsLoadout_UI                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_V2_C::ExecuteUbergraph_W_Loadout_V2(int32 EntryPoint, bool CallFunc_HolsterPreviewCharacterWeapon_IsHolstering, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_OptionNameID, class UW_Loadout_C* K2Node_Event_LoadoutWidget, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, bool K2Node_Event_IsGamepad, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, float K2Node_Event_Delay, class UClass* K2Node_CustomEvent_Attaching_Weapon, class UClass* K2Node_CustomEvent_Attachment_Data, int32 Temp_int_Array_Index_Variable, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FSavedLoadout& CallFunc_GetActiveLoadout_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FName K2Node_CustomEvent_Tag, const class FString& K2Node_CustomEvent_Animation, float K2Node_CustomEvent_BlendTime, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_CheckOverviewIsActive_True, bool CallFunc_Not_PreBool_ReturnValue, class FName K2Node_CustomEvent_CurrentPageID, bool CallFunc_BackPage_Handled, class FName K2Node_Event_PageName, bool Temp_bool_Variable, class FName K2Node_Select_Default, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UCommonActivatableWidget* CallFunc_BP_AddWidget_ReturnValue, class FName K2Node_ComponentBoundEvent_OptionNameID, bool K2Node_SwitchName_CmpSuccess, class FName K2Node_ComponentBoundEvent_CameraTag, const class FString& K2Node_ComponentBoundEvent_CharacterPose, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool CallFunc_EqualEqual_StrStr_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsWithInterface_FoundWidgets, class UUserWidget* CallFunc_Array_Get_Item, TScriptInterface<class ILoadoutUI_C> K2Node_DynamicCast_AsLoadout_UI, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "ExecuteUbergraph_W_Loadout_V2");

	Params::UW_Loadout_V2_C_ExecuteUbergraph_W_Loadout_V2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HolsterPreviewCharacterWeapon_IsHolstering = CallFunc_HolsterPreviewCharacterWeapon_IsHolstering;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.K2Node_Event_LoadoutWidget = K2Node_Event_LoadoutWidget;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.K2Node_Event_CurrentSlot = K2Node_Event_CurrentSlot;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_CustomEvent_Attaching_Weapon = K2Node_CustomEvent_Attaching_Weapon;
	Parms.K2Node_CustomEvent_Attachment_Data = K2Node_CustomEvent_Attachment_Data;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetActiveLoadout_ReturnValue = CallFunc_GetActiveLoadout_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Tag = K2Node_CustomEvent_Tag;
	Parms.K2Node_CustomEvent_Animation = K2Node_CustomEvent_Animation;
	Parms.K2Node_CustomEvent_BlendTime = K2Node_CustomEvent_BlendTime;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI = K2Node_DynamicCast_AsReady_or_Not_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CheckOverviewIsActive_True = CallFunc_CheckOverviewIsActive_True;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_CurrentPageID = K2Node_CustomEvent_CurrentPageID;
	Parms.CallFunc_BackPage_Handled = CallFunc_BackPage_Handled;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_BP_AddWidget_ReturnValue = CallFunc_BP_AddWidget_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OptionNameID = K2Node_ComponentBoundEvent_OptionNameID;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_ComponentBoundEvent_CameraTag = K2Node_ComponentBoundEvent_CameraTag;
	Parms.K2Node_ComponentBoundEvent_CharacterPose = K2Node_ComponentBoundEvent_CharacterPose;
	Parms.K2Node_ComponentBoundEvent_ButtonID = K2Node_ComponentBoundEvent_ButtonID;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetAllWidgetsWithInterface_FoundWidgets = CallFunc_GetAllWidgetsWithInterface_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsLoadout_UI = K2Node_DynamicCast_AsLoadout_UI;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OnPresetModified__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PresetDirty                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_V2_C::OnPresetModified__DelegateSignature(bool PresetDirty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OnPresetModified__DelegateSignature");

	Params::UW_Loadout_V2_C_OnPresetModified__DelegateSignature_Params Parms{};

	Parms.PresetDirty = PresetDirty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OnChangedInput__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UsingGamepad                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Loadout_V2_C::OnChangedInput__DelegateSignature(bool UsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OnChangedInput__DelegateSignature");

	Params::UW_Loadout_V2_C_OnChangedInput__DelegateSignature_Params Parms{};

	Parms.UsingGamepad = UsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OnArmorMaterialEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::OnArmorMaterialEquipped__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OnArmorMaterialEquipped__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OnSidearmWeaponEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::OnSidearmWeaponEquipped__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OnSidearmWeaponEquipped__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OnPrimaryWeaponEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::OnPrimaryWeaponEquipped__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OnPrimaryWeaponEquipped__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


