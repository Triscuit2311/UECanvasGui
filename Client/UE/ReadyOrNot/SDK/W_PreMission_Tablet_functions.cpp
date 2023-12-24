#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PreMission_Tablet.W_PreMission_Tablet_C
// (None)

class UClass* UW_PreMission_Tablet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PreMission_Tablet_C");

	return Clss;
}


// W_PreMission_Tablet_C W_PreMission_Tablet.Default__W_PreMission_Tablet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PreMission_Tablet_C* UW_PreMission_Tablet_C::GetDefaultObj()
{
	static class UW_PreMission_Tablet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PreMission_Tablet_C*>(UW_PreMission_Tablet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "GetFocusTarget");

	Params::UW_PreMission_Tablet_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "BackPage");

	Params::UW_PreMission_Tablet_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.GetRosterEnabled
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               RosterEnabled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLobby_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMultiplayer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCommanderMode_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_C::GetRosterEnabled(bool* RosterEnabled, bool CallFunc_IsLobby_ReturnValue, bool CallFunc_IsMultiplayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsCommanderMode_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "GetRosterEnabled");

	Params::UW_PreMission_Tablet_C_GetRosterEnabled_Params Parms{};

	Parms.CallFunc_IsLobby_ReturnValue = CallFunc_IsLobby_ReturnValue;
	Parms.CallFunc_IsMultiplayer_ReturnValue = CallFunc_IsMultiplayer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsCommanderMode_ReturnValue = CallFunc_IsCommanderMode_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (RosterEnabled != nullptr)
		*RosterEnabled = Parms.RosterEnabled;

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.InitNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable_3                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRosterEnabled_RosterEnabled                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_C::InitNavigation(const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& Temp_string_Variable_3, bool CallFunc_IsInLobby_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_GetRosterEnabled_RosterEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "InitNavigation");

	Params::UW_PreMission_Tablet_C_InitNavigation_Params Parms{};

	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetRosterEnabled_RosterEnabled = CallFunc_GetRosterEnabled_RosterEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.SetActiveScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     NewActiveScreen                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_C::SetActiveScreen(class UWidget* NewActiveScreen, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "SetActiveScreen");

	Params::UW_PreMission_Tablet_C_SetActiveScreen_Params Parms{};

	Parms.NewActiveScreen = NewActiveScreen;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI = K2Node_DynamicCast_AsReady_or_Not_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI_1 = K2Node_DynamicCast_AsReady_or_Not_UI_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.SetActiveNavButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PremissionTablet_Button_C*NewActiveButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_C::SetActiveNavButton(class UW_PremissionTablet_Button_C* NewActiveButton, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "SetActiveNavButton");

	Params::UW_PreMission_Tablet_C_SetActiveNavButton_Params Parms{};

	Parms.NewActiveButton = NewActiveButton;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.Update Dpad Navigation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewLocalVar_1                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraDataInterfaceArrayBool*NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                       buttonVisibilities                                               (Edit, BlueprintVisible)
