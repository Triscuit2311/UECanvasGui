#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SettingsMenuGamepad.W_SettingsMenuGamepad_C
// (None)

class UClass* UW_SettingsMenuGamepad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SettingsMenuGamepad_C");

	return Clss;
}


// W_SettingsMenuGamepad_C W_SettingsMenuGamepad.Default__W_SettingsMenuGamepad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SettingsMenuGamepad_C* UW_SettingsMenuGamepad_C::GetDefaultObj()
{
	static class UW_SettingsMenuGamepad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SettingsMenuGamepad_C*>(UW_SettingsMenuGamepad_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.OpenAccessibilityOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GetCurrentNavSelection_SelectedNavOption                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::OpenAccessibilityOptions(class FName CallFunc_GetCurrentNavSelection_SelectedNavOption, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "OpenAccessibilityOptions");

	Params::UW_SettingsMenuGamepad_C_OpenAccessibilityOptions_Params Parms{};

	Parms.CallFunc_GetCurrentNavSelection_SelectedNavOption = CallFunc_GetCurrentNavSelection_SelectedNavOption;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.OpenControlOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GetCurrentNavSelection_SelectedNavOption                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::OpenControlOptions(class FName CallFunc_GetCurrentNavSelection_SelectedNavOption, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "OpenControlOptions");

	Params::UW_SettingsMenuGamepad_C_OpenControlOptions_Params Parms{};

	Parms.CallFunc_GetCurrentNavSelection_SelectedNavOption = CallFunc_GetCurrentNavSelection_SelectedNavOption;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.OpenAudioOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GetCurrentNavSelection_SelectedNavOption                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::OpenAudioOptions(class FName CallFunc_GetCurrentNavSelection_SelectedNavOption, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "OpenAudioOptions");

	Params::UW_SettingsMenuGamepad_C_OpenAudioOptions_Params Parms{};

	Parms.CallFunc_GetCurrentNavSelection_SelectedNavOption = CallFunc_GetCurrentNavSelection_SelectedNavOption;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.OpenGraphicsOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GetCurrentNavSelection_SelectedNavOption                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::OpenGraphicsOptions(class FName CallFunc_GetCurrentNavSelection_SelectedNavOption, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "OpenGraphicsOptions");

	Params::UW_SettingsMenuGamepad_C_OpenGraphicsOptions_Params Parms{};

	Parms.CallFunc_GetCurrentNavSelection_SelectedNavOption = CallFunc_GetCurrentNavSelection_SelectedNavOption;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.OpenGameOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GetCurrentNavSelection_SelectedNavOption                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::OpenGameOptions(class FName CallFunc_GetCurrentNavSelection_SelectedNavOption, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "OpenGameOptions");

	Params::UW_SettingsMenuGamepad_C_OpenGameOptions_Params Parms{};

	Parms.CallFunc_GetCurrentNavSelection_SelectedNavOption = CallFunc_GetCurrentNavSelection_SelectedNavOption;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.ToggleApplyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowApply                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::ToggleApplyButton(bool ShowApply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "ToggleApplyButton");

	Params::UW_SettingsMenuGamepad_C_ToggleApplyButton_Params Parms{};

	Parms.ShowApply = ShowApply;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.ToggleResetButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowReset                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::ToggleResetButton(bool ShowReset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "ToggleResetButton");

	Params::UW_SettingsMenuGamepad_C_ToggleResetButton_Params Parms{};

	Parms.ShowReset = ShowReset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.PopulateSubtitleLocales
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_CommonCarousel_C*         Carousel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class FText>   CallFunc_GetAvailableLocales_ReturnValue                         (ConstParm)
// TArray<class FText>                CallFunc_Map_Values_Values                                       (ReferenceParm)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::PopulateSubtitleLocales(class UW_CommonCarousel_C* Carousel, TMap<class FString, class FText> CallFunc_GetAvailableLocales_ReturnValue, TArray<class FText>& CallFunc_Map_Values_Values, TArray<class FString>& CallFunc_Map_Keys_Keys, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "PopulateSubtitleLocales");

	Params::UW_SettingsMenuGamepad_C_PopulateSubtitleLocales_Params Parms{};

	Parms.Carousel = Carousel;
	Parms.CallFunc_GetAvailableLocales_ReturnValue = CallFunc_GetAvailableLocales_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UW_SettingsMenuGamepad_C::BP_OnHandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BP_OnHandleBackAction");

	Params::UW_SettingsMenuGamepad_C_BP_OnHandleBackAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.PopulateAccessibilitySettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EColorVisionDeficiency  Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadWorldSpaceActionPrompts_bWorldSpaceActionPrompts    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadWorldSpaceActionPrompts_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHighlightWeapons_bHighlightWeapons                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHighlightWeapons_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetFloatValue_NewValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EColorVisionDeficiency  CallFunc_LoadColorblindMode_ColorVisionDeficiency                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadColorblindMode_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_LoadColorblindStrength_ColorblindStrength               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadColorblindStrength_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::PopulateAccessibilitySettings(enum class EColorVisionDeficiency Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool CallFunc_LoadWorldSpaceActionPrompts_bWorldSpaceActionPrompts, bool CallFunc_LoadWorldSpaceActionPrompts_ReturnValue, bool CallFunc_LoadHighlightWeapons_bHighlightWeapons, bool CallFunc_LoadHighlightWeapons_ReturnValue, float CallFunc_SetFloatValue_NewValue, enum class EColorVisionDeficiency CallFunc_LoadColorblindMode_ColorVisionDeficiency, bool CallFunc_LoadColorblindMode_ReturnValue, float CallFunc_LoadColorblindStrength_ColorblindStrength, bool CallFunc_LoadColorblindStrength_ReturnValue, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "PopulateAccessibilitySettings");

	Params::UW_SettingsMenuGamepad_C_PopulateAccessibilitySettings_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_LoadWorldSpaceActionPrompts_bWorldSpaceActionPrompts = CallFunc_LoadWorldSpaceActionPrompts_bWorldSpaceActionPrompts;
	Parms.CallFunc_LoadWorldSpaceActionPrompts_ReturnValue = CallFunc_LoadWorldSpaceActionPrompts_ReturnValue;
	Parms.CallFunc_LoadHighlightWeapons_bHighlightWeapons = CallFunc_LoadHighlightWeapons_bHighlightWeapons;
	Parms.CallFunc_LoadHighlightWeapons_ReturnValue = CallFunc_LoadHighlightWeapons_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue = CallFunc_SetFloatValue_NewValue;
	Parms.CallFunc_LoadColorblindMode_ColorVisionDeficiency = CallFunc_LoadColorblindMode_ColorVisionDeficiency;
	Parms.CallFunc_LoadColorblindMode_ReturnValue = CallFunc_LoadColorblindMode_ReturnValue;
	Parms.CallFunc_LoadColorblindStrength_ColorblindStrength = CallFunc_LoadColorblindStrength_ColorblindStrength;
	Parms.CallFunc_LoadColorblindStrength_ReturnValue = CallFunc_LoadColorblindStrength_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.SetupControlsCategories
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenuGamepad_C::SetupControlsCategories()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "SetupControlsCategories");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UW_SettingsMenuGamepad_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "OnPreviewKeyDown");

	Params::UW_SettingsMenuGamepad_C_OnPreviewKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.Add To Control Binds Lists
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           ControlBInd                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAxisMappingStruct          InputAxis                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FActionMappingStruct        InputAction                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::Add_To_Control_Binds_Lists(class UW_ControlsBind_C* ControlBInd, const struct FAxisMappingStruct& InputAxis, const struct FActionMappingStruct& InputAction, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "Add To Control Binds Lists");

	Params::UW_SettingsMenuGamepad_C_Add_To_Control_Binds_Lists_Params Parms{};

	Parms.ControlBInd = ControlBInd;
	Parms.InputAxis = InputAxis;
	Parms.InputAction = InputAction;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.Clear Control Binds Lists
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenuGamepad_C::Clear_Control_Binds_Lists()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "Clear Control Binds Lists");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.Initialise Or Get Pop Up
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      PopUpType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSStandardModalDetails      ModalDetails                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UStandardModal*              OutputPopUp                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStandardModal*              TempPopUp                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      PopupClass                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStandardModal*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStandardModal*>      CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UStandardModal*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::Initialise_Or_Get_Pop_Up(class UClass* PopUpType, const struct FSStandardModalDetails& ModalDetails, class UStandardModal** OutputPopUp, class UStandardModal* TempPopUp, class UClass* PopupClass, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UStandardModal* CallFunc_Create_ReturnValue, TArray<class UStandardModal*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UStandardModal* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "Initialise Or Get Pop Up");

	Params::UW_SettingsMenuGamepad_C_Initialise_Or_Get_Pop_Up_Params Parms{};

	Parms.PopUpType = PopUpType;
	Parms.ModalDetails = ModalDetails;
	Parms.TempPopUp = TempPopUp;
	Parms.PopupClass = PopupClass;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPopUp != nullptr)
		*OutputPopUp = Parms.OutputPopUp;

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.GetConflictingKeybindListText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FAxisMappingStruct>  Axes                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FActionMappingStruct>Actions                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FText>                ConflictBinds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        LocalizedActionChain                                             (Edit, BlueprintVisible)
// class FText                        Inputs_2LocalizedComma                                           (Edit, BlueprintVisible)
// class FText                        Inputs_2LocalizedAnd                                             (Edit, BlueprintVisible)
// TArray<class FText>                LocalizedActions                                                 (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Array_Get_Item_1                                        (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::GetConflictingKeybindListText(TArray<struct FAxisMappingStruct>& Axes, TArray<struct FActionMappingStruct>& Actions, TArray<class FText>& ConflictBinds, class FText* Text, class FText LocalizedActionChain, class FText Inputs_2LocalizedComma, class FText Inputs_2LocalizedAnd, const TArray<class FText>& LocalizedActions, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class FText CallFunc_Array_Get_Item_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "GetConflictingKeybindListText");

	Params::UW_SettingsMenuGamepad_C_GetConflictingKeybindListText_Params Parms{};

	Parms.Axes = Axes;
	Parms.Actions = Actions;
	Parms.ConflictBinds = ConflictBinds;
	Parms.LocalizedActionChain = LocalizedActionChain;
	Parms.Inputs_2LocalizedComma = Inputs_2LocalizedComma;
	Parms.Inputs_2LocalizedAnd = Inputs_2LocalizedAnd;
	Parms.LocalizedActions = LocalizedActions;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.GetConflictingKeybindText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<struct FAxisMappingStruct>  ConflictingAxes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FActionMappingStruct>ConflictingActions                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FText>                ConflictBindNames                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        CallFunc_GetConflictingKeybindListText_Text                      (None)
