#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SettingsMenu.W_SettingsMenu_C
// (None)

class UClass* UW_SettingsMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SettingsMenu_C");

	return Clss;
}


// W_SettingsMenu_C W_SettingsMenu.Default__W_SettingsMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SettingsMenu_C* UW_SettingsMenu_C::GetDefaultObj()
{
	static class UW_SettingsMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SettingsMenu_C*>(UW_SettingsMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_SettingsMenu.W_SettingsMenu_C.GetSupporterCode
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDiscordOneTimeUseCode_ReturnValue                    (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_SettingsMenu_C::GetSupporterCode(class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, const class FString& CallFunc_GetDiscordOneTimeUseCode_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "GetSupporterCode");

	Params::UW_SettingsMenu_C_GetSupporterCode_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue = CallFunc_GetReadyOrNotGameInstance_ReturnValue;
	Parms.CallFunc_GetDiscordOneTimeUseCode_ReturnValue = CallFunc_GetDiscordOneTimeUseCode_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_SettingsMenu.W_SettingsMenu_C.Get_SupporterSubCategory_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameVersionEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_SettingsMenu_C::Get_SupporterSubCategory_Visibility_0(bool CallFunc_IsGameVersionEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "Get_SupporterSubCategory_Visibility_0");

	Params::UW_SettingsMenu_C_Get_SupporterSubCategory_Visibility_0_Params Parms{};

	Parms.CallFunc_IsGameVersionEnabled_ReturnValue = CallFunc_IsGameVersionEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_SettingsMenu.W_SettingsMenu_C.IsFSREnabledVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFSREnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_SettingsMenu_C::IsFSREnabledVisibility(bool CallFunc_IsFSREnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "IsFSREnabledVisibility");

	Params::UW_SettingsMenu_C_IsFSREnabledVisibility_Params Parms{};

	Parms.CallFunc_IsFSREnabled_ReturnValue = CallFunc_IsFSREnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_SettingsMenu.W_SettingsMenu_C.Get_FOVWarning_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_SettingsMenu_C::Get_FOVWarning_Visibility(bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "Get_FOVWarning_Visibility");

	Params::UW_SettingsMenu_C_Get_FOVWarning_Visibility_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_SettingsMenu.W_SettingsMenu_C.Get_SimpleGraphics_Slider_FieldOfView_ColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FLinearColor UW_SettingsMenu_C::Get_SimpleGraphics_Slider_FieldOfView_ColorAndOpacity_0(bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "Get_SimpleGraphics_Slider_FieldOfView_ColorAndOpacity_0");

	Params::UW_SettingsMenu_C_Get_SimpleGraphics_Slider_FieldOfView_ColorAndOpacity_0_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_SettingsMenu.W_SettingsMenu_C.Get_SimpleGraphics_Slider_Resolution_bIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_SettingsMenu_C::Get_SimpleGraphics_Slider_Resolution_bIsEnabled_0(bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "Get_SimpleGraphics_Slider_Resolution_bIsEnabled_0");

	Params::UW_SettingsMenu_C_Get_SimpleGraphics_Slider_Resolution_bIsEnabled_0_Params Parms{};

	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_SettingsMenu.W_SettingsMenu_C.Try Assign Unbindable Control
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSKeybinding                KeyBinding                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CannotBeUnbindable                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::Try_Assign_Unbindable_Control(const struct FSKeybinding& KeyBinding, bool* bSuccess, bool CannotBeUnbindable, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "Try Assign Unbindable Control");

	Params::UW_SettingsMenu_C_Try_Assign_Unbindable_Control_Params Parms{};

	Parms.KeyBinding = KeyBinding;
	Parms.CannotBeUnbindable = CannotBeUnbindable;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function W_SettingsMenu.W_SettingsMenu_C.Get Apply Button Enabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UW_SettingsMenu_C::Get_Apply_Button_Enabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "Get Apply Button Enabled");

	Params::UW_SettingsMenu_C_Get_Apply_Button_Enabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_SettingsMenu.W_SettingsMenu_C.SetDefaultControlsTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenu_C::SetDefaultControlsTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "SetDefaultControlsTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenu.W_SettingsMenu_C.SwitchControlsTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     MenuWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 ActiveButton                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::SwitchControlsTab(class UW_Button_C* Button, class UWidget* MenuWidget, class UW_Button_C* ActiveButton, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "SwitchControlsTab");

	Params::UW_SettingsMenu_C_SwitchControlsTab_Params Parms{};

	Parms.Button = Button;
	Parms.MenuWidget = MenuWidget;
	Parms.ActiveButton = ActiveButton;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.SwitchTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     MenuWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Tab_Name                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bShowResetButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 ActiveButton                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::SwitchTab(class UW_Button_C* Button, class UWidget* MenuWidget, class FText Tab_Name, bool bShowResetButton, class UW_Button_C* ActiveButton, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "SwitchTab");

	Params::UW_SettingsMenu_C_SwitchTab_Params Parms{};

	Parms.Button = Button;
	Parms.MenuWidget = MenuWidget;
	Parms.Tab_Name = Tab_Name;
	Parms.bShowResetButton = bShowResetButton;
	Parms.ActiveButton = ActiveButton;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.Initialise Or Get Pop Up
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      PopUpType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSStandardModalDetails      StandardModalDetails                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UW_StandardModal_C*          OutputPopUp                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      PopupClass                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          TempPopUp                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_StandardModal_C*>  CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UW_StandardModal_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::Initialise_Or_Get_Pop_Up(class UClass* PopUpType, const struct FSStandardModalDetails& StandardModalDetails, class UW_StandardModal_C** OutputPopUp, class UClass* PopupClass, class UW_StandardModal_C* TempPopUp, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UW_StandardModal_C* CallFunc_Create_ReturnValue, TArray<class UW_StandardModal_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_StandardModal_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "Initialise Or Get Pop Up");

	Params::UW_SettingsMenu_C_Initialise_Or_Get_Pop_Up_Params Parms{};

	Parms.PopUpType = PopUpType;
	Parms.StandardModalDetails = StandardModalDetails;
	Parms.PopupClass = PopupClass;
	Parms.TempPopUp = TempPopUp;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPopUp != nullptr)
		*OutputPopUp = Parms.OutputPopUp;

}


// Function W_SettingsMenu.W_SettingsMenu_C.ClearControlBindsLists
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenu_C::ClearControlBindsLists()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "ClearControlBindsLists");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenu.W_SettingsMenu_C.AddToControlBindsLists
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           ControlBInd                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAxisMappingStruct          InputAxis                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FActionMappingStruct        InputAction                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::AddToControlBindsLists(class UW_ControlsBind_C* ControlBInd, const struct FAxisMappingStruct& InputAxis, const struct FActionMappingStruct& InputAction, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "AddToControlBindsLists");

	Params::UW_SettingsMenu_C_AddToControlBindsLists_Params Parms{};

	Parms.ControlBInd = ControlBInd;
	Parms.InputAxis = InputAxis;
	Parms.InputAction = InputAction;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.Setup Category Controls 
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenu_C::Setup_Category_Controls_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "Setup Category Controls ");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenu.W_SettingsMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_SaveSettings_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_JoyIsKey_Ctrl                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_JoyIsKey_Shift                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_JoyIsKey_Alt                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_JoyIsKey_Cmd                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_JoyIsKey_Match                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_SettingsMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, bool CallFunc_SaveSettings_ReturnValue, bool CallFunc_JoyIsKey_Ctrl, bool CallFunc_JoyIsKey_Shift, bool CallFunc_JoyIsKey_Alt, bool CallFunc_JoyIsKey_Cmd, bool CallFunc_JoyIsKey_Match, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "OnKeyDown");

	Params::UW_SettingsMenu_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_SaveSettings_ReturnValue = CallFunc_SaveSettings_ReturnValue;
	Parms.CallFunc_JoyIsKey_Ctrl = CallFunc_JoyIsKey_Ctrl;
	Parms.CallFunc_JoyIsKey_Shift = CallFunc_JoyIsKey_Shift;
	Parms.CallFunc_JoyIsKey_Alt = CallFunc_JoyIsKey_Alt;
	Parms.CallFunc_JoyIsKey_Cmd = CallFunc_JoyIsKey_Cmd;
	Parms.CallFunc_JoyIsKey_Match = CallFunc_JoyIsKey_Match;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_SettingsMenu.W_SettingsMenu_C.IsRaytracingSupportedVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UW_SettingsMenu_C::IsRaytracingSupportedVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "IsRaytracingSupportedVisibility");

	Params::UW_SettingsMenu_C_IsRaytracingSupportedVisibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_SettingsMenu.W_SettingsMenu_C.AddAllKeybindsInList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSKeybinding>        Keybinds                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        MatchingName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                KeyList                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSKeybinding                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::AddAllKeybindsInList(TArray<struct FSKeybinding>& Keybinds, class FName MatchingName, TArray<class FText>& KeyList, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FSKeybinding& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "AddAllKeybindsInList");

	Params::UW_SettingsMenu_C_AddAllKeybindsInList_Params Parms{};

	Parms.Keybinds = Keybinds;
	Parms.MatchingName = MatchingName;
	Parms.KeyList = KeyList;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.GetConflictingKeybindListText
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
// class FText                        CallFunc_Array_Get_Item                                          (None)
// class FText                        CallFunc_Array_Get_Item_1                                        (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item_2                                        (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)

void UW_SettingsMenu_C::GetConflictingKeybindListText(TArray<struct FAxisMappingStruct>& Axes, TArray<struct FActionMappingStruct>& Actions, TArray<class FText>& ConflictBinds, class FText* Text, class FText LocalizedActionChain, class FText Inputs_2LocalizedComma, class FText Inputs_2LocalizedAnd, const TArray<class FText>& LocalizedActions, class FText CallFunc_Array_Get_Item, class FText CallFunc_Array_Get_Item_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, int32 Temp_int_Array_Index_Variable, class FText CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "GetConflictingKeybindListText");

	Params::UW_SettingsMenu_C_GetConflictingKeybindListText_Params Parms{};

	Parms.Axes = Axes;
	Parms.Actions = Actions;
	Parms.ConflictBinds = ConflictBinds;
	Parms.LocalizedActionChain = LocalizedActionChain;
	Parms.Inputs_2LocalizedComma = Inputs_2LocalizedComma;
	Parms.Inputs_2LocalizedAnd = Inputs_2LocalizedAnd;
	Parms.LocalizedActions = LocalizedActions;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function W_SettingsMenu.W_SettingsMenu_C.GetConflictingKeybindText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<struct FActionMappingStruct>ConflictingActions                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FAxisMappingStruct>  ConflictingAxes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FText>                ConflictBindNames                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        CallFunc_GetConflictingKeybindListText_Text                      (None)
// class FString                      CallFunc_Abbreviate_Key_Abreviated_Name                          (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_SettingsMenu_C::GetConflictingKeybindText(const struct FKey& Key, TArray<struct FActionMappingStruct>& ConflictingActions, TArray<struct FAxisMappingStruct>& ConflictingAxes, TArray<class FText>& ConflictBindNames, class FText* Text, class FText CallFunc_GetConflictingKeybindListText_Text, const class FString& CallFunc_Abbreviate_Key_Abreviated_Name, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "GetConflictingKeybindText");

	Params::UW_SettingsMenu_C_GetConflictingKeybindText_Params Parms{};

	Parms.Key = Key;
	Parms.ConflictingActions = ConflictingActions;
	Parms.ConflictingAxes = ConflictingAxes;
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