// TArray<class UNiagaraDataInterfaceArrayBool*>AvailableButtons                                                 (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveButton_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_PremissionTablet_Button_C*>CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WasInputKeyJustPressed_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WasInputKeyJustPressed_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PremissionTablet_Button_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_C::Update_Dpad_Navigation(int32 NewLocalVar_1, class UNiagaraDataInterfaceArrayBool* NewLocalVar_0, const TArray<bool>& buttonVisibilities, const TArray<class UNiagaraDataInterfaceArrayBool*>& AvailableButtons, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetActiveButton_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UW_PremissionTablet_Button_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_WasInputKeyJustPressed_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_WasInputKeyJustPressed_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UW_PremissionTablet_Button_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "Update Dpad Navigation");

	Params::UW_PreMission_Tablet_C_Update_Dpad_Navigation_Params Parms{};

	Parms.NewLocalVar_1 = NewLocalVar_1;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.buttonVisibilities = buttonVisibilities;
	Parms.AvailableButtons = AvailableButtons;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetActiveButton_ReturnValue = CallFunc_GetActiveButton_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_WasInputKeyJustPressed_ReturnValue = CallFunc_WasInputKeyJustPressed_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_WasInputKeyJustPressed_ReturnValue_1 = CallFunc_WasInputKeyJustPressed_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.OpenRoster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_C::OpenRoster(class UWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "OpenRoster");

	Params::UW_PreMission_Tablet_C_OpenRoster_Params Parms{};

	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.LoadScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRosterEnabled_RosterEnabled                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_C::LoadScreen(bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetRosterEnabled_RosterEnabled, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "LoadScreen");

	Params::UW_PreMission_Tablet_C_LoadScreen_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRosterEnabled_RosterEnabled = CallFunc_GetRosterEnabled_RosterEnabled;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI = K2Node_DynamicCast_AsReady_or_Not_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.DisplayNoDataScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NoData                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_C::DisplayNoDataScreen(bool NoData, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "DisplayNoDataScreen");

	Params::UW_PreMission_Tablet_C_DisplayNoDataScreen_Params Parms{};

	Parms.NoData = NoData;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)

struct FEventReply UW_PreMission_Tablet_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "OnKeyUp");

	Params::UW_PreMission_Tablet_C_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.RadialCollapsed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_C::RadialCollapsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "RadialCollapsed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.CloseRadial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_C::CloseRadial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "CloseRadial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.RadialMarkerSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CategoryName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MarkerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlanningMarker             K2Node_MakeStruct_PlanningMarker                                 (NoDestructor)

void UW_PreMission_Tablet_C::RadialMarkerSelected(class FName CategoryName, class FName MarkerName, const struct FPlanningMarker& K2Node_MakeStruct_PlanningMarker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "RadialMarkerSelected");

	Params::UW_PreMission_Tablet_C_RadialMarkerSelected_Params Parms{};

	Parms.CategoryName = CategoryName;
	Parms.MarkerName = MarkerName;
	Parms.K2Node_MakeStruct_PlanningMarker = K2Node_MakeStruct_PlanningMarker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.OpenRadial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Coordinates                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// struct FAnchorData                 K2Node_MakeStruct_AnchorData                                     (NoDestructor)
// class UW_Radial_MapMarking_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_C::OpenRadial(const struct FVector2D& Coordinates, const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FAnchorData& K2Node_MakeStruct_AnchorData, class UW_Radial_MapMarking_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "OpenRadial");

	Params::UW_PreMission_Tablet_C_OpenRadial_Params Parms{};

	Parms.Coordinates = Coordinates;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.K2Node_MakeStruct_AnchorData = K2Node_MakeStruct_AnchorData;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