// class FString                      CallFunc_Abbreviate_Key_Abreviated_Name                          (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_SettingsMenuGamepad_C::GetConflictingKeybindText(const struct FKey& Key, TArray<struct FAxisMappingStruct>& ConflictingAxes, TArray<struct FActionMappingStruct>& ConflictingActions, TArray<class FText>& ConflictBindNames, class FText* Text, class FText CallFunc_GetConflictingKeybindListText_Text, const class FString& CallFunc_Abbreviate_Key_Abreviated_Name, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "GetConflictingKeybindText");

	Params::UW_SettingsMenuGamepad_C_GetConflictingKeybindText_Params Parms{};

	Parms.Key = Key;
	Parms.ConflictingAxes = ConflictingAxes;
	Parms.ConflictingActions = ConflictingActions;
	Parms.ConflictBindNames = ConflictBindNames;
	Parms.CallFunc_GetConflictingKeybindListText_Text = CallFunc_GetConflictingKeybindListText_Text;
	Parms.CallFunc_Abbreviate_Key_Abreviated_Name = CallFunc_Abbreviate_Key_Abreviated_Name;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.TryAssignUnbindableControl
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyBinding                 KeyBinding                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CannotBeUnbindable                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::TryAssignUnbindableControl(const struct FKeyBinding& KeyBinding, bool* bSuccess, bool CannotBeUnbindable, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "TryAssignUnbindableControl");

	Params::UW_SettingsMenuGamepad_C_TryAssignUnbindableControl_Params Parms{};

	Parms.KeyBinding = KeyBinding;
	Parms.CannotBeUnbindable = CannotBeUnbindable;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.InitGraphicsPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSGraphicPreset             CurrentPresetCandidate                                           (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMotionBlurStrength_Strength                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMotionBlurStrength_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMotionBlurEnabled_bEnabled                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMotionBlurEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_LoadPiPResolutionScale_ResolutionScale                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPResolutionScale_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadPiPFPS_bEnabled                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_LoadPiPFPS_FPS                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPFPS_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRaytracingSettings_bRTXEnabled                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRaytracingSettings_bRTXShadowsEnabled                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRaytracingSettings_bRTXGlobalIllumination            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRaytracingSettings_bRTXTranslucency                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRaytracingSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetFrameRateLimit_FrameRateLimit                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFrameRateLimit_bEnabled                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetVSyncEnabled_bEnabled                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetVSyncEnabled_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUseMeshpainting_bUseMeshPainting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUseMeshpainting_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDepthOfFieldSetting_bDoFEnabled                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDepthOfFieldSetting_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSGraphicPreset             CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetVideoQualitySettings_AntiAliasing                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_Effects                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_PostProcess                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVideoQualitySettings_ResolutionScaling               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_Shadow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_Texture                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_ViewDistance                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVideoQualitySettings_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSGraphicPreset             K2Node_MakeStruct_SGraphicPreset                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::InitGraphicsPreset(const struct FSGraphicPreset& CurrentPresetCandidate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, float CallFunc_GetMotionBlurStrength_Strength, bool CallFunc_GetMotionBlurStrength_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GetMotionBlurEnabled_bEnabled, bool CallFunc_GetMotionBlurEnabled_ReturnValue, float CallFunc_LoadPiPResolutionScale_ResolutionScale, bool CallFunc_LoadPiPResolutionScale_ReturnValue, bool CallFunc_LoadPiPFPS_bEnabled, float CallFunc_LoadPiPFPS_FPS, bool CallFunc_LoadPiPFPS_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_GetRaytracingSettings_bRTXEnabled, bool CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled, bool CallFunc_GetRaytracingSettings_bRTXShadowsEnabled, bool CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled, bool CallFunc_GetRaytracingSettings_bRTXGlobalIllumination, bool CallFunc_GetRaytracingSettings_bRTXTranslucency, bool CallFunc_GetRaytracingSettings_ReturnValue, int32 CallFunc_GetFrameRateLimit_FrameRateLimit, bool CallFunc_GetFrameRateLimit_bEnabled, bool CallFunc_GetFrameRateLimit_ReturnValue, bool CallFunc_GetVSyncEnabled_bEnabled, bool CallFunc_GetVSyncEnabled_ReturnValue, bool CallFunc_GetUseMeshpainting_bUseMeshPainting, bool CallFunc_GetUseMeshpainting_ReturnValue, bool CallFunc_GetDepthOfFieldSetting_bDoFEnabled, bool CallFunc_GetDepthOfFieldSetting_ReturnValue, const struct FSGraphicPreset& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, int32 CallFunc_GetVideoQualitySettings_AntiAliasing, int32 CallFunc_GetVideoQualitySettings_Effects, int32 CallFunc_GetVideoQualitySettings_PostProcess, float CallFunc_GetVideoQualitySettings_ResolutionScaling, int32 CallFunc_GetVideoQualitySettings_Shadow, int32 CallFunc_GetVideoQualitySettings_Texture, int32 CallFunc_GetVideoQualitySettings_ViewDistance, bool CallFunc_GetVideoQualitySettings_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_4, uint8 CallFunc_GetValidValue_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, uint8 CallFunc_GetValidValue_ReturnValue_2, uint8 CallFunc_GetValidValue_ReturnValue_3, uint8 CallFunc_Conv_IntToByte_ReturnValue_4, uint8 CallFunc_Conv_IntToByte_ReturnValue_5, uint8 CallFunc_GetValidValue_ReturnValue_4, uint8 CallFunc_GetValidValue_ReturnValue_5, const struct FSGraphicPreset& K2Node_MakeStruct_SGraphicPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "InitGraphicsPreset");

	Params::UW_SettingsMenuGamepad_C_InitGraphicsPreset_Params Parms{};

	Parms.CurrentPresetCandidate = CurrentPresetCandidate;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetMotionBlurStrength_Strength = CallFunc_GetMotionBlurStrength_Strength;
	Parms.CallFunc_GetMotionBlurStrength_ReturnValue = CallFunc_GetMotionBlurStrength_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetMotionBlurEnabled_bEnabled = CallFunc_GetMotionBlurEnabled_bEnabled;
	Parms.CallFunc_GetMotionBlurEnabled_ReturnValue = CallFunc_GetMotionBlurEnabled_ReturnValue;
	Parms.CallFunc_LoadPiPResolutionScale_ResolutionScale = CallFunc_LoadPiPResolutionScale_ResolutionScale;
	Parms.CallFunc_LoadPiPResolutionScale_ReturnValue = CallFunc_LoadPiPResolutionScale_ReturnValue;
	Parms.CallFunc_LoadPiPFPS_bEnabled = CallFunc_LoadPiPFPS_bEnabled;
	Parms.CallFunc_LoadPiPFPS_FPS = CallFunc_LoadPiPFPS_FPS;
	Parms.CallFunc_LoadPiPFPS_ReturnValue = CallFunc_LoadPiPFPS_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetRaytracingSettings_bRTXEnabled = CallFunc_GetRaytracingSettings_bRTXEnabled;
	Parms.CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled = CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled;
	Parms.CallFunc_GetRaytracingSettings_bRTXShadowsEnabled = CallFunc_GetRaytracingSettings_bRTXShadowsEnabled;
	Parms.CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled = CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled;
	Parms.CallFunc_GetRaytracingSettings_bRTXGlobalIllumination = CallFunc_GetRaytracingSettings_bRTXGlobalIllumination;
	Parms.CallFunc_GetRaytracingSettings_bRTXTranslucency = CallFunc_GetRaytracingSettings_bRTXTranslucency;
	Parms.CallFunc_GetRaytracingSettings_ReturnValue = CallFunc_GetRaytracingSettings_ReturnValue;
	Parms.CallFunc_GetFrameRateLimit_FrameRateLimit = CallFunc_GetFrameRateLimit_FrameRateLimit;
	Parms.CallFunc_GetFrameRateLimit_bEnabled = CallFunc_GetFrameRateLimit_bEnabled;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue = CallFunc_GetFrameRateLimit_ReturnValue;
	Parms.CallFunc_GetVSyncEnabled_bEnabled = CallFunc_GetVSyncEnabled_bEnabled;
	Parms.CallFunc_GetVSyncEnabled_ReturnValue = CallFunc_GetVSyncEnabled_ReturnValue;
	Parms.CallFunc_GetUseMeshpainting_bUseMeshPainting = CallFunc_GetUseMeshpainting_bUseMeshPainting;
	Parms.CallFunc_GetUseMeshpainting_ReturnValue = CallFunc_GetUseMeshpainting_ReturnValue;
	Parms.CallFunc_GetDepthOfFieldSetting_bDoFEnabled = CallFunc_GetDepthOfFieldSetting_bDoFEnabled;
	Parms.CallFunc_GetDepthOfFieldSetting_ReturnValue = CallFunc_GetDepthOfFieldSetting_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_GetVideoQualitySettings_AntiAliasing = CallFunc_GetVideoQualitySettings_AntiAliasing;
	Parms.CallFunc_GetVideoQualitySettings_Effects = CallFunc_GetVideoQualitySettings_Effects;
	Parms.CallFunc_GetVideoQualitySettings_PostProcess = CallFunc_GetVideoQualitySettings_PostProcess;
	Parms.CallFunc_GetVideoQualitySettings_ResolutionScaling = CallFunc_GetVideoQualitySettings_ResolutionScaling;
	Parms.CallFunc_GetVideoQualitySettings_Shadow = CallFunc_GetVideoQualitySettings_Shadow;
	Parms.CallFunc_GetVideoQualitySettings_Texture = CallFunc_GetVideoQualitySettings_Texture;
	Parms.CallFunc_GetVideoQualitySettings_ViewDistance = CallFunc_GetVideoQualitySettings_ViewDistance;
	Parms.CallFunc_GetVideoQualitySettings_ReturnValue = CallFunc_GetVideoQualitySettings_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_3 = CallFunc_Conv_IntToByte_ReturnValue_3;
	Parms.CallFunc_GetValidValue_ReturnValue_2 = CallFunc_GetValidValue_ReturnValue_2;
	Parms.CallFunc_GetValidValue_ReturnValue_3 = CallFunc_GetValidValue_ReturnValue_3;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_4 = CallFunc_Conv_IntToByte_ReturnValue_4;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_5 = CallFunc_Conv_IntToByte_ReturnValue_5;
	Parms.CallFunc_GetValidValue_ReturnValue_4 = CallFunc_GetValidValue_ReturnValue_4;
	Parms.CallFunc_GetValidValue_ReturnValue_5 = CallFunc_GetValidValue_ReturnValue_5;
	Parms.K2Node_MakeStruct_SGraphicPreset = K2Node_MakeStruct_SGraphicPreset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.SetGamepadButtonPrompts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRonInputKeyGamePadIconTableCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRonInputKeyGamePadIconTableCallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRonInputKeyGamePadIconTableCallFunc_GetDataTableRowFromName_OutRow_2                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRonInputKeyGamePadIconTableCallFunc_GetDataTableRowFromName_OutRow_3                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRonInputKeyGamePadIconTableCallFunc_GetDataTableRowFromName_OutRow_4                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Select_Default                                            (None)
// struct FSlateBrush                 K2Node_Select_Default_1                                          (None)
// struct FSlateBrush                 K2Node_Select_Default_2                                          (None)
// struct FSlateBrush                 K2Node_Select_Default_3                                          (None)
// struct FSlateBrush                 K2Node_Select_Default_4                                          (None)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::SetGamepadButtonPrompts(const struct FRonInputKeyGamePadIconTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FRonInputKeyGamePadIconTable& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FRonInputKeyGamePadIconTable& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const struct FRonInputKeyGamePadIconTable& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, bool Temp_bool_Variable_2, const struct FRonInputKeyGamePadIconTable& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, const struct FSlateBrush& K2Node_Select_Default, const struct FSlateBrush& K2Node_Select_Default_1, const struct FSlateBrush& K2Node_Select_Default_2, const struct FSlateBrush& K2Node_Select_Default_3, const struct FSlateBrush& K2Node_Select_Default_4, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "SetGamepadButtonPrompts");

	Params::UW_SettingsMenuGamepad_C_SetGamepadButtonPrompts_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_3 = CallFunc_EqualEqual_StrStr_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.SwitchControlsTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     MenuWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::SwitchControlsTab(class UW_Button_C* Button, class UWidget* MenuWidget, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "SwitchControlsTab");

	Params::UW_SettingsMenuGamepad_C_SwitchControlsTab_Params Parms{};

	Parms.Button = Button;
	Parms.MenuWidget = MenuWidget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.PopulatePCControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenuGamepad_C::PopulatePCControls()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "PopulatePCControls");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.PopulatePCGraphics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENVGStyle               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDepthOfFieldSetting_bDoFEnabled                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDepthOfFieldSetting_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUseMeshpainting_bUseMeshPainting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUseMeshpainting_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_LoadSafeZoneSettings_SafeZoneX                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadSafeZoneSettings_SafeZoneY                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadSafeZoneSettings_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRaytracingSettings_bRTXEnabled                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRaytracingSettings_bRTXShadowsEnabled                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRaytracingSettings_bRTXGlobalIllumination            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRaytracingSettings_bRTXTranslucency                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRaytracingSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ViewDistance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEffectsQuality_Effects                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEffectsQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_AntiAliasing                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAntiAliasingQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPostProcessQuality_PostProcess                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPostProcessQuality_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_Shadow                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTextureQuality_Texture                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTextureQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaling_ResolutionScaling                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetResolutionScaling_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetReflexEnabled_ReflexMode                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetReflexEnabled_bFlashIndicatorEnabled                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexEnabled_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexLatencyOptions_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDlssQuality_Quality                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDlssQuality_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetFSRQuality_Quality                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFSRQuality_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_LoadPiPResolutionScale_ResolutionScale                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPResolutionScale_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetFloatValue_NewValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPFPS_bEnabled                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_LoadPiPFPS_FPS                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPFPS_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetIntegralValue_NewValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWorldDecalsEnabled_bEnabled                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDecalsEnabled_FadeDistance                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDecalsEnabled_Density                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWorldDecalsEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetFloatValue_NewValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInterfaceAspectRatio_OutAspectRatio                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInterfaceAspectRatio_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetBounceLightEnabled_bBounceLightEnabled               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetBounceLightEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetVSyncEnabled_bEnabled                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetVSyncEnabled_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetFrameRateLimit_FrameRateLimit                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFrameRateLimit_bEnabled                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMotionBlurStrength_Strength                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMotionBlurStrength_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMotionBlurEnabled_bEnabled                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMotionBlurEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatValue_NewValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetIntegralValue_NewValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetIntegralValue_NewValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatValue_NewValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENVGStyle               CallFunc_LoadNVGStyle_NVGStyle                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadNVGStyle_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadZoomADSSetting_bZoomADS                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadZoomADSSetting_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFoV_FOV                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFoV_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SetIntegralValue_NewValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatValue_NewValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentScreenResolution_ReturnValue                  (ZeroConstructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetCurrentScreenMode_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::PopulatePCGraphics(int32 Temp_int_Variable, int32 Temp_int_Variable_1, enum class ENVGStyle Temp_byte_Variable, bool CallFunc_GetDepthOfFieldSetting_bDoFEnabled, bool CallFunc_GetDepthOfFieldSetting_ReturnValue, bool CallFunc_GetUseMeshpainting_bUseMeshPainting, bool CallFunc_GetUseMeshpainting_ReturnValue, float CallFunc_LoadSafeZoneSettings_SafeZoneX, float CallFunc_LoadSafeZoneSettings_SafeZoneY, bool CallFunc_LoadSafeZoneSettings_ReturnValue, bool CallFunc_GetRaytracingSettings_bRTXEnabled, bool CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled, bool CallFunc_GetRaytracingSettings_bRTXShadowsEnabled, bool CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled, bool CallFunc_GetRaytracingSettings_bRTXGlobalIllumination, bool CallFunc_GetRaytracingSettings_bRTXTranslucency, bool CallFunc_GetRaytracingSettings_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_GetViewDistanceQuality_ViewDistance, bool CallFunc_GetViewDistanceQuality_ReturnValue, int32 CallFunc_GetEffectsQuality_Effects, bool CallFunc_GetEffectsQuality_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, int32 CallFunc_GetAntiAliasingQuality_AntiAliasing, bool CallFunc_GetAntiAliasingQuality_ReturnValue, int32 CallFunc_GetPostProcessQuality_PostProcess, bool CallFunc_GetPostProcessQuality_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, uint8 CallFunc_GetValidValue_ReturnValue_2, uint8 CallFunc_GetValidValue_ReturnValue_3, int32 CallFunc_GetShadowQuality_Shadow, bool CallFunc_GetShadowQuality_ReturnValue, int32 CallFunc_GetTextureQuality_Texture, bool CallFunc_GetTextureQuality_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_4, uint8 CallFunc_Conv_IntToByte_ReturnValue_5, uint8 CallFunc_GetValidValue_ReturnValue_4, uint8 CallFunc_GetValidValue_ReturnValue_5, float CallFunc_GetResolutionScaling_ResolutionScaling, bool CallFunc_GetResolutionScaling_ReturnValue, uint8 CallFunc_GetReflexEnabled_ReflexMode, bool CallFunc_GetReflexEnabled_bFlashIndicatorEnabled, bool CallFunc_GetReflexEnabled_ReturnValue, bool CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled, bool CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled, bool CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled, bool CallFunc_GetReflexLatencyOptions_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_GetDlssQuality_Quality, bool CallFunc_GetDlssQuality_ReturnValue, int32 CallFunc_GetFSRQuality_Quality, bool CallFunc_GetFSRQuality_ReturnValue, float CallFunc_LoadPiPResolutionScale_ResolutionScale, bool CallFunc_LoadPiPResolutionScale_ReturnValue, float CallFunc_SetFloatValue_NewValue, bool CallFunc_LoadPiPFPS_bEnabled, float CallFunc_LoadPiPFPS_FPS, bool CallFunc_LoadPiPFPS_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_SetIntegralValue_NewValue, bool CallFunc_GetWorldDecalsEnabled_bEnabled, float CallFunc_GetWorldDecalsEnabled_FadeDistance, float CallFunc_GetWorldDecalsEnabled_Density, bool CallFunc_GetWorldDecalsEnabled_ReturnValue, float CallFunc_SetFloatValue_NewValue_1, float CallFunc_GetInterfaceAspectRatio_OutAspectRatio, bool CallFunc_GetInterfaceAspectRatio_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_GetBounceLightEnabled_bBounceLightEnabled, bool CallFunc_GetBounceLightEnabled_ReturnValue, bool CallFunc_GetVSyncEnabled_bEnabled, bool CallFunc_GetVSyncEnabled_ReturnValue, int32 CallFunc_GetFrameRateLimit_FrameRateLimit, bool CallFunc_GetFrameRateLimit_bEnabled, bool CallFunc_GetFrameRateLimit_ReturnValue, float CallFunc_GetMotionBlurStrength_Strength, bool CallFunc_GetMotionBlurStrength_ReturnValue, bool CallFunc_GetMotionBlurEnabled_bEnabled, bool CallFunc_GetMotionBlurEnabled_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_SetFloatValue_NewValue_2, int32 CallFunc_SetIntegralValue_NewValue_1, int32 CallFunc_SetIntegralValue_NewValue_2, float CallFunc_SetFloatValue_NewValue_3, enum class ENVGStyle CallFunc_LoadNVGStyle_NVGStyle, bool CallFunc_LoadNVGStyle_ReturnValue, bool CallFunc_LoadZoomADSSetting_bZoomADS, bool CallFunc_LoadZoomADSSetting_ReturnValue, float CallFunc_GetFoV_FOV, bool CallFunc_GetFoV_ReturnValue, int32 CallFunc_SetIntegralValue_NewValue_3, float CallFunc_SetFloatValue_NewValue_4, const class FString& CallFunc_GetCurrentScreenResolution_ReturnValue, enum class EWindowMode CallFunc_GetCurrentScreenMode_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "PopulatePCGraphics");

	Params::UW_SettingsMenuGamepad_C_PopulatePCGraphics_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetDepthOfFieldSetting_bDoFEnabled = CallFunc_GetDepthOfFieldSetting_bDoFEnabled;
	Parms.CallFunc_GetDepthOfFieldSetting_ReturnValue = CallFunc_GetDepthOfFieldSetting_ReturnValue;
	Parms.CallFunc_GetUseMeshpainting_bUseMeshPainting = CallFunc_GetUseMeshpainting_bUseMeshPainting;
	Parms.CallFunc_GetUseMeshpainting_ReturnValue = CallFunc_GetUseMeshpainting_ReturnValue;
	Parms.CallFunc_LoadSafeZoneSettings_SafeZoneX = CallFunc_LoadSafeZoneSettings_SafeZoneX;
	Parms.CallFunc_LoadSafeZoneSettings_SafeZoneY = CallFunc_LoadSafeZoneSettings_SafeZoneY;
	Parms.CallFunc_LoadSafeZoneSettings_ReturnValue = CallFunc_LoadSafeZoneSettings_ReturnValue;
	Parms.CallFunc_GetRaytracingSettings_bRTXEnabled = CallFunc_GetRaytracingSettings_bRTXEnabled;
	Parms.CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled = CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled;
	Parms.CallFunc_GetRaytracingSettings_bRTXShadowsEnabled = CallFunc_GetRaytracingSettings_bRTXShadowsEnabled;
	Parms.CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled = CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled;
	Parms.CallFunc_GetRaytracingSettings_bRTXGlobalIllumination = CallFunc_GetRaytracingSettings_bRTXGlobalIllumination;
	Parms.CallFunc_GetRaytracingSettings_bRTXTranslucency = CallFunc_GetRaytracingSettings_bRTXTranslucency;
	Parms.CallFunc_GetRaytracingSettings_ReturnValue = CallFunc_GetRaytracingSettings_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetViewDistanceQuality_ViewDistance = CallFunc_GetViewDistanceQuality_ViewDistance;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;
	Parms.CallFunc_GetEffectsQuality_Effects = CallFunc_GetEffectsQuality_Effects;
	Parms.CallFunc_GetEffectsQuality_ReturnValue = CallFunc_GetEffectsQuality_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_GetAntiAliasingQuality_AntiAliasing = CallFunc_GetAntiAliasingQuality_AntiAliasing;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue = CallFunc_GetAntiAliasingQuality_ReturnValue;
	Parms.CallFunc_GetPostProcessQuality_PostProcess = CallFunc_GetPostProcessQuality_PostProcess;
	Parms.CallFunc_GetPostProcessQuality_ReturnValue = CallFunc_GetPostProcessQuality_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_3 = CallFunc_Conv_IntToByte_ReturnValue_3;
	Parms.CallFunc_GetValidValue_ReturnValue_2 = CallFunc_GetValidValue_ReturnValue_2;
	Parms.CallFunc_GetValidValue_ReturnValue_3 = CallFunc_GetValidValue_ReturnValue_3;
	Parms.CallFunc_GetShadowQuality_Shadow = CallFunc_GetShadowQuality_Shadow;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_GetTextureQuality_Texture = CallFunc_GetTextureQuality_Texture;
	Parms.CallFunc_GetTextureQuality_ReturnValue = CallFunc_GetTextureQuality_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_4 = CallFunc_Conv_IntToByte_ReturnValue_4;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_5 = CallFunc_Conv_IntToByte_ReturnValue_5;
	Parms.CallFunc_GetValidValue_ReturnValue_4 = CallFunc_GetValidValue_ReturnValue_4;
	Parms.CallFunc_GetValidValue_ReturnValue_5 = CallFunc_GetValidValue_ReturnValue_5;
	Parms.CallFunc_GetResolutionScaling_ResolutionScaling = CallFunc_GetResolutionScaling_ResolutionScaling;
	Parms.CallFunc_GetResolutionScaling_ReturnValue = CallFunc_GetResolutionScaling_ReturnValue;
	Parms.CallFunc_GetReflexEnabled_ReflexMode = CallFunc_GetReflexEnabled_ReflexMode;
	Parms.CallFunc_GetReflexEnabled_bFlashIndicatorEnabled = CallFunc_GetReflexEnabled_bFlashIndicatorEnabled;
	Parms.CallFunc_GetReflexEnabled_ReturnValue = CallFunc_GetReflexEnabled_ReturnValue;
	Parms.CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled = CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled;
	Parms.CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled = CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled;
	Parms.CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled = CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled;
	Parms.CallFunc_GetReflexLatencyOptions_ReturnValue = CallFunc_GetReflexLatencyOptions_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetDlssQuality_Quality = CallFunc_GetDlssQuality_Quality;
	Parms.CallFunc_GetDlssQuality_ReturnValue = CallFunc_GetDlssQuality_ReturnValue;
	Parms.CallFunc_GetFSRQuality_Quality = CallFunc_GetFSRQuality_Quality;
	Parms.CallFunc_GetFSRQuality_ReturnValue = CallFunc_GetFSRQuality_ReturnValue;
	Parms.CallFunc_LoadPiPResolutionScale_ResolutionScale = CallFunc_LoadPiPResolutionScale_ResolutionScale;
	Parms.CallFunc_LoadPiPResolutionScale_ReturnValue = CallFunc_LoadPiPResolutionScale_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue = CallFunc_SetFloatValue_NewValue;
	Parms.CallFunc_LoadPiPFPS_bEnabled = CallFunc_LoadPiPFPS_bEnabled;
	Parms.CallFunc_LoadPiPFPS_FPS = CallFunc_LoadPiPFPS_FPS;
	Parms.CallFunc_LoadPiPFPS_ReturnValue = CallFunc_LoadPiPFPS_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_SetIntegralValue_NewValue = CallFunc_SetIntegralValue_NewValue;
	Parms.CallFunc_GetWorldDecalsEnabled_bEnabled = CallFunc_GetWorldDecalsEnabled_bEnabled;
	Parms.CallFunc_GetWorldDecalsEnabled_FadeDistance = CallFunc_GetWorldDecalsEnabled_FadeDistance;
	Parms.CallFunc_GetWorldDecalsEnabled_Density = CallFunc_GetWorldDecalsEnabled_Density;
	Parms.CallFunc_GetWorldDecalsEnabled_ReturnValue = CallFunc_GetWorldDecalsEnabled_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_1 = CallFunc_SetFloatValue_NewValue_1;
	Parms.CallFunc_GetInterfaceAspectRatio_OutAspectRatio = CallFunc_GetInterfaceAspectRatio_OutAspectRatio;
	Parms.CallFunc_GetInterfaceAspectRatio_ReturnValue = CallFunc_GetInterfaceAspectRatio_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetBounceLightEnabled_bBounceLightEnabled = CallFunc_GetBounceLightEnabled_bBounceLightEnabled;
	Parms.CallFunc_GetBounceLightEnabled_ReturnValue = CallFunc_GetBounceLightEnabled_ReturnValue;
	Parms.CallFunc_GetVSyncEnabled_bEnabled = CallFunc_GetVSyncEnabled_bEnabled;
	Parms.CallFunc_GetVSyncEnabled_ReturnValue = CallFunc_GetVSyncEnabled_ReturnValue;
	Parms.CallFunc_GetFrameRateLimit_FrameRateLimit = CallFunc_GetFrameRateLimit_FrameRateLimit;
	Parms.CallFunc_GetFrameRateLimit_bEnabled = CallFunc_GetFrameRateLimit_bEnabled;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue = CallFunc_GetFrameRateLimit_ReturnValue;
	Parms.CallFunc_GetMotionBlurStrength_Strength = CallFunc_GetMotionBlurStrength_Strength;
	Parms.CallFunc_GetMotionBlurStrength_ReturnValue = CallFunc_GetMotionBlurStrength_ReturnValue;
	Parms.CallFunc_GetMotionBlurEnabled_bEnabled = CallFunc_GetMotionBlurEnabled_bEnabled;
	Parms.CallFunc_GetMotionBlurEnabled_ReturnValue = CallFunc_GetMotionBlurEnabled_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_2 = CallFunc_SetFloatValue_NewValue_2;
	Parms.CallFunc_SetIntegralValue_NewValue_1 = CallFunc_SetIntegralValue_NewValue_1;
	Parms.CallFunc_SetIntegralValue_NewValue_2 = CallFunc_SetIntegralValue_NewValue_2;
	Parms.CallFunc_SetFloatValue_NewValue_3 = CallFunc_SetFloatValue_NewValue_3;
	Parms.CallFunc_LoadNVGStyle_NVGStyle = CallFunc_LoadNVGStyle_NVGStyle;
	Parms.CallFunc_LoadNVGStyle_ReturnValue = CallFunc_LoadNVGStyle_ReturnValue;
	Parms.CallFunc_LoadZoomADSSetting_bZoomADS = CallFunc_LoadZoomADSSetting_bZoomADS;
	Parms.CallFunc_LoadZoomADSSetting_ReturnValue = CallFunc_LoadZoomADSSetting_ReturnValue;
	Parms.CallFunc_GetFoV_FOV = CallFunc_GetFoV_FOV;
	Parms.CallFunc_GetFoV_ReturnValue = CallFunc_GetFoV_ReturnValue;
	Parms.CallFunc_SetIntegralValue_NewValue_3 = CallFunc_SetIntegralValue_NewValue_3;
	Parms.CallFunc_SetFloatValue_NewValue_4 = CallFunc_SetFloatValue_NewValue_4;
	Parms.CallFunc_GetCurrentScreenResolution_ReturnValue = CallFunc_GetCurrentScreenResolution_ReturnValue;
	Parms.CallFunc_GetCurrentScreenMode_ReturnValue = CallFunc_GetCurrentScreenMode_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.PopulateGamepadControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadControlScheme_UsingAlternateControls                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadControlScheme_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadTogglePS5Gyro_TogglePS5Gyro                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadTogglePS5Gyro_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHoldCrouch_HoldCrouch                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHoldCrouch_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetGamepadInverted_bInvertVertical                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetGamepadInverted_bInvertHorizontal                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetGamepadInverted_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGamepadAimSensitivity_GamepadAimSensitivity          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadAimSensitivity_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGamepadLookSensitivity_GamepadLookSensitivity        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadLookSensitivity_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadToggleADS_ToggleADS                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadToggleADS_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetFloatValue_NewValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatValue_NewValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::PopulateGamepadControls(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, bool CallFunc_LoadControlScheme_UsingAlternateControls, bool CallFunc_LoadControlScheme_ReturnValue, int32 K2Node_Select_Default, class UW_Button_C* K2Node_Select_Default_1, bool CallFunc_LoadTogglePS5Gyro_TogglePS5Gyro, bool CallFunc_LoadTogglePS5Gyro_ReturnValue, bool CallFunc_LoadHoldCrouch_HoldCrouch, bool CallFunc_LoadHoldCrouch_ReturnValue, bool CallFunc_GetGamepadInverted_bInvertVertical, bool CallFunc_GetGamepadInverted_bInvertHorizontal, bool CallFunc_GetGamepadInverted_ReturnValue, float CallFunc_GetGamepadAimSensitivity_GamepadAimSensitivity, bool CallFunc_GetGamepadAimSensitivity_ReturnValue, float CallFunc_GetGamepadLookSensitivity_GamepadLookSensitivity, bool CallFunc_GetGamepadLookSensitivity_ReturnValue, bool CallFunc_LoadToggleADS_ToggleADS, bool CallFunc_LoadToggleADS_ReturnValue, float CallFunc_SetFloatValue_NewValue, float CallFunc_SetFloatValue_NewValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "PopulateGamepadControls");

	Params::UW_SettingsMenuGamepad_C_PopulateGamepadControls_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_LoadControlScheme_UsingAlternateControls = CallFunc_LoadControlScheme_UsingAlternateControls;
	Parms.CallFunc_LoadControlScheme_ReturnValue = CallFunc_LoadControlScheme_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_LoadTogglePS5Gyro_TogglePS5Gyro = CallFunc_LoadTogglePS5Gyro_TogglePS5Gyro;
	Parms.CallFunc_LoadTogglePS5Gyro_ReturnValue = CallFunc_LoadTogglePS5Gyro_ReturnValue;
	Parms.CallFunc_LoadHoldCrouch_HoldCrouch = CallFunc_LoadHoldCrouch_HoldCrouch;
	Parms.CallFunc_LoadHoldCrouch_ReturnValue = CallFunc_LoadHoldCrouch_ReturnValue;
	Parms.CallFunc_GetGamepadInverted_bInvertVertical = CallFunc_GetGamepadInverted_bInvertVertical;
	Parms.CallFunc_GetGamepadInverted_bInvertHorizontal = CallFunc_GetGamepadInverted_bInvertHorizontal;
	Parms.CallFunc_GetGamepadInverted_ReturnValue = CallFunc_GetGamepadInverted_ReturnValue;
	Parms.CallFunc_GetGamepadAimSensitivity_GamepadAimSensitivity = CallFunc_GetGamepadAimSensitivity_GamepadAimSensitivity;
	Parms.CallFunc_GetGamepadAimSensitivity_ReturnValue = CallFunc_GetGamepadAimSensitivity_ReturnValue;
	Parms.CallFunc_GetGamepadLookSensitivity_GamepadLookSensitivity = CallFunc_GetGamepadLookSensitivity_GamepadLookSensitivity;
	Parms.CallFunc_GetGamepadLookSensitivity_ReturnValue = CallFunc_GetGamepadLookSensitivity_ReturnValue;
	Parms.CallFunc_LoadToggleADS_ToggleADS = CallFunc_LoadToggleADS_ToggleADS;
	Parms.CallFunc_LoadToggleADS_ReturnValue = CallFunc_LoadToggleADS_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue = CallFunc_SetFloatValue_NewValue;
	Parms.CallFunc_SetFloatValue_NewValue_1 = CallFunc_SetFloatValue_NewValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.StageGraphicsPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSGraphicPreset             Preset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMotionBlurStrength_Strength                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMotionBlurStrength_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMotionBlurEnabled_bEnabled                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMotionBlurEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetFrameRateLimit_FrameRateLimit                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFrameRateLimit_bEnabled                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetVSyncEnabled_bEnabled                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetVSyncEnabled_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatValue_NewValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetIntegralValue_NewValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatValue_NewValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatValue_NewValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetIntegralValue_NewValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::StageGraphicsPreset(const struct FSGraphicPreset& Preset, float CallFunc_GetMotionBlurStrength_Strength, bool CallFunc_GetMotionBlurStrength_ReturnValue, bool CallFunc_GetMotionBlurEnabled_bEnabled, bool CallFunc_GetMotionBlurEnabled_ReturnValue, int32 CallFunc_GetFrameRateLimit_FrameRateLimit, bool CallFunc_GetFrameRateLimit_bEnabled, bool CallFunc_GetFrameRateLimit_ReturnValue, bool CallFunc_GetVSyncEnabled_bEnabled, bool CallFunc_GetVSyncEnabled_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_SetFloatValue_NewValue, int32 CallFunc_SetIntegralValue_NewValue, float CallFunc_SetFloatValue_NewValue_1, float CallFunc_SetFloatValue_NewValue_2, int32 CallFunc_SetIntegralValue_NewValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_4, int32 CallFunc_Conv_ByteToInt_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "StageGraphicsPreset");

	Params::UW_SettingsMenuGamepad_C_StageGraphicsPreset_Params Parms{};

	Parms.Preset = Preset;
	Parms.CallFunc_GetMotionBlurStrength_Strength = CallFunc_GetMotionBlurStrength_Strength;
	Parms.CallFunc_GetMotionBlurStrength_ReturnValue = CallFunc_GetMotionBlurStrength_ReturnValue;
	Parms.CallFunc_GetMotionBlurEnabled_bEnabled = CallFunc_GetMotionBlurEnabled_bEnabled;
	Parms.CallFunc_GetMotionBlurEnabled_ReturnValue = CallFunc_GetMotionBlurEnabled_ReturnValue;
	Parms.CallFunc_GetFrameRateLimit_FrameRateLimit = CallFunc_GetFrameRateLimit_FrameRateLimit;
	Parms.CallFunc_GetFrameRateLimit_bEnabled = CallFunc_GetFrameRateLimit_bEnabled;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue = CallFunc_GetFrameRateLimit_ReturnValue;
	Parms.CallFunc_GetVSyncEnabled_bEnabled = CallFunc_GetVSyncEnabled_bEnabled;
	Parms.CallFunc_GetVSyncEnabled_ReturnValue = CallFunc_GetVSyncEnabled_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue = CallFunc_SetFloatValue_NewValue;
	Parms.CallFunc_SetIntegralValue_NewValue = CallFunc_SetIntegralValue_NewValue;
	Parms.CallFunc_SetFloatValue_NewValue_1 = CallFunc_SetFloatValue_NewValue_1;
	Parms.CallFunc_SetFloatValue_NewValue_2 = CallFunc_SetFloatValue_NewValue_2;
	Parms.CallFunc_SetIntegralValue_NewValue_1 = CallFunc_SetIntegralValue_NewValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_3 = CallFunc_Conv_ByteToInt_ReturnValue_3;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_4 = CallFunc_Conv_ByteToInt_ReturnValue_4;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_5 = CallFunc_Conv_ByteToInt_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_Button_C*>         K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UW_SettingsMenuGamepad_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, TArray<class UW_Button_C*>& K2Node_MakeArray_Array, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "OnKeyDown");

	Params::UW_SettingsMenuGamepad_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.PopulateAudioSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_LoadSubtitlesLocale_SubtitlesLocale                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadSubtitlesLocale_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadSubtitlesSpeed_SubtitlesSpeed                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadSubtitlesSpeed_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetFloatValue_NewValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadSubtitlesBackgroundOpacity_SubtitlesBackgroundOpacity(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadSubtitlesBackgroundOpacity_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetFloatValue_NewValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubtitlesSize          CallFunc_LoadSubtitlesSize_SubtitlesSize                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadSubtitlesSize_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadSubtitlesEnabled_bEnableSubtitles                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadSubtitlesEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceType              CallFunc_GetVoiceType_OutVoiceType                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVoiceType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMicInputGain_MicInputGain                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMicInputGain_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetVolumes_MasterVolume                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_UIVolume                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_SFXVolume                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_MusicVolume                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_VOIPVolume                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVolumes_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EVoiceType              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_LoadSelectedAudioDevice_OutAudioDevice                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadSelectedAudioDevice_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetAvailableAudioDevices_OutAudioDevices                (ReferenceParm)
// bool                               CallFunc_GetAvailableAudioDevices_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetFloatValue_NewValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetFloatValue_NewValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatValue_NewValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatValue_NewValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatValue_NewValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatValue_NewValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::PopulateAudioSettings(int32 Temp_int_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_LoadSubtitlesLocale_SubtitlesLocale, bool CallFunc_LoadSubtitlesLocale_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, float CallFunc_LoadSubtitlesSpeed_SubtitlesSpeed, bool CallFunc_LoadSubtitlesSpeed_ReturnValue, float CallFunc_SetFloatValue_NewValue, float CallFunc_LoadSubtitlesBackgroundOpacity_SubtitlesBackgroundOpacity, bool CallFunc_LoadSubtitlesBackgroundOpacity_ReturnValue, float CallFunc_SetFloatValue_NewValue_1, enum class ESubtitlesSize CallFunc_LoadSubtitlesSize_SubtitlesSize, bool CallFunc_LoadSubtitlesSize_ReturnValue, bool CallFunc_LoadSubtitlesEnabled_bEnableSubtitles, bool CallFunc_LoadSubtitlesEnabled_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Variable_1, enum class EVoiceType CallFunc_GetVoiceType_OutVoiceType, bool CallFunc_GetVoiceType_ReturnValue, float CallFunc_GetMicInputGain_MicInputGain, bool CallFunc_GetMicInputGain_ReturnValue, float CallFunc_GetVolumes_MasterVolume, float CallFunc_GetVolumes_UIVolume, float CallFunc_GetVolumes_SFXVolume, float CallFunc_GetVolumes_MusicVolume, float CallFunc_GetVolumes_VOIPVolume, bool CallFunc_GetVolumes_ReturnValue, enum class EVoiceType Temp_byte_Variable, int32 K2Node_Select_Default, const class FString& CallFunc_LoadSelectedAudioDevice_OutAudioDevice, bool CallFunc_LoadSelectedAudioDevice_ReturnValue, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, TArray<class FString>& CallFunc_GetAvailableAudioDevices_OutAudioDevices, bool CallFunc_GetAvailableAudioDevices_ReturnValue, float CallFunc_SetFloatValue_NewValue_2, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_SetFloatValue_NewValue_3, float CallFunc_SetFloatValue_NewValue_4, float CallFunc_SetFloatValue_NewValue_5, float CallFunc_SetFloatValue_NewValue_6, float CallFunc_SetFloatValue_NewValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "PopulateAudioSettings");

	Params::UW_SettingsMenuGamepad_C_PopulateAudioSettings_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LoadSubtitlesLocale_SubtitlesLocale = CallFunc_LoadSubtitlesLocale_SubtitlesLocale;
	Parms.CallFunc_LoadSubtitlesLocale_ReturnValue = CallFunc_LoadSubtitlesLocale_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_LoadSubtitlesSpeed_SubtitlesSpeed = CallFunc_LoadSubtitlesSpeed_SubtitlesSpeed;
	Parms.CallFunc_LoadSubtitlesSpeed_ReturnValue = CallFunc_LoadSubtitlesSpeed_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue = CallFunc_SetFloatValue_NewValue;
	Parms.CallFunc_LoadSubtitlesBackgroundOpacity_SubtitlesBackgroundOpacity = CallFunc_LoadSubtitlesBackgroundOpacity_SubtitlesBackgroundOpacity;
	Parms.CallFunc_LoadSubtitlesBackgroundOpacity_ReturnValue = CallFunc_LoadSubtitlesBackgroundOpacity_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_1 = CallFunc_SetFloatValue_NewValue_1;
	Parms.CallFunc_LoadSubtitlesSize_SubtitlesSize = CallFunc_LoadSubtitlesSize_SubtitlesSize;
	Parms.CallFunc_LoadSubtitlesSize_ReturnValue = CallFunc_LoadSubtitlesSize_ReturnValue;
	Parms.CallFunc_LoadSubtitlesEnabled_bEnableSubtitles = CallFunc_LoadSubtitlesEnabled_bEnableSubtitles;
	Parms.CallFunc_LoadSubtitlesEnabled_ReturnValue = CallFunc_LoadSubtitlesEnabled_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetVoiceType_OutVoiceType = CallFunc_GetVoiceType_OutVoiceType;
	Parms.CallFunc_GetVoiceType_ReturnValue = CallFunc_GetVoiceType_ReturnValue;
	Parms.CallFunc_GetMicInputGain_MicInputGain = CallFunc_GetMicInputGain_MicInputGain;
	Parms.CallFunc_GetMicInputGain_ReturnValue = CallFunc_GetMicInputGain_ReturnValue;
	Parms.CallFunc_GetVolumes_MasterVolume = CallFunc_GetVolumes_MasterVolume;
	Parms.CallFunc_GetVolumes_UIVolume = CallFunc_GetVolumes_UIVolume;
	Parms.CallFunc_GetVolumes_SFXVolume = CallFunc_GetVolumes_SFXVolume;
	Parms.CallFunc_GetVolumes_MusicVolume = CallFunc_GetVolumes_MusicVolume;
	Parms.CallFunc_GetVolumes_VOIPVolume = CallFunc_GetVolumes_VOIPVolume;
	Parms.CallFunc_GetVolumes_ReturnValue = CallFunc_GetVolumes_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_LoadSelectedAudioDevice_OutAudioDevice = CallFunc_LoadSelectedAudioDevice_OutAudioDevice;
	Parms.CallFunc_LoadSelectedAudioDevice_ReturnValue = CallFunc_LoadSelectedAudioDevice_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue = CallFunc_GetReadyOrNotGameInstance_ReturnValue;
	Parms.CallFunc_GetAvailableAudioDevices_OutAudioDevices = CallFunc_GetAvailableAudioDevices_OutAudioDevices;
	Parms.CallFunc_GetAvailableAudioDevices_ReturnValue = CallFunc_GetAvailableAudioDevices_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_2 = CallFunc_SetFloatValue_NewValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_3 = CallFunc_SetFloatValue_NewValue_3;
	Parms.CallFunc_SetFloatValue_NewValue_4 = CallFunc_SetFloatValue_NewValue_4;
	Parms.CallFunc_SetFloatValue_NewValue_5 = CallFunc_SetFloatValue_NewValue_5;
	Parms.CallFunc_SetFloatValue_NewValue_6 = CallFunc_SetFloatValue_NewValue_6;
	Parms.CallFunc_SetFloatValue_NewValue_7 = CallFunc_SetFloatValue_NewValue_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.PopulateGamepadGraphics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENVGStyle               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBounceLightEnabled_bBounceLightEnabled               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetBounceLightEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMotionBlurEnabled_bEnabled                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMotionBlurEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFoV_FOV                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFoV_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENVGStyle               CallFunc_LoadNVGStyle_NVGStyle                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadNVGStyle_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SetIntegralValue_NewValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::PopulateGamepadGraphics(enum class ENVGStyle Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_GetBounceLightEnabled_bBounceLightEnabled, bool CallFunc_GetBounceLightEnabled_ReturnValue, bool CallFunc_GetMotionBlurEnabled_bEnabled, bool CallFunc_GetMotionBlurEnabled_ReturnValue, float CallFunc_GetFoV_FOV, bool CallFunc_GetFoV_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, enum class ENVGStyle CallFunc_LoadNVGStyle_NVGStyle, bool CallFunc_LoadNVGStyle_ReturnValue, int32 CallFunc_SetIntegralValue_NewValue, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "PopulateGamepadGraphics");

	Params::UW_SettingsMenuGamepad_C_PopulateGamepadGraphics_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetBounceLightEnabled_bBounceLightEnabled = CallFunc_GetBounceLightEnabled_bBounceLightEnabled;
	Parms.CallFunc_GetBounceLightEnabled_ReturnValue = CallFunc_GetBounceLightEnabled_ReturnValue;
	Parms.CallFunc_GetMotionBlurEnabled_bEnabled = CallFunc_GetMotionBlurEnabled_bEnabled;
	Parms.CallFunc_GetMotionBlurEnabled_ReturnValue = CallFunc_GetMotionBlurEnabled_ReturnValue;
	Parms.CallFunc_GetFoV_FOV = CallFunc_GetFoV_FOV;
	Parms.CallFunc_GetFoV_ReturnValue = CallFunc_GetFoV_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_LoadNVGStyle_NVGStyle = CallFunc_LoadNVGStyle_NVGStyle;
	Parms.CallFunc_LoadNVGStyle_ReturnValue = CallFunc_LoadNVGStyle_ReturnValue;
	Parms.CallFunc_SetIntegralValue_NewValue = CallFunc_SetIntegralValue_NewValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.PopulateGameSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGrenadeThrowSettingTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemSelectionInterfaceTypeTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOptiwandViewMode       Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScoreReadoutMode       Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_13                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UModioManager*               CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSendMapStatistics_bSendMapStatistics                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSendMapStatistics_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadServersideChecksum_bServerSideChecksumEnabled       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadServersideChecksum_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMouseInverted_bInvertVertical                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMouseInverted_bInvertHorizontal                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMouseInverted_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFreelookSensitivity_Sensitivity                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFreelookSensitivity_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMouseSensitivity_MouseSensitvity                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMouseSensitivity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetFloatValue_NewValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultDoorLockedCommand_DefaultDoorLockedCommand   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultDoorLockedCommand_DefaultDoorLockedCommandIndex(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultDoorLockedCommand_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetFloatValue_NewValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultDoorUnlockedCommand_DefaultDoorUnlockedCommand(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultDoorUnlockedCommand_DefaultDoorUnlockedCommandIndex(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultDoorUnlockedCommand_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESwatCommand            CallFunc_LoadDefaultDoorOpenCommand_DefaultDoorOpenCommand       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultDoorOpenCommand_DefaultDoorOpenCommandIndex  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultDoorOpenCommand_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESwatCommand            CallFunc_LoadDefaultDoorUnknownCommand_DefaultDoorUnknownCommand (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultDoorUnknownCommand_DefaultDoorUnknownCommandIndex(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultDoorUnknownCommand_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESwatCommand            CallFunc_LoadDefaultSurfaceCommand_DefaultCommand                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultSurfaceCommand_DefaultCommandIndex           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultSurfaceCommand_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EShotgunReloadType      CallFunc_LoadShotgunSettings_ShotgunReloadType                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShotgunSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGrenadeThrowSettingTypeCallFunc_LoadGrenadeSettings_GrenadeThrowType                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadGrenadeSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadLowReadyStyle_bUseHighReady                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadLowReadyStyle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadTeamViewFPSSetting_bEnabled                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_LoadTeamViewFPSSetting_TeamViewFPS                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadTeamViewFPSSetting_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SetIntegralValue_NewValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EShotgunReloadType      Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemSelectionInterfaceTypeCallFunc_LoadItemSelectionStyleSettings_ItemSelectionInterface   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadItemSelectionStyleSettings_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShowCommandContextHintSetting_bShowCommandContextHint(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowCommandContextHintSetting_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHotkeyHintSetting_bShowHotkeyHint                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHotkeyHintSetting_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowHealthIconSetting_bShowHealthIcons              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowHealthIconSetting_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowCompass_bShowCompass                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowCompass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Load2DReload_b2DReload                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Load2DReload_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowMultiplayerNames_bShowMultiplayerNames          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowMultiplayerNames_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowChat_bShowChat                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowChat_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowTeamStatus_bShowTeamStatus                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowTeamStatus_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadSwayHUD_bSwayHUD                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadSwayHUD_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EOptiwandViewMode       CallFunc_LoadOptiwandViewMode_OptiwandViewMode                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadOptiwandViewMode_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScoreReadoutMode       CallFunc_LoadScoreReadoutSetting_OutScoreReadoutMode             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadScoreReadoutSetting_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShowHUD_bShowHud                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowHUD_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentCulture_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShowFPS_bShowFPS                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetShowFPS_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::PopulateGameSettings(int32 Temp_int_Variable, int32 Temp_int_Variable_1, enum class EGrenadeThrowSettingType Temp_byte_Variable, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool Temp_bool_Variable, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, enum class EItemSelectionInterfaceType Temp_byte_Variable_1, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, enum class EOptiwandViewMode Temp_byte_Variable_2, int32 Temp_int_Variable_8, int32 Temp_int_Variable_9, enum class EScoreReadoutMode Temp_byte_Variable_3, int32 Temp_int_Variable_10, int32 Temp_int_Variable_11, int32 Temp_int_Variable_12, int32 Temp_int_Variable_13, class UModioManager* CallFunc_GetInstance_ReturnValue, bool CallFunc_GetSendMapStatistics_bSendMapStatistics, bool CallFunc_GetSendMapStatistics_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LoadServersideChecksum_bServerSideChecksumEnabled, bool CallFunc_LoadServersideChecksum_ReturnValue, bool CallFunc_GetMouseInverted_bInvertVertical, bool CallFunc_GetMouseInverted_bInvertHorizontal, bool CallFunc_GetMouseInverted_ReturnValue, float CallFunc_GetFreelookSensitivity_Sensitivity, bool CallFunc_GetFreelookSensitivity_ReturnValue, float CallFunc_GetMouseSensitivity_MouseSensitvity, bool CallFunc_GetMouseSensitivity_ReturnValue, float CallFunc_SetFloatValue_NewValue, enum class ESwatCommand CallFunc_LoadDefaultDoorLockedCommand_DefaultDoorLockedCommand, int32 CallFunc_LoadDefaultDoorLockedCommand_DefaultDoorLockedCommandIndex, bool CallFunc_LoadDefaultDoorLockedCommand_ReturnValue, float CallFunc_SetFloatValue_NewValue_1, enum class ESwatCommand CallFunc_LoadDefaultDoorUnlockedCommand_DefaultDoorUnlockedCommand, int32 CallFunc_LoadDefaultDoorUnlockedCommand_DefaultDoorUnlockedCommandIndex, bool CallFunc_LoadDefaultDoorUnlockedCommand_ReturnValue, enum class ESwatCommand CallFunc_LoadDefaultDoorOpenCommand_DefaultDoorOpenCommand, int32 CallFunc_LoadDefaultDoorOpenCommand_DefaultDoorOpenCommandIndex, bool CallFunc_LoadDefaultDoorOpenCommand_ReturnValue, enum class ESwatCommand CallFunc_LoadDefaultDoorUnknownCommand_DefaultDoorUnknownCommand, int32 CallFunc_LoadDefaultDoorUnknownCommand_DefaultDoorUnknownCommandIndex, bool CallFunc_LoadDefaultDoorUnknownCommand_ReturnValue, enum class ESwatCommand CallFunc_LoadDefaultSurfaceCommand_DefaultCommand, int32 CallFunc_LoadDefaultSurfaceCommand_DefaultCommandIndex, bool CallFunc_LoadDefaultSurfaceCommand_ReturnValue, enum class EShotgunReloadType CallFunc_LoadShotgunSettings_ShotgunReloadType, bool CallFunc_LoadShotgunSettings_ReturnValue, enum class EGrenadeThrowSettingType CallFunc_LoadGrenadeSettings_GrenadeThrowType, bool CallFunc_LoadGrenadeSettings_ReturnValue, bool CallFunc_LoadLowReadyStyle_bUseHighReady, bool CallFunc_LoadLowReadyStyle_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, bool CallFunc_LoadTeamViewFPSSetting_bEnabled, int32 CallFunc_LoadTeamViewFPSSetting_TeamViewFPS, bool CallFunc_LoadTeamViewFPSSetting_ReturnValue, int32 CallFunc_SetIntegralValue_NewValue, enum class EShotgunReloadType Temp_byte_Variable_4, int32 K2Node_Select_Default_2, enum class EItemSelectionInterfaceType CallFunc_LoadItemSelectionStyleSettings_ItemSelectionInterface, bool CallFunc_LoadItemSelectionStyleSettings_ReturnValue, int32 K2Node_Select_Default_3, bool CallFunc_LoadShowCommandContextHintSetting_bShowCommandContextHint, bool CallFunc_LoadShowCommandContextHintSetting_ReturnValue, bool CallFunc_LoadHotkeyHintSetting_bShowHotkeyHint, bool CallFunc_LoadHotkeyHintSetting_ReturnValue, bool CallFunc_LoadShowHealthIconSetting_bShowHealthIcons, bool CallFunc_LoadShowHealthIconSetting_ReturnValue, bool CallFunc_LoadShowCompass_bShowCompass, bool CallFunc_LoadShowCompass_ReturnValue, bool CallFunc_Load2DReload_b2DReload, bool CallFunc_Load2DReload_ReturnValue, bool CallFunc_LoadShowMultiplayerNames_bShowMultiplayerNames, bool CallFunc_LoadShowMultiplayerNames_ReturnValue, bool CallFunc_LoadShowChat_bShowChat, bool CallFunc_LoadShowChat_ReturnValue, bool CallFunc_LoadShowTeamStatus_bShowTeamStatus, bool CallFunc_LoadShowTeamStatus_ReturnValue, bool CallFunc_LoadSwayHUD_bSwayHUD, bool CallFunc_LoadSwayHUD_ReturnValue, enum class EOptiwandViewMode CallFunc_LoadOptiwandViewMode_OptiwandViewMode, bool CallFunc_LoadOptiwandViewMode_ReturnValue, int32 K2Node_Select_Default_4, enum class EScoreReadoutMode CallFunc_LoadScoreReadoutSetting_OutScoreReadoutMode, bool CallFunc_LoadScoreReadoutSetting_ReturnValue, int32 K2Node_Select_Default_5, bool CallFunc_LoadShowHUD_bShowHud, bool CallFunc_LoadShowHUD_ReturnValue, const class FString& CallFunc_GetCurrentCulture_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GetShowFPS_bShowFPS, bool CallFunc_GetShowFPS_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "PopulateGameSettings");

	Params::UW_SettingsMenuGamepad_C_PopulateGameSettings_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_int_Variable_10 = Temp_int_Variable_10;
	Parms.Temp_int_Variable_11 = Temp_int_Variable_11;
	Parms.Temp_int_Variable_12 = Temp_int_Variable_12;
	Parms.Temp_int_Variable_13 = Temp_int_Variable_13;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetSendMapStatistics_bSendMapStatistics = CallFunc_GetSendMapStatistics_bSendMapStatistics;
	Parms.CallFunc_GetSendMapStatistics_ReturnValue = CallFunc_GetSendMapStatistics_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LoadServersideChecksum_bServerSideChecksumEnabled = CallFunc_LoadServersideChecksum_bServerSideChecksumEnabled;
	Parms.CallFunc_LoadServersideChecksum_ReturnValue = CallFunc_LoadServersideChecksum_ReturnValue;
	Parms.CallFunc_GetMouseInverted_bInvertVertical = CallFunc_GetMouseInverted_bInvertVertical;
	Parms.CallFunc_GetMouseInverted_bInvertHorizontal = CallFunc_GetMouseInverted_bInvertHorizontal;
	Parms.CallFunc_GetMouseInverted_ReturnValue = CallFunc_GetMouseInverted_ReturnValue;
	Parms.CallFunc_GetFreelookSensitivity_Sensitivity = CallFunc_GetFreelookSensitivity_Sensitivity;
	Parms.CallFunc_GetFreelookSensitivity_ReturnValue = CallFunc_GetFreelookSensitivity_ReturnValue;
	Parms.CallFunc_GetMouseSensitivity_MouseSensitvity = CallFunc_GetMouseSensitivity_MouseSensitvity;
	Parms.CallFunc_GetMouseSensitivity_ReturnValue = CallFunc_GetMouseSensitivity_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue = CallFunc_SetFloatValue_NewValue;
	Parms.CallFunc_LoadDefaultDoorLockedCommand_DefaultDoorLockedCommand = CallFunc_LoadDefaultDoorLockedCommand_DefaultDoorLockedCommand;
	Parms.CallFunc_LoadDefaultDoorLockedCommand_DefaultDoorLockedCommandIndex = CallFunc_LoadDefaultDoorLockedCommand_DefaultDoorLockedCommandIndex;
	Parms.CallFunc_LoadDefaultDoorLockedCommand_ReturnValue = CallFunc_LoadDefaultDoorLockedCommand_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_1 = CallFunc_SetFloatValue_NewValue_1;
	Parms.CallFunc_LoadDefaultDoorUnlockedCommand_DefaultDoorUnlockedCommand = CallFunc_LoadDefaultDoorUnlockedCommand_DefaultDoorUnlockedCommand;
	Parms.CallFunc_LoadDefaultDoorUnlockedCommand_DefaultDoorUnlockedCommandIndex = CallFunc_LoadDefaultDoorUnlockedCommand_DefaultDoorUnlockedCommandIndex;
	Parms.CallFunc_LoadDefaultDoorUnlockedCommand_ReturnValue = CallFunc_LoadDefaultDoorUnlockedCommand_ReturnValue;
	Parms.CallFunc_LoadDefaultDoorOpenCommand_DefaultDoorOpenCommand = CallFunc_LoadDefaultDoorOpenCommand_DefaultDoorOpenCommand;
	Parms.CallFunc_LoadDefaultDoorOpenCommand_DefaultDoorOpenCommandIndex = CallFunc_LoadDefaultDoorOpenCommand_DefaultDoorOpenCommandIndex;
	Parms.CallFunc_LoadDefaultDoorOpenCommand_ReturnValue = CallFunc_LoadDefaultDoorOpenCommand_ReturnValue;
	Parms.CallFunc_LoadDefaultDoorUnknownCommand_DefaultDoorUnknownCommand = CallFunc_LoadDefaultDoorUnknownCommand_DefaultDoorUnknownCommand;
	Parms.CallFunc_LoadDefaultDoorUnknownCommand_DefaultDoorUnknownCommandIndex = CallFunc_LoadDefaultDoorUnknownCommand_DefaultDoorUnknownCommandIndex;
	Parms.CallFunc_LoadDefaultDoorUnknownCommand_ReturnValue = CallFunc_LoadDefaultDoorUnknownCommand_ReturnValue;
	Parms.CallFunc_LoadDefaultSurfaceCommand_DefaultCommand = CallFunc_LoadDefaultSurfaceCommand_DefaultCommand;
	Parms.CallFunc_LoadDefaultSurfaceCommand_DefaultCommandIndex = CallFunc_LoadDefaultSurfaceCommand_DefaultCommandIndex;
	Parms.CallFunc_LoadDefaultSurfaceCommand_ReturnValue = CallFunc_LoadDefaultSurfaceCommand_ReturnValue;
	Parms.CallFunc_LoadShotgunSettings_ShotgunReloadType = CallFunc_LoadShotgunSettings_ShotgunReloadType;
	Parms.CallFunc_LoadShotgunSettings_ReturnValue = CallFunc_LoadShotgunSettings_ReturnValue;
	Parms.CallFunc_LoadGrenadeSettings_GrenadeThrowType = CallFunc_LoadGrenadeSettings_GrenadeThrowType;
	Parms.CallFunc_LoadGrenadeSettings_ReturnValue = CallFunc_LoadGrenadeSettings_ReturnValue;
	Parms.CallFunc_LoadLowReadyStyle_bUseHighReady = CallFunc_LoadLowReadyStyle_bUseHighReady;
	Parms.CallFunc_LoadLowReadyStyle_ReturnValue = CallFunc_LoadLowReadyStyle_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_LoadTeamViewFPSSetting_bEnabled = CallFunc_LoadTeamViewFPSSetting_bEnabled;
	Parms.CallFunc_LoadTeamViewFPSSetting_TeamViewFPS = CallFunc_LoadTeamViewFPSSetting_TeamViewFPS;
	Parms.CallFunc_LoadTeamViewFPSSetting_ReturnValue = CallFunc_LoadTeamViewFPSSetting_ReturnValue;
	Parms.CallFunc_SetIntegralValue_NewValue = CallFunc_SetIntegralValue_NewValue;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_LoadItemSelectionStyleSettings_ItemSelectionInterface = CallFunc_LoadItemSelectionStyleSettings_ItemSelectionInterface;
	Parms.CallFunc_LoadItemSelectionStyleSettings_ReturnValue = CallFunc_LoadItemSelectionStyleSettings_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_LoadShowCommandContextHintSetting_bShowCommandContextHint = CallFunc_LoadShowCommandContextHintSetting_bShowCommandContextHint;
	Parms.CallFunc_LoadShowCommandContextHintSetting_ReturnValue = CallFunc_LoadShowCommandContextHintSetting_ReturnValue;
	Parms.CallFunc_LoadHotkeyHintSetting_bShowHotkeyHint = CallFunc_LoadHotkeyHintSetting_bShowHotkeyHint;
	Parms.CallFunc_LoadHotkeyHintSetting_ReturnValue = CallFunc_LoadHotkeyHintSetting_ReturnValue;
	Parms.CallFunc_LoadShowHealthIconSetting_bShowHealthIcons = CallFunc_LoadShowHealthIconSetting_bShowHealthIcons;
	Parms.CallFunc_LoadShowHealthIconSetting_ReturnValue = CallFunc_LoadShowHealthIconSetting_ReturnValue;
	Parms.CallFunc_LoadShowCompass_bShowCompass = CallFunc_LoadShowCompass_bShowCompass;
	Parms.CallFunc_LoadShowCompass_ReturnValue = CallFunc_LoadShowCompass_ReturnValue;
	Parms.CallFunc_Load2DReload_b2DReload = CallFunc_Load2DReload_b2DReload;
	Parms.CallFunc_Load2DReload_ReturnValue = CallFunc_Load2DReload_ReturnValue;
	Parms.CallFunc_LoadShowMultiplayerNames_bShowMultiplayerNames = CallFunc_LoadShowMultiplayerNames_bShowMultiplayerNames;
	Parms.CallFunc_LoadShowMultiplayerNames_ReturnValue = CallFunc_LoadShowMultiplayerNames_ReturnValue;
	Parms.CallFunc_LoadShowChat_bShowChat = CallFunc_LoadShowChat_bShowChat;
	Parms.CallFunc_LoadShowChat_ReturnValue = CallFunc_LoadShowChat_ReturnValue;
	Parms.CallFunc_LoadShowTeamStatus_bShowTeamStatus = CallFunc_LoadShowTeamStatus_bShowTeamStatus;
	Parms.CallFunc_LoadShowTeamStatus_ReturnValue = CallFunc_LoadShowTeamStatus_ReturnValue;
	Parms.CallFunc_LoadSwayHUD_bSwayHUD = CallFunc_LoadSwayHUD_bSwayHUD;
	Parms.CallFunc_LoadSwayHUD_ReturnValue = CallFunc_LoadSwayHUD_ReturnValue;
	Parms.CallFunc_LoadOptiwandViewMode_OptiwandViewMode = CallFunc_LoadOptiwandViewMode_OptiwandViewMode;
	Parms.CallFunc_LoadOptiwandViewMode_ReturnValue = CallFunc_LoadOptiwandViewMode_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_LoadScoreReadoutSetting_OutScoreReadoutMode = CallFunc_LoadScoreReadoutSetting_OutScoreReadoutMode;
	Parms.CallFunc_LoadScoreReadoutSetting_ReturnValue = CallFunc_LoadScoreReadoutSetting_ReturnValue;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_LoadShowHUD_bShowHud = CallFunc_LoadShowHUD_bShowHud;
	Parms.CallFunc_LoadShowHUD_ReturnValue = CallFunc_LoadShowHUD_ReturnValue;
	Parms.CallFunc_GetCurrentCulture_ReturnValue = CallFunc_GetCurrentCulture_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GetShowFPS_bShowFPS = CallFunc_GetShowFPS_bShowFPS;
	Parms.CallFunc_GetShowFPS_ReturnValue = CallFunc_GetShowFPS_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.SwitchTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatableWidget*    MenuWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Tab_Name                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bShowResetButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bShowApplyButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::SwitchTab(class UCommonActivatableWidget* MenuWidget, class FText Tab_Name, bool bShowResetButton, bool bShowApplyButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "SwitchTab");

	Params::UW_SettingsMenuGamepad_C_SwitchTab_Params Parms{};

	Parms.MenuWidget = MenuWidget;
	Parms.Tab_Name = Tab_Name;
	Parms.bShowResetButton = bShowResetButton;
	Parms.bShowApplyButton = bShowApplyButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_SettingsMenuGamepad_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowFPS_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowFPS_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowFPS_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowFPS_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHUD_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHUD_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHUD_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHUD_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_LanguageSelection_K2Node_ComponentBoundEvent_6_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_LanguageSelection_K2Node_ComponentBoundEvent_6_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_LanguageSelection_K2Node_ComponentBoundEvent_6_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_LanguageSelection_K2Node_ComponentBoundEvent_6_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_ScoreReadoutMode_K2Node_ComponentBoundEvent_4_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_ScoreReadoutMode_K2Node_ComponentBoundEvent_4_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_ScoreReadoutMode_K2Node_ComponentBoundEvent_4_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_ScoreReadoutMode_K2Node_ComponentBoundEvent_4_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OptiwandViewMode_K2Node_ComponentBoundEvent_5_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_OptiwandViewMode_K2Node_ComponentBoundEvent_5_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_OptiwandViewMode_K2Node_ComponentBoundEvent_5_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OptiwandViewMode_K2Node_ComponentBoundEvent_5_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_SwayHUD_K2Node_ComponentBoundEvent_7_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_SwayHUD_K2Node_ComponentBoundEvent_7_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_SwayHUD_K2Node_ComponentBoundEvent_7_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_SwayHUD_K2Node_ComponentBoundEvent_7_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowTeamStatus_K2Node_ComponentBoundEvent_8_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowTeamStatus_K2Node_ComponentBoundEvent_8_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowTeamStatus_K2Node_ComponentBoundEvent_8_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowTeamStatus_K2Node_ComponentBoundEvent_8_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowChat_K2Node_ComponentBoundEvent_9_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowChat_K2Node_ComponentBoundEvent_9_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowChat_K2Node_ComponentBoundEvent_9_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowChat_K2Node_ComponentBoundEvent_9_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowNames_K2Node_ComponentBoundEvent_10_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowNames_K2Node_ComponentBoundEvent_10_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowNames_K2Node_ComponentBoundEvent_10_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowNames_K2Node_ComponentBoundEvent_10_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_StaticReload_K2Node_ComponentBoundEvent_11_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_StaticReload_K2Node_ComponentBoundEvent_11_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_StaticReload_K2Node_ComponentBoundEvent_11_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_StaticReload_K2Node_ComponentBoundEvent_11_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCompass_K2Node_ComponentBoundEvent_12_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCompass_K2Node_ComponentBoundEvent_12_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCompass_K2Node_ComponentBoundEvent_12_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCompass_K2Node_ComponentBoundEvent_12_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHealthIcons_K2Node_ComponentBoundEvent_13_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHealthIcons_K2Node_ComponentBoundEvent_13_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHealthIcons_K2Node_ComponentBoundEvent_13_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHealthIcons_K2Node_ComponentBoundEvent_13_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHotkeys_K2Node_ComponentBoundEvent_14_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHotkeys_K2Node_ComponentBoundEvent_14_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHotkeys_K2Node_ComponentBoundEvent_14_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHotkeys_K2Node_ComponentBoundEvent_14_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCommandContextHint_K2Node_ComponentBoundEvent_15_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCommandContextHint_K2Node_ComponentBoundEvent_15_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCommandContextHint_K2Node_ComponentBoundEvent_15_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCommandContextHint_K2Node_ComponentBoundEvent_15_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_ItemSelectionStyle_K2Node_ComponentBoundEvent_16_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_ItemSelectionStyle_K2Node_ComponentBoundEvent_16_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_ItemSelectionStyle_K2Node_ComponentBoundEvent_16_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_ItemSelectionStyle_K2Node_ComponentBoundEvent_16_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_GrenadeStyle_K2Node_ComponentBoundEvent_17_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_GrenadeStyle_K2Node_ComponentBoundEvent_17_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_GrenadeStyle_K2Node_ComponentBoundEvent_17_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_GrenadeStyle_K2Node_ComponentBoundEvent_17_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_ShotgunReloadStyle_K2Node_ComponentBoundEvent_18_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_ShotgunReloadStyle_K2Node_ComponentBoundEvent_18_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_ShotgunReloadStyle_K2Node_ComponentBoundEvent_18_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_ShotgunReloadStyle_K2Node_ComponentBoundEvent_18_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_19_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_19_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_19_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_19_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_21_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_21_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_21_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_21_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_22_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_22_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_22_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_22_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_UnlockedDoorCommand_K2Node_ComponentBoundEvent_23_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_UnlockedDoorCommand_K2Node_ComponentBoundEvent_23_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_UnlockedDoorCommand_K2Node_ComponentBoundEvent_23_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_UnlockedDoorCommand_K2Node_ComponentBoundEvent_23_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_LockedDoorcommand_K2Node_ComponentBoundEvent_24_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_LockedDoorcommand_K2Node_ComponentBoundEvent_24_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_LockedDoorcommand_K2Node_ComponentBoundEvent_24_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_LockedDoorcommand_K2Node_ComponentBoundEvent_24_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenu_Tab_SimpleGraphicsOptions_K2Node_ComponentBoundEvent_35_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenu_Tab_SimpleGraphicsOptions_K2Node_ComponentBoundEvent_35_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenu_Tab_SimpleGraphicsOptions_K2Node_ComponentBoundEvent_35_Clicked__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenu_Tab_SimpleGraphicsOptions_K2Node_ComponentBoundEvent_35_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenu_Tab_AdvancedGraphicsOptions_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenu_Tab_AdvancedGraphicsOptions_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenu_Tab_AdvancedGraphicsOptions_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenu_Tab_AdvancedGraphicsOptions_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_Gamepad_NVGStyle_K2Node_ComponentBoundEvent_26_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_Gamepad_NVGStyle_K2Node_ComponentBoundEvent_26_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_Gamepad_NVGStyle_K2Node_ComponentBoundEvent_26_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_Gamepad_NVGStyle_K2Node_ComponentBoundEvent_26_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_MotionBlur_K2Node_ComponentBoundEvent_27_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_MotionBlur_K2Node_ComponentBoundEvent_27_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_MotionBlur_K2Node_ComponentBoundEvent_27_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_MotionBlur_K2Node_ComponentBoundEvent_27_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_BounceLight_K2Node_ComponentBoundEvent_28_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_BounceLight_K2Node_ComponentBoundEvent_28_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_BounceLight_K2Node_ComponentBoundEvent_28_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_BounceLight_K2Node_ComponentBoundEvent_28_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_Gamepad_FOV_K2Node_ComponentBoundEvent_33_OnIntegralValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_Gamepad_FOV_K2Node_ComponentBoundEvent_33_OnIntegralValueChanged__DelegateSignature(int32 NewIntegerValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_Gamepad_FOV_K2Node_ComponentBoundEvent_33_OnIntegralValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_Gamepad_FOV_K2Node_ComponentBoundEvent_33_OnIntegralValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_MasterVolume_1_K2Node_ComponentBoundEvent_25_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Audio_Slider_MasterVolume_1_K2Node_ComponentBoundEvent_25_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Audio_Slider_MasterVolume_1_K2Node_ComponentBoundEvent_25_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_MasterVolume_1_K2Node_ComponentBoundEvent_25_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_SFXVolume_1_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Audio_Slider_SFXVolume_1_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Audio_Slider_SFXVolume_1_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_SFXVolume_1_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_UIVolume_1_K2Node_ComponentBoundEvent_31_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Audio_Slider_UIVolume_1_K2Node_ComponentBoundEvent_31_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Audio_Slider_UIVolume_1_K2Node_ComponentBoundEvent_31_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_UIVolume_1_K2Node_ComponentBoundEvent_31_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_MusicVolume_1_K2Node_ComponentBoundEvent_32_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Audio_Slider_MusicVolume_1_K2Node_ComponentBoundEvent_32_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Audio_Slider_MusicVolume_1_K2Node_ComponentBoundEvent_32_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_MusicVolume_1_K2Node_ComponentBoundEvent_32_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_VOIPVolume_1_K2Node_ComponentBoundEvent_37_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Audio_Slider_VOIPVolume_1_K2Node_ComponentBoundEvent_37_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Audio_Slider_VOIPVolume_1_K2Node_ComponentBoundEvent_37_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_VOIPVolume_1_K2Node_ComponentBoundEvent_37_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_Combo_InputAudioDevice_1_K2Node_ComponentBoundEvent_39_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_Combo_InputAudioDevice_1_K2Node_ComponentBoundEvent_39_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_Combo_InputAudioDevice_1_K2Node_ComponentBoundEvent_39_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_Combo_InputAudioDevice_1_K2Node_ComponentBoundEvent_39_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_MicGainVolume_1_K2Node_ComponentBoundEvent_40_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Audio_Slider_MicGainVolume_1_K2Node_ComponentBoundEvent_40_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Audio_Slider_MicGainVolume_1_K2Node_ComponentBoundEvent_40_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_MicGainVolume_1_K2Node_ComponentBoundEvent_40_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__SimpleGraphics_Slider_Resolution_K2Node_ComponentBoundEvent_19_OnResolutionValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      NewResolutionValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__SimpleGraphics_Slider_Resolution_K2Node_ComponentBoundEvent_19_OnResolutionValueChanged__DelegateSignature(const class FString& NewResolutionValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__SimpleGraphics_Slider_Resolution_K2Node_ComponentBoundEvent_19_OnResolutionValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__SimpleGraphics_Slider_Resolution_K2Node_ComponentBoundEvent_19_OnResolutionValueChanged__DelegateSignature_Params Parms{};

	Parms.NewResolutionValue = NewResolutionValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__SimpleGraphics_Slider_FieldOfView_K2Node_ComponentBoundEvent_21_OnIntegralValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__SimpleGraphics_Slider_FieldOfView_K2Node_ComponentBoundEvent_21_OnIntegralValueChanged__DelegateSignature(int32 NewIntegerValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__SimpleGraphics_Slider_FieldOfView_K2Node_ComponentBoundEvent_21_OnIntegralValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__SimpleGraphics_Slider_FieldOfView_K2Node_ComponentBoundEvent_21_OnIntegralValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__AdvGraphics_Slider_TextureQuality_K2Node_ComponentBoundEvent_22_OnQualityValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__AdvGraphics_Slider_TextureQuality_K2Node_ComponentBoundEvent_22_OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__AdvGraphics_Slider_TextureQuality_K2Node_ComponentBoundEvent_22_OnQualityValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__AdvGraphics_Slider_TextureQuality_K2Node_ComponentBoundEvent_22_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__AdvGraphics_Slider_ShadowQuality_K2Node_ComponentBoundEvent_23_OnQualityValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__AdvGraphics_Slider_ShadowQuality_K2Node_ComponentBoundEvent_23_OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__AdvGraphics_Slider_ShadowQuality_K2Node_ComponentBoundEvent_23_OnQualityValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__AdvGraphics_Slider_ShadowQuality_K2Node_ComponentBoundEvent_23_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__AdvGraphics_Slider_PPQuality_K2Node_ComponentBoundEvent_24_OnQualityValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__AdvGraphics_Slider_PPQuality_K2Node_ComponentBoundEvent_24_OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__AdvGraphics_Slider_PPQuality_K2Node_ComponentBoundEvent_24_OnQualityValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__AdvGraphics_Slider_PPQuality_K2Node_ComponentBoundEvent_24_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__AdvGraphics_Slider_AAQuality_K2Node_ComponentBoundEvent_25_OnQualityValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__AdvGraphics_Slider_AAQuality_K2Node_ComponentBoundEvent_25_OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__AdvGraphics_Slider_AAQuality_K2Node_ComponentBoundEvent_25_OnQualityValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__AdvGraphics_Slider_AAQuality_K2Node_ComponentBoundEvent_25_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__AdvGraphics_Slider_EffectsQuality_K2Node_ComponentBoundEvent_26_OnQualityValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__AdvGraphics_Slider_EffectsQuality_K2Node_ComponentBoundEvent_26_OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__AdvGraphics_Slider_EffectsQuality_K2Node_ComponentBoundEvent_26_OnQualityValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__AdvGraphics_Slider_EffectsQuality_K2Node_ComponentBoundEvent_26_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__AdvGraphics_Slider_ViewDistance_K2Node_ComponentBoundEvent_27_OnQualityValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__AdvGraphics_Slider_ViewDistance_K2Node_ComponentBoundEvent_27_OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__AdvGraphics_Slider_ViewDistance_K2Node_ComponentBoundEvent_27_OnQualityValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__AdvGraphics_Slider_ViewDistance_K2Node_ComponentBoundEvent_27_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__AdvGraphics_Slider_OptiwandFPS_K2Node_ComponentBoundEvent_28_OnIntegralValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__AdvGraphics_Slider_OptiwandFPS_K2Node_ComponentBoundEvent_28_OnIntegralValueChanged__DelegateSignature(int32 NewIntegerValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__AdvGraphics_Slider_OptiwandFPS_K2Node_ComponentBoundEvent_28_OnIntegralValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__AdvGraphics_Slider_OptiwandFPS_K2Node_ComponentBoundEvent_28_OnIntegralValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__AdvGraphics_Slider_OptiwandScale_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__AdvGraphics_Slider_OptiwandScale_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__AdvGraphics_Slider_OptiwandScale_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__AdvGraphics_Slider_OptiwandScale_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__SimpleGraphics_Slider_ResolutionScale_K2Node_ComponentBoundEvent_57_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__SimpleGraphics_Slider_ResolutionScale_K2Node_ComponentBoundEvent_57_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__SimpleGraphics_Slider_ResolutionScale_K2Node_ComponentBoundEvent_57_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__SimpleGraphics_Slider_ResolutionScale_K2Node_ComponentBoundEvent_57_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__AdvGraphics_Slider_FrameLimiter_K2Node_ComponentBoundEvent_60_OnIntegralValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__AdvGraphics_Slider_FrameLimiter_K2Node_ComponentBoundEvent_60_OnIntegralValueChanged__DelegateSignature(int32 NewIntegerValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__AdvGraphics_Slider_FrameLimiter_K2Node_ComponentBoundEvent_60_OnIntegralValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__AdvGraphics_Slider_FrameLimiter_K2Node_ComponentBoundEvent_60_OnIntegralValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Controls_OnOff_InvertVertical_K2Node_ComponentBoundEvent_70_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Controls_OnOff_InvertVertical_K2Node_ComponentBoundEvent_70_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Controls_OnOff_InvertVertical_K2Node_ComponentBoundEvent_70_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Controls_OnOff_InvertVertical_K2Node_ComponentBoundEvent_70_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Controls_OnOff_InvertHorizontal_K2Node_ComponentBoundEvent_71_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Controls_OnOff_InvertHorizontal_K2Node_ComponentBoundEvent_71_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Controls_OnOff_InvertHorizontal_K2Node_ComponentBoundEvent_71_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Controls_OnOff_InvertHorizontal_K2Node_ComponentBoundEvent_71_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Controls_OnOff_ToggleADS_K2Node_ComponentBoundEvent_72_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Controls_OnOff_ToggleADS_K2Node_ComponentBoundEvent_72_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Controls_OnOff_ToggleADS_K2Node_ComponentBoundEvent_72_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Controls_OnOff_ToggleADS_K2Node_ComponentBoundEvent_72_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Controls_OnOff_HoldCrouch_K2Node_ComponentBoundEvent_73_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Controls_OnOff_HoldCrouch_K2Node_ComponentBoundEvent_73_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Controls_OnOff_HoldCrouch_K2Node_ComponentBoundEvent_73_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Controls_OnOff_HoldCrouch_K2Node_ComponentBoundEvent_73_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__btn_ControlsMisc_K2Node_ComponentBoundEvent_96_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__btn_ControlsMisc_K2Node_ComponentBoundEvent_96_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__btn_ControlsMisc_K2Node_ComponentBoundEvent_96_Clicked__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__btn_ControlsMisc_K2Node_ComponentBoundEvent_96_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__btn_ControlsTeamwork_K2Node_ComponentBoundEvent_99_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__btn_ControlsTeamwork_K2Node_ComponentBoundEvent_99_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__btn_ControlsTeamwork_K2Node_ComponentBoundEvent_99_Clicked__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__btn_ControlsTeamwork_K2Node_ComponentBoundEvent_99_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__btn_ControlsMovement_K2Node_ComponentBoundEvent_100_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__btn_ControlsMovement_K2Node_ComponentBoundEvent_100_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__btn_ControlsMovement_K2Node_ComponentBoundEvent_100_Clicked__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__btn_ControlsMovement_K2Node_ComponentBoundEvent_100_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__btn_ControlsInteraction_K2Node_ComponentBoundEvent_101_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__btn_ControlsInteraction_K2Node_ComponentBoundEvent_101_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__btn_ControlsInteraction_K2Node_ComponentBoundEvent_101_Clicked__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__btn_ControlsInteraction_K2Node_ComponentBoundEvent_101_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__btn_ControlsEquipment_K2Node_ComponentBoundEvent_102_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__btn_ControlsEquipment_K2Node_ComponentBoundEvent_102_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__btn_ControlsEquipment_K2Node_ComponentBoundEvent_102_Clicked__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__btn_ControlsEquipment_K2Node_ComponentBoundEvent_102_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__btn_ControlsVehicle_K2Node_ComponentBoundEvent_107_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__btn_ControlsVehicle_K2Node_ComponentBoundEvent_107_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__btn_ControlsVehicle_K2Node_ComponentBoundEvent_107_Clicked__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__btn_ControlsVehicle_K2Node_ComponentBoundEvent_107_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenu_btn_ControlsReplay_K2Node_ComponentBoundEvent_120_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenu_btn_ControlsReplay_K2Node_ComponentBoundEvent_120_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenu_btn_ControlsReplay_K2Node_ComponentBoundEvent_120_Clicked__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenu_btn_ControlsReplay_K2Node_ComponentBoundEvent_120_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.AddControlsToGridPanel
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FKeyBinding>         Bindings                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UGridPanel*                  GridPanel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::AddControlsToGridPanel(TArray<struct FKeyBinding>& Bindings, class UGridPanel* GridPanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "AddControlsToGridPanel");

	Params::UW_SettingsMenuGamepad_C_AddControlsToGridPanel_Params Parms{};

	Parms.Bindings = Bindings;
	Parms.GridPanel = GridPanel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.On Binding Started
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           CallingWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::On_Binding_Started(class UW_ControlsBind_C* CallingWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "On Binding Started");

	Params::UW_SettingsMenuGamepad_C_On_Binding_Started_Params Parms{};

	Parms.CallingWidget = CallingWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.On Binding Canceled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           CallingWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::On_Binding_Canceled(class UW_ControlsBind_C* CallingWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "On Binding Canceled");

	Params::UW_SettingsMenuGamepad_C_On_Binding_Canceled_Params Parms{};

	Parms.CallingWidget = CallingWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.On Binding Committed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           CallingWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        NewKey                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::On_Binding_Committed(class UW_ControlsBind_C* CallingWidget, const struct FKey& NewKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "On Binding Committed");

	Params::UW_SettingsMenuGamepad_C_On_Binding_Committed_Params Parms{};

	Parms.CallingWidget = CallingWidget;
	Parms.NewKey = NewKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.Conflicting Bind Detected
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           CallingBind                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActionMappingStruct>ActionMappings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FAxisMappingStruct>  AxisMappings                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<class FText>                ConflictBindsText                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_SettingsMenuGamepad_C::Conflicting_Bind_Detected(class UW_ControlsBind_C* CallingBind, TArray<struct FActionMappingStruct>& ActionMappings, TArray<struct FAxisMappingStruct>& AxisMappings, const struct FKey& Key, TArray<class FText>& ConflictBindsText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "Conflicting Bind Detected");

	Params::UW_SettingsMenuGamepad_C_Conflicting_Bind_Detected_Params Parms{};

	Parms.CallingBind = CallingBind;
	Parms.ActionMappings = ActionMappings;
	Parms.AxisMappings = AxisMappings;
	Parms.Key = Key;
	Parms.ConflictBindsText = ConflictBindsText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.Conflicting Bind Ok Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_SettingsMenuGamepad_C::Conflicting_Bind_Ok_Clicked(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "Conflicting Bind Ok Clicked");

	Params::UW_SettingsMenuGamepad_C_Conflicting_Bind_Ok_Clicked_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.Conflicting Bind Cancel Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::Conflicting_Bind_Cancel_Clicked(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "Conflicting Bind Cancel Clicked");

	Params::UW_SettingsMenuGamepad_C_Conflicting_Bind_Cancel_Clicked_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.InitialisePopUps
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenuGamepad_C::InitialisePopUps()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "InitialisePopUps");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.OnCancelIllegalBindClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::OnCancelIllegalBindClicked(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "OnCancelIllegalBindClicked");

	Params::UW_SettingsMenuGamepad_C_OnCancelIllegalBindClicked_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.HandleApplyButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenuGamepad_C::HandleApplyButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "HandleApplyButtonPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.HandleResetButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenuGamepad_C::HandleResetButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "HandleResetButtonPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_32_OnOkClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_SettingsMenuGamepad_C::BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_32_OnOkClicked__DelegateSignature(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_32_OnOkClicked__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_32_OnOkClicked__DelegateSignature_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_33_OnCancelClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_33_OnCancelClicked__DelegateSignature(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_33_OnCancelClicked__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_33_OnCancelClicked__DelegateSignature_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_34_OnApplyClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_SettingsMenuGamepad_C::BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_34_OnApplyClicked__DelegateSignature(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_34_OnApplyClicked__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_34_OnApplyClicked__DelegateSignature_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.ExitMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenuGamepad_C::ExitMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "ExitMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.Apply PC Graphics Settings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenuGamepad_C::Apply_PC_Graphics_Settings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "Apply PC Graphics Settings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__Options_Slider_TeamView_PIP_FPS_K2Node_ComponentBoundEvent_86_OnIntegralValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__Options_Slider_TeamView_PIP_FPS_K2Node_ComponentBoundEvent_86_OnIntegralValueChanged__DelegateSignature(int32 NewIntegerValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__Options_Slider_TeamView_PIP_FPS_K2Node_ComponentBoundEvent_86_OnIntegralValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__Options_Slider_TeamView_PIP_FPS_K2Node_ComponentBoundEvent_86_OnIntegralValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_MotionBlurScale_K2Node_ComponentBoundEvent_119_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenu_AdvGraphics_Slider_MotionBlurScale_K2Node_ComponentBoundEvent_119_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenu_AdvGraphics_Slider_MotionBlurScale_K2Node_ComponentBoundEvent_119_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_MotionBlurScale_K2Node_ComponentBoundEvent_119_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_DepthOfFieldChoice_K2Node_ComponentBoundEvent_55_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_DepthOfFieldChoice_K2Node_ComponentBoundEvent_55_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_DepthOfFieldChoice_K2Node_ComponentBoundEvent_55_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_DepthOfFieldChoice_K2Node_ComponentBoundEvent_55_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_MeshPaitingChoice_K2Node_ComponentBoundEvent_56_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_MeshPaitingChoice_K2Node_ComponentBoundEvent_56_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_MeshPaitingChoice_K2Node_ComponentBoundEvent_56_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_MeshPaitingChoice_K2Node_ComponentBoundEvent_56_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenu_AdvGraphics_Check_FlashlightShadows_K2Node_ComponentBoundEvent_42_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenu_AdvGraphics_Check_FlashlightShadows_K2Node_ComponentBoundEvent_42_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenu_AdvGraphics_Check_FlashlightShadows_K2Node_ComponentBoundEvent_42_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenu_AdvGraphics_Check_FlashlightShadows_K2Node_ComponentBoundEvent_42_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalFadeScreenSize_K2Node_ComponentBoundEvent_112_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalFadeScreenSize_K2Node_ComponentBoundEvent_112_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalFadeScreenSize_K2Node_ComponentBoundEvent_112_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalFadeScreenSize_K2Node_ComponentBoundEvent_112_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalDensity_K2Node_ComponentBoundEvent_111_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalDensity_K2Node_ComponentBoundEvent_111_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalDensity_K2Node_ComponentBoundEvent_111_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalDensity_K2Node_ComponentBoundEvent_111_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__AdvGraphics_Slider_DLSSQuality_K2Node_ComponentBoundEvent_84_OnDlssValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__AdvGraphics_Slider_DLSSQuality_K2Node_ComponentBoundEvent_84_OnDlssValueChanged__DelegateSignature(int32 NewIntegerValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__AdvGraphics_Slider_DLSSQuality_K2Node_ComponentBoundEvent_84_OnDlssValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__AdvGraphics_Slider_DLSSQuality_K2Node_ComponentBoundEvent_84_OnDlssValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_FSRQuality_K2Node_ComponentBoundEvent_44_OnDlssValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenu_AdvGraphics_Slider_FSRQuality_K2Node_ComponentBoundEvent_44_OnDlssValueChanged__DelegateSignature(int32 NewIntegerValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenu_AdvGraphics_Slider_FSRQuality_K2Node_ComponentBoundEvent_44_OnDlssValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_FSRQuality_K2Node_ComponentBoundEvent_44_OnDlssValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__SimpleGraphics_Slider_SafeZone_X_K2Node_ComponentBoundEvent_82_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__SimpleGraphics_Slider_SafeZone_X_K2Node_ComponentBoundEvent_82_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__SimpleGraphics_Slider_SafeZone_X_K2Node_ComponentBoundEvent_82_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__SimpleGraphics_Slider_SafeZone_X_K2Node_ComponentBoundEvent_82_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__SimpleGraphics_Slider_SafeZone_Y_K2Node_ComponentBoundEvent_83_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__SimpleGraphics_Slider_SafeZone_Y_K2Node_ComponentBoundEvent_83_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__SimpleGraphics_Slider_SafeZone_Y_K2Node_ComponentBoundEvent_83_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__SimpleGraphics_Slider_SafeZone_Y_K2Node_ComponentBoundEvent_83_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowIcons_K2Node_ComponentBoundEvent_122_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowIcons_K2Node_ComponentBoundEvent_122_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowIcons_K2Node_ComponentBoundEvent_122_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowIcons_K2Node_ComponentBoundEvent_122_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHesitationBar_K2Node_ComponentBoundEvent_124_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHesitationBar_K2Node_ComponentBoundEvent_124_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHesitationBar_K2Node_ComponentBoundEvent_124_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHesitationBar_K2Node_ComponentBoundEvent_124_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.Apply Gamepad Graphics
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenuGamepad_C::Apply_Gamepad_Graphics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "Apply Gamepad Graphics");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_DefaultVoipChannel_K2Node_ComponentBoundEvent_81_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Audio_DefaultVoipChannel_K2Node_ComponentBoundEvent_81_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Audio_DefaultVoipChannel_K2Node_ComponentBoundEvent_81_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_DefaultVoipChannel_K2Node_ComponentBoundEvent_81_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Controls_Gamepad_LookSensitivity_K2Node_ComponentBoundEvent_85_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Controls_Gamepad_LookSensitivity_K2Node_ComponentBoundEvent_85_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Controls_Gamepad_LookSensitivity_K2Node_ComponentBoundEvent_85_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Controls_Gamepad_LookSensitivity_K2Node_ComponentBoundEvent_85_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Controls_Gamepad_AimSensitivity_K2Node_ComponentBoundEvent_88_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Controls_Gamepad_AimSensitivity_K2Node_ComponentBoundEvent_88_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Controls_Gamepad_AimSensitivity_K2Node_ComponentBoundEvent_88_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Controls_Gamepad_AimSensitivity_K2Node_ComponentBoundEvent_88_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.EndButtonsDisabledForBinding
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenuGamepad_C::EndButtonsDisabledForBinding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "EndButtonsDisabledForBinding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_SettingsMenuGamepad_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Accessibility_Slider_Strength_K2Node_ComponentBoundEvent_125_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Accessibility_Slider_Strength_K2Node_ComponentBoundEvent_125_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Accessibility_Slider_Strength_K2Node_ComponentBoundEvent_125_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Accessibility_Slider_Strength_K2Node_ComponentBoundEvent_125_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_46_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_46_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_46_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_46_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_91_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_91_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_91_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_91_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_SimpleGraphics_OnOff_ADSZoom_K2Node_ComponentBoundEvent_92_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_SimpleGraphics_OnOff_ADSZoom_K2Node_ComponentBoundEvent_92_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_SimpleGraphics_OnOff_ADSZoom_K2Node_ComponentBoundEvent_92_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_SimpleGraphics_OnOff_ADSZoom_K2Node_ComponentBoundEvent_92_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_93_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_93_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_93_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_93_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_FrameLimit_K2Node_ComponentBoundEvent_103_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_FrameLimit_K2Node_ComponentBoundEvent_103_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_FrameLimit_K2Node_ComponentBoundEvent_103_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_FrameLimit_K2Node_ComponentBoundEvent_103_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_MotionBlurEnable_K2Node_ComponentBoundEvent_104_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_MotionBlurEnable_K2Node_ComponentBoundEvent_104_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_MotionBlurEnable_K2Node_ComponentBoundEvent_104_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_MotionBlurEnable_K2Node_ComponentBoundEvent_104_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_VSync_K2Node_ComponentBoundEvent_109_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_VSync_K2Node_ComponentBoundEvent_109_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_VSync_K2Node_ComponentBoundEvent_109_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_VSync_K2Node_ComponentBoundEvent_109_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_BounceLight_K2Node_ComponentBoundEvent_126_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_BounceLight_K2Node_ComponentBoundEvent_126_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_BounceLight_K2Node_ComponentBoundEvent_126_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_BounceLight_K2Node_ComponentBoundEvent_126_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_DecalsEnabled_K2Node_ComponentBoundEvent_127_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_DecalsEnabled_K2Node_ComponentBoundEvent_127_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_DecalsEnabled_K2Node_ComponentBoundEvent_127_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_DecalsEnabled_K2Node_ComponentBoundEvent_127_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_OptiwandFPSEnabled_K2Node_ComponentBoundEvent_128_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_OptiwandFPSEnabled_K2Node_ComponentBoundEvent_128_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_OptiwandFPSEnabled_K2Node_ComponentBoundEvent_128_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_OptiwandFPSEnabled_K2Node_ComponentBoundEvent_128_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_Raytracing_K2Node_ComponentBoundEvent_129_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_Raytracing_K2Node_ComponentBoundEvent_129_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_Raytracing_K2Node_ComponentBoundEvent_129_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_Raytracing_K2Node_ComponentBoundEvent_129_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingShadows_K2Node_ComponentBoundEvent_130_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingShadows_K2Node_ComponentBoundEvent_130_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingShadows_K2Node_ComponentBoundEvent_130_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingShadows_K2Node_ComponentBoundEvent_130_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingReflections_K2Node_ComponentBoundEvent_131_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingReflections_K2Node_ComponentBoundEvent_131_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingReflections_K2Node_ComponentBoundEvent_131_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingReflections_K2Node_ComponentBoundEvent_131_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingAmbientOcclusion_K2Node_ComponentBoundEvent_132_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingAmbientOcclusion_K2Node_ComponentBoundEvent_132_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingAmbientOcclusion_K2Node_ComponentBoundEvent_132_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingAmbientOcclusion_K2Node_ComponentBoundEvent_132_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingGlobalIllumination_K2Node_ComponentBoundEvent_133_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingGlobalIllumination_K2Node_ComponentBoundEvent_133_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingGlobalIllumination_K2Node_ComponentBoundEvent_133_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingGlobalIllumination_K2Node_ComponentBoundEvent_133_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingTranslucency_K2Node_ComponentBoundEvent_134_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingTranslucency_K2Node_ComponentBoundEvent_134_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingTranslucency_K2Node_ComponentBoundEvent_134_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingTranslucency_K2Node_ComponentBoundEvent_134_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_GameToRenderLatency_K2Node_ComponentBoundEvent_135_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_GameToRenderLatency_K2Node_ComponentBoundEvent_135_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_GameToRenderLatency_K2Node_ComponentBoundEvent_135_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_GameToRenderLatency_K2Node_ComponentBoundEvent_135_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_GameLatency_K2Node_ComponentBoundEvent_137_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_GameLatency_K2Node_ComponentBoundEvent_137_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_GameLatency_K2Node_ComponentBoundEvent_137_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_GameLatency_K2Node_ComponentBoundEvent_137_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_RenderLatency_K2Node_ComponentBoundEvent_138_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_RenderLatency_K2Node_ComponentBoundEvent_138_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_RenderLatency_K2Node_ComponentBoundEvent_138_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_RenderLatency_K2Node_ComponentBoundEvent_138_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_Preset_K2Node_ComponentBoundEvent_40_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_Preset_K2Node_ComponentBoundEvent_40_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_Preset_K2Node_ComponentBoundEvent_40_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_Preset_K2Node_ComponentBoundEvent_40_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_ScreenMode_K2Node_ComponentBoundEvent_41_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_ScreenMode_K2Node_ComponentBoundEvent_41_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_ScreenMode_K2Node_ComponentBoundEvent_41_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_ScreenMode_K2Node_ComponentBoundEvent_41_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_Carousel_MirrorReflectionMode_K2Node_ComponentBoundEvent_50_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_Carousel_MirrorReflectionMode_K2Node_ComponentBoundEvent_50_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_Carousel_MirrorReflectionMode_K2Node_ComponentBoundEvent_50_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_Carousel_MirrorReflectionMode_K2Node_ComponentBoundEvent_50_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_NVGStyle_K2Node_ComponentBoundEvent_51_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_NVGStyle_K2Node_ComponentBoundEvent_51_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_NVGStyle_K2Node_ComponentBoundEvent_51_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_NVGStyle_K2Node_ComponentBoundEvent_51_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_ReflexLowLatencyCarousel_K2Node_ComponentBoundEvent_17_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_ReflexLowLatencyCarousel_K2Node_ComponentBoundEvent_17_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_ReflexLowLatencyCarousel_K2Node_ComponentBoundEvent_17_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_ReflexLowLatencyCarousel_K2Node_ComponentBoundEvent_17_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Accessibility_Carousel_ColorblindMode_K2Node_ComponentBoundEvent_18_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Accessibility_Carousel_ColorblindMode_K2Node_ComponentBoundEvent_18_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Accessibility_Carousel_ColorblindMode_K2Node_ComponentBoundEvent_18_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Accessibility_Carousel_ColorblindMode_K2Node_ComponentBoundEvent_18_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Controls_OnOff_TogglePS5Gyro_K2Node_ComponentBoundEvent_59_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Controls_OnOff_TogglePS5Gyro_K2Node_ComponentBoundEvent_59_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Controls_OnOff_TogglePS5Gyro_K2Node_ComponentBoundEvent_59_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Controls_OnOff_TogglePS5Gyro_K2Node_ComponentBoundEvent_59_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_W_MainSubMenu_K2Node_ComponentBoundEvent_61_OnWidgetActivationChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_W_MainSubMenu_K2Node_ComponentBoundEvent_61_OnWidgetActivationChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_W_MainSubMenu_K2Node_ComponentBoundEvent_61_OnWidgetActivationChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_StandardControlsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_StandardControlsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_StandardControlsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_StandardControlsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AlternateControlsButton_K2Node_ComponentBoundEvent_62_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_AlternateControlsButton_K2Node_ComponentBoundEvent_62_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_AlternateControlsButton_K2Node_ComponentBoundEvent_62_Clicked__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AlternateControlsButton_K2Node_ComponentBoundEvent_62_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_SettingsMenuGamepad_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "OnAddedToFocusPath");

	Params::UW_SettingsMenuGamepad_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WeaponHighlight_K2Node_ComponentBoundEvent_63_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WeaponHighlight_K2Node_ComponentBoundEvent_63_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WeaponHighlight_K2Node_ComponentBoundEvent_63_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WeaponHighlight_K2Node_ComponentBoundEvent_63_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesEnabled_K2Node_ComponentBoundEvent_64_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesEnabled_K2Node_ComponentBoundEvent_64_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesEnabled_K2Node_ComponentBoundEvent_64_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesEnabled_K2Node_ComponentBoundEvent_64_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesSize_K2Node_ComponentBoundEvent_65_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesSize_K2Node_ComponentBoundEvent_65_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesSize_K2Node_ComponentBoundEvent_65_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesSize_K2Node_ComponentBoundEvent_65_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_SubtitlesBackgroundOpacity_K2Node_ComponentBoundEvent_66_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Audio_Slider_SubtitlesBackgroundOpacity_K2Node_ComponentBoundEvent_66_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Audio_Slider_SubtitlesBackgroundOpacity_K2Node_ComponentBoundEvent_66_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_SubtitlesBackgroundOpacity_K2Node_ComponentBoundEvent_66_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_SubtitlesSpeed_K2Node_ComponentBoundEvent_67_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Audio_Slider_SubtitlesSpeed_K2Node_ComponentBoundEvent_67_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Audio_Slider_SubtitlesSpeed_K2Node_ComponentBoundEvent_67_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_SubtitlesSpeed_K2Node_ComponentBoundEvent_67_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesSize_1_K2Node_ComponentBoundEvent_68_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesSize_1_K2Node_ComponentBoundEvent_68_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesSize_1_K2Node_ComponentBoundEvent_68_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesSize_1_K2Node_ComponentBoundEvent_68_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WorldSpaceActionPrompts_K2Node_ComponentBoundEvent_69_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WorldSpaceActionPrompts_K2Node_ComponentBoundEvent_69_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WorldSpaceActionPrompts_K2Node_ComponentBoundEvent_69_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WorldSpaceActionPrompts_K2Node_ComponentBoundEvent_69_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_SettingsMenuGamepad_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_InterfaceAspectRatio_K2Node_ComponentBoundEvent_76_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_InterfaceAspectRatio_K2Node_ComponentBoundEvent_76_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_InterfaceAspectRatio_K2Node_ComponentBoundEvent_76_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_InterfaceAspectRatio_K2Node_ComponentBoundEvent_76_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ServersideChecksum_K2Node_ComponentBoundEvent_89_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ServersideChecksum_K2Node_ComponentBoundEvent_89_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ServersideChecksum_K2Node_ComponentBoundEvent_89_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ServersideChecksum_K2Node_ComponentBoundEvent_89_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_ClearModioUserData_K2Node_ComponentBoundEvent_90_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_ClearModioUserData_K2Node_ComponentBoundEvent_90_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_ClearModioUserData_K2Node_ComponentBoundEvent_90_Clicked__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_ClearModioUserData_K2Node_ComponentBoundEvent_90_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_MapAnalytics_K2Node_ComponentBoundEvent_94_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_MapAnalytics_K2Node_ComponentBoundEvent_94_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_MapAnalytics_K2Node_ComponentBoundEvent_94_OnValueStateChange__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_MapAnalytics_K2Node_ComponentBoundEvent_94_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_LowReadyStyle_K2Node_ComponentBoundEvent_108_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_Options_LowReadyStyle_K2Node_ComponentBoundEvent_108_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_Options_LowReadyStyle_K2Node_ComponentBoundEvent_108_FocusLostDispatcher__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_LowReadyStyle_K2Node_ComponentBoundEvent_108_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_PageWrapper_K2Node_ComponentBoundEvent_98_OnFooterButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_PageWrapper_K2Node_ComponentBoundEvent_98_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_PageWrapper_K2Node_ComponentBoundEvent_98_OnFooterButtonClicked__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_PageWrapper_K2Node_ComponentBoundEvent_98_OnFooterButtonClicked__DelegateSignature_Params Parms{};

	Parms.ButtonID = ButtonID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_PageWrapper_K2Node_ComponentBoundEvent_110_OnNavOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_PageWrapper_K2Node_ComponentBoundEvent_110_OnNavOptionSelected__DelegateSignature(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_PageWrapper_K2Node_ComponentBoundEvent_110_OnNavOptionSelected__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_PageWrapper_K2Node_ComponentBoundEvent_110_OnNavOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.ResetDefault
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenuGamepad_C::ResetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "ResetDefault");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_selector_Language_K2Node_ComponentBoundEvent_13_OptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_selector_Language_K2Node_ComponentBoundEvent_13_OptionSelected__DelegateSignature(const class FString& OptionID, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_selector_Language_K2Node_ComponentBoundEvent_13_OptionSelected__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_selector_Language_K2Node_ComponentBoundEvent_13_OptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_selector_ScoreReadout_K2Node_ComponentBoundEvent_31_OptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::BndEvt__W_SettingsMenuGamepad_selector_ScoreReadout_K2Node_ComponentBoundEvent_31_OptionSelected__DelegateSignature(const class FString& OptionID, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "BndEvt__W_SettingsMenuGamepad_selector_ScoreReadout_K2Node_ComponentBoundEvent_31_OptionSelected__DelegateSignature");

	Params::UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_selector_ScoreReadout_K2Node_ComponentBoundEvent_31_OptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.CreateRestartDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenuGamepad_C::CreateRestartDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "CreateRestartDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.LanguageCancelClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::LanguageCancelClicked(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "LanguageCancelClicked");

	Params::UW_SettingsMenuGamepad_C_LanguageCancelClicked_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.LanguageOkClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_SettingsMenuGamepad_C::LanguageOkClicked(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "LanguageOkClicked");

	Params::UW_SettingsMenuGamepad_C_LanguageOkClicked_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.ExecuteUbergraph_W_SettingsMenuGamepad
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EColorVisionDeficiency  Temp_byte_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EColorVisionDeficiency  Temp_byte_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EColorVisionDeficiency  Temp_byte_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EColorVisionDeficiency  Temp_byte_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_21                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_22                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_23                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_24                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_25                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_26                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_27                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_28                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_29                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_30                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_31                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemSelectionInterfaceTypeTemp_byte_Variable_32                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemSelectionInterfaceTypeTemp_byte_Variable_33                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOptiwandViewMode       Temp_byte_Variable_34                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOptiwandViewMode       Temp_byte_Variable_35                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScoreReadoutMode       Temp_byte_Variable_36                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScoreReadoutMode       Temp_byte_Variable_37                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScoreReadoutMode       Temp_byte_Variable_38                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScoreReadoutMode       Temp_byte_Variable_39                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGrenadeThrowSettingTypeTemp_byte_Variable_40                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_46                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_45                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetShowFPS_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveShowHUD_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_24                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_23                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_22                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScoreReadoutMode       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOptiwandViewMode       K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveScoreReadoutSetting_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveOptiwandViewMode_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_44                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_43                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveSwayHUD_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveShowTeamStatus_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_42                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_41                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveShowChat_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveShowMultiplayerNames_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_40                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_39                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Save2DReload_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveShowCompass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_38                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_37                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveShowHealthIconSetting_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveHotkeyHintSetting_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_36                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_21                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveShowCommandContextHintSetting_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_20                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemSelectionInterfaceTypeK2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveItemSelectionStyleSettings_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_19                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_18                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_17                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveDefaultSurfaceCommand_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESwatCommand            K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_16                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveDefaultDoorUnknownCommand_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveDefaultDoorOpenCommand_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESwatCommand            K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveDefaultDoorUnlockedCommand_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESwatCommand            K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveDefaultDoorLockedCommand_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_11                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_10                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_35                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_34                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveNVGStyle_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetFoV_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetMotionBlurEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetBounceLightEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_33                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_19                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_32                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveMasterVolume_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_18                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_31                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveSFXVolume_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_17                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_30                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveUIVolume_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_16                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_29                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveMusicVolume_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_28                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveVOIPVolume_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EVoiceType              Temp_byte_Variable_41                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewOption_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_27                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMicInputGain_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_NewResolutionValue                    (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_26                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_25                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewQualityValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_24                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewQualityValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_23                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewQualityValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_22                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewQualityValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_21                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewQualityValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_20                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewQualityValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_19                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_18                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_17                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceType              Temp_byte_Variable_42                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEmptyMagReloadType     Temp_byte_Variable_43                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEmptyMagReloadType     Temp_byte_Variable_44                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_13                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_16                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_15                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// enum class ENVGStyle               Temp_byte_Variable_45                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_33                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_32                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_31                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_30                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveToggleADS_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveHoldCrouch_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_9                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_8                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_7                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKeyBinding>         K2Node_CustomEvent_Bindings                                      (ConstParm, ReferenceParm)
// class UGridPanel*                  K2Node_CustomEvent_GridPanel                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKeyBinding                 CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryAssignUnbindableControl_bSuccess                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryAssignUnbindableControl_bSuccess_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ENVGStyle               Temp_byte_Variable_46                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (ConstParm)
// int32                              Temp_int_Variable_14                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable_47                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable_48                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable_49                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_15                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsBind_C*           CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsBind_C*           CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class UW_ControlsResetBinding_C*   CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue_2                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsBind_C*           K2Node_CustomEvent_CallingWidget_2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_StandardButton_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_ControlsBind_C*>   CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// TArray<class UW_ControlsResetBinding_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_2                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_ControlsBind_C*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_ControlsBind_C*>   K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<struct FAxisMappingStruct>  K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<struct FActionMappingStruct>K2Node_MakeArray_Array_2                                         (ReferenceParm)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_ControlsBind_C*           K2Node_CustomEvent_CallingWidget_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// TArray<class UW_ControlsBind_C*>   CallFunc_GetAllWidgetsOfClass_FoundWidgets_3                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_ControlsResetBinding_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_4                     (ReferenceParm, ContainsInstancedReference)
// TArray<class UW_StandardButton_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets_5                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardButton_C*         CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsBind_C*           K2Node_CustomEvent_CallingWidget                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_CustomEvent_NewKey                                        (HasGetValueTypeHash)
// class UW_ControlsBind_C*           K2Node_CustomEvent_CallingBind                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActionMappingStruct>K2Node_CustomEvent_ActionMappings                                (ReferenceParm)
// TArray<struct FAxisMappingStruct>  K2Node_CustomEvent_AxisMappings                                  (ReferenceParm)
// struct FKey                        K2Node_CustomEvent_Key                                           (HasGetValueTypeHash)
// TArray<class FText>                K2Node_CustomEvent_ConflictBindsText                             (ReferenceParm)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        CallFunc_GetConflictingKeybindText_Text                          (None)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_4                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry_1                                   (None)
// class UStandardModal*              K2Node_CustomEvent_CallingModal_3                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStandardModal*              CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStandardModal*              CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_BindConflictModal_C*      K2Node_DynamicCast_AsW_Bind_Conflict_Modal                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_IllegalUnbindModal_C*     K2Node_DynamicCast_AsW_Illegal_Unbind_Modal                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStandardModal*              K2Node_CustomEvent_CallingModal_2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsResetBinding_C*   CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_ComponentBoundEvent_CallingModal_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_TextEntry_1                           (None)
// class UStandardModal*              K2Node_ComponentBoundEvent_CallingModal_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_ComponentBoundEvent_CallingModal                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_TextEntry                             (None)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ChangeScreenResolution_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetFoV_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetScreenResolution_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetRaytracingSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetMotionBlurStrength_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetMotionBlurEnabled_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetVSyncEnabled_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SavePiPResolutionScale_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SavePiPFPS_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVideoQualitySettings_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetReflexLatencyOptions_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadTeamViewFPSSetting_bEnabled                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_LoadTeamViewFPSSetting_TeamViewFPS                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadTeamViewFPSSetting_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_14                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetReflexEnabled_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveTeamViewSetting_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_13                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_29                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_28                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_27                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_12                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_11                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_10                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_9                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveZoomADSSetting_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveNVGStyle_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// bool                               CallFunc_SetBounceLightEnabled_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_8                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetWorldDecalEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardButton_C*         CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetDlssQuality_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetFSRQuality_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_SettingLabel_C*           CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENVGStyle               Temp_byte_Variable_50                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue_3                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_26                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveShowPlayerIconSetting_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_25                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewOption                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveShowHesitationBarSetting_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEmptyMagReloadType     K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveEmptyMagReloadSettings_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMouseSensitivity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetFreelookSensitivity_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMouseInverted_bInvertVertical                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMouseInverted_bInvertHorizontal                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMouseInverted_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInverted_bInvertVertical                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetGamepadInverted_bInvertHorizontal                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetGamepadInverted_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamepadInverted_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EVoiceType              K2Node_Select_Default_10                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadInverted_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENVGStyle               Temp_byte_Variable_51                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsBind_C*           CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadLookSensitivity_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamepadAimSensitivity_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_16                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENVGStyle               K2Node_Select_Default_11                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_KeyDisplay_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets_6                     (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_KeyDisplay_C*             CallFunc_Array_Get_Item_6                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveKeybinds_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetFSRQuality_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetDlssQuality_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveColorblindMode_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveColorblindStrength_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveColorblindMode_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveColorblindMode_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveColorblindMode_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EColorVisionDeficiency  K2Node_Select_Default_12                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_24                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_23                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetMouseInverted_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetMouseInverted_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_22                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_21                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveTeamViewSetting_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_20                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_19                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_18                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_17                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_16                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_15                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_14                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_13                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_12                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_11                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_10                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_9                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_8                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_7                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_6                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSGraphicPreset             CallFunc_Array_Get_Item_7                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EShotgunReloadType      Temp_byte_Variable_52                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENVGStyle               K2Node_Select_Default_13                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_5                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveTogglePS5Gyro_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveKeybinds_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveControlScheme_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EShotgunReloadType      Temp_byte_Variable_53                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_Button_C*>         CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)
// class UW_ControlsResetBinding_C*   CallFunc_Array_Get_Item_8                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 CallFunc_Array_Get_Item_9                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUserFocus_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveHighlightWeapons_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveSubtitlesEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveSubtitlesBackgroundOpacity_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewFloatValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveSubtitlesSpeed_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveSubtitlesSize_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_17                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EShotgunReloadType      K2Node_Select_Default_14                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveShotgunSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveSubtitlesLocale_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveWorldSpaceActionPrompts_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_15                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetInterfaceAspectRatio_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetInterfaceAspectRatio_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveServersideChecksum_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UModioManager*               CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetSendMapStatistics_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_ButtonID                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default_16                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_OptionNameID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveLowReadyStyle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_OptionID_1                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_OptionID                              (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStandardModal*              K2Node_CustomEvent_CallingModal_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGrenadeThrowSettingTypeTemp_byte_Variable_54                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGrenadeThrowSettingTypeK2Node_Select_Default_17                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGrenadeSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item_10                                       (ZeroConstructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry                                     (None)
// bool                               CallFunc_SetCurrentLanguageAndLocale_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentCulture_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenuGamepad_C::ExecuteUbergraph_W_SettingsMenuGamepad(int32 EntryPoint, enum class ESwatCommand Temp_byte_Variable, enum class ESwatCommand Temp_byte_Variable_1, enum class ESwatCommand Temp_byte_Variable_2, enum class ESwatCommand Temp_byte_Variable_3, enum class ESwatCommand Temp_byte_Variable_4, enum class ESwatCommand Temp_byte_Variable_5, enum class ESwatCommand Temp_byte_Variable_6, int32 Temp_int_Variable, enum class ESwatCommand Temp_byte_Variable_7, enum class ESwatCommand Temp_byte_Variable_8, enum class ESwatCommand Temp_byte_Variable_9, enum class ESwatCommand Temp_byte_Variable_10, int32 Temp_int_Variable_1, enum class ESwatCommand Temp_byte_Variable_11, enum class ESwatCommand Temp_byte_Variable_12, enum class ESwatCommand Temp_byte_Variable_13, enum class ESwatCommand Temp_byte_Variable_14, int32 Temp_int_Variable_2, enum class EColorVisionDeficiency Temp_byte_Variable_15, enum class EColorVisionDeficiency Temp_byte_Variable_16, enum class EColorVisionDeficiency Temp_byte_Variable_17, enum class EColorVisionDeficiency Temp_byte_Variable_18, bool K2Node_SwitchInteger_CmpSuccess, int32 Temp_int_Variable_3, enum class ESwatCommand Temp_byte_Variable_19, enum class ESwatCommand Temp_byte_Variable_20, enum class ESwatCommand Temp_byte_Variable_21, enum class ESwatCommand Temp_byte_Variable_22, int32 Temp_int_Variable_4, enum class ESwatCommand Temp_byte_Variable_23, enum class ESwatCommand Temp_byte_Variable_24, enum class ESwatCommand Temp_byte_Variable_25, enum class ESwatCommand Temp_byte_Variable_26, enum class ESwatCommand Temp_byte_Variable_27, enum class ESwatCommand Temp_byte_Variable_28, enum class ESwatCommand Temp_byte_Variable_29, enum class ESwatCommand Temp_byte_Variable_30, enum class ESwatCommand Temp_byte_Variable_31, int32 Temp_int_Variable_5, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, int32 Temp_int_Variable_6, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable_7, enum class EItemSelectionInterfaceType Temp_byte_Variable_32, enum class EItemSelectionInterfaceType Temp_byte_Variable_33, int32 Temp_int_Variable_8, enum class EOptiwandViewMode Temp_byte_Variable_34, enum class EOptiwandViewMode Temp_byte_Variable_35, int32 Temp_int_Variable_9, enum class EScoreReadoutMode Temp_byte_Variable_36, enum class EScoreReadoutMode Temp_byte_Variable_37, enum class EScoreReadoutMode Temp_byte_Variable_38, enum class EScoreReadoutMode Temp_byte_Variable_39, class UW_StandardModal_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, enum class EGrenadeThrowSettingType Temp_byte_Variable_40, int32 Temp_int_Variable_10, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Variable_11, bool K2Node_ComponentBoundEvent_bNewCheckState_46, bool K2Node_ComponentBoundEvent_bNewCheckState_45, bool CallFunc_SetShowFPS_ReturnValue, bool CallFunc_SaveShowHUD_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_24, int32 K2Node_ComponentBoundEvent_Index_23, int32 K2Node_ComponentBoundEvent_Index_22, enum class EScoreReadoutMode K2Node_Select_Default, enum class EOptiwandViewMode K2Node_Select_Default_1, bool CallFunc_SaveScoreReadoutSetting_ReturnValue, bool CallFunc_SaveOptiwandViewMode_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_44, bool K2Node_ComponentBoundEvent_bNewCheckState_43, bool CallFunc_SaveSwayHUD_ReturnValue, bool CallFunc_SaveShowTeamStatus_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_42, bool K2Node_ComponentBoundEvent_bNewCheckState_41, bool CallFunc_SaveShowChat_ReturnValue, bool CallFunc_SaveShowMultiplayerNames_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_40, bool K2Node_ComponentBoundEvent_bNewCheckState_39, bool CallFunc_Save2DReload_ReturnValue, bool CallFunc_SaveShowCompass_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_38, bool K2Node_ComponentBoundEvent_bNewCheckState_37, bool CallFunc_SaveShowHealthIconSetting_ReturnValue, bool CallFunc_SaveHotkeyHintSetting_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_36, int32 K2Node_ComponentBoundEvent_Index_21, bool CallFunc_SaveShowCommandContextHintSetting_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_20, enum class EItemSelectionInterfaceType K2Node_Select_Default_2, bool CallFunc_SaveItemSelectionStyleSettings_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_19, int32 K2Node_ComponentBoundEvent_Index_18, int32 K2Node_ComponentBoundEvent_Index_17, enum class ESwatCommand K2Node_Select_Default_3, bool CallFunc_SaveDefaultSurfaceCommand_ReturnValue, enum class ESwatCommand K2Node_Select_Default_4, int32 K2Node_ComponentBoundEvent_Index_16, bool CallFunc_SaveDefaultDoorUnknownCommand_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_15, enum class ESwatCommand K2Node_Select_Default_5, bool CallFunc_SaveDefaultDoorOpenCommand_ReturnValue, enum class ESwatCommand K2Node_Select_Default_6, int32 K2Node_ComponentBoundEvent_Index_14, bool CallFunc_SaveDefaultDoorUnlockedCommand_ReturnValue, enum class ESwatCommand K2Node_Select_Default_7, bool CallFunc_SaveDefaultDoorLockedCommand_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_11, class UW_Button_C* K2Node_ComponentBoundEvent_Button_10, int32 K2Node_ComponentBoundEvent_Index_13, bool K2Node_ComponentBoundEvent_bNewCheckState_35, bool K2Node_ComponentBoundEvent_bNewCheckState_34, bool CallFunc_SaveNVGStyle_ReturnValue, bool CallFunc_SetFoV_ReturnValue, bool CallFunc_SetMotionBlurEnabled_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_SetBounceLightEnabled_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 K2Node_ComponentBoundEvent_NewIntegerValue_6, float K2Node_ComponentBoundEvent_NewSliderValue_33, float CallFunc_Conv_IntToFloat_ReturnValue, float K2Node_ComponentBoundEvent_NewFloatValue_19, float K2Node_ComponentBoundEvent_NewSliderValue_32, bool CallFunc_SaveMasterVolume_ReturnValue, float K2Node_ComponentBoundEvent_NewFloatValue_18, float K2Node_ComponentBoundEvent_NewSliderValue_31, bool CallFunc_SaveSFXVolume_ReturnValue, float K2Node_ComponentBoundEvent_NewFloatValue_17, float K2Node_ComponentBoundEvent_NewSliderValue_30, bool CallFunc_SaveUIVolume_ReturnValue, float K2Node_ComponentBoundEvent_NewFloatValue_16, float K2Node_ComponentBoundEvent_NewSliderValue_29, bool CallFunc_SaveMusicVolume_ReturnValue, float K2Node_ComponentBoundEvent_NewFloatValue_15, float K2Node_ComponentBoundEvent_NewSliderValue_28, bool CallFunc_SaveVOIPVolume_ReturnValue, enum class EVoiceType Temp_byte_Variable_41, int32 K2Node_ComponentBoundEvent_NewOption_1, float K2Node_ComponentBoundEvent_NewFloatValue_14, float K2Node_ComponentBoundEvent_NewSliderValue_27, bool CallFunc_SetMicInputGain_ReturnValue, int32 Temp_int_Array_Index_Variable_3, const class FString& K2Node_ComponentBoundEvent_NewResolutionValue, float K2Node_ComponentBoundEvent_NewSliderValue_26, int32 K2Node_ComponentBoundEvent_NewIntegerValue_5, float K2Node_ComponentBoundEvent_NewSliderValue_25, int32 K2Node_ComponentBoundEvent_NewQualityValue_5, float K2Node_ComponentBoundEvent_NewSliderValue_24, float CallFunc_Conv_IntToFloat_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 K2Node_ComponentBoundEvent_NewQualityValue_4, float K2Node_ComponentBoundEvent_NewSliderValue_23, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, int32 K2Node_ComponentBoundEvent_NewQualityValue_3, float K2Node_ComponentBoundEvent_NewSliderValue_22, uint8 CallFunc_GetValidValue_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, uint8 CallFunc_GetValidValue_ReturnValue_2, int32 K2Node_ComponentBoundEvent_NewQualityValue_2, float K2Node_ComponentBoundEvent_NewSliderValue_21, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, int32 K2Node_ComponentBoundEvent_NewQualityValue_1, float K2Node_ComponentBoundEvent_NewSliderValue_20, uint8 CallFunc_GetValidValue_ReturnValue_3, uint8 CallFunc_Conv_IntToByte_ReturnValue_4, uint8 CallFunc_GetValidValue_ReturnValue_4, int32 K2Node_ComponentBoundEvent_NewQualityValue, float K2Node_ComponentBoundEvent_NewSliderValue_19, uint8 CallFunc_Conv_IntToByte_ReturnValue_5, int32 K2Node_ComponentBoundEvent_NewIntegerValue_4, float K2Node_ComponentBoundEvent_NewSliderValue_18, uint8 CallFunc_GetValidValue_ReturnValue_5, float K2Node_ComponentBoundEvent_NewFloatValue_13, float K2Node_ComponentBoundEvent_NewSliderValue_17, enum class EVoiceType Temp_byte_Variable_42, int32 Temp_int_Variable_12, enum class EEmptyMagReloadType Temp_byte_Variable_43, enum class EEmptyMagReloadType Temp_byte_Variable_44, int32 Temp_int_Variable_13, float K2Node_ComponentBoundEvent_NewFloatValue_12, float K2Node_ComponentBoundEvent_NewSliderValue_16, int32 K2Node_ComponentBoundEvent_NewIntegerValue_3, float K2Node_ComponentBoundEvent_NewSliderValue_15, const class FString& CallFunc_GetPlatformName_ReturnValue, enum class ENVGStyle Temp_byte_Variable_45, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool K2Node_ComponentBoundEvent_bNewCheckState_33, bool K2Node_ComponentBoundEvent_bNewCheckState_32, bool K2Node_ComponentBoundEvent_bNewCheckState_31, bool K2Node_ComponentBoundEvent_bNewCheckState_30, bool CallFunc_SaveToggleADS_ReturnValue, bool CallFunc_SaveHoldCrouch_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_9, class UW_Button_C* K2Node_ComponentBoundEvent_Button_8, class UW_Button_C* K2Node_ComponentBoundEvent_Button_7, class UW_Button_C* K2Node_ComponentBoundEvent_Button_6, class UW_Button_C* K2Node_ComponentBoundEvent_Button_5, class UW_Button_C* K2Node_ComponentBoundEvent_Button_4, class UW_Button_C* K2Node_ComponentBoundEvent_Button_3, TArray<struct FKeyBinding>& K2Node_CustomEvent_Bindings, class UGridPanel* K2Node_CustomEvent_GridPanel, const struct FKeyBinding& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_TryAssignUnbindableControl_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_TryAssignUnbindableControl_bSuccess_1, enum class ENVGStyle Temp_byte_Variable_46, bool CallFunc_Not_PreBool_ReturnValue, class FText Temp_text_Variable, int32 Temp_int_Variable_14, uint8 Temp_byte_Variable_47, uint8 Temp_byte_Variable_48, uint8 Temp_byte_Variable_49, int32 Temp_int_Variable_15, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UW_ControlsBind_C* CallFunc_Create_ReturnValue_1, class UW_ControlsBind_C* CallFunc_Create_ReturnValue_2, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UW_ControlsResetBinding_C* CallFunc_Create_ReturnValue_3, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue_2, class UW_ControlsBind_C* K2Node_CustomEvent_CallingWidget_2, TArray<class UW_StandardButton_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class UW_ControlsBind_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, TArray<class UW_ControlsResetBinding_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 Temp_int_Array_Index_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_1, class UW_ControlsBind_C* CallFunc_Array_Get_Item_1, TArray<class UW_ControlsBind_C*>& K2Node_MakeArray_Array, TArray<struct FAxisMappingStruct>& K2Node_MakeArray_Array_1, TArray<struct FActionMappingStruct>& K2Node_MakeArray_Array_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UW_ControlsBind_C* K2Node_CustomEvent_CallingWidget_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, TArray<class UW_ControlsBind_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_3, int32 CallFunc_Array_Length_ReturnValue_4, TArray<class UW_ControlsResetBinding_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_4, TArray<class UW_StandardButton_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_5, int32 CallFunc_Array_Length_ReturnValue_5, class UW_StandardButton_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_6, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_5, class UW_ControlsBind_C* K2Node_CustomEvent_CallingWidget, const struct FKey& K2Node_CustomEvent_NewKey, class UW_ControlsBind_C* K2Node_CustomEvent_CallingBind, TArray<struct FActionMappingStruct>& K2Node_CustomEvent_ActionMappings, TArray<struct FAxisMappingStruct>& K2Node_CustomEvent_AxisMappings, const struct FKey& K2Node_CustomEvent_Key, TArray<class FText>& K2Node_CustomEvent_ConflictBindsText, class FText Temp_text_Variable_1, class FText CallFunc_GetConflictingKeybindText_Text, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_4, class FText K2Node_CustomEvent_TextEntry_1, class UStandardModal* K2Node_CustomEvent_CallingModal_3, class UStandardModal* CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp, class UStandardModal* CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp_1, class UW_BindConflictModal_C* K2Node_DynamicCast_AsW_Bind_Conflict_Modal, bool K2Node_DynamicCast_bSuccess, class UW_IllegalUnbindModal_C* K2Node_DynamicCast_AsW_Illegal_Unbind_Modal, bool K2Node_DynamicCast_bSuccess_1, class UStandardModal* K2Node_CustomEvent_CallingModal_2, int32 Temp_int_Array_Index_Variable_5, class UW_ControlsResetBinding_C* CallFunc_Array_Get_Item_3, class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, class UW_StandardModal_C* K2Node_ComponentBoundEvent_CallingModal_2, class FText K2Node_ComponentBoundEvent_TextEntry_1, class UStandardModal* K2Node_ComponentBoundEvent_CallingModal_1, class UW_StandardModal_C* K2Node_ComponentBoundEvent_CallingModal, class FText K2Node_ComponentBoundEvent_TextEntry, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_6, int32 CallFunc_Conv_StringToInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_6, int32 CallFunc_Conv_StringToInt_ReturnValue_1, bool CallFunc_ChangeScreenResolution_ReturnValue, bool CallFunc_SetFoV_ReturnValue_1, bool CallFunc_SetScreenResolution_ReturnValue, bool CallFunc_SetRaytracingSettings_ReturnValue, bool CallFunc_SetMotionBlurStrength_ReturnValue, bool CallFunc_SetMotionBlurEnabled_ReturnValue_1, bool CallFunc_SetFrameRateLimit_ReturnValue, bool CallFunc_SetVSyncEnabled_ReturnValue, bool CallFunc_SavePiPResolutionScale_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_SavePiPFPS_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_4, int32 CallFunc_Conv_ByteToInt_ReturnValue_5, bool CallFunc_SetVideoQualitySettings_ReturnValue, bool CallFunc_SetReflexLatencyOptions_ReturnValue, bool CallFunc_LoadTeamViewFPSSetting_bEnabled, int32 CallFunc_LoadTeamViewFPSSetting_TeamViewFPS, bool CallFunc_LoadTeamViewFPSSetting_ReturnValue, uint8 K2Node_Select_Default_8, int32 K2Node_ComponentBoundEvent_NewIntegerValue_2, float K2Node_ComponentBoundEvent_NewSliderValue_14, bool CallFunc_SetReflexEnabled_ReturnValue, bool CallFunc_SaveTeamViewSetting_ReturnValue, float K2Node_ComponentBoundEvent_NewFloatValue_11, float K2Node_ComponentBoundEvent_NewSliderValue_13, bool K2Node_ComponentBoundEvent_bNewCheckState_29, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable_5, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_6, bool K2Node_ComponentBoundEvent_bNewCheckState_28, bool K2Node_ComponentBoundEvent_bNewCheckState_27, int32 Temp_int_Loop_Counter_Variable_6, float K2Node_ComponentBoundEvent_NewFloatValue_10, float K2Node_ComponentBoundEvent_NewSliderValue_12, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_7, float K2Node_ComponentBoundEvent_NewFloatValue_9, float K2Node_ComponentBoundEvent_NewSliderValue_11, int32 K2Node_ComponentBoundEvent_NewIntegerValue_1, float K2Node_ComponentBoundEvent_NewSliderValue_10, int32 K2Node_ComponentBoundEvent_NewIntegerValue, float K2Node_ComponentBoundEvent_NewSliderValue_9, bool CallFunc_SaveZoomADSSetting_ReturnValue, bool CallFunc_SaveNVGStyle_ReturnValue_1, class FText Temp_text_Variable_2, bool CallFunc_SetBounceLightEnabled_ReturnValue_1, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, float K2Node_ComponentBoundEvent_NewFloatValue_8, float K2Node_ComponentBoundEvent_NewSliderValue_8, bool CallFunc_SetWorldDecalEnabled_ReturnValue, int32 Temp_int_Array_Index_Variable_6, float K2Node_ComponentBoundEvent_NewFloatValue_7, float K2Node_ComponentBoundEvent_NewSliderValue_7, class UW_StandardButton_C* CallFunc_Array_Get_Item_4, bool CallFunc_SetDlssQuality_ReturnValue, bool CallFunc_SetFSRQuality_ReturnValue, class UW_SettingLabel_C* CallFunc_Create_ReturnValue_4, enum class ENVGStyle Temp_byte_Variable_50, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue_3, bool K2Node_ComponentBoundEvent_bNewCheckState_26, bool CallFunc_SaveShowPlayerIconSetting_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_25, int32 K2Node_ComponentBoundEvent_NewOption, bool CallFunc_SaveShowHesitationBarSetting_ReturnValue, enum class EEmptyMagReloadType K2Node_Select_Default_9, bool CallFunc_SaveEmptyMagReloadSettings_ReturnValue, float K2Node_ComponentBoundEvent_NewFloatValue_6, float K2Node_ComponentBoundEvent_NewSliderValue_6, float K2Node_ComponentBoundEvent_NewFloatValue_5, float K2Node_ComponentBoundEvent_NewSliderValue_5, bool CallFunc_SetMouseSensitivity_ReturnValue, bool CallFunc_SetFreelookSensitivity_ReturnValue, bool CallFunc_GetMouseInverted_bInvertVertical, bool CallFunc_GetMouseInverted_bInvertHorizontal, bool CallFunc_GetMouseInverted_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_12, bool CallFunc_GetGamepadInverted_bInvertVertical, bool CallFunc_GetGamepadInverted_bInvertHorizontal, bool CallFunc_GetGamepadInverted_ReturnValue, bool CallFunc_SetGamepadInverted_ReturnValue, enum class EVoiceType K2Node_Select_Default_10, bool CallFunc_SetGamepadInverted_ReturnValue_1, int32 Temp_int_Array_Index_Variable_7, enum class ENVGStyle Temp_byte_Variable_51, class UW_ControlsBind_C* CallFunc_Array_Get_Item_5, float K2Node_ComponentBoundEvent_NewFloatValue_4, float K2Node_ComponentBoundEvent_NewSliderValue_4, float K2Node_ComponentBoundEvent_NewFloatValue_3, float K2Node_ComponentBoundEvent_NewSliderValue_3, bool CallFunc_SetGamepadLookSensitivity_ReturnValue, bool CallFunc_SetGamepadAimSensitivity_ReturnValue, int32 Temp_int_Variable_16, enum class ENVGStyle K2Node_Select_Default_11, TArray<class UW_KeyDisplay_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_6, int32 Temp_int_Loop_Counter_Variable_7, class UW_KeyDisplay_C* CallFunc_Array_Get_Item_6, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_8, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_SaveKeybinds_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_SetFSRQuality_ReturnValue_1, bool CallFunc_SetDlssQuality_ReturnValue_1, float K2Node_ComponentBoundEvent_NewFloatValue_2, float K2Node_ComponentBoundEvent_NewSliderValue_2, bool CallFunc_SaveColorblindMode_ReturnValue, bool CallFunc_SaveColorblindStrength_ReturnValue, bool CallFunc_SaveColorblindMode_ReturnValue_1, bool CallFunc_SaveColorblindMode_ReturnValue_2, bool CallFunc_SaveColorblindMode_ReturnValue_3, enum class EColorVisionDeficiency K2Node_Select_Default_12, bool K2Node_ComponentBoundEvent_bNewCheckState_24, bool K2Node_ComponentBoundEvent_bNewCheckState_23, bool CallFunc_SetMouseInverted_ReturnValue, bool CallFunc_SetMouseInverted_ReturnValue_1, bool K2Node_ComponentBoundEvent_bNewCheckState_22, bool K2Node_ComponentBoundEvent_bNewCheckState_21, bool CallFunc_SaveTeamViewSetting_ReturnValue_1, bool K2Node_ComponentBoundEvent_bNewCheckState_20, bool K2Node_ComponentBoundEvent_bNewCheckState_19, bool K2Node_ComponentBoundEvent_bNewCheckState_18, bool K2Node_ComponentBoundEvent_bNewCheckState_17, bool K2Node_ComponentBoundEvent_bNewCheckState_16, bool K2Node_ComponentBoundEvent_bNewCheckState_15, bool K2Node_ComponentBoundEvent_bNewCheckState_14, bool K2Node_ComponentBoundEvent_bNewCheckState_13, bool K2Node_ComponentBoundEvent_bNewCheckState_12, bool K2Node_ComponentBoundEvent_bNewCheckState_11, bool K2Node_ComponentBoundEvent_bNewCheckState_10, bool K2Node_ComponentBoundEvent_bNewCheckState_9, bool K2Node_ComponentBoundEvent_bNewCheckState_8, bool K2Node_ComponentBoundEvent_bNewCheckState_7, bool K2Node_ComponentBoundEvent_bNewCheckState_6, int32 K2Node_ComponentBoundEvent_Index_11, const struct FSGraphicPreset& CallFunc_Array_Get_Item_7, bool K2Node_SwitchInteger_CmpSuccess_1, enum class EShotgunReloadType Temp_byte_Variable_52, int32 K2Node_ComponentBoundEvent_Index_10, int32 K2Node_ComponentBoundEvent_Index_9, int32 K2Node_ComponentBoundEvent_Index_8, int32 K2Node_ComponentBoundEvent_Index_7, int32 K2Node_ComponentBoundEvent_Index_6, enum class ENVGStyle K2Node_Select_Default_13, bool K2Node_ComponentBoundEvent_bNewCheckState_5, bool CallFunc_SaveTogglePS5Gyro_ReturnValue, bool CallFunc_SaveKeybinds_ReturnValue_1, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, int32 Temp_int_Loop_Counter_Variable_8, bool CallFunc_Less_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_9, bool CallFunc_SaveControlScheme_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EShotgunReloadType Temp_byte_Variable_53, class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue_1, int32 Temp_int_Array_Index_Variable_8, TArray<class UW_Button_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, class UW_ControlsResetBinding_C* CallFunc_Array_Get_Item_8, class UW_Button_C* CallFunc_Array_Get_Item_9, int32 CallFunc_Array_Length_ReturnValue_8, bool CallFunc_Less_IntInt_ReturnValue_8, const struct FFocusEvent& K2Node_Event_InFocusEvent, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_4, bool K2Node_ComponentBoundEvent_bNewCheckState_3, bool CallFunc_SaveHighlightWeapons_ReturnValue, bool CallFunc_SaveSubtitlesEnabled_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_5, float K2Node_ComponentBoundEvent_NewFloatValue_1, float K2Node_ComponentBoundEvent_NewSliderValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_7, bool CallFunc_SaveSubtitlesBackgroundOpacity_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_7, float K2Node_ComponentBoundEvent_NewFloatValue, float K2Node_ComponentBoundEvent_NewSliderValue, bool CallFunc_SaveSubtitlesSpeed_ReturnValue, bool CallFunc_SaveSubtitlesSize_ReturnValue, int32 Temp_int_Variable_17, int32 K2Node_ComponentBoundEvent_Index_4, enum class EShotgunReloadType K2Node_Select_Default_14, bool CallFunc_SaveShotgunSettings_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_SaveSubtitlesLocale_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_2, bool CallFunc_SaveWorldSpaceActionPrompts_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_3, float K2Node_Select_Default_15, bool CallFunc_SetInterfaceAspectRatio_ReturnValue, bool CallFunc_SetInterfaceAspectRatio_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool K2Node_ComponentBoundEvent_bNewCheckState_1, bool CallFunc_SaveServersideChecksum_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UModioManager* CallFunc_GetInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector2D& Temp_struct_Variable, bool K2Node_ComponentBoundEvent_bNewCheckState, bool CallFunc_SetSendMapStatistics_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_2, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess, bool K2Node_Select_Default_16, class FName K2Node_ComponentBoundEvent_OptionNameID, bool CallFunc_SaveLowReadyStyle_ReturnValue, bool K2Node_SwitchName_CmpSuccess, const class FString& K2Node_ComponentBoundEvent_OptionID_1, int32 K2Node_ComponentBoundEvent_Index_1, const class FString& K2Node_ComponentBoundEvent_OptionID, int32 K2Node_ComponentBoundEvent_Index, class UStandardModal* K2Node_CustomEvent_CallingModal_1, enum class EGrenadeThrowSettingType Temp_byte_Variable_54, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, enum class EGrenadeThrowSettingType K2Node_Select_Default_17, bool CallFunc_SaveGrenadeSettings_ReturnValue, const class FString& CallFunc_Array_Get_Item_10, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal, class FText K2Node_CustomEvent_TextEntry, bool CallFunc_SetCurrentLanguageAndLocale_ReturnValue, const class FString& CallFunc_GetCurrentCulture_ReturnValue, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenuGamepad_C", "ExecuteUbergraph_W_SettingsMenuGamepad");

	Params::UW_SettingsMenuGamepad_C_ExecuteUbergraph_W_SettingsMenuGamepad_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.Temp_byte_Variable_12 = Temp_byte_Variable_12;
	Parms.Temp_byte_Variable_13 = Temp_byte_Variable_13;
	Parms.Temp_byte_Variable_14 = Temp_byte_Variable_14;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_byte_Variable_15 = Temp_byte_Variable_15;
	Parms.Temp_byte_Variable_16 = Temp_byte_Variable_16;
	Parms.Temp_byte_Variable_17 = Temp_byte_Variable_17;
	Parms.Temp_byte_Variable_18 = Temp_byte_Variable_18;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_byte_Variable_19 = Temp_byte_Variable_19;
	Parms.Temp_byte_Variable_20 = Temp_byte_Variable_20;
	Parms.Temp_byte_Variable_21 = Temp_byte_Variable_21;
	Parms.Temp_byte_Variable_22 = Temp_byte_Variable_22;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_byte_Variable_23 = Temp_byte_Variable_23;
	Parms.Temp_byte_Variable_24 = Temp_byte_Variable_24;
	Parms.Temp_byte_Variable_25 = Temp_byte_Variable_25;
	Parms.Temp_byte_Variable_26 = Temp_byte_Variable_26;
	Parms.Temp_byte_Variable_27 = Temp_byte_Variable_27;
	Parms.Temp_byte_Variable_28 = Temp_byte_Variable_28;
	Parms.Temp_byte_Variable_29 = Temp_byte_Variable_29;
	Parms.Temp_byte_Variable_30 = Temp_byte_Variable_30;
	Parms.Temp_byte_Variable_31 = Temp_byte_Variable_31;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.Temp_byte_Variable_32 = Temp_byte_Variable_32;
	Parms.Temp_byte_Variable_33 = Temp_byte_Variable_33;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.Temp_byte_Variable_34 = Temp_byte_Variable_34;
	Parms.Temp_byte_Variable_35 = Temp_byte_Variable_35;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.Temp_byte_Variable_36 = Temp_byte_Variable_36;
	Parms.Temp_byte_Variable_37 = Temp_byte_Variable_37;
	Parms.Temp_byte_Variable_38 = Temp_byte_Variable_38;
	Parms.Temp_byte_Variable_39 = Temp_byte_Variable_39;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_byte_Variable_40 = Temp_byte_Variable_40;
	Parms.Temp_int_Variable_10 = Temp_int_Variable_10;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Variable_11 = Temp_int_Variable_11;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_46 = K2Node_ComponentBoundEvent_bNewCheckState_46;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_45 = K2Node_ComponentBoundEvent_bNewCheckState_45;
	Parms.CallFunc_SetShowFPS_ReturnValue = CallFunc_SetShowFPS_ReturnValue;
	Parms.CallFunc_SaveShowHUD_ReturnValue = CallFunc_SaveShowHUD_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_24 = K2Node_ComponentBoundEvent_Index_24;
	Parms.K2Node_ComponentBoundEvent_Index_23 = K2Node_ComponentBoundEvent_Index_23;
	Parms.K2Node_ComponentBoundEvent_Index_22 = K2Node_ComponentBoundEvent_Index_22;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SaveScoreReadoutSetting_ReturnValue = CallFunc_SaveScoreReadoutSetting_ReturnValue;
	Parms.CallFunc_SaveOptiwandViewMode_ReturnValue = CallFunc_SaveOptiwandViewMode_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_44 = K2Node_ComponentBoundEvent_bNewCheckState_44;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_43 = K2Node_ComponentBoundEvent_bNewCheckState_43;
	Parms.CallFunc_SaveSwayHUD_ReturnValue = CallFunc_SaveSwayHUD_ReturnValue;
	Parms.CallFunc_SaveShowTeamStatus_ReturnValue = CallFunc_SaveShowTeamStatus_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_42 = K2Node_ComponentBoundEvent_bNewCheckState_42;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_41 = K2Node_ComponentBoundEvent_bNewCheckState_41;
	Parms.CallFunc_SaveShowChat_ReturnValue = CallFunc_SaveShowChat_ReturnValue;
	Parms.CallFunc_SaveShowMultiplayerNames_ReturnValue = CallFunc_SaveShowMultiplayerNames_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_40 = K2Node_ComponentBoundEvent_bNewCheckState_40;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_39 = K2Node_ComponentBoundEvent_bNewCheckState_39;
	Parms.CallFunc_Save2DReload_ReturnValue = CallFunc_Save2DReload_ReturnValue;
	Parms.CallFunc_SaveShowCompass_ReturnValue = CallFunc_SaveShowCompass_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_38 = K2Node_ComponentBoundEvent_bNewCheckState_38;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_37 = K2Node_ComponentBoundEvent_bNewCheckState_37;
	Parms.CallFunc_SaveShowHealthIconSetting_ReturnValue = CallFunc_SaveShowHealthIconSetting_ReturnValue;
	Parms.CallFunc_SaveHotkeyHintSetting_ReturnValue = CallFunc_SaveHotkeyHintSetting_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_36 = K2Node_ComponentBoundEvent_bNewCheckState_36;
	Parms.K2Node_ComponentBoundEvent_Index_21 = K2Node_ComponentBoundEvent_Index_21;
	Parms.CallFunc_SaveShowCommandContextHintSetting_ReturnValue = CallFunc_SaveShowCommandContextHintSetting_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_20 = K2Node_ComponentBoundEvent_Index_20;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_SaveItemSelectionStyleSettings_ReturnValue = CallFunc_SaveItemSelectionStyleSettings_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_19 = K2Node_ComponentBoundEvent_Index_19;
	Parms.K2Node_ComponentBoundEvent_Index_18 = K2Node_ComponentBoundEvent_Index_18;
	Parms.K2Node_ComponentBoundEvent_Index_17 = K2Node_ComponentBoundEvent_Index_17;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_SaveDefaultSurfaceCommand_ReturnValue = CallFunc_SaveDefaultSurfaceCommand_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_ComponentBoundEvent_Index_16 = K2Node_ComponentBoundEvent_Index_16;
	Parms.CallFunc_SaveDefaultDoorUnknownCommand_ReturnValue = CallFunc_SaveDefaultDoorUnknownCommand_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_15 = K2Node_ComponentBoundEvent_Index_15;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_SaveDefaultDoorOpenCommand_ReturnValue = CallFunc_SaveDefaultDoorOpenCommand_ReturnValue;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_ComponentBoundEvent_Index_14 = K2Node_ComponentBoundEvent_Index_14;
	Parms.CallFunc_SaveDefaultDoorUnlockedCommand_ReturnValue = CallFunc_SaveDefaultDoorUnlockedCommand_ReturnValue;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_SaveDefaultDoorLockedCommand_ReturnValue = CallFunc_SaveDefaultDoorLockedCommand_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_11 = K2Node_ComponentBoundEvent_Button_11;
	Parms.K2Node_ComponentBoundEvent_Button_10 = K2Node_ComponentBoundEvent_Button_10;
	Parms.K2Node_ComponentBoundEvent_Index_13 = K2Node_ComponentBoundEvent_Index_13;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_35 = K2Node_ComponentBoundEvent_bNewCheckState_35;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_34 = K2Node_ComponentBoundEvent_bNewCheckState_34;
	Parms.CallFunc_SaveNVGStyle_ReturnValue = CallFunc_SaveNVGStyle_ReturnValue;
	Parms.CallFunc_SetFoV_ReturnValue = CallFunc_SetFoV_ReturnValue;
	Parms.CallFunc_SetMotionBlurEnabled_ReturnValue = CallFunc_SetMotionBlurEnabled_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_SetBounceLightEnabled_ReturnValue = CallFunc_SetBounceLightEnabled_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue_6 = K2Node_ComponentBoundEvent_NewIntegerValue_6;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_33 = K2Node_ComponentBoundEvent_NewSliderValue_33;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_19 = K2Node_ComponentBoundEvent_NewFloatValue_19;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_32 = K2Node_ComponentBoundEvent_NewSliderValue_32;
	Parms.CallFunc_SaveMasterVolume_ReturnValue = CallFunc_SaveMasterVolume_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_18 = K2Node_ComponentBoundEvent_NewFloatValue_18;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_31 = K2Node_ComponentBoundEvent_NewSliderValue_31;
	Parms.CallFunc_SaveSFXVolume_ReturnValue = CallFunc_SaveSFXVolume_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_17 = K2Node_ComponentBoundEvent_NewFloatValue_17;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_30 = K2Node_ComponentBoundEvent_NewSliderValue_30;
	Parms.CallFunc_SaveUIVolume_ReturnValue = CallFunc_SaveUIVolume_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_16 = K2Node_ComponentBoundEvent_NewFloatValue_16;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_29 = K2Node_ComponentBoundEvent_NewSliderValue_29;
	Parms.CallFunc_SaveMusicVolume_ReturnValue = CallFunc_SaveMusicVolume_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_15 = K2Node_ComponentBoundEvent_NewFloatValue_15;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_28 = K2Node_ComponentBoundEvent_NewSliderValue_28;
	Parms.CallFunc_SaveVOIPVolume_ReturnValue = CallFunc_SaveVOIPVolume_ReturnValue;
	Parms.Temp_byte_Variable_41 = Temp_byte_Variable_41;
	Parms.K2Node_ComponentBoundEvent_NewOption_1 = K2Node_ComponentBoundEvent_NewOption_1;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_14 = K2Node_ComponentBoundEvent_NewFloatValue_14;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_27 = K2Node_ComponentBoundEvent_NewSliderValue_27;
	Parms.CallFunc_SetMicInputGain_ReturnValue = CallFunc_SetMicInputGain_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.K2Node_ComponentBoundEvent_NewResolutionValue = K2Node_ComponentBoundEvent_NewResolutionValue;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_26 = K2Node_ComponentBoundEvent_NewSliderValue_26;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue_5 = K2Node_ComponentBoundEvent_NewIntegerValue_5;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_25 = K2Node_ComponentBoundEvent_NewSliderValue_25;
	Parms.K2Node_ComponentBoundEvent_NewQualityValue_5 = K2Node_ComponentBoundEvent_NewQualityValue_5;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_24 = K2Node_ComponentBoundEvent_NewSliderValue_24;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewQualityValue_4 = K2Node_ComponentBoundEvent_NewQualityValue_4;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_23 = K2Node_ComponentBoundEvent_NewSliderValue_23;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_NewQualityValue_3 = K2Node_ComponentBoundEvent_NewQualityValue_3;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_22 = K2Node_ComponentBoundEvent_NewSliderValue_22;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_GetValidValue_ReturnValue_2 = CallFunc_GetValidValue_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_NewQualityValue_2 = K2Node_ComponentBoundEvent_NewQualityValue_2;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_21 = K2Node_ComponentBoundEvent_NewSliderValue_21;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_3 = CallFunc_Conv_IntToByte_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_NewQualityValue_1 = K2Node_ComponentBoundEvent_NewQualityValue_1;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_20 = K2Node_ComponentBoundEvent_NewSliderValue_20;
	Parms.CallFunc_GetValidValue_ReturnValue_3 = CallFunc_GetValidValue_ReturnValue_3;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_4 = CallFunc_Conv_IntToByte_ReturnValue_4;
	Parms.CallFunc_GetValidValue_ReturnValue_4 = CallFunc_GetValidValue_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_NewQualityValue = K2Node_ComponentBoundEvent_NewQualityValue;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_19 = K2Node_ComponentBoundEvent_NewSliderValue_19;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_5 = CallFunc_Conv_IntToByte_ReturnValue_5;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue_4 = K2Node_ComponentBoundEvent_NewIntegerValue_4;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_18 = K2Node_ComponentBoundEvent_NewSliderValue_18;
	Parms.CallFunc_GetValidValue_ReturnValue_5 = CallFunc_GetValidValue_ReturnValue_5;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_13 = K2Node_ComponentBoundEvent_NewFloatValue_13;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_17 = K2Node_ComponentBoundEvent_NewSliderValue_17;
	Parms.Temp_byte_Variable_42 = Temp_byte_Variable_42;
	Parms.Temp_int_Variable_12 = Temp_int_Variable_12;
	Parms.Temp_byte_Variable_43 = Temp_byte_Variable_43;
	Parms.Temp_byte_Variable_44 = Temp_byte_Variable_44;
	Parms.Temp_int_Variable_13 = Temp_int_Variable_13;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_12 = K2Node_ComponentBoundEvent_NewFloatValue_12;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_16 = K2Node_ComponentBoundEvent_NewSliderValue_16;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue_3 = K2Node_ComponentBoundEvent_NewIntegerValue_3;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_15 = K2Node_ComponentBoundEvent_NewSliderValue_15;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.Temp_byte_Variable_45 = Temp_byte_Variable_45;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_33 = K2Node_ComponentBoundEvent_bNewCheckState_33;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_32 = K2Node_ComponentBoundEvent_bNewCheckState_32;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_31 = K2Node_ComponentBoundEvent_bNewCheckState_31;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_30 = K2Node_ComponentBoundEvent_bNewCheckState_30;
	Parms.CallFunc_SaveToggleADS_ReturnValue = CallFunc_SaveToggleADS_ReturnValue;
	Parms.CallFunc_SaveHoldCrouch_ReturnValue = CallFunc_SaveHoldCrouch_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_9 = K2Node_ComponentBoundEvent_Button_9;
	Parms.K2Node_ComponentBoundEvent_Button_8 = K2Node_ComponentBoundEvent_Button_8;
	Parms.K2Node_ComponentBoundEvent_Button_7 = K2Node_ComponentBoundEvent_Button_7;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_CustomEvent_Bindings = K2Node_CustomEvent_Bindings;
	Parms.K2Node_CustomEvent_GridPanel = K2Node_CustomEvent_GridPanel;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_TryAssignUnbindableControl_bSuccess = CallFunc_TryAssignUnbindableControl_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_TryAssignUnbindableControl_bSuccess_1 = CallFunc_TryAssignUnbindableControl_bSuccess_1;
	Parms.Temp_byte_Variable_46 = Temp_byte_Variable_46;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_int_Variable_14 = Temp_int_Variable_14;
	Parms.Temp_byte_Variable_47 = Temp_byte_Variable_47;
	Parms.Temp_byte_Variable_48 = Temp_byte_Variable_48;
	Parms.Temp_byte_Variable_49 = Temp_byte_Variable_49;
	Parms.Temp_int_Variable_15 = Temp_int_Variable_15;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_AddChildToGrid_ReturnValue = CallFunc_AddChildToGrid_ReturnValue;
	Parms.CallFunc_AddChildToGrid_ReturnValue_1 = CallFunc_AddChildToGrid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_AddChildToGrid_ReturnValue_2 = CallFunc_AddChildToGrid_ReturnValue_2;
	Parms.K2Node_CustomEvent_CallingWidget_2 = K2Node_CustomEvent_CallingWidget_2;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_2 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CustomEvent_CallingWidget_1 = K2Node_CustomEvent_CallingWidget_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_3 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_3;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_4 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_4;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_5 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_5;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.K2Node_CustomEvent_CallingWidget = K2Node_CustomEvent_CallingWidget;
	Parms.K2Node_CustomEvent_NewKey = K2Node_CustomEvent_NewKey;
	Parms.K2Node_CustomEvent_CallingBind = K2Node_CustomEvent_CallingBind;
	Parms.K2Node_CustomEvent_ActionMappings = K2Node_CustomEvent_ActionMappings;
	Parms.K2Node_CustomEvent_AxisMappings = K2Node_CustomEvent_AxisMappings;
	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.K2Node_CustomEvent_ConflictBindsText = K2Node_CustomEvent_ConflictBindsText;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetConflictingKeybindText_Text = CallFunc_GetConflictingKeybindText_Text;
	Parms.K2Node_CustomEvent_CallingModal_4 = K2Node_CustomEvent_CallingModal_4;
	Parms.K2Node_CustomEvent_TextEntry_1 = K2Node_CustomEvent_TextEntry_1;
	Parms.K2Node_CustomEvent_CallingModal_3 = K2Node_CustomEvent_CallingModal_3;
	Parms.CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp = CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp;
	Parms.CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp_1 = CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp_1;
	Parms.K2Node_DynamicCast_AsW_Bind_Conflict_Modal = K2Node_DynamicCast_AsW_Bind_Conflict_Modal;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsW_Illegal_Unbind_Modal = K2Node_DynamicCast_AsW_Illegal_Unbind_Modal;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_CallingModal_2 = K2Node_CustomEvent_CallingModal_2;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetReadyOrNotGameUserSettings_ReturnValue = CallFunc_GetReadyOrNotGameUserSettings_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_CallingModal_2 = K2Node_ComponentBoundEvent_CallingModal_2;
	Parms.K2Node_ComponentBoundEvent_TextEntry_1 = K2Node_ComponentBoundEvent_TextEntry_1;
	Parms.K2Node_ComponentBoundEvent_CallingModal_1 = K2Node_ComponentBoundEvent_CallingModal_1;
	Parms.K2Node_ComponentBoundEvent_CallingModal = K2Node_ComponentBoundEvent_CallingModal;
	Parms.K2Node_ComponentBoundEvent_TextEntry = K2Node_ComponentBoundEvent_TextEntry;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_6 = CallFunc_Conv_IntToByte_ReturnValue_6;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue_6 = CallFunc_GetValidValue_ReturnValue_6;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.CallFunc_ChangeScreenResolution_ReturnValue = CallFunc_ChangeScreenResolution_ReturnValue;
	Parms.CallFunc_SetFoV_ReturnValue_1 = CallFunc_SetFoV_ReturnValue_1;
	Parms.CallFunc_SetScreenResolution_ReturnValue = CallFunc_SetScreenResolution_ReturnValue;
	Parms.CallFunc_SetRaytracingSettings_ReturnValue = CallFunc_SetRaytracingSettings_ReturnValue;
	Parms.CallFunc_SetMotionBlurStrength_ReturnValue = CallFunc_SetMotionBlurStrength_ReturnValue;
	Parms.CallFunc_SetMotionBlurEnabled_ReturnValue_1 = CallFunc_SetMotionBlurEnabled_ReturnValue_1;
	Parms.CallFunc_SetFrameRateLimit_ReturnValue = CallFunc_SetFrameRateLimit_ReturnValue;
	Parms.CallFunc_SetVSyncEnabled_ReturnValue = CallFunc_SetVSyncEnabled_ReturnValue;
	Parms.CallFunc_SavePiPResolutionScale_ReturnValue = CallFunc_SavePiPResolutionScale_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_SavePiPFPS_ReturnValue = CallFunc_SavePiPFPS_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_3 = CallFunc_Conv_ByteToInt_ReturnValue_3;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_4 = CallFunc_Conv_ByteToInt_ReturnValue_4;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_5 = CallFunc_Conv_ByteToInt_ReturnValue_5;
	Parms.CallFunc_SetVideoQualitySettings_ReturnValue = CallFunc_SetVideoQualitySettings_ReturnValue;
	Parms.CallFunc_SetReflexLatencyOptions_ReturnValue = CallFunc_SetReflexLatencyOptions_ReturnValue;
	Parms.CallFunc_LoadTeamViewFPSSetting_bEnabled = CallFunc_LoadTeamViewFPSSetting_bEnabled;
	Parms.CallFunc_LoadTeamViewFPSSetting_TeamViewFPS = CallFunc_LoadTeamViewFPSSetting_TeamViewFPS;
	Parms.CallFunc_LoadTeamViewFPSSetting_ReturnValue = CallFunc_LoadTeamViewFPSSetting_ReturnValue;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue_2 = K2Node_ComponentBoundEvent_NewIntegerValue_2;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_14 = K2Node_ComponentBoundEvent_NewSliderValue_14;
	Parms.CallFunc_SetReflexEnabled_ReturnValue = CallFunc_SetReflexEnabled_ReturnValue;
	Parms.CallFunc_SaveTeamViewSetting_ReturnValue = CallFunc_SaveTeamViewSetting_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_11 = K2Node_ComponentBoundEvent_NewFloatValue_11;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_13 = K2Node_ComponentBoundEvent_NewSliderValue_13;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_29 = K2Node_ComponentBoundEvent_bNewCheckState_29;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_28 = K2Node_ComponentBoundEvent_bNewCheckState_28;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_27 = K2Node_ComponentBoundEvent_bNewCheckState_27;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_10 = K2Node_ComponentBoundEvent_NewFloatValue_10;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_12 = K2Node_ComponentBoundEvent_NewSliderValue_12;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_9 = K2Node_ComponentBoundEvent_NewFloatValue_9;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_11 = K2Node_ComponentBoundEvent_NewSliderValue_11;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue_1 = K2Node_ComponentBoundEvent_NewIntegerValue_1;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_10 = K2Node_ComponentBoundEvent_NewSliderValue_10;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue = K2Node_ComponentBoundEvent_NewIntegerValue;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_9 = K2Node_ComponentBoundEvent_NewSliderValue_9;
	Parms.CallFunc_SaveZoomADSSetting_ReturnValue = CallFunc_SaveZoomADSSetting_ReturnValue;
	Parms.CallFunc_SaveNVGStyle_ReturnValue_1 = CallFunc_SaveNVGStyle_ReturnValue_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_SetBounceLightEnabled_ReturnValue_1 = CallFunc_SetBounceLightEnabled_ReturnValue_1;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue = CallFunc_GetReadyOrNotGameInstance_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_8 = K2Node_ComponentBoundEvent_NewFloatValue_8;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_8 = K2Node_ComponentBoundEvent_NewSliderValue_8;
	Parms.CallFunc_SetWorldDecalEnabled_ReturnValue = CallFunc_SetWorldDecalEnabled_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_7 = K2Node_ComponentBoundEvent_NewFloatValue_7;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_7 = K2Node_ComponentBoundEvent_NewSliderValue_7;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_SetDlssQuality_ReturnValue = CallFunc_SetDlssQuality_ReturnValue;
	Parms.CallFunc_SetFSRQuality_ReturnValue = CallFunc_SetFSRQuality_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.Temp_byte_Variable_50 = Temp_byte_Variable_50;
	Parms.CallFunc_AddChildToGrid_ReturnValue_3 = CallFunc_AddChildToGrid_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_26 = K2Node_ComponentBoundEvent_bNewCheckState_26;
	Parms.CallFunc_SaveShowPlayerIconSetting_ReturnValue = CallFunc_SaveShowPlayerIconSetting_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_25 = K2Node_ComponentBoundEvent_bNewCheckState_25;
	Parms.K2Node_ComponentBoundEvent_NewOption = K2Node_ComponentBoundEvent_NewOption;
	Parms.CallFunc_SaveShowHesitationBarSetting_ReturnValue = CallFunc_SaveShowHesitationBarSetting_ReturnValue;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.CallFunc_SaveEmptyMagReloadSettings_ReturnValue = CallFunc_SaveEmptyMagReloadSettings_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_6 = K2Node_ComponentBoundEvent_NewFloatValue_6;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_6 = K2Node_ComponentBoundEvent_NewSliderValue_6;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_5 = K2Node_ComponentBoundEvent_NewFloatValue_5;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_5 = K2Node_ComponentBoundEvent_NewSliderValue_5;
	Parms.CallFunc_SetMouseSensitivity_ReturnValue = CallFunc_SetMouseSensitivity_ReturnValue;
	Parms.CallFunc_SetFreelookSensitivity_ReturnValue = CallFunc_SetFreelookSensitivity_ReturnValue;
	Parms.CallFunc_GetMouseInverted_bInvertVertical = CallFunc_GetMouseInverted_bInvertVertical;
	Parms.CallFunc_GetMouseInverted_bInvertHorizontal = CallFunc_GetMouseInverted_bInvertHorizontal;
	Parms.CallFunc_GetMouseInverted_ReturnValue = CallFunc_GetMouseInverted_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_12 = K2Node_ComponentBoundEvent_Index_12;
	Parms.CallFunc_GetGamepadInverted_bInvertVertical = CallFunc_GetGamepadInverted_bInvertVertical;
	Parms.CallFunc_GetGamepadInverted_bInvertHorizontal = CallFunc_GetGamepadInverted_bInvertHorizontal;
	Parms.CallFunc_GetGamepadInverted_ReturnValue = CallFunc_GetGamepadInverted_ReturnValue;
	Parms.CallFunc_SetGamepadInverted_ReturnValue = CallFunc_SetGamepadInverted_ReturnValue;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.CallFunc_SetGamepadInverted_ReturnValue_1 = CallFunc_SetGamepadInverted_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.Temp_byte_Variable_51 = Temp_byte_Variable_51;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_4 = K2Node_ComponentBoundEvent_NewFloatValue_4;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_4 = K2Node_ComponentBoundEvent_NewSliderValue_4;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_3 = K2Node_ComponentBoundEvent_NewFloatValue_3;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_3 = K2Node_ComponentBoundEvent_NewSliderValue_3;
	Parms.CallFunc_SetGamepadLookSensitivity_ReturnValue = CallFunc_SetGamepadLookSensitivity_ReturnValue;
	Parms.CallFunc_SetGamepadAimSensitivity_ReturnValue = CallFunc_SetGamepadAimSensitivity_ReturnValue;
	Parms.Temp_int_Variable_16 = Temp_int_Variable_16;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_6 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_6;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_SaveKeybinds_ReturnValue = CallFunc_SaveKeybinds_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_SetFSRQuality_ReturnValue_1 = CallFunc_SetFSRQuality_ReturnValue_1;
	Parms.CallFunc_SetDlssQuality_ReturnValue_1 = CallFunc_SetDlssQuality_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_2 = K2Node_ComponentBoundEvent_NewFloatValue_2;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_2 = K2Node_ComponentBoundEvent_NewSliderValue_2;
	Parms.CallFunc_SaveColorblindMode_ReturnValue = CallFunc_SaveColorblindMode_ReturnValue;
	Parms.CallFunc_SaveColorblindStrength_ReturnValue = CallFunc_SaveColorblindStrength_ReturnValue;
	Parms.CallFunc_SaveColorblindMode_ReturnValue_1 = CallFunc_SaveColorblindMode_ReturnValue_1;
	Parms.CallFunc_SaveColorblindMode_ReturnValue_2 = CallFunc_SaveColorblindMode_ReturnValue_2;
	Parms.CallFunc_SaveColorblindMode_ReturnValue_3 = CallFunc_SaveColorblindMode_ReturnValue_3;
	Parms.K2Node_Select_Default_12 = K2Node_Select_Default_12;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_24 = K2Node_ComponentBoundEvent_bNewCheckState_24;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_23 = K2Node_ComponentBoundEvent_bNewCheckState_23;
	Parms.CallFunc_SetMouseInverted_ReturnValue = CallFunc_SetMouseInverted_ReturnValue;
	Parms.CallFunc_SetMouseInverted_ReturnValue_1 = CallFunc_SetMouseInverted_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_22 = K2Node_ComponentBoundEvent_bNewCheckState_22;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_21 = K2Node_ComponentBoundEvent_bNewCheckState_21;
	Parms.CallFunc_SaveTeamViewSetting_ReturnValue_1 = CallFunc_SaveTeamViewSetting_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_20 = K2Node_ComponentBoundEvent_bNewCheckState_20;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_19 = K2Node_ComponentBoundEvent_bNewCheckState_19;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_18 = K2Node_ComponentBoundEvent_bNewCheckState_18;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_17 = K2Node_ComponentBoundEvent_bNewCheckState_17;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_16 = K2Node_ComponentBoundEvent_bNewCheckState_16;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_15 = K2Node_ComponentBoundEvent_bNewCheckState_15;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_14 = K2Node_ComponentBoundEvent_bNewCheckState_14;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_13 = K2Node_ComponentBoundEvent_bNewCheckState_13;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_12 = K2Node_ComponentBoundEvent_bNewCheckState_12;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_11 = K2Node_ComponentBoundEvent_bNewCheckState_11;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_10 = K2Node_ComponentBoundEvent_bNewCheckState_10;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_9 = K2Node_ComponentBoundEvent_bNewCheckState_9;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_8 = K2Node_ComponentBoundEvent_bNewCheckState_8;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_7 = K2Node_ComponentBoundEvent_bNewCheckState_7;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_6 = K2Node_ComponentBoundEvent_bNewCheckState_6;
	Parms.K2Node_ComponentBoundEvent_Index_11 = K2Node_ComponentBoundEvent_Index_11;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.Temp_byte_Variable_52 = Temp_byte_Variable_52;
	Parms.K2Node_ComponentBoundEvent_Index_10 = K2Node_ComponentBoundEvent_Index_10;
	Parms.K2Node_ComponentBoundEvent_Index_9 = K2Node_ComponentBoundEvent_Index_9;
	Parms.K2Node_ComponentBoundEvent_Index_8 = K2Node_ComponentBoundEvent_Index_8;
	Parms.K2Node_ComponentBoundEvent_Index_7 = K2Node_ComponentBoundEvent_Index_7;
	Parms.K2Node_ComponentBoundEvent_Index_6 = K2Node_ComponentBoundEvent_Index_6;
	Parms.K2Node_Select_Default_13 = K2Node_Select_Default_13;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_5 = K2Node_ComponentBoundEvent_bNewCheckState_5;
	Parms.CallFunc_SaveTogglePS5Gyro_ReturnValue = CallFunc_SaveTogglePS5Gyro_ReturnValue;
	Parms.CallFunc_SaveKeybinds_ReturnValue_1 = CallFunc_SaveKeybinds_ReturnValue_1;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.Temp_int_Loop_Counter_Variable_8 = Temp_int_Loop_Counter_Variable_8;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.CallFunc_SaveControlScheme_ReturnValue = CallFunc_SaveControlScheme_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable_53 = Temp_byte_Variable_53;
	Parms.CallFunc_GetReadyOrNotGameUserSettings_ReturnValue_1 = CallFunc_GetReadyOrNotGameUserSettings_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_8 = Temp_int_Array_Index_Variable_8;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_Less_IntInt_ReturnValue_8 = CallFunc_Less_IntInt_ReturnValue_8;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_HasUserFocus_ReturnValue = CallFunc_HasUserFocus_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_4 = K2Node_ComponentBoundEvent_bNewCheckState_4;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_3 = K2Node_ComponentBoundEvent_bNewCheckState_3;
	Parms.CallFunc_SaveHighlightWeapons_ReturnValue = CallFunc_SaveHighlightWeapons_ReturnValue;
	Parms.CallFunc_SaveSubtitlesEnabled_ReturnValue = CallFunc_SaveSubtitlesEnabled_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_5 = K2Node_ComponentBoundEvent_Index_5;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_1 = K2Node_ComponentBoundEvent_NewFloatValue_1;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_1 = K2Node_ComponentBoundEvent_NewSliderValue_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_7 = CallFunc_Conv_IntToByte_ReturnValue_7;
	Parms.CallFunc_SaveSubtitlesBackgroundOpacity_ReturnValue = CallFunc_SaveSubtitlesBackgroundOpacity_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue_7 = CallFunc_GetValidValue_ReturnValue_7;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue = K2Node_ComponentBoundEvent_NewFloatValue;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue = K2Node_ComponentBoundEvent_NewSliderValue;
	Parms.CallFunc_SaveSubtitlesSpeed_ReturnValue = CallFunc_SaveSubtitlesSpeed_ReturnValue;
	Parms.CallFunc_SaveSubtitlesSize_ReturnValue = CallFunc_SaveSubtitlesSize_ReturnValue;
	Parms.Temp_int_Variable_17 = Temp_int_Variable_17;
	Parms.K2Node_ComponentBoundEvent_Index_4 = K2Node_ComponentBoundEvent_Index_4;
	Parms.K2Node_Select_Default_14 = K2Node_Select_Default_14;
	Parms.CallFunc_SaveShotgunSettings_ReturnValue = CallFunc_SaveShotgunSettings_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_SaveSubtitlesLocale_ReturnValue = CallFunc_SaveSubtitlesLocale_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_2 = K2Node_ComponentBoundEvent_bNewCheckState_2;
	Parms.CallFunc_SaveWorldSpaceActionPrompts_ReturnValue = CallFunc_SaveWorldSpaceActionPrompts_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_3 = K2Node_ComponentBoundEvent_Index_3;
	Parms.K2Node_Select_Default_15 = K2Node_Select_Default_15;
	Parms.CallFunc_SetInterfaceAspectRatio_ReturnValue = CallFunc_SetInterfaceAspectRatio_ReturnValue;
	Parms.CallFunc_SetInterfaceAspectRatio_ReturnValue_1 = CallFunc_SetInterfaceAspectRatio_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_1 = K2Node_ComponentBoundEvent_bNewCheckState_1;
	Parms.CallFunc_SaveServersideChecksum_ReturnValue = CallFunc_SaveServersideChecksum_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState = K2Node_ComponentBoundEvent_bNewCheckState;
	Parms.CallFunc_SetSendMapStatistics_ReturnValue = CallFunc_SetSendMapStatistics_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_2 = K2Node_ComponentBoundEvent_Index_2;
	Parms.K2Node_ComponentBoundEvent_ButtonID = K2Node_ComponentBoundEvent_ButtonID;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.K2Node_Select_Default_16 = K2Node_Select_Default_16;
	Parms.K2Node_ComponentBoundEvent_OptionNameID = K2Node_ComponentBoundEvent_OptionNameID;
	Parms.CallFunc_SaveLowReadyStyle_ReturnValue = CallFunc_SaveLowReadyStyle_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_ComponentBoundEvent_OptionID_1 = K2Node_ComponentBoundEvent_OptionID_1;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_OptionID = K2Node_ComponentBoundEvent_OptionID;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_CustomEvent_CallingModal_1 = K2Node_CustomEvent_CallingModal_1;
	Parms.Temp_byte_Variable_54 = Temp_byte_Variable_54;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_Select_Default_17 = K2Node_Select_Default_17;
	Parms.CallFunc_SaveGrenadeSettings_ReturnValue = CallFunc_SaveGrenadeSettings_ReturnValue;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.K2Node_CustomEvent_CallingModal = K2Node_CustomEvent_CallingModal;
	Parms.K2Node_CustomEvent_TextEntry = K2Node_CustomEvent_TextEntry;
	Parms.CallFunc_SetCurrentLanguageAndLocale_ReturnValue = CallFunc_SetCurrentLanguageAndLocale_ReturnValue;
	Parms.CallFunc_GetCurrentCulture_ReturnValue = CallFunc_GetCurrentCulture_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