// Function W_SettingsMenu.W_SettingsMenu_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_HandleMouseButtonDown_Reply                             (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_SettingsMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_HandleMouseButtonDown_Reply, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "OnMouseButtonDown");

	Params::UW_SettingsMenu_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_HandleMouseButtonDown_Reply = CallFunc_HandleMouseButtonDown_Reply;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_SettingsMenu.W_SettingsMenu_C.InitGraphicsPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSGraphicPreset             CurrentPresetCandidate                                           (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadPiPResolutionScale_ResolutionScale                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPResolutionScale_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadPiPFPS_bEnabled                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_LoadPiPFPS_FPS                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPFPS_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRaytracingSettings_bRTXEnabled                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRaytracingSettings_bRTXShadowsEnabled                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRaytracingSettings_bRTXGlobalIllumination            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRaytracingSettings_bRTXTranslucency                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRaytracingSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFrameRateLimit_FrameRateLimit                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFrameRateLimit_bEnabled                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetVSyncEnabled_bEnabled                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetVSyncEnabled_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUseMeshpainting_bUseMeshPainting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUseMeshpainting_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDepthOfFieldSetting_bDoFEnabled                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDepthOfFieldSetting_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetVideoQualitySettings_AntiAliasing                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_Effects                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_PostProcess                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVideoQualitySettings_ResolutionScaling               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_Shadow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_Texture                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_ViewDistance                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVideoQualitySettings_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSGraphicPreset             CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSGraphicPreset             K2Node_MakeStruct_SGraphicPreset                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::InitGraphicsPreset(const struct FSGraphicPreset& CurrentPresetCandidate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, float CallFunc_LoadPiPResolutionScale_ResolutionScale, bool CallFunc_LoadPiPResolutionScale_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LoadPiPFPS_bEnabled, float CallFunc_LoadPiPFPS_FPS, bool CallFunc_LoadPiPFPS_ReturnValue, bool CallFunc_GetRaytracingSettings_bRTXEnabled, bool CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled, bool CallFunc_GetRaytracingSettings_bRTXShadowsEnabled, bool CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled, bool CallFunc_GetRaytracingSettings_bRTXGlobalIllumination, bool CallFunc_GetRaytracingSettings_bRTXTranslucency, bool CallFunc_GetRaytracingSettings_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_GetFrameRateLimit_FrameRateLimit, bool CallFunc_GetFrameRateLimit_bEnabled, bool CallFunc_GetFrameRateLimit_ReturnValue, bool CallFunc_GetVSyncEnabled_bEnabled, bool CallFunc_GetVSyncEnabled_ReturnValue, bool CallFunc_GetUseMeshpainting_bUseMeshPainting, bool CallFunc_GetUseMeshpainting_ReturnValue, bool CallFunc_GetDepthOfFieldSetting_bDoFEnabled, bool CallFunc_GetDepthOfFieldSetting_ReturnValue, int32 CallFunc_GetVideoQualitySettings_AntiAliasing, int32 CallFunc_GetVideoQualitySettings_Effects, int32 CallFunc_GetVideoQualitySettings_PostProcess, float CallFunc_GetVideoQualitySettings_ResolutionScaling, int32 CallFunc_GetVideoQualitySettings_Shadow, int32 CallFunc_GetVideoQualitySettings_Texture, int32 CallFunc_GetVideoQualitySettings_ViewDistance, bool CallFunc_GetVideoQualitySettings_ReturnValue, const struct FSGraphicPreset& CallFunc_Array_Get_Item, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, uint8 CallFunc_GetValidValue_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, uint8 CallFunc_Conv_IntToByte_ReturnValue_4, uint8 CallFunc_GetValidValue_ReturnValue_3, uint8 CallFunc_GetValidValue_ReturnValue_4, uint8 CallFunc_Conv_IntToByte_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue, const struct FSGraphicPreset& K2Node_MakeStruct_SGraphicPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "InitGraphicsPreset");

	Params::UW_SettingsMenu_C_InitGraphicsPreset_Params Parms{};

	Parms.CurrentPresetCandidate = CurrentPresetCandidate;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_LoadPiPResolutionScale_ResolutionScale = CallFunc_LoadPiPResolutionScale_ResolutionScale;
	Parms.CallFunc_LoadPiPResolutionScale_ReturnValue = CallFunc_LoadPiPResolutionScale_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_LoadPiPFPS_bEnabled = CallFunc_LoadPiPFPS_bEnabled;
	Parms.CallFunc_LoadPiPFPS_FPS = CallFunc_LoadPiPFPS_FPS;
	Parms.CallFunc_LoadPiPFPS_ReturnValue = CallFunc_LoadPiPFPS_ReturnValue;
	Parms.CallFunc_GetRaytracingSettings_bRTXEnabled = CallFunc_GetRaytracingSettings_bRTXEnabled;
	Parms.CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled = CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled;
	Parms.CallFunc_GetRaytracingSettings_bRTXShadowsEnabled = CallFunc_GetRaytracingSettings_bRTXShadowsEnabled;
	Parms.CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled = CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled;
	Parms.CallFunc_GetRaytracingSettings_bRTXGlobalIllumination = CallFunc_GetRaytracingSettings_bRTXGlobalIllumination;
	Parms.CallFunc_GetRaytracingSettings_bRTXTranslucency = CallFunc_GetRaytracingSettings_bRTXTranslucency;
	Parms.CallFunc_GetRaytracingSettings_ReturnValue = CallFunc_GetRaytracingSettings_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetFrameRateLimit_FrameRateLimit = CallFunc_GetFrameRateLimit_FrameRateLimit;
	Parms.CallFunc_GetFrameRateLimit_bEnabled = CallFunc_GetFrameRateLimit_bEnabled;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue = CallFunc_GetFrameRateLimit_ReturnValue;
	Parms.CallFunc_GetVSyncEnabled_bEnabled = CallFunc_GetVSyncEnabled_bEnabled;
	Parms.CallFunc_GetVSyncEnabled_ReturnValue = CallFunc_GetVSyncEnabled_ReturnValue;
	Parms.CallFunc_GetUseMeshpainting_bUseMeshPainting = CallFunc_GetUseMeshpainting_bUseMeshPainting;
	Parms.CallFunc_GetUseMeshpainting_ReturnValue = CallFunc_GetUseMeshpainting_ReturnValue;
	Parms.CallFunc_GetDepthOfFieldSetting_bDoFEnabled = CallFunc_GetDepthOfFieldSetting_bDoFEnabled;
	Parms.CallFunc_GetDepthOfFieldSetting_ReturnValue = CallFunc_GetDepthOfFieldSetting_ReturnValue;
	Parms.CallFunc_GetVideoQualitySettings_AntiAliasing = CallFunc_GetVideoQualitySettings_AntiAliasing;
	Parms.CallFunc_GetVideoQualitySettings_Effects = CallFunc_GetVideoQualitySettings_Effects;
	Parms.CallFunc_GetVideoQualitySettings_PostProcess = CallFunc_GetVideoQualitySettings_PostProcess;
	Parms.CallFunc_GetVideoQualitySettings_ResolutionScaling = CallFunc_GetVideoQualitySettings_ResolutionScaling;
	Parms.CallFunc_GetVideoQualitySettings_Shadow = CallFunc_GetVideoQualitySettings_Shadow;
	Parms.CallFunc_GetVideoQualitySettings_Texture = CallFunc_GetVideoQualitySettings_Texture;
	Parms.CallFunc_GetVideoQualitySettings_ViewDistance = CallFunc_GetVideoQualitySettings_ViewDistance;
	Parms.CallFunc_GetVideoQualitySettings_ReturnValue = CallFunc_GetVideoQualitySettings_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_GetValidValue_ReturnValue_2 = CallFunc_GetValidValue_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_3 = CallFunc_Conv_IntToByte_ReturnValue_3;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_4 = CallFunc_Conv_IntToByte_ReturnValue_4;
	Parms.CallFunc_GetValidValue_ReturnValue_3 = CallFunc_GetValidValue_ReturnValue_3;
	Parms.CallFunc_GetValidValue_ReturnValue_4 = CallFunc_GetValidValue_ReturnValue_4;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_5 = CallFunc_Conv_IntToByte_ReturnValue_5;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue_5 = CallFunc_GetValidValue_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SGraphicPreset = K2Node_MakeStruct_SGraphicPreset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.StageGraphicsPreset
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

void UW_SettingsMenu_C::StageGraphicsPreset(const struct FSGraphicPreset& Preset, float CallFunc_GetMotionBlurStrength_Strength, bool CallFunc_GetMotionBlurStrength_ReturnValue, bool CallFunc_GetMotionBlurEnabled_bEnabled, bool CallFunc_GetMotionBlurEnabled_ReturnValue, int32 CallFunc_GetFrameRateLimit_FrameRateLimit, bool CallFunc_GetFrameRateLimit_bEnabled, bool CallFunc_GetFrameRateLimit_ReturnValue, bool CallFunc_GetVSyncEnabled_bEnabled, bool CallFunc_GetVSyncEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "StageGraphicsPreset");

	Params::UW_SettingsMenu_C_StageGraphicsPreset_Params Parms{};

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

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.PopulateGameOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsDesignTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EOptiwandViewMode       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScoreReadoutMode       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEmptyMagReloadType     Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// enum class EItemSelectionInterfaceTypeTemp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ZeroConstructor, HasGetValueTypeHash)
// enum class EShotgunReloadType      Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_4                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_5                                           (ZeroConstructor, HasGetValueTypeHash)
// enum class EGrenadeThrowSettingTypeTemp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_6                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_7                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSendMapStatistics_bSendMapStatistics                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSendMapStatistics_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UModioManager*               CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadServersideChecksum_bServerSideChecksumEnabled       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadServersideChecksum_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowCommandContextHintSetting_bShowCommandContextHint(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowCommandContextHintSetting_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowTeamStatus_bShowTeamStatus                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowTeamStatus_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EOptiwandViewMode       CallFunc_LoadOptiwandViewMode_OptiwandViewMode                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadOptiwandViewMode_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowHesitationBarSetting_bShowHesitationBar         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowHesitationBarSetting_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShowPlayerIconSetting_bShowPlayerIcon               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowPlayerIconSetting_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultCommandsAsOption_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHotkeyHintSetting_bShowHotkeyHint                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadHotkeyHintSetting_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowHealthIconSetting_bShowHealthIcons              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowHealthIconSetting_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EScoreReadoutMode       CallFunc_LoadScoreReadoutSetting_OutScoreReadoutMode             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadScoreReadoutSetting_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEmptyMagReloadType     CallFunc_LoadEmptyMagReloadSettings_EmptyMagReloadType           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadEmptyMagReloadSettings_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_2                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadTeamViewFPSSetting_bEnabled                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_LoadTeamViewFPSSetting_TeamViewFPS                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadTeamViewFPSSetting_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemSelectionInterfaceTypeCallFunc_LoadItemSelectionStyleSettings_ItemSelectionInterface   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadItemSelectionStyleSettings_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SetIntegralValue_NewValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_3                                          (ZeroConstructor, HasGetValueTypeHash)
// enum class EShotgunReloadType      CallFunc_LoadShotgunSettings_ShotgunReloadType                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShotgunSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGrenadeThrowSettingTypeCallFunc_LoadGrenadeSettings_GrenadeThrowType                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadGrenadeSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default_4                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_5                                          (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetFreelookSensitivity_Sensitivity                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFreelookSensitivity_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentCulture_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatValue_NewValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMouseInverted_bInvertVertical                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMouseInverted_bInvertHorizontal                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMouseInverted_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMouseSensitivity_MouseSensitvity                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMouseSensitivity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetFloatValue_NewValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShowFPS_bShowFPS                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetShowFPS_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
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

void UW_SettingsMenu_C::PopulateGameOptions(bool bIsDesignTime, enum class EOptiwandViewMode Temp_byte_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, enum class EScoreReadoutMode Temp_byte_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, enum class EEmptyMagReloadType Temp_byte_Variable_2, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, enum class EItemSelectionInterfaceType Temp_byte_Variable_3, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, enum class EShotgunReloadType Temp_byte_Variable_4, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, enum class EGrenadeThrowSettingType Temp_byte_Variable_5, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, bool CallFunc_GetSendMapStatistics_bSendMapStatistics, bool CallFunc_GetSendMapStatistics_ReturnValue, class UModioManager* CallFunc_GetInstance_ReturnValue, bool CallFunc_LoadServersideChecksum_bServerSideChecksumEnabled, bool CallFunc_LoadServersideChecksum_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LoadShowCommandContextHintSetting_bShowCommandContextHint, bool CallFunc_LoadShowCommandContextHintSetting_ReturnValue, bool CallFunc_LoadShowTeamStatus_bShowTeamStatus, bool CallFunc_LoadShowTeamStatus_ReturnValue, enum class EOptiwandViewMode CallFunc_LoadOptiwandViewMode_OptiwandViewMode, bool CallFunc_LoadOptiwandViewMode_ReturnValue, bool CallFunc_LoadShowHesitationBarSetting_bShowHesitationBar, bool CallFunc_LoadShowHesitationBarSetting_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_LoadShowPlayerIconSetting_bShowPlayerIcon, bool CallFunc_LoadShowPlayerIconSetting_ReturnValue, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption, bool CallFunc_LoadDefaultCommandsAsOption_ReturnValue, bool CallFunc_LoadHotkeyHintSetting_bShowHotkeyHint, bool CallFunc_LoadHotkeyHintSetting_ReturnValue, bool CallFunc_LoadShowHealthIconSetting_bShowHealthIcons, bool CallFunc_LoadShowHealthIconSetting_ReturnValue, enum class EScoreReadoutMode CallFunc_LoadScoreReadoutSetting_OutScoreReadoutMode, bool CallFunc_LoadScoreReadoutSetting_ReturnValue, enum class EEmptyMagReloadType CallFunc_LoadEmptyMagReloadSettings_EmptyMagReloadType, bool CallFunc_LoadEmptyMagReloadSettings_ReturnValue, int32 K2Node_Select_Default_1, const class FString& K2Node_Select_Default_2, bool CallFunc_LoadTeamViewFPSSetting_bEnabled, int32 CallFunc_LoadTeamViewFPSSetting_TeamViewFPS, bool CallFunc_LoadTeamViewFPSSetting_ReturnValue, enum class EItemSelectionInterfaceType CallFunc_LoadItemSelectionStyleSettings_ItemSelectionInterface, bool CallFunc_LoadItemSelectionStyleSettings_ReturnValue, int32 CallFunc_SetIntegralValue_NewValue, const class FString& K2Node_Select_Default_3, enum class EShotgunReloadType CallFunc_LoadShotgunSettings_ShotgunReloadType, bool CallFunc_LoadShotgunSettings_ReturnValue, enum class EGrenadeThrowSettingType CallFunc_LoadGrenadeSettings_GrenadeThrowType, bool CallFunc_LoadGrenadeSettings_ReturnValue, const class FString& K2Node_Select_Default_4, const class FString& K2Node_Select_Default_5, float CallFunc_GetFreelookSensitivity_Sensitivity, bool CallFunc_GetFreelookSensitivity_ReturnValue, const class FString& CallFunc_GetCurrentCulture_ReturnValue, float CallFunc_SetFloatValue_NewValue, bool CallFunc_GetMouseInverted_bInvertVertical, bool CallFunc_GetMouseInverted_bInvertHorizontal, bool CallFunc_GetMouseInverted_ReturnValue, float CallFunc_GetMouseSensitivity_MouseSensitvity, bool CallFunc_GetMouseSensitivity_ReturnValue, float CallFunc_SetFloatValue_NewValue_1, bool CallFunc_GetShowFPS_bShowFPS, bool CallFunc_GetShowFPS_ReturnValue, bool CallFunc_LoadHUDSettings_bShowHud, bool CallFunc_LoadHUDSettings_bCurvedHUD, bool CallFunc_LoadHUDSettings_bShowCompass, bool CallFunc_LoadHUDSettings_bShowWeaponHUD, bool CallFunc_LoadHUDSettings_bShowMagazineHUD, bool CallFunc_LoadHUDSettings_bShowChat, bool CallFunc_LoadHUDSettings_bSwayHUD, bool CallFunc_LoadHUDSettings_b2DReload, float CallFunc_LoadHUDSettings_IconScale, float CallFunc_LoadHUDSettings_QuickThrowScale, int32 CallFunc_LoadHUDSettings_FireModeDisplayOption, bool CallFunc_LoadHUDSettings_bShowPlayerNames, bool CallFunc_LoadHUDSettings_bShowButtonPrompts, bool CallFunc_LoadHUDSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "PopulateGameOptions");

	Params::UW_SettingsMenu_C_PopulateGameOptions_Params Parms{};

	Parms.bIsDesignTime = bIsDesignTime;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_string_Variable_6 = Temp_string_Variable_6;
	Parms.Temp_string_Variable_7 = Temp_string_Variable_7;
	Parms.CallFunc_GetSendMapStatistics_bSendMapStatistics = CallFunc_GetSendMapStatistics_bSendMapStatistics;
	Parms.CallFunc_GetSendMapStatistics_ReturnValue = CallFunc_GetSendMapStatistics_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_LoadServersideChecksum_bServerSideChecksumEnabled = CallFunc_LoadServersideChecksum_bServerSideChecksumEnabled;
	Parms.CallFunc_LoadServersideChecksum_ReturnValue = CallFunc_LoadServersideChecksum_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LoadShowCommandContextHintSetting_bShowCommandContextHint = CallFunc_LoadShowCommandContextHintSetting_bShowCommandContextHint;
	Parms.CallFunc_LoadShowCommandContextHintSetting_ReturnValue = CallFunc_LoadShowCommandContextHintSetting_ReturnValue;
	Parms.CallFunc_LoadShowTeamStatus_bShowTeamStatus = CallFunc_LoadShowTeamStatus_bShowTeamStatus;
	Parms.CallFunc_LoadShowTeamStatus_ReturnValue = CallFunc_LoadShowTeamStatus_ReturnValue;
	Parms.CallFunc_LoadOptiwandViewMode_OptiwandViewMode = CallFunc_LoadOptiwandViewMode_OptiwandViewMode;
	Parms.CallFunc_LoadOptiwandViewMode_ReturnValue = CallFunc_LoadOptiwandViewMode_ReturnValue;
	Parms.CallFunc_LoadShowHesitationBarSetting_bShowHesitationBar = CallFunc_LoadShowHesitationBarSetting_bShowHesitationBar;
	Parms.CallFunc_LoadShowHesitationBarSetting_ReturnValue = CallFunc_LoadShowHesitationBarSetting_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_LoadShowPlayerIconSetting_bShowPlayerIcon = CallFunc_LoadShowPlayerIconSetting_bShowPlayerIcon;
	Parms.CallFunc_LoadShowPlayerIconSetting_ReturnValue = CallFunc_LoadShowPlayerIconSetting_ReturnValue;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption = CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption;
	Parms.CallFunc_LoadDefaultCommandsAsOption_ReturnValue = CallFunc_LoadDefaultCommandsAsOption_ReturnValue;
	Parms.CallFunc_LoadHotkeyHintSetting_bShowHotkeyHint = CallFunc_LoadHotkeyHintSetting_bShowHotkeyHint;
	Parms.CallFunc_LoadHotkeyHintSetting_ReturnValue = CallFunc_LoadHotkeyHintSetting_ReturnValue;
	Parms.CallFunc_LoadShowHealthIconSetting_bShowHealthIcons = CallFunc_LoadShowHealthIconSetting_bShowHealthIcons;
	Parms.CallFunc_LoadShowHealthIconSetting_ReturnValue = CallFunc_LoadShowHealthIconSetting_ReturnValue;
	Parms.CallFunc_LoadScoreReadoutSetting_OutScoreReadoutMode = CallFunc_LoadScoreReadoutSetting_OutScoreReadoutMode;
	Parms.CallFunc_LoadScoreReadoutSetting_ReturnValue = CallFunc_LoadScoreReadoutSetting_ReturnValue;
	Parms.CallFunc_LoadEmptyMagReloadSettings_EmptyMagReloadType = CallFunc_LoadEmptyMagReloadSettings_EmptyMagReloadType;
	Parms.CallFunc_LoadEmptyMagReloadSettings_ReturnValue = CallFunc_LoadEmptyMagReloadSettings_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_LoadTeamViewFPSSetting_bEnabled = CallFunc_LoadTeamViewFPSSetting_bEnabled;
	Parms.CallFunc_LoadTeamViewFPSSetting_TeamViewFPS = CallFunc_LoadTeamViewFPSSetting_TeamViewFPS;
	Parms.CallFunc_LoadTeamViewFPSSetting_ReturnValue = CallFunc_LoadTeamViewFPSSetting_ReturnValue;
	Parms.CallFunc_LoadItemSelectionStyleSettings_ItemSelectionInterface = CallFunc_LoadItemSelectionStyleSettings_ItemSelectionInterface;
	Parms.CallFunc_LoadItemSelectionStyleSettings_ReturnValue = CallFunc_LoadItemSelectionStyleSettings_ReturnValue;
	Parms.CallFunc_SetIntegralValue_NewValue = CallFunc_SetIntegralValue_NewValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_LoadShotgunSettings_ShotgunReloadType = CallFunc_LoadShotgunSettings_ShotgunReloadType;
	Parms.CallFunc_LoadShotgunSettings_ReturnValue = CallFunc_LoadShotgunSettings_ReturnValue;
	Parms.CallFunc_LoadGrenadeSettings_GrenadeThrowType = CallFunc_LoadGrenadeSettings_GrenadeThrowType;
	Parms.CallFunc_LoadGrenadeSettings_ReturnValue = CallFunc_LoadGrenadeSettings_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_GetFreelookSensitivity_Sensitivity = CallFunc_GetFreelookSensitivity_Sensitivity;
	Parms.CallFunc_GetFreelookSensitivity_ReturnValue = CallFunc_GetFreelookSensitivity_ReturnValue;
	Parms.CallFunc_GetCurrentCulture_ReturnValue = CallFunc_GetCurrentCulture_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue = CallFunc_SetFloatValue_NewValue;
	Parms.CallFunc_GetMouseInverted_bInvertVertical = CallFunc_GetMouseInverted_bInvertVertical;
	Parms.CallFunc_GetMouseInverted_bInvertHorizontal = CallFunc_GetMouseInverted_bInvertHorizontal;
	Parms.CallFunc_GetMouseInverted_ReturnValue = CallFunc_GetMouseInverted_ReturnValue;
	Parms.CallFunc_GetMouseSensitivity_MouseSensitvity = CallFunc_GetMouseSensitivity_MouseSensitvity;
	Parms.CallFunc_GetMouseSensitivity_ReturnValue = CallFunc_GetMouseSensitivity_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_1 = CallFunc_SetFloatValue_NewValue_1;
	Parms.CallFunc_GetShowFPS_bShowFPS = CallFunc_GetShowFPS_bShowFPS;
	Parms.CallFunc_GetShowFPS_ReturnValue = CallFunc_GetShowFPS_ReturnValue;
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

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.PopulateAudioOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsDesignTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EVoiceType              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceType              CallFunc_GetVoiceType_OutVoiceType                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVoiceType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_LoadSelectedAudioDevice_OutAudioDevice                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadSelectedAudioDevice_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMicInputGain_MicInputGain                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMicInputGain_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_GetAvailableAudioDevices_OutAudioDevices                (ReferenceParm)
// bool                               CallFunc_GetAvailableAudioDevices_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetFloatValue_NewValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetVolumes_MasterVolume                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_UIVolume                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_SFXVolume                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_MusicVolume                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_VOIPVolume                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVolumes_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetFloatValue_NewValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatValue_NewValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatValue_NewValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatValue_NewValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatValue_NewValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::PopulateAudioOptions(bool bIsDesignTime, enum class EVoiceType Temp_byte_Variable, bool CallFunc_Not_PreBool_ReturnValue, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EVoiceType CallFunc_GetVoiceType_OutVoiceType, bool CallFunc_GetVoiceType_ReturnValue, const class FString& CallFunc_LoadSelectedAudioDevice_OutAudioDevice, bool CallFunc_LoadSelectedAudioDevice_ReturnValue, const class FString& K2Node_Select_Default, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, float CallFunc_GetMicInputGain_MicInputGain, bool CallFunc_GetMicInputGain_ReturnValue, TArray<class FString>& CallFunc_GetAvailableAudioDevices_OutAudioDevices, bool CallFunc_GetAvailableAudioDevices_ReturnValue, float CallFunc_SetFloatValue_NewValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetVolumes_MasterVolume, float CallFunc_GetVolumes_UIVolume, float CallFunc_GetVolumes_SFXVolume, float CallFunc_GetVolumes_MusicVolume, float CallFunc_GetVolumes_VOIPVolume, bool CallFunc_GetVolumes_ReturnValue, float CallFunc_SetFloatValue_NewValue_1, float CallFunc_SetFloatValue_NewValue_2, float CallFunc_SetFloatValue_NewValue_3, float CallFunc_SetFloatValue_NewValue_4, float CallFunc_SetFloatValue_NewValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "PopulateAudioOptions");

	Params::UW_SettingsMenu_C_PopulateAudioOptions_Params Parms{};

	Parms.bIsDesignTime = bIsDesignTime;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetVoiceType_OutVoiceType = CallFunc_GetVoiceType_OutVoiceType;
	Parms.CallFunc_GetVoiceType_ReturnValue = CallFunc_GetVoiceType_ReturnValue;
	Parms.CallFunc_LoadSelectedAudioDevice_OutAudioDevice = CallFunc_LoadSelectedAudioDevice_OutAudioDevice;
	Parms.CallFunc_LoadSelectedAudioDevice_ReturnValue = CallFunc_LoadSelectedAudioDevice_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue = CallFunc_GetReadyOrNotGameInstance_ReturnValue;
	Parms.CallFunc_GetMicInputGain_MicInputGain = CallFunc_GetMicInputGain_MicInputGain;
	Parms.CallFunc_GetMicInputGain_ReturnValue = CallFunc_GetMicInputGain_ReturnValue;
	Parms.CallFunc_GetAvailableAudioDevices_OutAudioDevices = CallFunc_GetAvailableAudioDevices_OutAudioDevices;
	Parms.CallFunc_GetAvailableAudioDevices_ReturnValue = CallFunc_GetAvailableAudioDevices_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue = CallFunc_SetFloatValue_NewValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetVolumes_MasterVolume = CallFunc_GetVolumes_MasterVolume;
	Parms.CallFunc_GetVolumes_UIVolume = CallFunc_GetVolumes_UIVolume;
	Parms.CallFunc_GetVolumes_SFXVolume = CallFunc_GetVolumes_SFXVolume;
	Parms.CallFunc_GetVolumes_MusicVolume = CallFunc_GetVolumes_MusicVolume;
	Parms.CallFunc_GetVolumes_VOIPVolume = CallFunc_GetVolumes_VOIPVolume;
	Parms.CallFunc_GetVolumes_ReturnValue = CallFunc_GetVolumes_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_1 = CallFunc_SetFloatValue_NewValue_1;
	Parms.CallFunc_SetFloatValue_NewValue_2 = CallFunc_SetFloatValue_NewValue_2;
	Parms.CallFunc_SetFloatValue_NewValue_3 = CallFunc_SetFloatValue_NewValue_3;
	Parms.CallFunc_SetFloatValue_NewValue_4 = CallFunc_SetFloatValue_NewValue_4;
	Parms.CallFunc_SetFloatValue_NewValue_5 = CallFunc_SetFloatValue_NewValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.PopulateVideoOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsDesignTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetMotionBlurStrength_Strength                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMotionBlurStrength_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMotionBlurEnabled_bEnabled                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMotionBlurEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMotionBlurStrength_Strength_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMotionBlurStrength_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMotionBlurEnabled_bEnabled_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMotionBlurEnabled_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ENVGStyle               CallFunc_LoadNVGStyle_NVGStyle                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadNVGStyle_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetReflexEnabled_ReflexMode                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetReflexEnabled_bFlashIndicatorEnabled                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexEnabled_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadMirrorEnabledOnlyInLobby_bEnabled                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadMirrorEnabledOnlyInLobby_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexLatencyOptions_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetWorldDecalsEnabled_bEnabled                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDecalsEnabled_FadeDistance                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDecalsEnabled_Density                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWorldDecalsEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetFloatValue_NewValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadTeamViewFPSSetting_bEnabled                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_LoadTeamViewFPSSetting_TeamViewFPS                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadTeamViewFPSSetting_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetFloatValue_NewValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPFPS_bEnabled                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_LoadPiPFPS_FPS                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPFPS_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadMirrorReflectionEnabled_bEnabled                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadMirrorReflectionEnabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetFSRQuality_Quality                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFSRQuality_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFlashlightShadows_bFlashLightShadows                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFlashlightShadows_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetBounceLightEnabled_bBounceLightEnabled               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetBounceLightEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadZoomADSSetting_bZoomADS                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadZoomADSSetting_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetDlssQuality_Quality                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDlssQuality_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_LoadSafeZoneSettings_SafeZoneX                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadSafeZoneSettings_SafeZoneY                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadSafeZoneSettings_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetFloatValue_NewValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatValue_NewValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadSafeZoneSettings_SafeZoneX_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadSafeZoneSettings_SafeZoneY_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadSafeZoneSettings_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetFloatValue_NewValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetIntegralValue_NewValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// int32                              CallFunc_SetIntegralValue_NewValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVSyncEnabled_bEnabled                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetVSyncEnabled_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUseMeshpainting_bUseMeshPainting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUseMeshpainting_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDepthOfFieldSetting_bDoFEnabled                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDepthOfFieldSetting_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWindowMode             CallFunc_GetCurrentScreenMode_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadPiPResolutionScale_ResolutionScale                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPResolutionScale_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadPiPFPS_bEnabled_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_LoadPiPFPS_FPS_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPFPS_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENVGStyle               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_AntiAliasing                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_Effects                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_PostProcess                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVideoQualitySettings_ResolutionScaling               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_Shadow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_Texture                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_ViewDistance                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVideoQualitySettings_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFoV_FOV                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFoV_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentScreenResolution_ReturnValue                  (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetIntegralValue_NewValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPFPS_bEnabled_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_LoadPiPFPS_FPS_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPFPS_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_LoadPiPResolutionScale_ResolutionScale_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPResolutionScale_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatValue_NewValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetIntegralValue_NewValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_AntiAliasing_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_Effects_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_PostProcess_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVideoQualitySettings_ResolutionScaling_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_Shadow_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_Texture_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_ViewDistance_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVideoQualitySettings_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetFloatValue_NewValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::PopulateVideoOptions(bool bIsDesignTime, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_1, const class FString& Temp_string_Variable_2, float CallFunc_GetMotionBlurStrength_Strength, bool CallFunc_GetMotionBlurStrength_ReturnValue, bool CallFunc_GetMotionBlurEnabled_bEnabled, bool CallFunc_GetMotionBlurEnabled_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetMotionBlurStrength_Strength_1, bool CallFunc_GetMotionBlurStrength_ReturnValue_1, bool CallFunc_GetMotionBlurEnabled_bEnabled_1, bool CallFunc_GetMotionBlurEnabled_ReturnValue_1, enum class ENVGStyle CallFunc_LoadNVGStyle_NVGStyle, bool CallFunc_LoadNVGStyle_ReturnValue, uint8 CallFunc_GetReflexEnabled_ReflexMode, bool CallFunc_GetReflexEnabled_bFlashIndicatorEnabled, bool CallFunc_GetReflexEnabled_ReturnValue, bool CallFunc_LoadMirrorEnabledOnlyInLobby_bEnabled, bool CallFunc_LoadMirrorEnabledOnlyInLobby_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled, bool CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled, bool CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled, bool CallFunc_GetReflexLatencyOptions_ReturnValue, bool CallFunc_GetWorldDecalsEnabled_bEnabled, float CallFunc_GetWorldDecalsEnabled_FadeDistance, float CallFunc_GetWorldDecalsEnabled_Density, bool CallFunc_GetWorldDecalsEnabled_ReturnValue, float CallFunc_SetFloatValue_NewValue, bool CallFunc_LoadTeamViewFPSSetting_bEnabled, int32 CallFunc_LoadTeamViewFPSSetting_TeamViewFPS, bool CallFunc_LoadTeamViewFPSSetting_ReturnValue, float CallFunc_SetFloatValue_NewValue_1, bool CallFunc_LoadPiPFPS_bEnabled, float CallFunc_LoadPiPFPS_FPS, bool CallFunc_LoadPiPFPS_ReturnValue, bool CallFunc_LoadMirrorReflectionEnabled_bEnabled, bool CallFunc_LoadMirrorReflectionEnabled_ReturnValue, int32 CallFunc_GetFSRQuality_Quality, bool CallFunc_GetFSRQuality_ReturnValue, const class FString& K2Node_Select_Default, const class FString& K2Node_Select_Default_1, bool CallFunc_GetFlashlightShadows_bFlashLightShadows, bool CallFunc_GetFlashlightShadows_ReturnValue, bool CallFunc_GetBounceLightEnabled_bBounceLightEnabled, bool CallFunc_GetBounceLightEnabled_ReturnValue, bool CallFunc_LoadZoomADSSetting_bZoomADS, bool CallFunc_LoadZoomADSSetting_ReturnValue, int32 CallFunc_GetDlssQuality_Quality, bool CallFunc_GetDlssQuality_ReturnValue, float CallFunc_LoadSafeZoneSettings_SafeZoneX, float CallFunc_LoadSafeZoneSettings_SafeZoneY, bool CallFunc_LoadSafeZoneSettings_ReturnValue, float CallFunc_SetFloatValue_NewValue_2, float CallFunc_SetFloatValue_NewValue_3, float CallFunc_LoadSafeZoneSettings_SafeZoneX_1, float CallFunc_LoadSafeZoneSettings_SafeZoneY_1, bool CallFunc_LoadSafeZoneSettings_ReturnValue_1, float CallFunc_SetFloatValue_NewValue_4, int32 CallFunc_SetIntegralValue_NewValue, bool CallFunc_GetRaytracingSettings_bRTXEnabled, bool CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled, bool CallFunc_GetRaytracingSettings_bRTXShadowsEnabled, bool CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled, bool CallFunc_GetRaytracingSettings_bRTXGlobalIllumination, bool CallFunc_GetRaytracingSettings_bRTXTranslucency, bool CallFunc_GetRaytracingSettings_ReturnValue, int32 CallFunc_GetFrameRateLimit_FrameRateLimit, bool CallFunc_GetFrameRateLimit_bEnabled, bool CallFunc_GetFrameRateLimit_ReturnValue, int32 CallFunc_SetIntegralValue_NewValue_1, bool CallFunc_GetVSyncEnabled_bEnabled, bool CallFunc_GetVSyncEnabled_ReturnValue, bool CallFunc_GetUseMeshpainting_bUseMeshPainting, bool CallFunc_GetUseMeshpainting_ReturnValue, bool CallFunc_GetDepthOfFieldSetting_bDoFEnabled, bool CallFunc_GetDepthOfFieldSetting_ReturnValue, enum class EWindowMode CallFunc_GetCurrentScreenMode_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, float CallFunc_LoadPiPResolutionScale_ResolutionScale, bool CallFunc_LoadPiPResolutionScale_ReturnValue, bool CallFunc_LoadPiPFPS_bEnabled_1, float CallFunc_LoadPiPFPS_FPS_1, bool CallFunc_LoadPiPFPS_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_FTrunc_ReturnValue, int32 Temp_int_Variable_1, enum class ENVGStyle Temp_byte_Variable, int32 CallFunc_GetVideoQualitySettings_AntiAliasing, int32 CallFunc_GetVideoQualitySettings_Effects, int32 CallFunc_GetVideoQualitySettings_PostProcess, float CallFunc_GetVideoQualitySettings_ResolutionScaling, int32 CallFunc_GetVideoQualitySettings_Shadow, int32 CallFunc_GetVideoQualitySettings_Texture, int32 CallFunc_GetVideoQualitySettings_ViewDistance, bool CallFunc_GetVideoQualitySettings_ReturnValue, int32 K2Node_Select_Default_2, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, uint8 CallFunc_GetValidValue_ReturnValue_3, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, uint8 CallFunc_GetValidValue_ReturnValue_4, uint8 CallFunc_Conv_IntToByte_ReturnValue_4, uint8 CallFunc_GetValidValue_ReturnValue_5, uint8 CallFunc_Conv_IntToByte_ReturnValue_5, uint8 CallFunc_GetValidValue_ReturnValue_6, float CallFunc_GetFoV_FOV, bool CallFunc_GetFoV_ReturnValue, const class FString& CallFunc_GetCurrentScreenResolution_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_SetIntegralValue_NewValue_2, bool CallFunc_LoadPiPFPS_bEnabled_2, float CallFunc_LoadPiPFPS_FPS_2, bool CallFunc_LoadPiPFPS_ReturnValue_2, float CallFunc_LoadPiPResolutionScale_ResolutionScale_1, bool CallFunc_LoadPiPResolutionScale_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_2, float CallFunc_SetFloatValue_NewValue_5, int32 CallFunc_SetIntegralValue_NewValue_3, int32 CallFunc_GetVideoQualitySettings_AntiAliasing_1, int32 CallFunc_GetVideoQualitySettings_Effects_1, int32 CallFunc_GetVideoQualitySettings_PostProcess_1, float CallFunc_GetVideoQualitySettings_ResolutionScaling_1, int32 CallFunc_GetVideoQualitySettings_Shadow_1, int32 CallFunc_GetVideoQualitySettings_Texture_1, int32 CallFunc_GetVideoQualitySettings_ViewDistance_1, bool CallFunc_GetVideoQualitySettings_ReturnValue_1, float CallFunc_SetFloatValue_NewValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "PopulateVideoOptions");

	Params::UW_SettingsMenu_C_PopulateVideoOptions_Params Parms{};

	Parms.bIsDesignTime = bIsDesignTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.CallFunc_GetMotionBlurStrength_Strength = CallFunc_GetMotionBlurStrength_Strength;
	Parms.CallFunc_GetMotionBlurStrength_ReturnValue = CallFunc_GetMotionBlurStrength_ReturnValue;
	Parms.CallFunc_GetMotionBlurEnabled_bEnabled = CallFunc_GetMotionBlurEnabled_bEnabled;
	Parms.CallFunc_GetMotionBlurEnabled_ReturnValue = CallFunc_GetMotionBlurEnabled_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetMotionBlurStrength_Strength_1 = CallFunc_GetMotionBlurStrength_Strength_1;
	Parms.CallFunc_GetMotionBlurStrength_ReturnValue_1 = CallFunc_GetMotionBlurStrength_ReturnValue_1;
	Parms.CallFunc_GetMotionBlurEnabled_bEnabled_1 = CallFunc_GetMotionBlurEnabled_bEnabled_1;
	Parms.CallFunc_GetMotionBlurEnabled_ReturnValue_1 = CallFunc_GetMotionBlurEnabled_ReturnValue_1;
	Parms.CallFunc_LoadNVGStyle_NVGStyle = CallFunc_LoadNVGStyle_NVGStyle;
	Parms.CallFunc_LoadNVGStyle_ReturnValue = CallFunc_LoadNVGStyle_ReturnValue;
	Parms.CallFunc_GetReflexEnabled_ReflexMode = CallFunc_GetReflexEnabled_ReflexMode;
	Parms.CallFunc_GetReflexEnabled_bFlashIndicatorEnabled = CallFunc_GetReflexEnabled_bFlashIndicatorEnabled;
	Parms.CallFunc_GetReflexEnabled_ReturnValue = CallFunc_GetReflexEnabled_ReturnValue;
	Parms.CallFunc_LoadMirrorEnabledOnlyInLobby_bEnabled = CallFunc_LoadMirrorEnabledOnlyInLobby_bEnabled;
	Parms.CallFunc_LoadMirrorEnabledOnlyInLobby_ReturnValue = CallFunc_LoadMirrorEnabledOnlyInLobby_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled = CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled;
	Parms.CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled = CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled;
	Parms.CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled = CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled;
	Parms.CallFunc_GetReflexLatencyOptions_ReturnValue = CallFunc_GetReflexLatencyOptions_ReturnValue;
	Parms.CallFunc_GetWorldDecalsEnabled_bEnabled = CallFunc_GetWorldDecalsEnabled_bEnabled;
	Parms.CallFunc_GetWorldDecalsEnabled_FadeDistance = CallFunc_GetWorldDecalsEnabled_FadeDistance;
	Parms.CallFunc_GetWorldDecalsEnabled_Density = CallFunc_GetWorldDecalsEnabled_Density;
	Parms.CallFunc_GetWorldDecalsEnabled_ReturnValue = CallFunc_GetWorldDecalsEnabled_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue = CallFunc_SetFloatValue_NewValue;
	Parms.CallFunc_LoadTeamViewFPSSetting_bEnabled = CallFunc_LoadTeamViewFPSSetting_bEnabled;
	Parms.CallFunc_LoadTeamViewFPSSetting_TeamViewFPS = CallFunc_LoadTeamViewFPSSetting_TeamViewFPS;
	Parms.CallFunc_LoadTeamViewFPSSetting_ReturnValue = CallFunc_LoadTeamViewFPSSetting_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_1 = CallFunc_SetFloatValue_NewValue_1;
	Parms.CallFunc_LoadPiPFPS_bEnabled = CallFunc_LoadPiPFPS_bEnabled;
	Parms.CallFunc_LoadPiPFPS_FPS = CallFunc_LoadPiPFPS_FPS;
	Parms.CallFunc_LoadPiPFPS_ReturnValue = CallFunc_LoadPiPFPS_ReturnValue;
	Parms.CallFunc_LoadMirrorReflectionEnabled_bEnabled = CallFunc_LoadMirrorReflectionEnabled_bEnabled;
	Parms.CallFunc_LoadMirrorReflectionEnabled_ReturnValue = CallFunc_LoadMirrorReflectionEnabled_ReturnValue;
	Parms.CallFunc_GetFSRQuality_Quality = CallFunc_GetFSRQuality_Quality;
	Parms.CallFunc_GetFSRQuality_ReturnValue = CallFunc_GetFSRQuality_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetFlashlightShadows_bFlashLightShadows = CallFunc_GetFlashlightShadows_bFlashLightShadows;
	Parms.CallFunc_GetFlashlightShadows_ReturnValue = CallFunc_GetFlashlightShadows_ReturnValue;
	Parms.CallFunc_GetBounceLightEnabled_bBounceLightEnabled = CallFunc_GetBounceLightEnabled_bBounceLightEnabled;
	Parms.CallFunc_GetBounceLightEnabled_ReturnValue = CallFunc_GetBounceLightEnabled_ReturnValue;
	Parms.CallFunc_LoadZoomADSSetting_bZoomADS = CallFunc_LoadZoomADSSetting_bZoomADS;
	Parms.CallFunc_LoadZoomADSSetting_ReturnValue = CallFunc_LoadZoomADSSetting_ReturnValue;
	Parms.CallFunc_GetDlssQuality_Quality = CallFunc_GetDlssQuality_Quality;
	Parms.CallFunc_GetDlssQuality_ReturnValue = CallFunc_GetDlssQuality_ReturnValue;
	Parms.CallFunc_LoadSafeZoneSettings_SafeZoneX = CallFunc_LoadSafeZoneSettings_SafeZoneX;
	Parms.CallFunc_LoadSafeZoneSettings_SafeZoneY = CallFunc_LoadSafeZoneSettings_SafeZoneY;
	Parms.CallFunc_LoadSafeZoneSettings_ReturnValue = CallFunc_LoadSafeZoneSettings_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_2 = CallFunc_SetFloatValue_NewValue_2;
	Parms.CallFunc_SetFloatValue_NewValue_3 = CallFunc_SetFloatValue_NewValue_3;
	Parms.CallFunc_LoadSafeZoneSettings_SafeZoneX_1 = CallFunc_LoadSafeZoneSettings_SafeZoneX_1;
	Parms.CallFunc_LoadSafeZoneSettings_SafeZoneY_1 = CallFunc_LoadSafeZoneSettings_SafeZoneY_1;
	Parms.CallFunc_LoadSafeZoneSettings_ReturnValue_1 = CallFunc_LoadSafeZoneSettings_ReturnValue_1;
	Parms.CallFunc_SetFloatValue_NewValue_4 = CallFunc_SetFloatValue_NewValue_4;
	Parms.CallFunc_SetIntegralValue_NewValue = CallFunc_SetIntegralValue_NewValue;
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
	Parms.CallFunc_SetIntegralValue_NewValue_1 = CallFunc_SetIntegralValue_NewValue_1;
	Parms.CallFunc_GetVSyncEnabled_bEnabled = CallFunc_GetVSyncEnabled_bEnabled;
	Parms.CallFunc_GetVSyncEnabled_ReturnValue = CallFunc_GetVSyncEnabled_ReturnValue;
	Parms.CallFunc_GetUseMeshpainting_bUseMeshPainting = CallFunc_GetUseMeshpainting_bUseMeshPainting;
	Parms.CallFunc_GetUseMeshpainting_ReturnValue = CallFunc_GetUseMeshpainting_ReturnValue;
	Parms.CallFunc_GetDepthOfFieldSetting_bDoFEnabled = CallFunc_GetDepthOfFieldSetting_bDoFEnabled;
	Parms.CallFunc_GetDepthOfFieldSetting_ReturnValue = CallFunc_GetDepthOfFieldSetting_ReturnValue;
	Parms.CallFunc_GetCurrentScreenMode_ReturnValue = CallFunc_GetCurrentScreenMode_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_LoadPiPResolutionScale_ResolutionScale = CallFunc_LoadPiPResolutionScale_ResolutionScale;
	Parms.CallFunc_LoadPiPResolutionScale_ReturnValue = CallFunc_LoadPiPResolutionScale_ReturnValue;
	Parms.CallFunc_LoadPiPFPS_bEnabled_1 = CallFunc_LoadPiPFPS_bEnabled_1;
	Parms.CallFunc_LoadPiPFPS_FPS_1 = CallFunc_LoadPiPFPS_FPS_1;
	Parms.CallFunc_LoadPiPFPS_ReturnValue_1 = CallFunc_LoadPiPFPS_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetVideoQualitySettings_AntiAliasing = CallFunc_GetVideoQualitySettings_AntiAliasing;
	Parms.CallFunc_GetVideoQualitySettings_Effects = CallFunc_GetVideoQualitySettings_Effects;
	Parms.CallFunc_GetVideoQualitySettings_PostProcess = CallFunc_GetVideoQualitySettings_PostProcess;
	Parms.CallFunc_GetVideoQualitySettings_ResolutionScaling = CallFunc_GetVideoQualitySettings_ResolutionScaling;
	Parms.CallFunc_GetVideoQualitySettings_Shadow = CallFunc_GetVideoQualitySettings_Shadow;
	Parms.CallFunc_GetVideoQualitySettings_Texture = CallFunc_GetVideoQualitySettings_Texture;
	Parms.CallFunc_GetVideoQualitySettings_ViewDistance = CallFunc_GetVideoQualitySettings_ViewDistance;
	Parms.CallFunc_GetVideoQualitySettings_ReturnValue = CallFunc_GetVideoQualitySettings_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue_2 = CallFunc_GetValidValue_ReturnValue_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_GetValidValue_ReturnValue_3 = CallFunc_GetValidValue_ReturnValue_3;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_3 = CallFunc_Conv_IntToByte_ReturnValue_3;
	Parms.CallFunc_GetValidValue_ReturnValue_4 = CallFunc_GetValidValue_ReturnValue_4;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_4 = CallFunc_Conv_IntToByte_ReturnValue_4;
	Parms.CallFunc_GetValidValue_ReturnValue_5 = CallFunc_GetValidValue_ReturnValue_5;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_5 = CallFunc_Conv_IntToByte_ReturnValue_5;
	Parms.CallFunc_GetValidValue_ReturnValue_6 = CallFunc_GetValidValue_ReturnValue_6;
	Parms.CallFunc_GetFoV_FOV = CallFunc_GetFoV_FOV;
	Parms.CallFunc_GetFoV_ReturnValue = CallFunc_GetFoV_ReturnValue;
	Parms.CallFunc_GetCurrentScreenResolution_ReturnValue = CallFunc_GetCurrentScreenResolution_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_SetIntegralValue_NewValue_2 = CallFunc_SetIntegralValue_NewValue_2;
	Parms.CallFunc_LoadPiPFPS_bEnabled_2 = CallFunc_LoadPiPFPS_bEnabled_2;
	Parms.CallFunc_LoadPiPFPS_FPS_2 = CallFunc_LoadPiPFPS_FPS_2;
	Parms.CallFunc_LoadPiPFPS_ReturnValue_2 = CallFunc_LoadPiPFPS_ReturnValue_2;
	Parms.CallFunc_LoadPiPResolutionScale_ResolutionScale_1 = CallFunc_LoadPiPResolutionScale_ResolutionScale_1;
	Parms.CallFunc_LoadPiPResolutionScale_ReturnValue_1 = CallFunc_LoadPiPResolutionScale_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.CallFunc_SetFloatValue_NewValue_5 = CallFunc_SetFloatValue_NewValue_5;
	Parms.CallFunc_SetIntegralValue_NewValue_3 = CallFunc_SetIntegralValue_NewValue_3;
	Parms.CallFunc_GetVideoQualitySettings_AntiAliasing_1 = CallFunc_GetVideoQualitySettings_AntiAliasing_1;
	Parms.CallFunc_GetVideoQualitySettings_Effects_1 = CallFunc_GetVideoQualitySettings_Effects_1;
	Parms.CallFunc_GetVideoQualitySettings_PostProcess_1 = CallFunc_GetVideoQualitySettings_PostProcess_1;
	Parms.CallFunc_GetVideoQualitySettings_ResolutionScaling_1 = CallFunc_GetVideoQualitySettings_ResolutionScaling_1;
	Parms.CallFunc_GetVideoQualitySettings_Shadow_1 = CallFunc_GetVideoQualitySettings_Shadow_1;
	Parms.CallFunc_GetVideoQualitySettings_Texture_1 = CallFunc_GetVideoQualitySettings_Texture_1;
	Parms.CallFunc_GetVideoQualitySettings_ViewDistance_1 = CallFunc_GetVideoQualitySettings_ViewDistance_1;
	Parms.CallFunc_GetVideoQualitySettings_ReturnValue_1 = CallFunc_GetVideoQualitySettings_ReturnValue_1;
	Parms.CallFunc_SetFloatValue_NewValue_6 = CallFunc_SetFloatValue_NewValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.ConstructControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenu_C::ConstructControls()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "ConstructControls");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenu.W_SettingsMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "PreConstruct");

	Params::UW_SettingsMenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_SettingsMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenu.W_SettingsMenu_C.AddControlsToGridPanel
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSKeybinding>        Bindings                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UGridPanel*                  Grid_Panel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::AddControlsToGridPanel(TArray<struct FSKeybinding>& Bindings, class UGridPanel* Grid_Panel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "AddControlsToGridPanel");

	Params::UW_SettingsMenu_C_AddControlsToGridPanel_Params Parms{};

	Parms.Bindings = Bindings;
	Parms.Grid_Panel = Grid_Panel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Slider_IconScale_K2Node_ComponentBoundEvent_0_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Options_Slider_IconScale_K2Node_ComponentBoundEvent_0_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Slider_IconScale_K2Node_ComponentBoundEvent_0_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Slider_IconScale_K2Node_ComponentBoundEvent_0_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowFPS_K2Node_ComponentBoundEvent_1_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowFPS_K2Node_ComponentBoundEvent_1_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Checkbox_ShowFPS_K2Node_ComponentBoundEvent_1_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Checkbox_ShowFPS_K2Node_ComponentBoundEvent_1_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowHUD_K2Node_ComponentBoundEvent_2_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowHUD_K2Node_ComponentBoundEvent_2_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Checkbox_ShowHUD_K2Node_ComponentBoundEvent_2_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Checkbox_ShowHUD_K2Node_ComponentBoundEvent_2_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_SwayHUD_K2Node_ComponentBoundEvent_3_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__Options_Checkbox_SwayHUD_K2Node_ComponentBoundEvent_3_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Checkbox_SwayHUD_K2Node_ComponentBoundEvent_3_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Checkbox_SwayHUD_K2Node_ComponentBoundEvent_3_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowChat_K2Node_ComponentBoundEvent_4_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowChat_K2Node_ComponentBoundEvent_4_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Checkbox_ShowChat_K2Node_ComponentBoundEvent_4_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Checkbox_ShowChat_K2Node_ComponentBoundEvent_4_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowNames_K2Node_ComponentBoundEvent_5_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowNames_K2Node_ComponentBoundEvent_5_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Checkbox_ShowNames_K2Node_ComponentBoundEvent_5_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Checkbox_ShowNames_K2Node_ComponentBoundEvent_5_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowHints_K2Node_ComponentBoundEvent_7_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowHints_K2Node_ComponentBoundEvent_7_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Checkbox_ShowHints_K2Node_ComponentBoundEvent_7_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Checkbox_ShowHints_K2Node_ComponentBoundEvent_7_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_StaticReload_K2Node_ComponentBoundEvent_8_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__Options_Checkbox_StaticReload_K2Node_ComponentBoundEvent_8_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Checkbox_StaticReload_K2Node_ComponentBoundEvent_8_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Checkbox_StaticReload_K2Node_ComponentBoundEvent_8_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowCompass_K2Node_ComponentBoundEvent_9_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowCompass_K2Node_ComponentBoundEvent_9_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Checkbox_ShowCompass_K2Node_ComponentBoundEvent_9_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Checkbox_ShowCompass_K2Node_ComponentBoundEvent_9_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Audio_Slider_MasterVolume_K2Node_ComponentBoundEvent_10_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Audio_Slider_MasterVolume_K2Node_ComponentBoundEvent_10_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Audio_Slider_MasterVolume_K2Node_ComponentBoundEvent_10_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Audio_Slider_MasterVolume_K2Node_ComponentBoundEvent_10_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Audio_Slider_SFXVolume_K2Node_ComponentBoundEvent_11_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Audio_Slider_SFXVolume_K2Node_ComponentBoundEvent_11_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Audio_Slider_SFXVolume_K2Node_ComponentBoundEvent_11_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Audio_Slider_SFXVolume_K2Node_ComponentBoundEvent_11_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Audio_Slider_UIVolume_K2Node_ComponentBoundEvent_12_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Audio_Slider_UIVolume_K2Node_ComponentBoundEvent_12_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Audio_Slider_UIVolume_K2Node_ComponentBoundEvent_12_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Audio_Slider_UIVolume_K2Node_ComponentBoundEvent_12_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Audio_Slider_MusicVolume_K2Node_ComponentBoundEvent_13_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Audio_Slider_MusicVolume_K2Node_ComponentBoundEvent_13_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Audio_Slider_MusicVolume_K2Node_ComponentBoundEvent_13_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Audio_Slider_MusicVolume_K2Node_ComponentBoundEvent_13_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Audio_Slider_VOIPVolume_K2Node_ComponentBoundEvent_14_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Audio_Slider_VOIPVolume_K2Node_ComponentBoundEvent_14_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Audio_Slider_VOIPVolume_K2Node_ComponentBoundEvent_14_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Audio_Slider_VOIPVolume_K2Node_ComponentBoundEvent_14_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__SimpleGraphics_Slider_Resolution_K2Node_ComponentBoundEvent_19_OnResolutionValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      NewResolutionValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__SimpleGraphics_Slider_Resolution_K2Node_ComponentBoundEvent_19_OnResolutionValueChanged__DelegateSignature(const class FString& NewResolutionValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__SimpleGraphics_Slider_Resolution_K2Node_ComponentBoundEvent_19_OnResolutionValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__SimpleGraphics_Slider_Resolution_K2Node_ComponentBoundEvent_19_OnResolutionValueChanged__DelegateSignature_Params Parms{};

	Parms.NewResolutionValue = NewResolutionValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__SimpleGraphics_Slider_FieldOfView_K2Node_ComponentBoundEvent_21_OnIntegralValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__SimpleGraphics_Slider_FieldOfView_K2Node_ComponentBoundEvent_21_OnIntegralValueChanged__DelegateSignature(int32 NewIntegerValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__SimpleGraphics_Slider_FieldOfView_K2Node_ComponentBoundEvent_21_OnIntegralValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__SimpleGraphics_Slider_FieldOfView_K2Node_ComponentBoundEvent_21_OnIntegralValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_TextureQuality_K2Node_ComponentBoundEvent_22_OnQualityValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__AdvGraphics_Slider_TextureQuality_K2Node_ComponentBoundEvent_22_OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__AdvGraphics_Slider_TextureQuality_K2Node_ComponentBoundEvent_22_OnQualityValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__AdvGraphics_Slider_TextureQuality_K2Node_ComponentBoundEvent_22_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_ShadowQuality_K2Node_ComponentBoundEvent_23_OnQualityValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__AdvGraphics_Slider_ShadowQuality_K2Node_ComponentBoundEvent_23_OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__AdvGraphics_Slider_ShadowQuality_K2Node_ComponentBoundEvent_23_OnQualityValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__AdvGraphics_Slider_ShadowQuality_K2Node_ComponentBoundEvent_23_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_PPQuality_K2Node_ComponentBoundEvent_24_OnQualityValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__AdvGraphics_Slider_PPQuality_K2Node_ComponentBoundEvent_24_OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__AdvGraphics_Slider_PPQuality_K2Node_ComponentBoundEvent_24_OnQualityValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__AdvGraphics_Slider_PPQuality_K2Node_ComponentBoundEvent_24_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_AAQuality_K2Node_ComponentBoundEvent_25_OnQualityValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__AdvGraphics_Slider_AAQuality_K2Node_ComponentBoundEvent_25_OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__AdvGraphics_Slider_AAQuality_K2Node_ComponentBoundEvent_25_OnQualityValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__AdvGraphics_Slider_AAQuality_K2Node_ComponentBoundEvent_25_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_EffectsQuality_K2Node_ComponentBoundEvent_26_OnQualityValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__AdvGraphics_Slider_EffectsQuality_K2Node_ComponentBoundEvent_26_OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__AdvGraphics_Slider_EffectsQuality_K2Node_ComponentBoundEvent_26_OnQualityValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__AdvGraphics_Slider_EffectsQuality_K2Node_ComponentBoundEvent_26_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_ViewDistance_K2Node_ComponentBoundEvent_27_OnQualityValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__AdvGraphics_Slider_ViewDistance_K2Node_ComponentBoundEvent_27_OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__AdvGraphics_Slider_ViewDistance_K2Node_ComponentBoundEvent_27_OnQualityValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__AdvGraphics_Slider_ViewDistance_K2Node_ComponentBoundEvent_27_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_OptiwandFPS_K2Node_ComponentBoundEvent_28_OnIntegralValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__AdvGraphics_Slider_OptiwandFPS_K2Node_ComponentBoundEvent_28_OnIntegralValueChanged__DelegateSignature(int32 NewIntegerValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__AdvGraphics_Slider_OptiwandFPS_K2Node_ComponentBoundEvent_28_OnIntegralValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__AdvGraphics_Slider_OptiwandFPS_K2Node_ComponentBoundEvent_28_OnIntegralValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_OptiwandScale_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__AdvGraphics_Slider_OptiwandScale_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__AdvGraphics_Slider_OptiwandScale_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__AdvGraphics_Slider_OptiwandScale_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_32_OnOkClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_SettingsMenu_C::BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_32_OnOkClicked__DelegateSignature(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_32_OnOkClicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_32_OnOkClicked__DelegateSignature_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_33_OnCancelClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_33_OnCancelClicked__DelegateSignature(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_33_OnCancelClicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_33_OnCancelClicked__DelegateSignature_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_34_OnApplyClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_SettingsMenu_C::BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_34_OnApplyClicked__DelegateSignature(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_34_OnApplyClicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_34_OnApplyClicked__DelegateSignature_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.Exit Menu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenu_C::Exit_Menu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "Exit Menu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenu.W_SettingsMenu_C.Apply Video Settings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenu_C::Apply_Video_Settings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "Apply Video Settings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_StandardCombobox_New_K2Node_ComponentBoundEvent_17_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__W_StandardCombobox_New_K2Node_ComponentBoundEvent_17_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_StandardCombobox_New_K2Node_ComponentBoundEvent_17_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_StandardCombobox_New_K2Node_ComponentBoundEvent_17_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_StandardCombobox_New_K2Node_ComponentBoundEvent_18_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__W_StandardCombobox_New_K2Node_ComponentBoundEvent_18_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_StandardCombobox_New_K2Node_ComponentBoundEvent_18_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_StandardCombobox_New_K2Node_ComponentBoundEvent_18_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Tab_BasicGraphicOptions_K2Node_ComponentBoundEvent_45_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_StandardButton_C*         CallingButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Tab_BasicGraphicOptions_K2Node_ComponentBoundEvent_45_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Tab_BasicGraphicOptions_K2Node_ComponentBoundEvent_45_OnClicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Tab_BasicGraphicOptions_K2Node_ComponentBoundEvent_45_OnClicked__DelegateSignature_Params Parms{};

	Parms.CallingButton = CallingButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Tab_AdvancedGraphicOptions_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_StandardButton_C*         CallingButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Tab_AdvancedGraphicOptions_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Tab_AdvancedGraphicOptions_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Tab_AdvancedGraphicOptions_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature_Params Parms{};

	Parms.CallingButton = CallingButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Textbox_OfficerName_K2Node_ComponentBoundEvent_47_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Options_Textbox_OfficerName_K2Node_ComponentBoundEvent_47_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Textbox_OfficerName_K2Node_ComponentBoundEvent_47_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Textbox_OfficerName_K2Node_ComponentBoundEvent_47_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.On Binding Started
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           CallingWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::On_Binding_Started(class UW_ControlsBind_C* CallingWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "On Binding Started");

	Params::UW_SettingsMenu_C_On_Binding_Started_Params Parms{};

	Parms.CallingWidget = CallingWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.On Binding Canceled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           CallingWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::On_Binding_Canceled(class UW_ControlsBind_C* CallingWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "On Binding Canceled");

	Params::UW_SettingsMenu_C_On_Binding_Canceled_Params Parms{};

	Parms.CallingWidget = CallingWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.On Binding Committed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           CallingWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        NewKey                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_SettingsMenu_C::On_Binding_Committed(class UW_ControlsBind_C* CallingWidget, const struct FKey& NewKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "On Binding Committed");

	Params::UW_SettingsMenu_C_On_Binding_Committed_Params Parms{};

	Parms.CallingWidget = CallingWidget;
	Parms.NewKey = NewKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.End Buttons Disabled For Binding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenu_C::End_Buttons_Disabled_For_Binding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "End Buttons Disabled For Binding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_InvertMousePitch_K2Node_ComponentBoundEvent_50_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__Options_Checkbox_InvertMousePitch_K2Node_ComponentBoundEvent_50_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Checkbox_InvertMousePitch_K2Node_ComponentBoundEvent_50_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Checkbox_InvertMousePitch_K2Node_ComponentBoundEvent_50_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_InvertMouseYaw_K2Node_ComponentBoundEvent_51_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__Options_Checkbox_InvertMouseYaw_K2Node_ComponentBoundEvent_51_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Checkbox_InvertMouseYaw_K2Node_ComponentBoundEvent_51_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Checkbox_InvertMouseYaw_K2Node_ComponentBoundEvent_51_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_Language_K2Node_ComponentBoundEvent_53_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Options_Combo_Language_K2Node_ComponentBoundEvent_53_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Combo_Language_K2Node_ComponentBoundEvent_53_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Combo_Language_K2Node_ComponentBoundEvent_53_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.Conflicting Bind Detected
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           CallingBind                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActionMappingStruct>ActionMappings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FAxisMappingStruct>  AxisMappings                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<class FText>                ConflictBindsText                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_SettingsMenu_C::Conflicting_Bind_Detected(class UW_ControlsBind_C* CallingBind, TArray<struct FActionMappingStruct>& ActionMappings, TArray<struct FAxisMappingStruct>& AxisMappings, const struct FKey& Key, TArray<class FText>& ConflictBindsText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "Conflicting Bind Detected");

	Params::UW_SettingsMenu_C_Conflicting_Bind_Detected_Params Parms{};

	Parms.CallingBind = CallingBind;
	Parms.ActionMappings = ActionMappings;
	Parms.AxisMappings = AxisMappings;
	Parms.Key = Key;
	Parms.ConflictBindsText = ConflictBindsText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_DepthOfFieldChoice_K2Node_ComponentBoundEvent_55_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__W_DepthOfFieldChoice_K2Node_ComponentBoundEvent_55_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_DepthOfFieldChoice_K2Node_ComponentBoundEvent_55_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_DepthOfFieldChoice_K2Node_ComponentBoundEvent_55_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_MeshPaitingChoice_K2Node_ComponentBoundEvent_56_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__W_MeshPaitingChoice_K2Node_ComponentBoundEvent_56_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_MeshPaitingChoice_K2Node_ComponentBoundEvent_56_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_MeshPaitingChoice_K2Node_ComponentBoundEvent_56_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__SimpleGraphics_Slider_ResolutionScale_K2Node_ComponentBoundEvent_57_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__SimpleGraphics_Slider_ResolutionScale_K2Node_ComponentBoundEvent_57_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__SimpleGraphics_Slider_ResolutionScale_K2Node_ComponentBoundEvent_57_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__SimpleGraphics_Slider_ResolutionScale_K2Node_ComponentBoundEvent_57_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_Controls_K2Node_ComponentBoundEvent_58_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__Options_Checkbox_Controls_K2Node_ComponentBoundEvent_58_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Checkbox_Controls_K2Node_ComponentBoundEvent_58_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Checkbox_Controls_K2Node_ComponentBoundEvent_58_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_SettingsMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_VSync_K2Node_ComponentBoundEvent_59_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__AdvGraphics_Check_VSync_K2Node_ComponentBoundEvent_59_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__AdvGraphics_Check_VSync_K2Node_ComponentBoundEvent_59_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__AdvGraphics_Check_VSync_K2Node_ComponentBoundEvent_59_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_FrameLimiter_K2Node_ComponentBoundEvent_60_OnIntegralValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__AdvGraphics_Slider_FrameLimiter_K2Node_ComponentBoundEvent_60_OnIntegralValueChanged__DelegateSignature(int32 NewIntegerValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__AdvGraphics_Slider_FrameLimiter_K2Node_ComponentBoundEvent_60_OnIntegralValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__AdvGraphics_Slider_FrameLimiter_K2Node_ComponentBoundEvent_60_OnIntegralValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_Raytracing_K2Node_ComponentBoundEvent_61_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__AdvGraphics_Check_Raytracing_K2Node_ComponentBoundEvent_61_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__AdvGraphics_Check_Raytracing_K2Node_ComponentBoundEvent_61_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__AdvGraphics_Check_Raytracing_K2Node_ComponentBoundEvent_61_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_RaytracingShadows_K2Node_ComponentBoundEvent_62_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__AdvGraphics_Check_RaytracingShadows_K2Node_ComponentBoundEvent_62_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__AdvGraphics_Check_RaytracingShadows_K2Node_ComponentBoundEvent_62_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__AdvGraphics_Check_RaytracingShadows_K2Node_ComponentBoundEvent_62_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_RaytracingReflections_K2Node_ComponentBoundEvent_63_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__AdvGraphics_Check_RaytracingReflections_K2Node_ComponentBoundEvent_63_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__AdvGraphics_Check_RaytracingReflections_K2Node_ComponentBoundEvent_63_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__AdvGraphics_Check_RaytracingReflections_K2Node_ComponentBoundEvent_63_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_RaytracingAmbientOcclusion_K2Node_ComponentBoundEvent_64_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__AdvGraphics_Check_RaytracingAmbientOcclusion_K2Node_ComponentBoundEvent_64_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__AdvGraphics_Check_RaytracingAmbientOcclusion_K2Node_ComponentBoundEvent_64_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__AdvGraphics_Check_RaytracingAmbientOcclusion_K2Node_ComponentBoundEvent_64_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__FrameLimitEnabledCheckbox_K2Node_ComponentBoundEvent_65_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__FrameLimitEnabledCheckbox_K2Node_ComponentBoundEvent_65_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__FrameLimitEnabledCheckbox_K2Node_ComponentBoundEvent_65_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__FrameLimitEnabledCheckbox_K2Node_ComponentBoundEvent_65_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_RaytracingGlobalIllumination_K2Node_ComponentBoundEvent_66_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__AdvGraphics_Check_RaytracingGlobalIllumination_K2Node_ComponentBoundEvent_66_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__AdvGraphics_Check_RaytracingGlobalIllumination_K2Node_ComponentBoundEvent_66_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__AdvGraphics_Check_RaytracingGlobalIllumination_K2Node_ComponentBoundEvent_66_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_RaytracingTranslucency_K2Node_ComponentBoundEvent_67_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__AdvGraphics_Check_RaytracingTranslucency_K2Node_ComponentBoundEvent_67_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__AdvGraphics_Check_RaytracingTranslucency_K2Node_ComponentBoundEvent_67_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__AdvGraphics_Check_RaytracingTranslucency_K2Node_ComponentBoundEvent_67_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Slider_QuickThrowScale_K2Node_ComponentBoundEvent_68_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Options_Slider_QuickThrowScale_K2Node_ComponentBoundEvent_68_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Slider_QuickThrowScale_K2Node_ComponentBoundEvent_68_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Slider_QuickThrowScale_K2Node_ComponentBoundEvent_68_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_GrenadeStyle_K2Node_ComponentBoundEvent_69_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Options_Combo_GrenadeStyle_K2Node_ComponentBoundEvent_69_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Combo_GrenadeStyle_K2Node_ComponentBoundEvent_69_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Combo_GrenadeStyle_K2Node_ComponentBoundEvent_69_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_ShotgunReloadStyle_K2Node_ComponentBoundEvent_70_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Options_Combo_ShotgunReloadStyle_K2Node_ComponentBoundEvent_70_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Combo_ShotgunReloadStyle_K2Node_ComponentBoundEvent_70_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Combo_ShotgunReloadStyle_K2Node_ComponentBoundEvent_70_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_MotionBlurEnable_K2Node_ComponentBoundEvent_76_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__AdvGraphics_Check_MotionBlurEnable_K2Node_ComponentBoundEvent_76_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__AdvGraphics_Check_MotionBlurEnable_K2Node_ComponentBoundEvent_76_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__AdvGraphics_Check_MotionBlurEnable_K2Node_ComponentBoundEvent_76_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Audio_Checkbox_DisableHitmarker_K2Node_ComponentBoundEvent_77_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__Audio_Checkbox_DisableHitmarker_K2Node_ComponentBoundEvent_77_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Audio_Checkbox_DisableHitmarker_K2Node_ComponentBoundEvent_77_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Audio_Checkbox_DisableHitmarker_K2Node_ComponentBoundEvent_77_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_ItemSelectionStyle_K2Node_ComponentBoundEvent_80_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Options_Combo_ItemSelectionStyle_K2Node_ComponentBoundEvent_80_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Combo_ItemSelectionStyle_K2Node_ComponentBoundEvent_80_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Combo_ItemSelectionStyle_K2Node_ComponentBoundEvent_80_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_CurvedHUD_K2Node_ComponentBoundEvent_81_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__Options_Checkbox_CurvedHUD_K2Node_ComponentBoundEvent_81_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Checkbox_CurvedHUD_K2Node_ComponentBoundEvent_81_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Checkbox_CurvedHUD_K2Node_ComponentBoundEvent_81_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__SimpleGraphics_Slider_SafeZone_X_K2Node_ComponentBoundEvent_82_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__SimpleGraphics_Slider_SafeZone_X_K2Node_ComponentBoundEvent_82_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__SimpleGraphics_Slider_SafeZone_X_K2Node_ComponentBoundEvent_82_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__SimpleGraphics_Slider_SafeZone_X_K2Node_ComponentBoundEvent_82_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__SimpleGraphics_Slider_SafeZone_Y_K2Node_ComponentBoundEvent_83_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__SimpleGraphics_Slider_SafeZone_Y_K2Node_ComponentBoundEvent_83_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__SimpleGraphics_Slider_SafeZone_Y_K2Node_ComponentBoundEvent_83_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__SimpleGraphics_Slider_SafeZone_Y_K2Node_ComponentBoundEvent_83_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_DLSSQuality_K2Node_ComponentBoundEvent_84_OnDlssValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__AdvGraphics_Slider_DLSSQuality_K2Node_ComponentBoundEvent_84_OnDlssValueChanged__DelegateSignature(int32 NewIntegerValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__AdvGraphics_Slider_DLSSQuality_K2Node_ComponentBoundEvent_84_OnDlssValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__AdvGraphics_Slider_DLSSQuality_K2Node_ComponentBoundEvent_84_OnDlssValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_FireModeStyle_K2Node_ComponentBoundEvent_85_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Options_Combo_FireModeStyle_K2Node_ComponentBoundEvent_85_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Combo_FireModeStyle_K2Node_ComponentBoundEvent_85_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Combo_FireModeStyle_K2Node_ComponentBoundEvent_85_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Slider_TeamView_PIP_FPS_K2Node_ComponentBoundEvent_86_OnIntegralValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Options_Slider_TeamView_PIP_FPS_K2Node_ComponentBoundEvent_86_OnIntegralValueChanged__DelegateSignature(int32 NewIntegerValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Slider_TeamView_PIP_FPS_K2Node_ComponentBoundEvent_86_OnIntegralValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Slider_TeamView_PIP_FPS_K2Node_ComponentBoundEvent_86_OnIntegralValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.DisplayNoKeysBoundWarning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenu_C::DisplayNoKeysBoundWarning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "DisplayNoKeysBoundWarning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenu.W_SettingsMenu_C.Conflicting Bind Ok Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_SettingsMenu_C::Conflicting_Bind_Ok_Clicked(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "Conflicting Bind Ok Clicked");

	Params::UW_SettingsMenu_C_Conflicting_Bind_Ok_Clicked_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.Conflicting Bind Cancel Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::Conflicting_Bind_Cancel_Clicked(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "Conflicting Bind Cancel Clicked");

	Params::UW_SettingsMenu_C_Conflicting_Bind_Cancel_Clicked_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.InitialisePopUps
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenu_C::InitialisePopUps()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "InitialisePopUps");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenu.W_SettingsMenu_C.OnCancelIllegalBindClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::OnCancelIllegalBindClicked(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "OnCancelIllegalBindClicked");

	Params::UW_SettingsMenu_C_OnCancelIllegalBindClicked_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_ScoreReadoutMode_K2Node_ComponentBoundEvent_54_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Options_Combo_ScoreReadoutMode_K2Node_ComponentBoundEvent_54_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Combo_ScoreReadoutMode_K2Node_ComponentBoundEvent_54_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Combo_ScoreReadoutMode_K2Node_ComponentBoundEvent_54_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowHealthIcons_K2Node_ComponentBoundEvent_71_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowHealthIcons_K2Node_ComponentBoundEvent_71_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Checkbox_ShowHealthIcons_K2Node_ComponentBoundEvent_71_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Checkbox_ShowHealthIcons_K2Node_ComponentBoundEvent_71_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowHotkeys_K2Node_ComponentBoundEvent_72_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowHotkeys_K2Node_ComponentBoundEvent_72_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Checkbox_ShowHotkeys_K2Node_ComponentBoundEvent_72_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Checkbox_ShowHotkeys_K2Node_ComponentBoundEvent_72_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_73_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Options_Combo_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_73_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Combo_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_73_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Combo_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_73_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_74_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Options_Combo_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_74_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Combo_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_74_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Combo_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_74_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_UnlockedDoorCommand_K2Node_ComponentBoundEvent_75_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Options_Combo_UnlockedDoorCommand_K2Node_ComponentBoundEvent_75_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Combo_UnlockedDoorCommand_K2Node_ComponentBoundEvent_75_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Combo_UnlockedDoorCommand_K2Node_ComponentBoundEvent_75_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_LockedDoorcommand_K2Node_ComponentBoundEvent_88_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Options_Combo_LockedDoorcommand_K2Node_ComponentBoundEvent_88_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Combo_LockedDoorcommand_K2Node_ComponentBoundEvent_88_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Combo_LockedDoorcommand_K2Node_ComponentBoundEvent_88_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_DefaultTargetCommand_K2Node_ComponentBoundEvent_89_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Options_Combo_DefaultTargetCommand_K2Node_ComponentBoundEvent_89_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Combo_DefaultTargetCommand_K2Node_ComponentBoundEvent_89_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Combo_DefaultTargetCommand_K2Node_ComponentBoundEvent_89_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_90_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Options_Combo_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_90_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Combo_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_90_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Combo_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_90_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_GameOptions_K2Node_ComponentBoundEvent_91_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__btn_GameOptions_K2Node_ComponentBoundEvent_91_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__btn_GameOptions_K2Node_ComponentBoundEvent_91_Clicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__btn_GameOptions_K2Node_ComponentBoundEvent_91_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_GraphicsOptions_K2Node_ComponentBoundEvent_93_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__btn_GraphicsOptions_K2Node_ComponentBoundEvent_93_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__btn_GraphicsOptions_K2Node_ComponentBoundEvent_93_Clicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__btn_GraphicsOptions_K2Node_ComponentBoundEvent_93_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_AudioOptions_K2Node_ComponentBoundEvent_95_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__btn_AudioOptions_K2Node_ComponentBoundEvent_95_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__btn_AudioOptions_K2Node_ComponentBoundEvent_95_Clicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__btn_AudioOptions_K2Node_ComponentBoundEvent_95_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlOptions_K2Node_ComponentBoundEvent_97_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__btn_ControlOptions_K2Node_ComponentBoundEvent_97_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__btn_ControlOptions_K2Node_ComponentBoundEvent_97_Clicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__btn_ControlOptions_K2Node_ComponentBoundEvent_97_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_Reset_K2Node_ComponentBoundEvent_30_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__btn_Reset_K2Node_ComponentBoundEvent_30_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__btn_Reset_K2Node_ComponentBoundEvent_30_Clicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__btn_Reset_K2Node_ComponentBoundEvent_30_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_Apply_K2Node_ComponentBoundEvent_37_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__btn_Apply_K2Node_ComponentBoundEvent_37_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__btn_Apply_K2Node_ComponentBoundEvent_37_Clicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__btn_Apply_K2Node_ComponentBoundEvent_37_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_Exit_K2Node_ComponentBoundEvent_92_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__btn_Exit_K2Node_ComponentBoundEvent_92_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__btn_Exit_K2Node_ComponentBoundEvent_92_Clicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__btn_Exit_K2Node_ComponentBoundEvent_92_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlsMisc_K2Node_ComponentBoundEvent_96_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__btn_ControlsMisc_K2Node_ComponentBoundEvent_96_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__btn_ControlsMisc_K2Node_ComponentBoundEvent_96_Clicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__btn_ControlsMisc_K2Node_ComponentBoundEvent_96_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlsTeamwork_K2Node_ComponentBoundEvent_99_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__btn_ControlsTeamwork_K2Node_ComponentBoundEvent_99_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__btn_ControlsTeamwork_K2Node_ComponentBoundEvent_99_Clicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__btn_ControlsTeamwork_K2Node_ComponentBoundEvent_99_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlsMovement_K2Node_ComponentBoundEvent_100_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__btn_ControlsMovement_K2Node_ComponentBoundEvent_100_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__btn_ControlsMovement_K2Node_ComponentBoundEvent_100_Clicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__btn_ControlsMovement_K2Node_ComponentBoundEvent_100_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlsInteraction_K2Node_ComponentBoundEvent_101_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__btn_ControlsInteraction_K2Node_ComponentBoundEvent_101_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__btn_ControlsInteraction_K2Node_ComponentBoundEvent_101_Clicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__btn_ControlsInteraction_K2Node_ComponentBoundEvent_101_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlsEquipment_K2Node_ComponentBoundEvent_102_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__btn_ControlsEquipment_K2Node_ComponentBoundEvent_102_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__btn_ControlsEquipment_K2Node_ComponentBoundEvent_102_Clicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__btn_ControlsEquipment_K2Node_ComponentBoundEvent_102_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlsVehicle_K2Node_ComponentBoundEvent_107_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__btn_ControlsVehicle_K2Node_ComponentBoundEvent_107_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__btn_ControlsVehicle_K2Node_ComponentBoundEvent_107_Clicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__btn_ControlsVehicle_K2Node_ComponentBoundEvent_107_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowIcons_K2Node_ComponentBoundEvent_31_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowIcons_K2Node_ComponentBoundEvent_31_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Checkbox_ShowIcons_K2Node_ComponentBoundEvent_31_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Checkbox_ShowIcons_K2Node_ComponentBoundEvent_31_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowHesitationBar_K2Node_ComponentBoundEvent_15_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__Options_Checkbox_ShowHesitationBar_K2Node_ComponentBoundEvent_15_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Checkbox_ShowHesitationBar_K2Node_ComponentBoundEvent_15_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Checkbox_ShowHesitationBar_K2Node_ComponentBoundEvent_15_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_ScoreReadoutMode_1_K2Node_ComponentBoundEvent_16_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__Options_Combo_ScoreReadoutMode_1_K2Node_ComponentBoundEvent_16_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__Options_Combo_ScoreReadoutMode_1_K2Node_ComponentBoundEvent_16_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__Options_Combo_ScoreReadoutMode_1_K2Node_ComponentBoundEvent_16_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Tab_SimpleGraphicsOptions_K2Node_ComponentBoundEvent_35_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Tab_SimpleGraphicsOptions_K2Node_ComponentBoundEvent_35_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_Tab_SimpleGraphicsOptions_K2Node_ComponentBoundEvent_35_Clicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Tab_SimpleGraphicsOptions_K2Node_ComponentBoundEvent_35_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Tab_AdvancedGraphicsOptions_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Tab_AdvancedGraphicsOptions_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_Tab_AdvancedGraphicsOptions_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Tab_AdvancedGraphicsOptions_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Checkbox_ShowHealthIcons_1_K2Node_ComponentBoundEvent_38_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Options_Checkbox_ShowHealthIcons_1_K2Node_ComponentBoundEvent_38_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_Options_Checkbox_ShowHealthIcons_1_K2Node_ComponentBoundEvent_38_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Options_Checkbox_ShowHealthIcons_1_K2Node_ComponentBoundEvent_38_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Checkbox_ShowCommandContextHint_K2Node_ComponentBoundEvent_39_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Options_Checkbox_ShowCommandContextHint_K2Node_ComponentBoundEvent_39_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_Options_Checkbox_ShowCommandContextHint_K2Node_ComponentBoundEvent_39_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Options_Checkbox_ShowCommandContextHint_K2Node_ComponentBoundEvent_39_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_SimpleGraphics_ADSZoom_K2Node_ComponentBoundEvent_40_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_SimpleGraphics_ADSZoom_K2Node_ComponentBoundEvent_40_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_SimpleGraphics_ADSZoom_K2Node_ComponentBoundEvent_40_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_SimpleGraphics_ADSZoom_K2Node_ComponentBoundEvent_40_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGrahpics_Check_BounceLight_K2Node_ComponentBoundEvent_41_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGrahpics_Check_BounceLight_K2Node_ComponentBoundEvent_41_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_AdvGrahpics_Check_BounceLight_K2Node_ComponentBoundEvent_41_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGrahpics_Check_BounceLight_K2Node_ComponentBoundEvent_41_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Check_FlashlightShadows_K2Node_ComponentBoundEvent_42_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Check_FlashlightShadows_K2Node_ComponentBoundEvent_42_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_AdvGraphics_Check_FlashlightShadows_K2Node_ComponentBoundEvent_42_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Check_FlashlightShadows_K2Node_ComponentBoundEvent_42_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_FSRQuality_K2Node_ComponentBoundEvent_44_OnDlssValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Slider_FSRQuality_K2Node_ComponentBoundEvent_44_OnDlssValueChanged__DelegateSignature(int32 NewIntegerValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_AdvGraphics_Slider_FSRQuality_K2Node_ComponentBoundEvent_44_OnDlssValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_FSRQuality_K2Node_ComponentBoundEvent_44_OnDlssValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Audio_Slider_MicGainVolume_K2Node_ComponentBoundEvent_43_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Audio_Slider_MicGainVolume_K2Node_ComponentBoundEvent_43_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_Audio_Slider_MicGainVolume_K2Node_ComponentBoundEvent_43_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Audio_Slider_MicGainVolume_K2Node_ComponentBoundEvent_43_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Combo_InputAudioDevice_K2Node_ComponentBoundEvent_48_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Options_Combo_InputAudioDevice_K2Node_ComponentBoundEvent_48_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_Options_Combo_InputAudioDevice_K2Node_ComponentBoundEvent_48_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Options_Combo_InputAudioDevice_K2Node_ComponentBoundEvent_48_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_MirrorScale_K2Node_ComponentBoundEvent_49_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Slider_MirrorScale_K2Node_ComponentBoundEvent_49_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_AdvGraphics_Slider_MirrorScale_K2Node_ComponentBoundEvent_49_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_MirrorScale_K2Node_ComponentBoundEvent_49_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_CopySupporterCode_K2Node_ComponentBoundEvent_79_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_CopySupporterCode_K2Node_ComponentBoundEvent_79_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_CopySupporterCode_K2Node_ComponentBoundEvent_79_Clicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_CopySupporterCode_K2Node_ComponentBoundEvent_79_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Checkbox_ServersideChecksum_K2Node_ComponentBoundEvent_98_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Options_Checkbox_ServersideChecksum_K2Node_ComponentBoundEvent_98_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_Options_Checkbox_ServersideChecksum_K2Node_ComponentBoundEvent_98_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Options_Checkbox_ServersideChecksum_K2Node_ComponentBoundEvent_98_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_ProfilingBtn_K2Node_ComponentBoundEvent_103_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_ProfilingBtn_K2Node_ComponentBoundEvent_103_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_ProfilingBtn_K2Node_ComponentBoundEvent_103_Clicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_ProfilingBtn_K2Node_ComponentBoundEvent_103_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorAntiAlias_K2Node_ComponentBoundEvent_104_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorAntiAlias_K2Node_ComponentBoundEvent_104_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorAntiAlias_K2Node_ComponentBoundEvent_104_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorAntiAlias_K2Node_ComponentBoundEvent_104_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorDecals_K2Node_ComponentBoundEvent_105_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorDecals_K2Node_ComponentBoundEvent_105_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorDecals_K2Node_ComponentBoundEvent_105_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorDecals_K2Node_ComponentBoundEvent_105_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorDynamicShadows_K2Node_ComponentBoundEvent_106_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorDynamicShadows_K2Node_ComponentBoundEvent_106_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorDynamicShadows_K2Node_ComponentBoundEvent_106_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorDynamicShadows_K2Node_ComponentBoundEvent_106_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Check_OptiwandFPSEnabled_K2Node_ComponentBoundEvent_108_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Check_OptiwandFPSEnabled_K2Node_ComponentBoundEvent_108_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_AdvGraphics_Check_OptiwandFPSEnabled_K2Node_ComponentBoundEvent_108_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Check_OptiwandFPSEnabled_K2Node_ComponentBoundEvent_108_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Checkbox_TeamViewFPS_K2Node_ComponentBoundEvent_109_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Options_Checkbox_TeamViewFPS_K2Node_ComponentBoundEvent_109_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_Options_Checkbox_TeamViewFPS_K2Node_ComponentBoundEvent_109_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Options_Checkbox_TeamViewFPS_K2Node_ComponentBoundEvent_109_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_DecalsEnabled_K2Node_ComponentBoundEvent_110_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_DecalsEnabled_K2Node_ComponentBoundEvent_110_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_DecalsEnabled_K2Node_ComponentBoundEvent_110_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_DecalsEnabled_K2Node_ComponentBoundEvent_110_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalDensity_K2Node_ComponentBoundEvent_111_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalDensity_K2Node_ComponentBoundEvent_111_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalDensity_K2Node_ComponentBoundEvent_111_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalDensity_K2Node_ComponentBoundEvent_111_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalFadeScreenSize_K2Node_ComponentBoundEvent_112_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalFadeScreenSize_K2Node_ComponentBoundEvent_112_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalFadeScreenSize_K2Node_ComponentBoundEvent_112_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalFadeScreenSize_K2Node_ComponentBoundEvent_112_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Reflex_Combo_K2Node_ComponentBoundEvent_113_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Reflex_Combo_K2Node_ComponentBoundEvent_113_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_Reflex_Combo_K2Node_ComponentBoundEvent_113_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Reflex_Combo_K2Node_ComponentBoundEvent_113_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_ReflexGameToRenderLatency_ChkBox_K2Node_ComponentBoundEvent_114_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_ReflexGameToRenderLatency_ChkBox_K2Node_ComponentBoundEvent_114_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_ReflexGameToRenderLatency_ChkBox_K2Node_ComponentBoundEvent_114_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_ReflexGameToRenderLatency_ChkBox_K2Node_ComponentBoundEvent_114_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_ReflexGameLatencyChkBox_K2Node_ComponentBoundEvent_116_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_ReflexGameLatencyChkBox_K2Node_ComponentBoundEvent_116_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_ReflexGameLatencyChkBox_K2Node_ComponentBoundEvent_116_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_ReflexGameLatencyChkBox_K2Node_ComponentBoundEvent_116_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_ReflexRenderLatency_ChkBox_K2Node_ComponentBoundEvent_117_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_ReflexRenderLatency_ChkBox_K2Node_ComponentBoundEvent_117_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_ReflexRenderLatency_ChkBox_K2Node_ComponentBoundEvent_117_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_ReflexRenderLatency_ChkBox_K2Node_ComponentBoundEvent_117_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Combo_MirrorReflectionMode_K2Node_ComponentBoundEvent_115_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Options_Combo_MirrorReflectionMode_K2Node_ComponentBoundEvent_115_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_Options_Combo_MirrorReflectionMode_K2Node_ComponentBoundEvent_115_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Options_Combo_MirrorReflectionMode_K2Node_ComponentBoundEvent_115_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Combo_NVGStyle_K2Node_ComponentBoundEvent_94_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Options_Combo_NVGStyle_K2Node_ComponentBoundEvent_94_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_Options_Combo_NVGStyle_K2Node_ComponentBoundEvent_94_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Options_Combo_NVGStyle_K2Node_ComponentBoundEvent_94_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_ClearModioUserData_K2Node_ComponentBoundEvent_118_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_ClearModioUserData_K2Node_ComponentBoundEvent_118_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_ClearModioUserData_K2Node_ComponentBoundEvent_118_Clicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_ClearModioUserData_K2Node_ComponentBoundEvent_118_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_MotionBlurScale_K2Node_ComponentBoundEvent_119_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AdvGraphics_Slider_MotionBlurScale_K2Node_ComponentBoundEvent_119_OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_AdvGraphics_Slider_MotionBlurScale_K2Node_ComponentBoundEvent_119_OnFloatValueChanged__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_MotionBlurScale_K2Node_ComponentBoundEvent_119_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Checkbox_MapAnalytics_K2Node_ComponentBoundEvent_78_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Options_Checkbox_MapAnalytics_K2Node_ComponentBoundEvent_78_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_Options_Checkbox_MapAnalytics_K2Node_ComponentBoundEvent_78_OnCheckStateChange__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Options_Checkbox_MapAnalytics_K2Node_ComponentBoundEvent_78_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_btn_ControlsReplay_K2Node_ComponentBoundEvent_120_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_btn_ControlsReplay_K2Node_ComponentBoundEvent_120_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_btn_ControlsReplay_K2Node_ComponentBoundEvent_120_Clicked__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_btn_ControlsReplay_K2Node_ComponentBoundEvent_120_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_GameMenu_K2Node_ComponentBoundEvent_6_HandleBackPress__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_GameMenu_K2Node_ComponentBoundEvent_6_HandleBackPress__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_GameMenu_K2Node_ComponentBoundEvent_6_HandleBackPress__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_GraphicsMenu_K2Node_ComponentBoundEvent_121_HandleBackPress__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_GraphicsMenu_K2Node_ComponentBoundEvent_121_HandleBackPress__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_GraphicsMenu_K2Node_ComponentBoundEvent_121_HandleBackPress__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AudioMenu_K2Node_ComponentBoundEvent_122_HandleBackPress__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_AudioMenu_K2Node_ComponentBoundEvent_122_HandleBackPress__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_AudioMenu_K2Node_ComponentBoundEvent_122_HandleBackPress__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_ControlsMenu_K2Node_ComponentBoundEvent_123_HandleBackPress__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_ControlsMenu_K2Node_ComponentBoundEvent_123_HandleBackPress__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_ControlsMenu_K2Node_ComponentBoundEvent_123_HandleBackPress__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Combo_DefaultVoipChannel_K2Node_ComponentBoundEvent_124_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SettingsMenu_C::BndEvt__W_SettingsMenu_Options_Combo_DefaultVoipChannel_K2Node_ComponentBoundEvent_124_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "BndEvt__W_SettingsMenu_Options_Combo_DefaultVoipChannel_K2Node_ComponentBoundEvent_124_OnNewOptionSelected__DelegateSignature");

	Params::UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Options_Combo_DefaultVoipChannel_K2Node_ComponentBoundEvent_124_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.ExecuteUbergraph_W_SettingsMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewOption                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EGrenadeThrowSettingTypeTemp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGrenadeThrowSettingTypeTemp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EShotgunReloadType      Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EShotgunReloadType      Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemSelectionInterfaceTypeTemp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemSelectionInterfaceTypeTemp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEmptyMagReloadType     Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEmptyMagReloadType     Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// enum class EScoreReadoutMode       Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScoreReadoutMode       Temp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScoreReadoutMode       Temp_byte_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScoreReadoutMode       Temp_byte_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_21                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_22                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_23                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_24                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_25                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_26                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_27                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_28                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_29                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_30                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_31                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_32                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_33                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_34                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_35                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_36                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_37                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOptiwandViewMode       Temp_byte_Variable_38                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOptiwandViewMode       Temp_byte_Variable_39                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENVGStyle               Temp_byte_Variable_40                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENVGStyle               Temp_byte_Variable_41                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceType              Temp_byte_Variable_42                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceType              Temp_byte_Variable_43                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_44                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceType              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_45                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_46                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_47                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSKeybinding>        K2Node_CustomEvent_Bindings                                      (ConstParm, ReferenceParm)
// class UGridPanel*                  K2Node_CustomEvent_Grid_Panel                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// TArray<class UW_ControlsBind_C*>   K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_17                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_30                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_43                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_42                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetShowFPS_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_41                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_40                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_39                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_38                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_37                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_36                     (ZeroConstructor, IsPlainOldData, NoDestructor)
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
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveHUDSettings_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveHUDSettings_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveHUDSettings_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveHUDSettings_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveHUDSettings_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveHUDSettings_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveHUDSettings_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveHUDSettings_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_16                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_29                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_28                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveSFXVolume_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveMasterVolume_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_27                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_26                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveMusicVolume_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveUIVolume_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_25                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveVOIPVolume_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_NewResolutionValue                    (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_24                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_23                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewQualityValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_22                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewQualityValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_21                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewQualityValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_20                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewQualityValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_19                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewQualityValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_18                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewQualityValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_17                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_16                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_15                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_ComponentBoundEvent_CallingModal_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_TextEntry_1                           (None)
// class UStandardModal*              K2Node_ComponentBoundEvent_CallingModal_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_ComponentBoundEvent_CallingModal                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_TextEntry                             (None)
// bool                               CallFunc_SetMotionBlurStrength_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetMotionBlurEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetUseMeshpainting_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetDepthofFieldSetting_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveSafeZoneSettings_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SavePiPResolutionScale_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveVideoModeAndQuality_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetVideoQualitySettings_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_SettingLabel_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewOption_20                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewOption_19                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSGraphicPreset             CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetScreenResolution_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ChangeScreenResolution_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetFoV_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_StandardButton_C*         K2Node_ComponentBoundEvent_CallingButton_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardButton_C*         K2Node_ComponentBoundEvent_CallingButton                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsBind_C*           K2Node_CustomEvent_CallingWidget_2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsResetBinding_C*   CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_StandardButton_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_ControlsBind_C*>   CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_ControlsResetBinding_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_2                     (ReferenceParm, ContainsInstancedReference)
// class UW_ControlsResetBinding_C*   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsBind_C*           K2Node_CustomEvent_CallingWidget_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_ControlsBind_C*>   CallFunc_GetAllWidgetsOfClass_FoundWidgets_3                     (ReferenceParm, ContainsInstancedReference)
// TArray<class UW_ControlsResetBinding_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_4                     (ReferenceParm, ContainsInstancedReference)
// class UW_ControlsBind_C*           CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsResetBinding_C*   CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_StandardButton_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets_5                     (ReferenceParm, ContainsInstancedReference)
// class UW_ControlsBind_C*           K2Node_CustomEvent_CallingWidget                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_CustomEvent_NewKey                                        (HasGetValueTypeHash)
// class UW_StandardButton_C*         CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_35                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_34                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_14                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMouseInverted_bInvertVertical                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMouseInverted_bInvertHorizontal                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMouseInverted_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetMouseSensitivity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetMouseInverted_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetMouseInverted_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewOption_18                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_5                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentCulture_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_BaseController_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsBind_C*           K2Node_CustomEvent_CallingBind                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActionMappingStruct>K2Node_CustomEvent_ActionMappings                                (ReferenceParm)
// TArray<struct FAxisMappingStruct>  K2Node_CustomEvent_AxisMappings                                  (ReferenceParm)
// struct FKey                        K2Node_CustomEvent_Key                                           (HasGetValueTypeHash)
// TArray<class FText>                K2Node_CustomEvent_ConflictBindsText                             (ReferenceParm)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetConflictingKeybindText_Text                          (None)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_33                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveKeybinds_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_32                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_13                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_12                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetFreelookSensitivity_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_31                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetShowControls_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_KeyDisplay_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets_6                     (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_KeyDisplay_C*             CallFunc_Array_Get_Item_6                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSKeybinding                CallFunc_Array_Get_Item_7                                        (HasGetValueTypeHash)
// bool                               CallFunc_Try_Assign_Unbindable_Control_bSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Try_Assign_Unbindable_Control_bSuccess_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_30                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_11                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_29                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_28                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_27                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_26                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_25                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetRaytracingSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetVSyncEnabled_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_24                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_23                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_10                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewOption_17                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveHUDSettings_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewOption_16                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGrenadeThrowSettingTypeK2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGrenadeSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EShotgunReloadType      K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_22                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveShotgunSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_21                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveHitmarkerSfxEnabled_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsBind_C*           CallFunc_Array_Get_Item_8                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewOption_15                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemSelectionInterfaceTypeK2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_20                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveHUDSettings_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveItemSelectionStyleSettings_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_9                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_8                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDLSSEnabled_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetDlssQuality_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewOption_14                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveHUDSettings_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveTeamViewSetting_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewOption_13                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEmptyMagReloadType     K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveEmptyMagReloadSettings_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAxisMappingStruct>  K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActionMappingStruct>K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class UW_ControlsBind_C*           CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue_2                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsBind_C*           CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue_3                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry                                     (None)
// class UStandardModal*              K2Node_CustomEvent_CallingModal_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_BindConflictModal_C*      K2Node_DynamicCast_AsW_Bind_Conflict_Modal                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStandardModal*              K2Node_CustomEvent_CallingModal                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewOption_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_19                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveShowHealthIconSetting_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EScoreReadoutMode       K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_18                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveScoreReadoutSetting_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveHotkeyHintSetting_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewOption_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultCommand                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultCommands_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewOption_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveDefaultCommand_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESwatCommand            K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultCommand_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultCommands_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewOption_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveDefaultCommand_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultCommand_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand_2         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand_2        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultCommands_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESwatCommand            K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewOption_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveDefaultCommand_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultCommand_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand_3         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand_3        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultCommands_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESwatCommand            K2Node_Select_Default_10                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewOption_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveDefaultCommand_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultCommand_4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand_4         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand_4          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand_4        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultCommands_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewOption_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultCommandsAsOption_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveDefaultCommandAsOption_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESwatCommand            K2Node_Select_Default_11                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveDefaultCommand_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultCommandsAsOption_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption_2      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultCommandsAsOption_ReturnValue_2               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveDefaultCommandAsOption_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveDefaultCommandAsOption_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption_3      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultCommandsAsOption_ReturnValue_3               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption_4      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultCommandsAsOption_ReturnValue_4               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveDefaultCommandAsOption_ReturnValue_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveDefaultCommandAsOption_ReturnValue_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_18                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_17                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_16                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_15                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_14                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_13                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_12                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_11                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_10                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_9                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_8                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_7                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_17                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveShowPlayerIconSetting_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardButton_C*         CallFunc_Array_Get_Item_9                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_16                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveShowHesitationBarSetting_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewOption_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOptiwandViewMode       K2Node_Select_Default_12                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveOptiwandViewMode_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_15                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveKeybinds_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveShowTeamStatus_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_14                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_13                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveShowCommandContextHintSetting_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveZoomADSSetting_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_12                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_11                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetBounceLightEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetFlashlightShadows_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetFSRQuality_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetDlssQuality_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetFSRQuality_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewOption_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMicInputGain_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentOptionAsString_OptionAsString                 (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetInputAudioDevice_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveMirrorResolutionScale_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDiscordOneTimeUseCode_ReturnValue                    (ZeroConstructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              CallFunc_GetUniqueNetID_UniqueNetId                              (None)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_10                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_UniqueNetIdToString_String                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveServersideChecksum_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_9                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveMirrorAntiAliasEnabled_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_8                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveMirrorDecalsEnabled_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_7                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_6                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveMirrorDynamicShadowsEnabled_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadPiPFPS_bEnabled                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_LoadPiPFPS_FPS                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPFPS_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SavePiPFPS_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_5                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadTeamViewFPSSetting_bEnabled                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_LoadTeamViewFPSSetting_TeamViewFPS                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadTeamViewFPSSetting_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveTeamViewSetting_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewFloatValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWorldDecalsEnabled_bEnabled                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDecalsEnabled_FadeDistance                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDecalsEnabled_Density                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWorldDecalsEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetWorldDecalsEnabled_bEnabled_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDecalsEnabled_FadeDistance_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDecalsEnabled_Density_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWorldDecalsEnabled_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetWorldDecalEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetWorldDecalEnabled_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetWorldDecalsEnabled_bEnabled_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDecalsEnabled_FadeDistance_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDecalsEnabled_Density_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWorldDecalsEnabled_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetWorldDecalEnabled_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNvidiaReflexEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewOption_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexLatencyOptions_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled_1   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled_1           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled_1         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexLatencyOptions_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetReflexLatencyOptions_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetReflexLatencyOptions_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled_2   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled_2           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled_2         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetReflexLatencyOptions_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadPiPFPS_bEnabled_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_LoadPiPFPS_FPS_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPFPS_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetReflexLatencyOptions_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SavePiPFPS_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewOption_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetReflexEnabled_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveMirrorEnabledOnlyInLobby_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveMirrorReflectionEnabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetReflexEnabled_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetReflexEnabled_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewOption_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENVGStyle               K2Node_Select_Default_13                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UModioManager*               CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveNVGStyle_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_NewFloatValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewSliderValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSendMapStatistics_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameInstance*     CallFunc_GetRONGameInstance_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReplaySystemEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SettingsMenu_C::ExecuteUbergraph_W_SettingsMenu(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_NewOption, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EGrenadeThrowSettingType Temp_byte_Variable_2, enum class EGrenadeThrowSettingType Temp_byte_Variable_3, int32 Temp_int_Variable_1, enum class EShotgunReloadType Temp_byte_Variable_4, enum class EShotgunReloadType Temp_byte_Variable_5, int32 Temp_int_Variable_2, enum class EItemSelectionInterfaceType Temp_byte_Variable_6, enum class EItemSelectionInterfaceType Temp_byte_Variable_7, int32 Temp_int_Variable_3, enum class EEmptyMagReloadType Temp_byte_Variable_8, enum class EEmptyMagReloadType Temp_byte_Variable_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EScoreReadoutMode Temp_byte_Variable_10, enum class EScoreReadoutMode Temp_byte_Variable_11, enum class EScoreReadoutMode Temp_byte_Variable_12, enum class EScoreReadoutMode Temp_byte_Variable_13, int32 Temp_int_Variable_5, enum class ESwatCommand Temp_byte_Variable_14, enum class ESwatCommand Temp_byte_Variable_15, enum class ESwatCommand Temp_byte_Variable_16, enum class ESwatCommand Temp_byte_Variable_17, enum class ESwatCommand Temp_byte_Variable_18, enum class ESwatCommand Temp_byte_Variable_19, enum class ESwatCommand Temp_byte_Variable_20, enum class ESwatCommand Temp_byte_Variable_21, enum class ESwatCommand Temp_byte_Variable_22, int32 Temp_int_Variable_6, enum class ESwatCommand Temp_byte_Variable_23, enum class ESwatCommand Temp_byte_Variable_24, enum class ESwatCommand Temp_byte_Variable_25, enum class ESwatCommand Temp_byte_Variable_26, int32 Temp_int_Variable_7, enum class ESwatCommand Temp_byte_Variable_27, enum class ESwatCommand Temp_byte_Variable_28, enum class ESwatCommand Temp_byte_Variable_29, enum class ESwatCommand Temp_byte_Variable_30, int32 Temp_int_Variable_8, enum class ESwatCommand Temp_byte_Variable_31, enum class ESwatCommand Temp_byte_Variable_32, enum class ESwatCommand Temp_byte_Variable_33, enum class ESwatCommand Temp_byte_Variable_34, enum class ESwatCommand Temp_byte_Variable_35, enum class ESwatCommand Temp_byte_Variable_36, enum class ESwatCommand Temp_byte_Variable_37, int32 Temp_int_Variable_9, enum class EOptiwandViewMode Temp_byte_Variable_38, enum class EOptiwandViewMode Temp_byte_Variable_39, int32 Temp_int_Variable_10, enum class ENVGStyle Temp_byte_Variable_40, enum class ENVGStyle Temp_byte_Variable_41, int32 Temp_int_Variable_11, enum class EVoiceType Temp_byte_Variable_42, enum class EVoiceType Temp_byte_Variable_43, int32 Temp_int_Variable_12, enum class ESwatCommand Temp_byte_Variable_44, enum class EVoiceType K2Node_Select_Default, enum class ESwatCommand Temp_byte_Variable_45, enum class ESwatCommand Temp_byte_Variable_46, enum class ESwatCommand Temp_byte_Variable_47, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, bool K2Node_Event_IsDesignTime, TArray<struct FSKeybinding>& K2Node_CustomEvent_Bindings, class UGridPanel* K2Node_CustomEvent_Grid_Panel, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, TArray<class UW_ControlsBind_C*>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, float K2Node_ComponentBoundEvent_NewFloatValue_17, float K2Node_ComponentBoundEvent_NewSliderValue_30, bool K2Node_ComponentBoundEvent_bNewCheckState_43, bool K2Node_ComponentBoundEvent_bNewCheckState_42, bool CallFunc_SetShowFPS_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_41, bool K2Node_ComponentBoundEvent_bNewCheckState_40, bool K2Node_ComponentBoundEvent_bNewCheckState_39, bool K2Node_ComponentBoundEvent_bNewCheckState_38, bool K2Node_ComponentBoundEvent_bNewCheckState_37, bool K2Node_ComponentBoundEvent_bNewCheckState_36, bool CallFunc_LoadHUDSettings_bShowHud, bool CallFunc_LoadHUDSettings_bCurvedHUD, bool CallFunc_LoadHUDSettings_bShowCompass, bool CallFunc_LoadHUDSettings_bShowWeaponHUD, bool CallFunc_LoadHUDSettings_bShowMagazineHUD, bool CallFunc_LoadHUDSettings_bShowChat, bool CallFunc_LoadHUDSettings_bSwayHUD, bool CallFunc_LoadHUDSettings_b2DReload, float CallFunc_LoadHUDSettings_IconScale, float CallFunc_LoadHUDSettings_QuickThrowScale, int32 CallFunc_LoadHUDSettings_FireModeDisplayOption, bool CallFunc_LoadHUDSettings_bShowPlayerNames, bool CallFunc_LoadHUDSettings_bShowButtonPrompts, bool CallFunc_LoadHUDSettings_ReturnValue, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_SaveHUDSettings_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_SaveHUDSettings_ReturnValue_1, bool CallFunc_SaveHUDSettings_ReturnValue_2, bool CallFunc_SaveHUDSettings_ReturnValue_3, bool CallFunc_SaveHUDSettings_ReturnValue_4, bool CallFunc_SaveHUDSettings_ReturnValue_5, bool CallFunc_SaveHUDSettings_ReturnValue_6, bool CallFunc_SaveHUDSettings_ReturnValue_7, float K2Node_ComponentBoundEvent_NewFloatValue_16, float K2Node_ComponentBoundEvent_NewSliderValue_29, float K2Node_ComponentBoundEvent_NewFloatValue_15, float K2Node_ComponentBoundEvent_NewSliderValue_28, bool CallFunc_SaveSFXVolume_ReturnValue, bool CallFunc_SaveMasterVolume_ReturnValue, float K2Node_ComponentBoundEvent_NewFloatValue_14, float K2Node_ComponentBoundEvent_NewSliderValue_27, float K2Node_ComponentBoundEvent_NewFloatValue_13, float K2Node_ComponentBoundEvent_NewSliderValue_26, bool CallFunc_SaveMusicVolume_ReturnValue, bool CallFunc_SaveUIVolume_ReturnValue, float K2Node_ComponentBoundEvent_NewFloatValue_12, float K2Node_ComponentBoundEvent_NewSliderValue_25, bool CallFunc_SaveVOIPVolume_ReturnValue, const class FString& K2Node_ComponentBoundEvent_NewResolutionValue, float K2Node_ComponentBoundEvent_NewSliderValue_24, int32 K2Node_ComponentBoundEvent_NewIntegerValue_5, float K2Node_ComponentBoundEvent_NewSliderValue_23, int32 K2Node_ComponentBoundEvent_NewQualityValue_5, float K2Node_ComponentBoundEvent_NewSliderValue_22, int32 K2Node_ComponentBoundEvent_NewQualityValue_4, float K2Node_ComponentBoundEvent_NewSliderValue_21, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, int32 K2Node_ComponentBoundEvent_NewQualityValue_3, float K2Node_ComponentBoundEvent_NewSliderValue_20, int32 K2Node_ComponentBoundEvent_NewQualityValue_2, float K2Node_ComponentBoundEvent_NewSliderValue_19, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, uint8 CallFunc_GetValidValue_ReturnValue_2, uint8 CallFunc_GetValidValue_ReturnValue_3, int32 K2Node_ComponentBoundEvent_NewQualityValue_1, float K2Node_ComponentBoundEvent_NewSliderValue_18, int32 K2Node_ComponentBoundEvent_NewQualityValue, float K2Node_ComponentBoundEvent_NewSliderValue_17, uint8 CallFunc_Conv_IntToByte_ReturnValue_4, uint8 CallFunc_Conv_IntToByte_ReturnValue_5, uint8 CallFunc_GetValidValue_ReturnValue_4, uint8 CallFunc_GetValidValue_ReturnValue_5, int32 K2Node_ComponentBoundEvent_NewIntegerValue_4, float K2Node_ComponentBoundEvent_NewSliderValue_16, float K2Node_ComponentBoundEvent_NewFloatValue_11, float K2Node_ComponentBoundEvent_NewSliderValue_15, int32 Temp_int_Array_Index_Variable_4, class UW_StandardModal_C* K2Node_ComponentBoundEvent_CallingModal_2, class FText K2Node_ComponentBoundEvent_TextEntry_1, class UStandardModal* K2Node_ComponentBoundEvent_CallingModal_1, class UW_StandardModal_C* K2Node_ComponentBoundEvent_CallingModal, class FText K2Node_ComponentBoundEvent_TextEntry, bool CallFunc_SetMotionBlurStrength_ReturnValue, bool CallFunc_SetMotionBlurEnabled_ReturnValue, bool CallFunc_SetUseMeshpainting_ReturnValue, bool CallFunc_SetDepthofFieldSetting_ReturnValue, bool CallFunc_SaveSafeZoneSettings_ReturnValue, bool CallFunc_SavePiPResolutionScale_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_4, int32 CallFunc_Conv_ByteToInt_ReturnValue_5, bool CallFunc_SaveVideoModeAndQuality_ReturnValue, bool CallFunc_SetVideoQualitySettings_ReturnValue, class UW_SettingLabel_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, int32 K2Node_ComponentBoundEvent_NewOption_20, uint8 CallFunc_Conv_IntToByte_ReturnValue_6, uint8 CallFunc_GetValidValue_ReturnValue_6, int32 K2Node_ComponentBoundEvent_NewOption_19, const struct FSGraphicPreset& CallFunc_Array_Get_Item, bool CallFunc_SetScreenResolution_ReturnValue, bool CallFunc_ChangeScreenResolution_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_SetFoV_ReturnValue, class UW_StandardButton_C* K2Node_ComponentBoundEvent_CallingButton_1, class UW_StandardButton_C* K2Node_ComponentBoundEvent_CallingButton, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class UW_ControlsBind_C* K2Node_CustomEvent_CallingWidget_2, class UW_ControlsResetBinding_C* CallFunc_Create_ReturnValue_1, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue_1, TArray<class UW_StandardButton_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UW_ControlsBind_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_5, TArray<class UW_ControlsResetBinding_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, class UW_ControlsResetBinding_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_5, class UW_ControlsBind_C* K2Node_CustomEvent_CallingWidget_1, TArray<class UW_ControlsBind_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_3, TArray<class UW_ControlsResetBinding_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_4, class UW_ControlsBind_C* CallFunc_Array_Get_Item_2, class UW_ControlsResetBinding_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, TArray<class UW_StandardButton_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_5, class UW_ControlsBind_C* K2Node_CustomEvent_CallingWidget, const struct FKey& K2Node_CustomEvent_NewKey, class UW_StandardButton_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_4, bool K2Node_ComponentBoundEvent_bNewCheckState_35, bool K2Node_ComponentBoundEvent_bNewCheckState_34, float K2Node_ComponentBoundEvent_NewFloatValue_10, float K2Node_ComponentBoundEvent_NewSliderValue_14, bool CallFunc_GetMouseInverted_bInvertVertical, bool CallFunc_GetMouseInverted_bInvertHorizontal, bool CallFunc_GetMouseInverted_ReturnValue, bool CallFunc_SetMouseSensitivity_ReturnValue, bool CallFunc_SetMouseInverted_ReturnValue, bool CallFunc_SetMouseInverted_ReturnValue_1, int32 K2Node_ComponentBoundEvent_NewOption_18, enum class ESlateVisibility K2Node_Select_Default_1, const class FString& CallFunc_Array_Get_Item_5, bool CallFunc_SetCurrentCulture_ReturnValue, TArray<class ABP_BaseController_C*>& CallFunc_GetAllActorsOfClass_OutActors, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UW_ControlsBind_C* K2Node_CustomEvent_CallingBind, TArray<struct FActionMappingStruct>& K2Node_CustomEvent_ActionMappings, TArray<struct FAxisMappingStruct>& K2Node_CustomEvent_AxisMappings, const struct FKey& K2Node_CustomEvent_Key, TArray<class FText>& K2Node_CustomEvent_ConflictBindsText, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetConflictingKeybindText_Text, bool K2Node_ComponentBoundEvent_bNewCheckState_33, bool CallFunc_SaveKeybinds_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_32, float K2Node_ComponentBoundEvent_NewFloatValue_9, float K2Node_ComponentBoundEvent_NewSliderValue_13, float K2Node_ComponentBoundEvent_NewFloatValue_8, float K2Node_ComponentBoundEvent_NewSliderValue_12, bool CallFunc_SetFreelookSensitivity_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_31, bool CallFunc_SetShowControls_ReturnValue, TArray<class UW_KeyDisplay_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_6, int32 Temp_int_Array_Index_Variable_5, class UW_KeyDisplay_C* CallFunc_Array_Get_Item_6, const struct FSKeybinding& CallFunc_Array_Get_Item_7, bool CallFunc_Try_Assign_Unbindable_Control_bSuccess, bool CallFunc_Try_Assign_Unbindable_Control_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_7, bool K2Node_ComponentBoundEvent_bNewCheckState_30, bool CallFunc_Less_IntInt_ReturnValue_5, int32 K2Node_ComponentBoundEvent_NewIntegerValue_3, float K2Node_ComponentBoundEvent_NewSliderValue_11, bool K2Node_ComponentBoundEvent_bNewCheckState_29, bool K2Node_ComponentBoundEvent_bNewCheckState_28, bool K2Node_ComponentBoundEvent_bNewCheckState_27, bool K2Node_ComponentBoundEvent_bNewCheckState_26, bool K2Node_ComponentBoundEvent_bNewCheckState_25, bool CallFunc_SetRaytracingSettings_ReturnValue, bool CallFunc_SetFrameRateLimit_ReturnValue, bool CallFunc_SetVSyncEnabled_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_24, bool K2Node_ComponentBoundEvent_bNewCheckState_23, float K2Node_ComponentBoundEvent_NewFloatValue_7, float K2Node_ComponentBoundEvent_NewSliderValue_10, int32 K2Node_ComponentBoundEvent_NewOption_17, bool CallFunc_SaveHUDSettings_ReturnValue_8, int32 K2Node_ComponentBoundEvent_NewOption_16, enum class EGrenadeThrowSettingType K2Node_Select_Default_2, bool CallFunc_SaveGrenadeSettings_ReturnValue, enum class EShotgunReloadType K2Node_Select_Default_3, bool K2Node_ComponentBoundEvent_bNewCheckState_22, bool CallFunc_SaveShotgunSettings_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_21, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SaveHitmarkerSfxEnabled_ReturnValue, class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue, int32 Temp_int_Array_Index_Variable_6, class UW_ControlsBind_C* CallFunc_Array_Get_Item_8, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 K2Node_ComponentBoundEvent_NewOption_15, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_2, enum class EItemSelectionInterfaceType K2Node_Select_Default_4, bool K2Node_ComponentBoundEvent_bNewCheckState_20, bool CallFunc_SaveHUDSettings_ReturnValue_9, bool CallFunc_SaveItemSelectionStyleSettings_ReturnValue, float K2Node_ComponentBoundEvent_NewFloatValue_6, float K2Node_ComponentBoundEvent_NewSliderValue_9, float K2Node_ComponentBoundEvent_NewFloatValue_5, float K2Node_ComponentBoundEvent_NewSliderValue_8, bool CallFunc_IsDLSSEnabled_ReturnValue, int32 K2Node_ComponentBoundEvent_NewIntegerValue_2, float K2Node_ComponentBoundEvent_NewSliderValue_7, bool CallFunc_SetDlssQuality_ReturnValue, int32 K2Node_ComponentBoundEvent_NewOption_14, int32 K2Node_ComponentBoundEvent_NewIntegerValue_1, float K2Node_ComponentBoundEvent_NewSliderValue_6, bool CallFunc_SaveHUDSettings_ReturnValue_10, bool CallFunc_SaveTeamViewSetting_ReturnValue, int32 K2Node_ComponentBoundEvent_NewOption_13, enum class EEmptyMagReloadType K2Node_Select_Default_5, bool CallFunc_SaveEmptyMagReloadSettings_ReturnValue, TArray<struct FAxisMappingStruct>& K2Node_MakeArray_Array_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TArray<struct FActionMappingStruct>& K2Node_MakeArray_Array_2, class UW_ControlsBind_C* CallFunc_Create_ReturnValue_2, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue_2, class UW_ControlsBind_C* CallFunc_Create_ReturnValue_3, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue_3, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_2, class FText K2Node_CustomEvent_TextEntry, class UStandardModal* K2Node_CustomEvent_CallingModal_1, class UW_StandardModal_C* CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp, class UW_BindConflictModal_C* K2Node_DynamicCast_AsW_Bind_Conflict_Modal, bool K2Node_DynamicCast_bSuccess_3, class UStandardModal* K2Node_CustomEvent_CallingModal, int32 Temp_int_Loop_Counter_Variable_6, bool CallFunc_Less_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 K2Node_ComponentBoundEvent_NewOption_12, bool K2Node_ComponentBoundEvent_bNewCheckState_19, bool CallFunc_SaveShowHealthIconSetting_ReturnValue, enum class EScoreReadoutMode K2Node_Select_Default_6, bool K2Node_ComponentBoundEvent_bNewCheckState_18, bool CallFunc_SaveScoreReadoutSetting_ReturnValue, bool CallFunc_SaveHotkeyHintSetting_ReturnValue, int32 K2Node_ComponentBoundEvent_NewOption_11, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultCommand, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand, bool CallFunc_LoadDefaultCommands_ReturnValue, int32 K2Node_ComponentBoundEvent_NewOption_10, enum class ESwatCommand K2Node_Select_Default_7, bool CallFunc_SaveDefaultCommand_ReturnValue, enum class ESwatCommand K2Node_Select_Default_8, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultCommand_1, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand_1, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand_1, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand_1, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand_1, bool CallFunc_LoadDefaultCommands_ReturnValue_1, int32 K2Node_ComponentBoundEvent_NewOption_9, bool CallFunc_SaveDefaultCommand_ReturnValue_1, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultCommand_2, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand_2, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand_2, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand_2, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand_2, bool CallFunc_LoadDefaultCommands_ReturnValue_2, enum class ESwatCommand K2Node_Select_Default_9, int32 K2Node_ComponentBoundEvent_NewOption_8, bool CallFunc_SaveDefaultCommand_ReturnValue_2, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultCommand_3, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand_3, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand_3, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand_3, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand_3, bool CallFunc_LoadDefaultCommands_ReturnValue_3, enum class ESwatCommand K2Node_Select_Default_10, int32 K2Node_ComponentBoundEvent_NewOption_7, bool CallFunc_SaveDefaultCommand_ReturnValue_3, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultCommand_4, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand_4, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand_4, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand_4, enum class ESwatCommand CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand_4, bool CallFunc_LoadDefaultCommands_ReturnValue_4, int32 K2Node_ComponentBoundEvent_NewOption_6, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption, bool CallFunc_LoadDefaultCommandsAsOption_ReturnValue, bool CallFunc_SaveDefaultCommandAsOption_ReturnValue, enum class ESwatCommand K2Node_Select_Default_11, int32 Temp_int_Loop_Counter_Variable_7, bool CallFunc_SaveDefaultCommand_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_8, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption_1, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption_1, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption_1, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption_1, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption_1, bool CallFunc_LoadDefaultCommandsAsOption_ReturnValue_1, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption_2, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption_2, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption_2, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption_2, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption_2, bool CallFunc_LoadDefaultCommandsAsOption_ReturnValue_2, bool CallFunc_SaveDefaultCommandAsOption_ReturnValue_1, bool CallFunc_SaveDefaultCommandAsOption_ReturnValue_2, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption_3, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption_3, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption_3, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption_3, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption_3, bool CallFunc_LoadDefaultCommandsAsOption_ReturnValue_3, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption_4, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption_4, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption_4, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption_4, int32 CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption_4, bool CallFunc_LoadDefaultCommandsAsOption_ReturnValue_4, bool CallFunc_SaveDefaultCommandAsOption_ReturnValue_3, bool CallFunc_SaveDefaultCommandAsOption_ReturnValue_4, class UW_Button_C* K2Node_ComponentBoundEvent_Button_18, class UW_Button_C* K2Node_ComponentBoundEvent_Button_17, class UW_Button_C* K2Node_ComponentBoundEvent_Button_16, class UW_Button_C* K2Node_ComponentBoundEvent_Button_15, class UW_Button_C* K2Node_ComponentBoundEvent_Button_14, class UW_Button_C* K2Node_ComponentBoundEvent_Button_13, class UW_Button_C* K2Node_ComponentBoundEvent_Button_12, class UW_Button_C* K2Node_ComponentBoundEvent_Button_11, class UW_Button_C* K2Node_ComponentBoundEvent_Button_10, class UW_Button_C* K2Node_ComponentBoundEvent_Button_9, class UW_Button_C* K2Node_ComponentBoundEvent_Button_8, class UW_Button_C* K2Node_ComponentBoundEvent_Button_7, class UW_Button_C* K2Node_ComponentBoundEvent_Button_6, bool K2Node_ComponentBoundEvent_bNewCheckState_17, bool CallFunc_SaveShowPlayerIconSetting_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, int32 Temp_int_Array_Index_Variable_7, class UW_StandardButton_C* CallFunc_Array_Get_Item_9, bool K2Node_ComponentBoundEvent_bNewCheckState_16, bool CallFunc_SaveShowHesitationBarSetting_ReturnValue, int32 K2Node_ComponentBoundEvent_NewOption_5, class UW_Button_C* K2Node_ComponentBoundEvent_Button_5, enum class EOptiwandViewMode K2Node_Select_Default_12, class UW_Button_C* K2Node_ComponentBoundEvent_Button_4, bool CallFunc_SaveOptiwandViewMode_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_15, bool CallFunc_SaveKeybinds_ReturnValue_1, bool CallFunc_SaveShowTeamStatus_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_14, bool K2Node_ComponentBoundEvent_bNewCheckState_13, bool CallFunc_SaveShowCommandContextHintSetting_ReturnValue, bool CallFunc_SaveZoomADSSetting_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_12, bool K2Node_ComponentBoundEvent_bNewCheckState_11, bool CallFunc_SetBounceLightEnabled_ReturnValue, bool CallFunc_SetFlashlightShadows_ReturnValue, bool CallFunc_SetFSRQuality_ReturnValue, int32 K2Node_ComponentBoundEvent_NewIntegerValue, float K2Node_ComponentBoundEvent_NewSliderValue_5, bool CallFunc_SetDlssQuality_ReturnValue_1, bool CallFunc_SetFSRQuality_ReturnValue_1, float K2Node_ComponentBoundEvent_NewFloatValue_4, float K2Node_ComponentBoundEvent_NewSliderValue_4, int32 K2Node_ComponentBoundEvent_NewOption_4, bool CallFunc_SetMicInputGain_ReturnValue, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, const class FString& CallFunc_GetCurrentOptionAsString_OptionAsString, float K2Node_ComponentBoundEvent_NewFloatValue_3, float K2Node_ComponentBoundEvent_NewSliderValue_3, bool CallFunc_SetInputAudioDevice_ReturnValue, bool CallFunc_SaveMirrorResolutionScale_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_3, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const class FString& CallFunc_GetDiscordOneTimeUseCode_ReturnValue, const struct FBPUniqueNetId& CallFunc_GetUniqueNetID_UniqueNetId, bool K2Node_ComponentBoundEvent_bNewCheckState_10, const class FString& CallFunc_UniqueNetIdToString_String, bool CallFunc_SaveServersideChecksum_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue_2, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue_3, bool K2Node_ComponentBoundEvent_bNewCheckState_9, bool CallFunc_SaveMirrorAntiAliasEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool K2Node_ComponentBoundEvent_bNewCheckState_8, bool CallFunc_SaveMirrorDecalsEnabled_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_7, bool K2Node_ComponentBoundEvent_bNewCheckState_6, bool CallFunc_SaveMirrorDynamicShadowsEnabled_ReturnValue, bool CallFunc_LoadPiPFPS_bEnabled, float CallFunc_LoadPiPFPS_FPS, bool CallFunc_LoadPiPFPS_ReturnValue, bool CallFunc_SavePiPFPS_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_5, bool CallFunc_LoadTeamViewFPSSetting_bEnabled, int32 CallFunc_LoadTeamViewFPSSetting_TeamViewFPS, bool CallFunc_LoadTeamViewFPSSetting_ReturnValue, bool CallFunc_SaveTeamViewSetting_ReturnValue_1, bool K2Node_ComponentBoundEvent_bNewCheckState_4, float K2Node_ComponentBoundEvent_NewFloatValue_2, float K2Node_ComponentBoundEvent_NewSliderValue_2, float K2Node_ComponentBoundEvent_NewFloatValue_1, float K2Node_ComponentBoundEvent_NewSliderValue_1, bool CallFunc_GetWorldDecalsEnabled_bEnabled, float CallFunc_GetWorldDecalsEnabled_FadeDistance, float CallFunc_GetWorldDecalsEnabled_Density, bool CallFunc_GetWorldDecalsEnabled_ReturnValue, bool CallFunc_GetWorldDecalsEnabled_bEnabled_1, float CallFunc_GetWorldDecalsEnabled_FadeDistance_1, float CallFunc_GetWorldDecalsEnabled_Density_1, bool CallFunc_GetWorldDecalsEnabled_ReturnValue_1, bool CallFunc_SetWorldDecalEnabled_ReturnValue, bool CallFunc_SetWorldDecalEnabled_ReturnValue_1, bool CallFunc_GetWorldDecalsEnabled_bEnabled_2, float CallFunc_GetWorldDecalsEnabled_FadeDistance_2, float CallFunc_GetWorldDecalsEnabled_Density_2, bool CallFunc_GetWorldDecalsEnabled_ReturnValue_2, bool CallFunc_SetWorldDecalEnabled_ReturnValue_2, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue_4, bool CallFunc_IsNvidiaReflexEnabled_ReturnValue, int32 K2Node_ComponentBoundEvent_NewOption_3, bool K2Node_ComponentBoundEvent_bNewCheckState_3, bool K2Node_SwitchInteger_CmpSuccess_1, bool K2Node_ComponentBoundEvent_bNewCheckState_2, bool K2Node_ComponentBoundEvent_bNewCheckState_1, bool CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled, bool CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled, bool CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled, bool CallFunc_GetReflexLatencyOptions_ReturnValue, bool CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled_1, bool CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled_1, bool CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled_1, bool CallFunc_GetReflexLatencyOptions_ReturnValue_1, bool CallFunc_SetReflexLatencyOptions_ReturnValue, bool CallFunc_SetReflexLatencyOptions_ReturnValue_1, bool CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled_2, bool CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled_2, bool CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled_2, bool CallFunc_GetReflexLatencyOptions_ReturnValue_2, bool CallFunc_LoadPiPFPS_bEnabled_1, float CallFunc_LoadPiPFPS_FPS_1, bool CallFunc_LoadPiPFPS_ReturnValue_1, bool CallFunc_SetReflexLatencyOptions_ReturnValue_2, bool CallFunc_SavePiPFPS_ReturnValue_1, int32 K2Node_ComponentBoundEvent_NewOption_2, bool CallFunc_SetReflexEnabled_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_8, bool CallFunc_SaveMirrorEnabledOnlyInLobby_ReturnValue, bool CallFunc_SaveMirrorReflectionEnabled_ReturnValue, bool CallFunc_SetReflexEnabled_ReturnValue_1, bool CallFunc_SetReflexEnabled_ReturnValue_2, int32 K2Node_ComponentBoundEvent_NewOption_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, enum class ENVGStyle K2Node_Select_Default_13, class UModioManager* CallFunc_GetInstance_ReturnValue, bool CallFunc_SaveNVGStyle_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_ComponentBoundEvent_NewFloatValue, float K2Node_ComponentBoundEvent_NewSliderValue, bool K2Node_ComponentBoundEvent_bNewCheckState, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_SetSendMapStatistics_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UReadyOrNotGameInstance* CallFunc_GetRONGameInstance_ReturnValue, bool CallFunc_IsReplaySystemEnabled_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "ExecuteUbergraph_W_SettingsMenu");

	Params::UW_SettingsMenu_C_ExecuteUbergraph_W_SettingsMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_NewOption = K2Node_ComponentBoundEvent_NewOption;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.Temp_byte_Variable_12 = Temp_byte_Variable_12;
	Parms.Temp_byte_Variable_13 = Temp_byte_Variable_13;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_byte_Variable_14 = Temp_byte_Variable_14;
	Parms.Temp_byte_Variable_15 = Temp_byte_Variable_15;
	Parms.Temp_byte_Variable_16 = Temp_byte_Variable_16;
	Parms.Temp_byte_Variable_17 = Temp_byte_Variable_17;
	Parms.Temp_byte_Variable_18 = Temp_byte_Variable_18;
	Parms.Temp_byte_Variable_19 = Temp_byte_Variable_19;
	Parms.Temp_byte_Variable_20 = Temp_byte_Variable_20;
	Parms.Temp_byte_Variable_21 = Temp_byte_Variable_21;
	Parms.Temp_byte_Variable_22 = Temp_byte_Variable_22;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_byte_Variable_23 = Temp_byte_Variable_23;
	Parms.Temp_byte_Variable_24 = Temp_byte_Variable_24;
	Parms.Temp_byte_Variable_25 = Temp_byte_Variable_25;
	Parms.Temp_byte_Variable_26 = Temp_byte_Variable_26;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.Temp_byte_Variable_27 = Temp_byte_Variable_27;
	Parms.Temp_byte_Variable_28 = Temp_byte_Variable_28;
	Parms.Temp_byte_Variable_29 = Temp_byte_Variable_29;
	Parms.Temp_byte_Variable_30 = Temp_byte_Variable_30;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.Temp_byte_Variable_31 = Temp_byte_Variable_31;
	Parms.Temp_byte_Variable_32 = Temp_byte_Variable_32;
	Parms.Temp_byte_Variable_33 = Temp_byte_Variable_33;
	Parms.Temp_byte_Variable_34 = Temp_byte_Variable_34;
	Parms.Temp_byte_Variable_35 = Temp_byte_Variable_35;
	Parms.Temp_byte_Variable_36 = Temp_byte_Variable_36;
	Parms.Temp_byte_Variable_37 = Temp_byte_Variable_37;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.Temp_byte_Variable_38 = Temp_byte_Variable_38;
	Parms.Temp_byte_Variable_39 = Temp_byte_Variable_39;
	Parms.Temp_int_Variable_10 = Temp_int_Variable_10;
	Parms.Temp_byte_Variable_40 = Temp_byte_Variable_40;
	Parms.Temp_byte_Variable_41 = Temp_byte_Variable_41;
	Parms.Temp_int_Variable_11 = Temp_int_Variable_11;
	Parms.Temp_byte_Variable_42 = Temp_byte_Variable_42;
	Parms.Temp_byte_Variable_43 = Temp_byte_Variable_43;
	Parms.Temp_int_Variable_12 = Temp_int_Variable_12;
	Parms.Temp_byte_Variable_44 = Temp_byte_Variable_44;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_45 = Temp_byte_Variable_45;
	Parms.Temp_byte_Variable_46 = Temp_byte_Variable_46;
	Parms.Temp_byte_Variable_47 = Temp_byte_Variable_47;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Bindings = K2Node_CustomEvent_Bindings;
	Parms.K2Node_CustomEvent_Grid_Panel = K2Node_CustomEvent_Grid_Panel;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_17 = K2Node_ComponentBoundEvent_NewFloatValue_17;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_30 = K2Node_ComponentBoundEvent_NewSliderValue_30;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_43 = K2Node_ComponentBoundEvent_bNewCheckState_43;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_42 = K2Node_ComponentBoundEvent_bNewCheckState_42;
	Parms.CallFunc_SetShowFPS_ReturnValue = CallFunc_SetShowFPS_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_41 = K2Node_ComponentBoundEvent_bNewCheckState_41;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_40 = K2Node_ComponentBoundEvent_bNewCheckState_40;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_39 = K2Node_ComponentBoundEvent_bNewCheckState_39;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_38 = K2Node_ComponentBoundEvent_bNewCheckState_38;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_37 = K2Node_ComponentBoundEvent_bNewCheckState_37;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_36 = K2Node_ComponentBoundEvent_bNewCheckState_36;
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
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_SaveHUDSettings_ReturnValue = CallFunc_SaveHUDSettings_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_SaveHUDSettings_ReturnValue_1 = CallFunc_SaveHUDSettings_ReturnValue_1;
	Parms.CallFunc_SaveHUDSettings_ReturnValue_2 = CallFunc_SaveHUDSettings_ReturnValue_2;
	Parms.CallFunc_SaveHUDSettings_ReturnValue_3 = CallFunc_SaveHUDSettings_ReturnValue_3;
	Parms.CallFunc_SaveHUDSettings_ReturnValue_4 = CallFunc_SaveHUDSettings_ReturnValue_4;
	Parms.CallFunc_SaveHUDSettings_ReturnValue_5 = CallFunc_SaveHUDSettings_ReturnValue_5;
	Parms.CallFunc_SaveHUDSettings_ReturnValue_6 = CallFunc_SaveHUDSettings_ReturnValue_6;
	Parms.CallFunc_SaveHUDSettings_ReturnValue_7 = CallFunc_SaveHUDSettings_ReturnValue_7;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_16 = K2Node_ComponentBoundEvent_NewFloatValue_16;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_29 = K2Node_ComponentBoundEvent_NewSliderValue_29;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_15 = K2Node_ComponentBoundEvent_NewFloatValue_15;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_28 = K2Node_ComponentBoundEvent_NewSliderValue_28;
	Parms.CallFunc_SaveSFXVolume_ReturnValue = CallFunc_SaveSFXVolume_ReturnValue;
	Parms.CallFunc_SaveMasterVolume_ReturnValue = CallFunc_SaveMasterVolume_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_14 = K2Node_ComponentBoundEvent_NewFloatValue_14;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_27 = K2Node_ComponentBoundEvent_NewSliderValue_27;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_13 = K2Node_ComponentBoundEvent_NewFloatValue_13;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_26 = K2Node_ComponentBoundEvent_NewSliderValue_26;
	Parms.CallFunc_SaveMusicVolume_ReturnValue = CallFunc_SaveMusicVolume_ReturnValue;
	Parms.CallFunc_SaveUIVolume_ReturnValue = CallFunc_SaveUIVolume_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_12 = K2Node_ComponentBoundEvent_NewFloatValue_12;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_25 = K2Node_ComponentBoundEvent_NewSliderValue_25;
	Parms.CallFunc_SaveVOIPVolume_ReturnValue = CallFunc_SaveVOIPVolume_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewResolutionValue = K2Node_ComponentBoundEvent_NewResolutionValue;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_24 = K2Node_ComponentBoundEvent_NewSliderValue_24;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue_5 = K2Node_ComponentBoundEvent_NewIntegerValue_5;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_23 = K2Node_ComponentBoundEvent_NewSliderValue_23;
	Parms.K2Node_ComponentBoundEvent_NewQualityValue_5 = K2Node_ComponentBoundEvent_NewQualityValue_5;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_22 = K2Node_ComponentBoundEvent_NewSliderValue_22;
	Parms.K2Node_ComponentBoundEvent_NewQualityValue_4 = K2Node_ComponentBoundEvent_NewQualityValue_4;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_21 = K2Node_ComponentBoundEvent_NewSliderValue_21;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_NewQualityValue_3 = K2Node_ComponentBoundEvent_NewQualityValue_3;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_20 = K2Node_ComponentBoundEvent_NewSliderValue_20;
	Parms.K2Node_ComponentBoundEvent_NewQualityValue_2 = K2Node_ComponentBoundEvent_NewQualityValue_2;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_19 = K2Node_ComponentBoundEvent_NewSliderValue_19;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_3 = CallFunc_Conv_IntToByte_ReturnValue_3;
	Parms.CallFunc_GetValidValue_ReturnValue_2 = CallFunc_GetValidValue_ReturnValue_2;
	Parms.CallFunc_GetValidValue_ReturnValue_3 = CallFunc_GetValidValue_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_NewQualityValue_1 = K2Node_ComponentBoundEvent_NewQualityValue_1;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_18 = K2Node_ComponentBoundEvent_NewSliderValue_18;
	Parms.K2Node_ComponentBoundEvent_NewQualityValue = K2Node_ComponentBoundEvent_NewQualityValue;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_17 = K2Node_ComponentBoundEvent_NewSliderValue_17;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_4 = CallFunc_Conv_IntToByte_ReturnValue_4;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_5 = CallFunc_Conv_IntToByte_ReturnValue_5;
	Parms.CallFunc_GetValidValue_ReturnValue_4 = CallFunc_GetValidValue_ReturnValue_4;
	Parms.CallFunc_GetValidValue_ReturnValue_5 = CallFunc_GetValidValue_ReturnValue_5;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue_4 = K2Node_ComponentBoundEvent_NewIntegerValue_4;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_16 = K2Node_ComponentBoundEvent_NewSliderValue_16;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_11 = K2Node_ComponentBoundEvent_NewFloatValue_11;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_15 = K2Node_ComponentBoundEvent_NewSliderValue_15;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.K2Node_ComponentBoundEvent_CallingModal_2 = K2Node_ComponentBoundEvent_CallingModal_2;
	Parms.K2Node_ComponentBoundEvent_TextEntry_1 = K2Node_ComponentBoundEvent_TextEntry_1;
	Parms.K2Node_ComponentBoundEvent_CallingModal_1 = K2Node_ComponentBoundEvent_CallingModal_1;
	Parms.K2Node_ComponentBoundEvent_CallingModal = K2Node_ComponentBoundEvent_CallingModal;
	Parms.K2Node_ComponentBoundEvent_TextEntry = K2Node_ComponentBoundEvent_TextEntry;
	Parms.CallFunc_SetMotionBlurStrength_ReturnValue = CallFunc_SetMotionBlurStrength_ReturnValue;
	Parms.CallFunc_SetMotionBlurEnabled_ReturnValue = CallFunc_SetMotionBlurEnabled_ReturnValue;
	Parms.CallFunc_SetUseMeshpainting_ReturnValue = CallFunc_SetUseMeshpainting_ReturnValue;
	Parms.CallFunc_SetDepthofFieldSetting_ReturnValue = CallFunc_SetDepthofFieldSetting_ReturnValue;
	Parms.CallFunc_SaveSafeZoneSettings_ReturnValue = CallFunc_SaveSafeZoneSettings_ReturnValue;
	Parms.CallFunc_SavePiPResolutionScale_ReturnValue = CallFunc_SavePiPResolutionScale_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_3 = CallFunc_Conv_ByteToInt_ReturnValue_3;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_4 = CallFunc_Conv_ByteToInt_ReturnValue_4;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_5 = CallFunc_Conv_ByteToInt_ReturnValue_5;
	Parms.CallFunc_SaveVideoModeAndQuality_ReturnValue = CallFunc_SaveVideoModeAndQuality_ReturnValue;
	Parms.CallFunc_SetVideoQualitySettings_ReturnValue = CallFunc_SetVideoQualitySettings_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.CallFunc_AddChildToGrid_ReturnValue = CallFunc_AddChildToGrid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewOption_20 = K2Node_ComponentBoundEvent_NewOption_20;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_6 = CallFunc_Conv_IntToByte_ReturnValue_6;
	Parms.CallFunc_GetValidValue_ReturnValue_6 = CallFunc_GetValidValue_ReturnValue_6;
	Parms.K2Node_ComponentBoundEvent_NewOption_19 = K2Node_ComponentBoundEvent_NewOption_19;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SetScreenResolution_ReturnValue = CallFunc_SetScreenResolution_ReturnValue;
	Parms.CallFunc_ChangeScreenResolution_ReturnValue = CallFunc_ChangeScreenResolution_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_SetFoV_ReturnValue = CallFunc_SetFoV_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_CallingButton_1 = K2Node_ComponentBoundEvent_CallingButton_1;
	Parms.K2Node_ComponentBoundEvent_CallingButton = K2Node_ComponentBoundEvent_CallingButton;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_CustomEvent_CallingWidget_2 = K2Node_CustomEvent_CallingWidget_2;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChildToGrid_ReturnValue_1 = CallFunc_AddChildToGrid_ReturnValue_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_2 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.K2Node_CustomEvent_CallingWidget_1 = K2Node_CustomEvent_CallingWidget_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_3 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_3;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_4 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_4;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_5 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_5;
	Parms.K2Node_CustomEvent_CallingWidget = K2Node_CustomEvent_CallingWidget;
	Parms.K2Node_CustomEvent_NewKey = K2Node_CustomEvent_NewKey;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_35 = K2Node_ComponentBoundEvent_bNewCheckState_35;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_34 = K2Node_ComponentBoundEvent_bNewCheckState_34;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_10 = K2Node_ComponentBoundEvent_NewFloatValue_10;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_14 = K2Node_ComponentBoundEvent_NewSliderValue_14;
	Parms.CallFunc_GetMouseInverted_bInvertVertical = CallFunc_GetMouseInverted_bInvertVertical;
	Parms.CallFunc_GetMouseInverted_bInvertHorizontal = CallFunc_GetMouseInverted_bInvertHorizontal;
	Parms.CallFunc_GetMouseInverted_ReturnValue = CallFunc_GetMouseInverted_ReturnValue;
	Parms.CallFunc_SetMouseSensitivity_ReturnValue = CallFunc_SetMouseSensitivity_ReturnValue;
	Parms.CallFunc_SetMouseInverted_ReturnValue = CallFunc_SetMouseInverted_ReturnValue;
	Parms.CallFunc_SetMouseInverted_ReturnValue_1 = CallFunc_SetMouseInverted_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_NewOption_18 = K2Node_ComponentBoundEvent_NewOption_18;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_SetCurrentCulture_ReturnValue = CallFunc_SetCurrentCulture_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_CustomEvent_CallingBind = K2Node_CustomEvent_CallingBind;
	Parms.K2Node_CustomEvent_ActionMappings = K2Node_CustomEvent_ActionMappings;
	Parms.K2Node_CustomEvent_AxisMappings = K2Node_CustomEvent_AxisMappings;
	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.K2Node_CustomEvent_ConflictBindsText = K2Node_CustomEvent_ConflictBindsText;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetConflictingKeybindText_Text = CallFunc_GetConflictingKeybindText_Text;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_33 = K2Node_ComponentBoundEvent_bNewCheckState_33;
	Parms.CallFunc_SaveKeybinds_ReturnValue = CallFunc_SaveKeybinds_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_32 = K2Node_ComponentBoundEvent_bNewCheckState_32;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_9 = K2Node_ComponentBoundEvent_NewFloatValue_9;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_13 = K2Node_ComponentBoundEvent_NewSliderValue_13;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_8 = K2Node_ComponentBoundEvent_NewFloatValue_8;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_12 = K2Node_ComponentBoundEvent_NewSliderValue_12;
	Parms.CallFunc_SetFreelookSensitivity_ReturnValue = CallFunc_SetFreelookSensitivity_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_31 = K2Node_ComponentBoundEvent_bNewCheckState_31;
	Parms.CallFunc_SetShowControls_ReturnValue = CallFunc_SetShowControls_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_6 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_6;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Try_Assign_Unbindable_Control_bSuccess = CallFunc_Try_Assign_Unbindable_Control_bSuccess;
	Parms.CallFunc_Try_Assign_Unbindable_Control_bSuccess_1 = CallFunc_Try_Assign_Unbindable_Control_bSuccess_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_30 = K2Node_ComponentBoundEvent_bNewCheckState_30;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue_3 = K2Node_ComponentBoundEvent_NewIntegerValue_3;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_11 = K2Node_ComponentBoundEvent_NewSliderValue_11;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_29 = K2Node_ComponentBoundEvent_bNewCheckState_29;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_28 = K2Node_ComponentBoundEvent_bNewCheckState_28;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_27 = K2Node_ComponentBoundEvent_bNewCheckState_27;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_26 = K2Node_ComponentBoundEvent_bNewCheckState_26;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_25 = K2Node_ComponentBoundEvent_bNewCheckState_25;
	Parms.CallFunc_SetRaytracingSettings_ReturnValue = CallFunc_SetRaytracingSettings_ReturnValue;
	Parms.CallFunc_SetFrameRateLimit_ReturnValue = CallFunc_SetFrameRateLimit_ReturnValue;
	Parms.CallFunc_SetVSyncEnabled_ReturnValue = CallFunc_SetVSyncEnabled_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_24 = K2Node_ComponentBoundEvent_bNewCheckState_24;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_23 = K2Node_ComponentBoundEvent_bNewCheckState_23;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_7 = K2Node_ComponentBoundEvent_NewFloatValue_7;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_10 = K2Node_ComponentBoundEvent_NewSliderValue_10;
	Parms.K2Node_ComponentBoundEvent_NewOption_17 = K2Node_ComponentBoundEvent_NewOption_17;
	Parms.CallFunc_SaveHUDSettings_ReturnValue_8 = CallFunc_SaveHUDSettings_ReturnValue_8;
	Parms.K2Node_ComponentBoundEvent_NewOption_16 = K2Node_ComponentBoundEvent_NewOption_16;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_SaveGrenadeSettings_ReturnValue = CallFunc_SaveGrenadeSettings_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_22 = K2Node_ComponentBoundEvent_bNewCheckState_22;
	Parms.CallFunc_SaveShotgunSettings_ReturnValue = CallFunc_SaveShotgunSettings_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_21 = K2Node_ComponentBoundEvent_bNewCheckState_21;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SaveHitmarkerSfxEnabled_ReturnValue = CallFunc_SaveHitmarkerSfxEnabled_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameUserSettings_ReturnValue = CallFunc_GetReadyOrNotGameUserSettings_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewOption_15 = K2Node_ComponentBoundEvent_NewOption_15;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_1 = CallFunc_GetOwningPlayerPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPlayer_Character_1 = K2Node_DynamicCast_AsPlayer_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_20 = K2Node_ComponentBoundEvent_bNewCheckState_20;
	Parms.CallFunc_SaveHUDSettings_ReturnValue_9 = CallFunc_SaveHUDSettings_ReturnValue_9;
	Parms.CallFunc_SaveItemSelectionStyleSettings_ReturnValue = CallFunc_SaveItemSelectionStyleSettings_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_6 = K2Node_ComponentBoundEvent_NewFloatValue_6;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_9 = K2Node_ComponentBoundEvent_NewSliderValue_9;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_5 = K2Node_ComponentBoundEvent_NewFloatValue_5;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_8 = K2Node_ComponentBoundEvent_NewSliderValue_8;
	Parms.CallFunc_IsDLSSEnabled_ReturnValue = CallFunc_IsDLSSEnabled_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue_2 = K2Node_ComponentBoundEvent_NewIntegerValue_2;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_7 = K2Node_ComponentBoundEvent_NewSliderValue_7;
	Parms.CallFunc_SetDlssQuality_ReturnValue = CallFunc_SetDlssQuality_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewOption_14 = K2Node_ComponentBoundEvent_NewOption_14;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue_1 = K2Node_ComponentBoundEvent_NewIntegerValue_1;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_6 = K2Node_ComponentBoundEvent_NewSliderValue_6;
	Parms.CallFunc_SaveHUDSettings_ReturnValue_10 = CallFunc_SaveHUDSettings_ReturnValue_10;
	Parms.CallFunc_SaveTeamViewSetting_ReturnValue = CallFunc_SaveTeamViewSetting_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewOption_13 = K2Node_ComponentBoundEvent_NewOption_13;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_SaveEmptyMagReloadSettings_ReturnValue = CallFunc_SaveEmptyMagReloadSettings_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_AddChildToGrid_ReturnValue_2 = CallFunc_AddChildToGrid_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_AddChildToGrid_ReturnValue_3 = CallFunc_AddChildToGrid_ReturnValue_3;
	Parms.K2Node_CustomEvent_CallingModal_2 = K2Node_CustomEvent_CallingModal_2;
	Parms.K2Node_CustomEvent_TextEntry = K2Node_CustomEvent_TextEntry;
	Parms.K2Node_CustomEvent_CallingModal_1 = K2Node_CustomEvent_CallingModal_1;
	Parms.CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp = CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp;
	Parms.K2Node_DynamicCast_AsW_Bind_Conflict_Modal = K2Node_DynamicCast_AsW_Bind_Conflict_Modal;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CustomEvent_CallingModal = K2Node_CustomEvent_CallingModal;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.K2Node_ComponentBoundEvent_NewOption_12 = K2Node_ComponentBoundEvent_NewOption_12;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_19 = K2Node_ComponentBoundEvent_bNewCheckState_19;
	Parms.CallFunc_SaveShowHealthIconSetting_ReturnValue = CallFunc_SaveShowHealthIconSetting_ReturnValue;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_18 = K2Node_ComponentBoundEvent_bNewCheckState_18;
	Parms.CallFunc_SaveScoreReadoutSetting_ReturnValue = CallFunc_SaveScoreReadoutSetting_ReturnValue;
	Parms.CallFunc_SaveHotkeyHintSetting_ReturnValue = CallFunc_SaveHotkeyHintSetting_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewOption_11 = K2Node_ComponentBoundEvent_NewOption_11;
	Parms.CallFunc_LoadDefaultCommands_DefaultCommand = CallFunc_LoadDefaultCommands_DefaultCommand;
	Parms.CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand = CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand;
	Parms.CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand = CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand;
	Parms.CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand = CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand;
	Parms.CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand = CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand;
	Parms.CallFunc_LoadDefaultCommands_ReturnValue = CallFunc_LoadDefaultCommands_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewOption_10 = K2Node_ComponentBoundEvent_NewOption_10;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_SaveDefaultCommand_ReturnValue = CallFunc_SaveDefaultCommand_ReturnValue;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_LoadDefaultCommands_DefaultCommand_1 = CallFunc_LoadDefaultCommands_DefaultCommand_1;
	Parms.CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand_1 = CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand_1;
	Parms.CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand_1 = CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand_1;
	Parms.CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand_1 = CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand_1;
	Parms.CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand_1 = CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand_1;
	Parms.CallFunc_LoadDefaultCommands_ReturnValue_1 = CallFunc_LoadDefaultCommands_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_NewOption_9 = K2Node_ComponentBoundEvent_NewOption_9;
	Parms.CallFunc_SaveDefaultCommand_ReturnValue_1 = CallFunc_SaveDefaultCommand_ReturnValue_1;
	Parms.CallFunc_LoadDefaultCommands_DefaultCommand_2 = CallFunc_LoadDefaultCommands_DefaultCommand_2;
	Parms.CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand_2 = CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand_2;
	Parms.CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand_2 = CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand_2;
	Parms.CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand_2 = CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand_2;
	Parms.CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand_2 = CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand_2;
	Parms.CallFunc_LoadDefaultCommands_ReturnValue_2 = CallFunc_LoadDefaultCommands_ReturnValue_2;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.K2Node_ComponentBoundEvent_NewOption_8 = K2Node_ComponentBoundEvent_NewOption_8;
	Parms.CallFunc_SaveDefaultCommand_ReturnValue_2 = CallFunc_SaveDefaultCommand_ReturnValue_2;
	Parms.CallFunc_LoadDefaultCommands_DefaultCommand_3 = CallFunc_LoadDefaultCommands_DefaultCommand_3;
	Parms.CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand_3 = CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand_3;
	Parms.CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand_3 = CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand_3;
	Parms.CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand_3 = CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand_3;
	Parms.CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand_3 = CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand_3;
	Parms.CallFunc_LoadDefaultCommands_ReturnValue_3 = CallFunc_LoadDefaultCommands_ReturnValue_3;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.K2Node_ComponentBoundEvent_NewOption_7 = K2Node_ComponentBoundEvent_NewOption_7;
	Parms.CallFunc_SaveDefaultCommand_ReturnValue_3 = CallFunc_SaveDefaultCommand_ReturnValue_3;
	Parms.CallFunc_LoadDefaultCommands_DefaultCommand_4 = CallFunc_LoadDefaultCommands_DefaultCommand_4;
	Parms.CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand_4 = CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand_4;
	Parms.CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand_4 = CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand_4;
	Parms.CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand_4 = CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand_4;
	Parms.CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand_4 = CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand_4;
	Parms.CallFunc_LoadDefaultCommands_ReturnValue_4 = CallFunc_LoadDefaultCommands_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_NewOption_6 = K2Node_ComponentBoundEvent_NewOption_6;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption = CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption;
	Parms.CallFunc_LoadDefaultCommandsAsOption_ReturnValue = CallFunc_LoadDefaultCommandsAsOption_ReturnValue;
	Parms.CallFunc_SaveDefaultCommandAsOption_ReturnValue = CallFunc_SaveDefaultCommandAsOption_ReturnValue;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_SaveDefaultCommand_ReturnValue_4 = CallFunc_SaveDefaultCommand_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption_1 = CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption_1;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption_1 = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption_1;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption_1 = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption_1;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption_1 = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption_1;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption_1 = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption_1;
	Parms.CallFunc_LoadDefaultCommandsAsOption_ReturnValue_1 = CallFunc_LoadDefaultCommandsAsOption_ReturnValue_1;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption_2 = CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption_2;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption_2 = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption_2;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption_2 = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption_2;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption_2 = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption_2;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption_2 = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption_2;
	Parms.CallFunc_LoadDefaultCommandsAsOption_ReturnValue_2 = CallFunc_LoadDefaultCommandsAsOption_ReturnValue_2;
	Parms.CallFunc_SaveDefaultCommandAsOption_ReturnValue_1 = CallFunc_SaveDefaultCommandAsOption_ReturnValue_1;
	Parms.CallFunc_SaveDefaultCommandAsOption_ReturnValue_2 = CallFunc_SaveDefaultCommandAsOption_ReturnValue_2;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption_3 = CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption_3;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption_3 = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption_3;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption_3 = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption_3;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption_3 = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption_3;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption_3 = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption_3;
	Parms.CallFunc_LoadDefaultCommandsAsOption_ReturnValue_3 = CallFunc_LoadDefaultCommandsAsOption_ReturnValue_3;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption_4 = CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption_4;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption_4 = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption_4;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption_4 = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption_4;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption_4 = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption_4;
	Parms.CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption_4 = CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption_4;
	Parms.CallFunc_LoadDefaultCommandsAsOption_ReturnValue_4 = CallFunc_LoadDefaultCommandsAsOption_ReturnValue_4;
	Parms.CallFunc_SaveDefaultCommandAsOption_ReturnValue_3 = CallFunc_SaveDefaultCommandAsOption_ReturnValue_3;
	Parms.CallFunc_SaveDefaultCommandAsOption_ReturnValue_4 = CallFunc_SaveDefaultCommandAsOption_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_Button_18 = K2Node_ComponentBoundEvent_Button_18;
	Parms.K2Node_ComponentBoundEvent_Button_17 = K2Node_ComponentBoundEvent_Button_17;
	Parms.K2Node_ComponentBoundEvent_Button_16 = K2Node_ComponentBoundEvent_Button_16;
	Parms.K2Node_ComponentBoundEvent_Button_15 = K2Node_ComponentBoundEvent_Button_15;
	Parms.K2Node_ComponentBoundEvent_Button_14 = K2Node_ComponentBoundEvent_Button_14;
	Parms.K2Node_ComponentBoundEvent_Button_13 = K2Node_ComponentBoundEvent_Button_13;
	Parms.K2Node_ComponentBoundEvent_Button_12 = K2Node_ComponentBoundEvent_Button_12;
	Parms.K2Node_ComponentBoundEvent_Button_11 = K2Node_ComponentBoundEvent_Button_11;
	Parms.K2Node_ComponentBoundEvent_Button_10 = K2Node_ComponentBoundEvent_Button_10;
	Parms.K2Node_ComponentBoundEvent_Button_9 = K2Node_ComponentBoundEvent_Button_9;
	Parms.K2Node_ComponentBoundEvent_Button_8 = K2Node_ComponentBoundEvent_Button_8;
	Parms.K2Node_ComponentBoundEvent_Button_7 = K2Node_ComponentBoundEvent_Button_7;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_17 = K2Node_ComponentBoundEvent_bNewCheckState_17;
	Parms.CallFunc_SaveShowPlayerIconSetting_ReturnValue = CallFunc_SaveShowPlayerIconSetting_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_16 = K2Node_ComponentBoundEvent_bNewCheckState_16;
	Parms.CallFunc_SaveShowHesitationBarSetting_ReturnValue = CallFunc_SaveShowHesitationBarSetting_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewOption_5 = K2Node_ComponentBoundEvent_NewOption_5;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_Select_Default_12 = K2Node_Select_Default_12;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.CallFunc_SaveOptiwandViewMode_ReturnValue = CallFunc_SaveOptiwandViewMode_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_15 = K2Node_ComponentBoundEvent_bNewCheckState_15;
	Parms.CallFunc_SaveKeybinds_ReturnValue_1 = CallFunc_SaveKeybinds_ReturnValue_1;
	Parms.CallFunc_SaveShowTeamStatus_ReturnValue = CallFunc_SaveShowTeamStatus_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_14 = K2Node_ComponentBoundEvent_bNewCheckState_14;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_13 = K2Node_ComponentBoundEvent_bNewCheckState_13;
	Parms.CallFunc_SaveShowCommandContextHintSetting_ReturnValue = CallFunc_SaveShowCommandContextHintSetting_ReturnValue;
	Parms.CallFunc_SaveZoomADSSetting_ReturnValue = CallFunc_SaveZoomADSSetting_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_12 = K2Node_ComponentBoundEvent_bNewCheckState_12;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_11 = K2Node_ComponentBoundEvent_bNewCheckState_11;
	Parms.CallFunc_SetBounceLightEnabled_ReturnValue = CallFunc_SetBounceLightEnabled_ReturnValue;
	Parms.CallFunc_SetFlashlightShadows_ReturnValue = CallFunc_SetFlashlightShadows_ReturnValue;
	Parms.CallFunc_SetFSRQuality_ReturnValue = CallFunc_SetFSRQuality_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue = K2Node_ComponentBoundEvent_NewIntegerValue;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_5 = K2Node_ComponentBoundEvent_NewSliderValue_5;
	Parms.CallFunc_SetDlssQuality_ReturnValue_1 = CallFunc_SetDlssQuality_ReturnValue_1;
	Parms.CallFunc_SetFSRQuality_ReturnValue_1 = CallFunc_SetFSRQuality_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_4 = K2Node_ComponentBoundEvent_NewFloatValue_4;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_4 = K2Node_ComponentBoundEvent_NewSliderValue_4;
	Parms.K2Node_ComponentBoundEvent_NewOption_4 = K2Node_ComponentBoundEvent_NewOption_4;
	Parms.CallFunc_SetMicInputGain_ReturnValue = CallFunc_SetMicInputGain_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue = CallFunc_GetReadyOrNotGameInstance_ReturnValue;
	Parms.CallFunc_GetCurrentOptionAsString_OptionAsString = CallFunc_GetCurrentOptionAsString_OptionAsString;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_3 = K2Node_ComponentBoundEvent_NewFloatValue_3;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_3 = K2Node_ComponentBoundEvent_NewSliderValue_3;
	Parms.CallFunc_SetInputAudioDevice_ReturnValue = CallFunc_SetInputAudioDevice_ReturnValue;
	Parms.CallFunc_SaveMirrorResolutionScale_ReturnValue = CallFunc_SaveMirrorResolutionScale_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue_1 = CallFunc_GetReadyOrNotGameInstance_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetDiscordOneTimeUseCode_ReturnValue = CallFunc_GetDiscordOneTimeUseCode_ReturnValue;
	Parms.CallFunc_GetUniqueNetID_UniqueNetId = CallFunc_GetUniqueNetID_UniqueNetId;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_10 = K2Node_ComponentBoundEvent_bNewCheckState_10;
	Parms.CallFunc_UniqueNetIdToString_String = CallFunc_UniqueNetIdToString_String;
	Parms.CallFunc_SaveServersideChecksum_ReturnValue = CallFunc_SaveServersideChecksum_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue_2 = CallFunc_GetReadyOrNotGameInstance_ReturnValue_2;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue_3 = CallFunc_GetReadyOrNotGameInstance_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_9 = K2Node_ComponentBoundEvent_bNewCheckState_9;
	Parms.CallFunc_SaveMirrorAntiAliasEnabled_ReturnValue = CallFunc_SaveMirrorAntiAliasEnabled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_8 = K2Node_ComponentBoundEvent_bNewCheckState_8;
	Parms.CallFunc_SaveMirrorDecalsEnabled_ReturnValue = CallFunc_SaveMirrorDecalsEnabled_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_7 = K2Node_ComponentBoundEvent_bNewCheckState_7;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_6 = K2Node_ComponentBoundEvent_bNewCheckState_6;
	Parms.CallFunc_SaveMirrorDynamicShadowsEnabled_ReturnValue = CallFunc_SaveMirrorDynamicShadowsEnabled_ReturnValue;
	Parms.CallFunc_LoadPiPFPS_bEnabled = CallFunc_LoadPiPFPS_bEnabled;
	Parms.CallFunc_LoadPiPFPS_FPS = CallFunc_LoadPiPFPS_FPS;
	Parms.CallFunc_LoadPiPFPS_ReturnValue = CallFunc_LoadPiPFPS_ReturnValue;
	Parms.CallFunc_SavePiPFPS_ReturnValue = CallFunc_SavePiPFPS_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_5 = K2Node_ComponentBoundEvent_bNewCheckState_5;
	Parms.CallFunc_LoadTeamViewFPSSetting_bEnabled = CallFunc_LoadTeamViewFPSSetting_bEnabled;
	Parms.CallFunc_LoadTeamViewFPSSetting_TeamViewFPS = CallFunc_LoadTeamViewFPSSetting_TeamViewFPS;
	Parms.CallFunc_LoadTeamViewFPSSetting_ReturnValue = CallFunc_LoadTeamViewFPSSetting_ReturnValue;
	Parms.CallFunc_SaveTeamViewSetting_ReturnValue_1 = CallFunc_SaveTeamViewSetting_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_4 = K2Node_ComponentBoundEvent_bNewCheckState_4;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_2 = K2Node_ComponentBoundEvent_NewFloatValue_2;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_2 = K2Node_ComponentBoundEvent_NewSliderValue_2;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_1 = K2Node_ComponentBoundEvent_NewFloatValue_1;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_1 = K2Node_ComponentBoundEvent_NewSliderValue_1;
	Parms.CallFunc_GetWorldDecalsEnabled_bEnabled = CallFunc_GetWorldDecalsEnabled_bEnabled;
	Parms.CallFunc_GetWorldDecalsEnabled_FadeDistance = CallFunc_GetWorldDecalsEnabled_FadeDistance;
	Parms.CallFunc_GetWorldDecalsEnabled_Density = CallFunc_GetWorldDecalsEnabled_Density;
	Parms.CallFunc_GetWorldDecalsEnabled_ReturnValue = CallFunc_GetWorldDecalsEnabled_ReturnValue;
	Parms.CallFunc_GetWorldDecalsEnabled_bEnabled_1 = CallFunc_GetWorldDecalsEnabled_bEnabled_1;
	Parms.CallFunc_GetWorldDecalsEnabled_FadeDistance_1 = CallFunc_GetWorldDecalsEnabled_FadeDistance_1;
	Parms.CallFunc_GetWorldDecalsEnabled_Density_1 = CallFunc_GetWorldDecalsEnabled_Density_1;
	Parms.CallFunc_GetWorldDecalsEnabled_ReturnValue_1 = CallFunc_GetWorldDecalsEnabled_ReturnValue_1;
	Parms.CallFunc_SetWorldDecalEnabled_ReturnValue = CallFunc_SetWorldDecalEnabled_ReturnValue;
	Parms.CallFunc_SetWorldDecalEnabled_ReturnValue_1 = CallFunc_SetWorldDecalEnabled_ReturnValue_1;
	Parms.CallFunc_GetWorldDecalsEnabled_bEnabled_2 = CallFunc_GetWorldDecalsEnabled_bEnabled_2;
	Parms.CallFunc_GetWorldDecalsEnabled_FadeDistance_2 = CallFunc_GetWorldDecalsEnabled_FadeDistance_2;
	Parms.CallFunc_GetWorldDecalsEnabled_Density_2 = CallFunc_GetWorldDecalsEnabled_Density_2;
	Parms.CallFunc_GetWorldDecalsEnabled_ReturnValue_2 = CallFunc_GetWorldDecalsEnabled_ReturnValue_2;
	Parms.CallFunc_SetWorldDecalEnabled_ReturnValue_2 = CallFunc_SetWorldDecalEnabled_ReturnValue_2;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue_4 = CallFunc_GetReadyOrNotGameInstance_ReturnValue_4;
	Parms.CallFunc_IsNvidiaReflexEnabled_ReturnValue = CallFunc_IsNvidiaReflexEnabled_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewOption_3 = K2Node_ComponentBoundEvent_NewOption_3;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_3 = K2Node_ComponentBoundEvent_bNewCheckState_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_2 = K2Node_ComponentBoundEvent_bNewCheckState_2;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_1 = K2Node_ComponentBoundEvent_bNewCheckState_1;
	Parms.CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled = CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled;
	Parms.CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled = CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled;
	Parms.CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled = CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled;
	Parms.CallFunc_GetReflexLatencyOptions_ReturnValue = CallFunc_GetReflexLatencyOptions_ReturnValue;
	Parms.CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled_1 = CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled_1;
	Parms.CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled_1 = CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled_1;
	Parms.CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled_1 = CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled_1;
	Parms.CallFunc_GetReflexLatencyOptions_ReturnValue_1 = CallFunc_GetReflexLatencyOptions_ReturnValue_1;
	Parms.CallFunc_SetReflexLatencyOptions_ReturnValue = CallFunc_SetReflexLatencyOptions_ReturnValue;
	Parms.CallFunc_SetReflexLatencyOptions_ReturnValue_1 = CallFunc_SetReflexLatencyOptions_ReturnValue_1;
	Parms.CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled_2 = CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled_2;
	Parms.CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled_2 = CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled_2;
	Parms.CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled_2 = CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled_2;
	Parms.CallFunc_GetReflexLatencyOptions_ReturnValue_2 = CallFunc_GetReflexLatencyOptions_ReturnValue_2;
	Parms.CallFunc_LoadPiPFPS_bEnabled_1 = CallFunc_LoadPiPFPS_bEnabled_1;
	Parms.CallFunc_LoadPiPFPS_FPS_1 = CallFunc_LoadPiPFPS_FPS_1;
	Parms.CallFunc_LoadPiPFPS_ReturnValue_1 = CallFunc_LoadPiPFPS_ReturnValue_1;
	Parms.CallFunc_SetReflexLatencyOptions_ReturnValue_2 = CallFunc_SetReflexLatencyOptions_ReturnValue_2;
	Parms.CallFunc_SavePiPFPS_ReturnValue_1 = CallFunc_SavePiPFPS_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_NewOption_2 = K2Node_ComponentBoundEvent_NewOption_2;
	Parms.CallFunc_SetReflexEnabled_ReturnValue = CallFunc_SetReflexEnabled_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_8 = CallFunc_Less_IntInt_ReturnValue_8;
	Parms.CallFunc_SaveMirrorEnabledOnlyInLobby_ReturnValue = CallFunc_SaveMirrorEnabledOnlyInLobby_ReturnValue;
	Parms.CallFunc_SaveMirrorReflectionEnabled_ReturnValue = CallFunc_SaveMirrorReflectionEnabled_ReturnValue;
	Parms.CallFunc_SetReflexEnabled_ReturnValue_1 = CallFunc_SetReflexEnabled_ReturnValue_1;
	Parms.CallFunc_SetReflexEnabled_ReturnValue_2 = CallFunc_SetReflexEnabled_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_NewOption_1 = K2Node_ComponentBoundEvent_NewOption_1;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_Select_Default_13 = K2Node_Select_Default_13;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_SaveNVGStyle_ReturnValue = CallFunc_SaveNVGStyle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue = K2Node_ComponentBoundEvent_NewFloatValue;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue = K2Node_ComponentBoundEvent_NewSliderValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState = K2Node_ComponentBoundEvent_bNewCheckState;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_SetSendMapStatistics_ReturnValue = CallFunc_SetSendMapStatistics_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetRONGameInstance_ReturnValue = CallFunc_GetRONGameInstance_ReturnValue;
	Parms.CallFunc_IsReplaySystemEnabled_ReturnValue = CallFunc_IsReplaySystemEnabled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SettingsMenu.W_SettingsMenu_C.OnMenuExited__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SettingsMenu_C::OnMenuExited__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SettingsMenu_C", "OnMenuExited__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