struct FEventReply UW_PreMission_Tablet_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "OnMouseButtonUp");

	Params::UW_PreMission_Tablet_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.UpdateNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PremissionTablet_Button_C*NewActiveButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_PreMission_Tablet_Floors_C*K2Node_DynamicCast_AsW_Pre_Mission_Tablet_Floors                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_Reveal_self_CastInput                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_Hide_self_CastInput                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_C::UpdateNavigation(class UW_PremissionTablet_Button_C* NewActiveButton, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UW_PreMission_Tablet_Floors_C* K2Node_DynamicCast_AsW_Pre_Mission_Tablet_Floors, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Reveal_self_CastInput, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Hide_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "UpdateNavigation");

	Params::UW_PreMission_Tablet_C_UpdateNavigation_Params Parms{};

	Parms.NewActiveButton = NewActiveButton;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Pre_Mission_Tablet_Floors = K2Node_DynamicCast_AsW_Pre_Mission_Tablet_Floors;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Reveal_self_CastInput = CallFunc_Reveal_self_CastInput;
	Parms.CallFunc_Hide_self_CastInput = CallFunc_Hide_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.BndEvt__W_PreMission_Tablet_btn_Team_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_PremissionTablet_Button_C*TriggeringButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_C::BndEvt__W_PreMission_Tablet_btn_Team_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UW_PremissionTablet_Button_C* TriggeringButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "BndEvt__W_PreMission_Tablet_btn_Team_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	Params::UW_PreMission_Tablet_C_BndEvt__W_PreMission_Tablet_btn_Team_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringButton = TriggeringButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.BndEvt__W_PreMission_Tablet_btn_Map_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_PremissionTablet_Button_C*TriggeringButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_C::BndEvt__W_PreMission_Tablet_btn_Map_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UW_PremissionTablet_Button_C* TriggeringButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "BndEvt__W_PreMission_Tablet_btn_Map_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	Params::UW_PreMission_Tablet_C_BndEvt__W_PreMission_Tablet_btn_Map_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringButton = TriggeringButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.BndEvt__W_PreMission_Tablet_btn_Brief_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_PremissionTablet_Button_C*TriggeringButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_C::BndEvt__W_PreMission_Tablet_btn_Brief_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UW_PremissionTablet_Button_C* TriggeringButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "BndEvt__W_PreMission_Tablet_btn_Brief_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	Params::UW_PreMission_Tablet_C_BndEvt__W_PreMission_Tablet_btn_Brief_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringButton = TriggeringButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.BndEvt__W_PreMission_Tablet_W_PreMission_Tablet_Messenger_K2Node_ComponentBoundEvent_1_OnMessengerClose__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_C::BndEvt__W_PreMission_Tablet_W_PreMission_Tablet_Messenger_K2Node_ComponentBoundEvent_1_OnMessengerClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "BndEvt__W_PreMission_Tablet_W_PreMission_Tablet_Messenger_K2Node_ComponentBoundEvent_1_OnMessengerClose__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.BndEvt__W_PreMission_Tablet_W_PreMission_Tablet_Messenger_K2Node_ComponentBoundEvent_0_OnMessengerOpen__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_C::BndEvt__W_PreMission_Tablet_W_PreMission_Tablet_Messenger_K2Node_ComponentBoundEvent_0_OnMessengerOpen__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "BndEvt__W_PreMission_Tablet_W_PreMission_Tablet_Messenger_K2Node_ComponentBoundEvent_0_OnMessengerOpen__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "Tick");

	Params::UW_PreMission_Tablet_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.Chat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_C::Chat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "Chat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.Wake
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_C::Wake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "Wake");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "PreConstruct");

	Params::UW_PreMission_Tablet_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "ChangePage");

	Params::UW_PreMission_Tablet_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.Sleep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_C::Sleep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "Sleep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.BndEvt__W_PreMission_Tablet_W_PreMission_PlanningMap_K2Node_ComponentBoundEvent_6_OnMapLevelChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      MissionURL                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FLevelFloor                 FloorData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PreMission_Tablet_C::BndEvt__W_PreMission_Tablet_W_PreMission_PlanningMap_K2Node_ComponentBoundEvent_6_OnMapLevelChanged__DelegateSignature(const class FString& MissionURL, const struct FLevelFloor& FloorData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "BndEvt__W_PreMission_Tablet_W_PreMission_PlanningMap_K2Node_ComponentBoundEvent_6_OnMapLevelChanged__DelegateSignature");

	Params::UW_PreMission_Tablet_C_BndEvt__W_PreMission_Tablet_W_PreMission_PlanningMap_K2Node_ComponentBoundEvent_6_OnMapLevelChanged__DelegateSignature_Params Parms{};

	Parms.MissionURL = MissionURL;
	Parms.FloorData = FloorData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "SetInputMode");

	Params::UW_PreMission_Tablet_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "Hide");

	Params::UW_PreMission_Tablet_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "Reveal");

	Params::UW_PreMission_Tablet_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.AudioPlayerVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AudioPlayer_C*            PlayerWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayerVisible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_C::AudioPlayerVisible(class UW_AudioPlayer_C* PlayerWidget, bool PlayerVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "AudioPlayerVisible");

	Params::UW_PreMission_Tablet_C_AudioPlayerVisible_Params Parms{};

	Parms.PlayerWidget = PlayerWidget;
	Parms.PlayerVisible = PlayerVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.OnMissionChanged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FString                      URL                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FLevelDataLookupTable       LevelData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_PreMission_Tablet_C::OnMissionChanged(const class FString& URL, struct FLevelDataLookupTable& LevelData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "OnMissionChanged");

	Params::UW_PreMission_Tablet_C_OnMissionChanged_Params Parms{};

	Parms.URL = URL;
	Parms.LevelData = LevelData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.SetVisualTheme
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseDarkTheme                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_C::SetVisualTheme(bool UseDarkTheme)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "SetVisualTheme");

	Params::UW_PreMission_Tablet_C_SetVisualTheme_Params Parms{};

	Parms.UseDarkTheme = UseDarkTheme;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.MissionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      MissionURL                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FLevelDataLookupTable       LevelData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PreMission_Tablet_C::MissionChanged(const class FString& MissionURL, const struct FLevelDataLookupTable& LevelData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "MissionChanged");

	Params::UW_PreMission_Tablet_C_MissionChanged_Params Parms{};

	Parms.MissionURL = MissionURL;
	Parms.LevelData = LevelData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.BndEvt__W_PreMission_Tablet_btn_Camera_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_PremissionTablet_Button_C*TriggeringButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_C::BndEvt__W_PreMission_Tablet_btn_Camera_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UW_PremissionTablet_Button_C* TriggeringButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "BndEvt__W_PreMission_Tablet_btn_Camera_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	Params::UW_PreMission_Tablet_C_BndEvt__W_PreMission_Tablet_btn_Camera_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringButton = TriggeringButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.OnInputChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_C::OnInputChange(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "OnInputChange");

	Params::UW_PreMission_Tablet_C_OnInputChange_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.SetTabletState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsAwake                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_C::SetTabletState(bool IsAwake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "SetTabletState");

	Params::UW_PreMission_Tablet_C_SetTabletState_Params Parms{};

	Parms.IsAwake = IsAwake;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet.W_PreMission_Tablet_C.ExecuteUbergraph_W_PreMission_Tablet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PremissionTablet_Button_C*K2Node_ComponentBoundEvent_TriggeringButton_3                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PremissionTablet_Button_C*K2Node_ComponentBoundEvent_TriggeringButton_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PremissionTablet_Button_C*K2Node_ComponentBoundEvent_TriggeringButton_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_MissionURL                            (ZeroConstructor, HasGetValueTypeHash)
