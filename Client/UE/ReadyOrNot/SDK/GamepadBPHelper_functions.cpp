#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GamepadBPHelper.GamepadBPHelper_C
// (None)

class UClass* UGamepadBPHelper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GamepadBPHelper_C");

	return Clss;
}


// GamepadBPHelper_C GamepadBPHelper.Default__GamepadBPHelper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGamepadBPHelper_C* UGamepadBPHelper_C::GetDefaultObj()
{
	static class UGamepadBPHelper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGamepadBPHelper_C*>(UGamepadBPHelper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GamepadBPHelper.GamepadBPHelper_C.UpdateGamepadButtonNavigation
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ParentWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        NextKeyBinding                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FKey                        PrevKeyBinding                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UUserWidget*                 CurrentSelectedButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 SelectedButton                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsNewButton                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FoundNewButton                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NewActiveButton                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentButtonIndex                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                       buttonAvailability                                               (Edit, BlueprintVisible)
// int32                              ButtonListNavigationDirection                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveButton_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WasInputKeyJustPressed_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WasInputKeyJustPressed_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadBPHelper_C::UpdateGamepadButtonNavigation(class UWidget* ParentWidget, const struct FKey& NextKeyBinding, const struct FKey& PrevKeyBinding, class UUserWidget* CurrentSelectedButton, class UObject* __WorldContext, class UUserWidget** SelectedButton, bool* IsNewButton, bool FoundNewButton, int32 NewActiveButton, int32 CurrentButtonIndex, const TArray<bool>& buttonAvailability, int32 ButtonListNavigationDirection, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UUserWidget*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_GetActiveButton_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item_1, bool CallFunc_WasInputKeyJustPressed_ReturnValue, bool CallFunc_WasInputKeyJustPressed_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadBPHelper_C", "UpdateGamepadButtonNavigation");

	Params::UGamepadBPHelper_C_UpdateGamepadButtonNavigation_Params Parms{};

	Parms.ParentWidget = ParentWidget;
	Parms.NextKeyBinding = NextKeyBinding;
	Parms.PrevKeyBinding = PrevKeyBinding;
	Parms.CurrentSelectedButton = CurrentSelectedButton;
	Parms.__WorldContext = __WorldContext;
	Parms.FoundNewButton = FoundNewButton;
	Parms.NewActiveButton = NewActiveButton;
	Parms.CurrentButtonIndex = CurrentButtonIndex;
	Parms.buttonAvailability = buttonAvailability;
	Parms.ButtonListNavigationDirection = ButtonListNavigationDirection;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetActiveButton_ReturnValue = CallFunc_GetActiveButton_ReturnValue;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_WasInputKeyJustPressed_ReturnValue = CallFunc_WasInputKeyJustPressed_ReturnValue;
	Parms.CallFunc_WasInputKeyJustPressed_ReturnValue_1 = CallFunc_WasInputKeyJustPressed_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedButton != nullptr)
		*SelectedButton = Parms.SelectedButton;

	if (IsNewButton != nullptr)
		*IsNewButton = Parms.IsNewButton;

}


// Function GamepadBPHelper.GamepadBPHelper_C.ShowIfNotGamepad
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasUsingGamepad                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsUsingGamepad                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadBPHelper_C::ShowIfNotGamepad(class UWidget* Widget, class UObject* __WorldContext, bool WasUsingGamepad, bool IsUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadBPHelper_C", "ShowIfNotGamepad");

	Params::UGamepadBPHelper_C_ShowIfNotGamepad_Params Parms{};

	Parms.Widget = Widget;
	Parms.__WorldContext = __WorldContext;
	Parms.WasUsingGamepad = WasUsingGamepad;
	Parms.IsUsingGamepad = IsUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadBPHelper.GamepadBPHelper_C.ShowBasedOnGamepad
// (Static, Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowIfGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadBPHelper_C::ShowBasedOnGamepad(bool ShowIfGamepad, class UWidget* Widget, class UObject* __WorldContext, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadBPHelper_C", "ShowBasedOnGamepad");

	Params::UGamepadBPHelper_C_ShowBasedOnGamepad_Params Parms{};

	Parms.ShowIfGamepad = ShowIfGamepad;
	Parms.Widget = Widget;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadBPHelper.GamepadBPHelper_C.ShowIfGamepad
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        LastInputType                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasUsingGamepad                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsUsingGamepad                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadBPHelper_C::ShowIfGamepad(class UWidget* Widget, class UObject* __WorldContext, enum class ECommonInputType LastInputType, bool WasUsingGamepad, bool IsUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadBPHelper_C", "ShowIfGamepad");

	Params::UGamepadBPHelper_C_ShowIfGamepad_Params Parms{};

	Parms.Widget = Widget;
	Parms.__WorldContext = __WorldContext;
	Parms.LastInputType = LastInputType;
	Parms.WasUsingGamepad = WasUsingGamepad;
	Parms.IsUsingGamepad = IsUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadBPHelper.GamepadBPHelper_C.WidgetOrChildHasFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasFocus                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasUserFocus_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasUserFocusedDescendants_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadBPHelper_C::WidgetOrChildHasFocus(class UWidget* Widget, class APlayerController* PlayerController, class UObject* __WorldContext, bool* HasFocus, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_HasUserFocusedDescendants_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadBPHelper_C", "WidgetOrChildHasFocus");

	Params::UGamepadBPHelper_C_WidgetOrChildHasFocus_Params Parms{};

	Parms.Widget = Widget;
	Parms.PlayerController = PlayerController;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_HasUserFocus_ReturnValue = CallFunc_HasUserFocus_ReturnValue;
	Parms.CallFunc_HasUserFocusedDescendants_ReturnValue = CallFunc_HasUserFocusedDescendants_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasFocus != nullptr)
		*HasFocus = Parms.HasFocus;

}


// Function GamepadBPHelper.GamepadBPHelper_C.RestoreFocus
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     DesiredFocusTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WidgetOrChildHasFocus_HasFocus                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadBPHelper_C::RestoreFocus(class UWidget* Parent, class UWidget* DesiredFocusTarget, class APlayerController* PlayerController, class UObject* __WorldContext, bool CallFunc_WidgetOrChildHasFocus_HasFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadBPHelper_C", "RestoreFocus");

	Params::UGamepadBPHelper_C_RestoreFocus_Params Parms{};

	Parms.Parent = Parent;
	Parms.DesiredFocusTarget = DesiredFocusTarget;
	Parms.PlayerController = PlayerController;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_WidgetOrChildHasFocus_HasFocus = CallFunc_WidgetOrChildHasFocus_HasFocus;

	UObject::ProcessEvent(Func, &Parms);

}

}