// struct FLevelFloor                 K2Node_ComponentBoundEvent_FloorData                             (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PreMission_Tablet_Floors_C*K2Node_DynamicCast_AsW_Pre_Mission_Tablet_Floors                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_AudioPlayer_C*            K2Node_Event_PlayerWidget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_PlayerVisible                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Event_URL                                                 (ZeroConstructor, HasGetValueTypeHash)
// struct FLevelDataLookupTable       K2Node_Event_LevelData_1                                         (ConstParm)
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsWithInterface_FoundWidgets                 (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_MissionPlanning_C>K2Node_DynamicCast_AsBPI_Mission_Planning                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_UseDarkTheme                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Event_MissionURL                                          (ZeroConstructor, HasGetValueTypeHash)
// struct FLevelDataLookupTable       K2Node_Event_LevelData                                           (None)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PremissionTablet_Button_C*K2Node_ComponentBoundEvent_TriggeringButton                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsAwake                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ITabletUI_C>K2Node_DynamicCast_AsTablet_UI                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSinglePlayer_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMultiplayer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_C::ExecuteUbergraph_W_PreMission_Tablet(int32 EntryPoint, class UW_PremissionTablet_Button_C* K2Node_ComponentBoundEvent_TriggeringButton_3, class UW_PremissionTablet_Button_C* K2Node_ComponentBoundEvent_TriggeringButton_2, class UW_PremissionTablet_Button_C* K2Node_ComponentBoundEvent_TriggeringButton_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_PageName, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, const class FString& K2Node_ComponentBoundEvent_MissionURL, const struct FLevelFloor& K2Node_ComponentBoundEvent_FloorData, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class UW_PreMission_Tablet_Floors_C* K2Node_DynamicCast_AsW_Pre_Mission_Tablet_Floors, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, bool K2Node_Event_IsGamepad, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, float K2Node_Event_Delay, class UW_AudioPlayer_C* K2Node_Event_PlayerWidget, bool K2Node_Event_PlayerVisible, const class FString& K2Node_Event_URL, const struct FLevelDataLookupTable& K2Node_Event_LevelData_1, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsWithInterface_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUserWidget* CallFunc_Array_Get_Item, TScriptInterface<class IBPI_MissionPlanning_C> K2Node_DynamicCast_AsBPI_Mission_Planning, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_Event_UseDarkTheme, const class FString& K2Node_Event_MissionURL, const struct FLevelDataLookupTable& K2Node_Event_LevelData, int32 Temp_int_Array_Index_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UW_PremissionTablet_Button_C* K2Node_ComponentBoundEvent_TriggeringButton, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_Event_IsAwake, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TScriptInterface<class ITabletUI_C> K2Node_DynamicCast_AsTablet_UI, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_1, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, bool CallFunc_IsSinglePlayer_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsMultiplayer_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_C", "ExecuteUbergraph_W_PreMission_Tablet");

	Params::UW_PreMission_Tablet_C_ExecuteUbergraph_W_PreMission_Tablet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_TriggeringButton_3 = K2Node_ComponentBoundEvent_TriggeringButton_3;
	Parms.K2Node_ComponentBoundEvent_TriggeringButton_2 = K2Node_ComponentBoundEvent_TriggeringButton_2;
	Parms.K2Node_ComponentBoundEvent_TriggeringButton_1 = K2Node_ComponentBoundEvent_TriggeringButton_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_MissionURL = K2Node_ComponentBoundEvent_MissionURL;
	Parms.K2Node_ComponentBoundEvent_FloorData = K2Node_ComponentBoundEvent_FloorData;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_DynamicCast_AsW_Pre_Mission_Tablet_Floors = K2Node_DynamicCast_AsW_Pre_Mission_Tablet_Floors;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_PlayerWidget = K2Node_Event_PlayerWidget;
	Parms.K2Node_Event_PlayerVisible = K2Node_Event_PlayerVisible;
	Parms.K2Node_Event_URL = K2Node_Event_URL;
	Parms.K2Node_Event_LevelData_1 = K2Node_Event_LevelData_1;
	Parms.CallFunc_GetAllWidgetsWithInterface_FoundWidgets = CallFunc_GetAllWidgetsWithInterface_FoundWidgets;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBPI_Mission_Planning = K2Node_DynamicCast_AsBPI_Mission_Planning;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_UseDarkTheme = K2Node_Event_UseDarkTheme;
	Parms.K2Node_Event_MissionURL = K2Node_Event_MissionURL;
	Parms.K2Node_Event_LevelData = K2Node_Event_LevelData;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_TriggeringButton = K2Node_ComponentBoundEvent_TriggeringButton;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.K2Node_Event_IsAwake = K2Node_Event_IsAwake;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsTablet_UI = K2Node_DynamicCast_AsTablet_UI;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue = CallFunc_GetReadyOrNotGameInstance_ReturnValue;
	Parms.CallFunc_IsSinglePlayer_ReturnValue = CallFunc_IsSinglePlayer_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_IsMultiplayer_ReturnValue = CallFunc_IsMultiplayer_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


