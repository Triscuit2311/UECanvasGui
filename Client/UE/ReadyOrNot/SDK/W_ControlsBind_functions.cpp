#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ControlsBind.W_ControlsBind_C
// (None)

class UClass* UW_ControlsBind_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ControlsBind_C");

	return Clss;
}


// W_ControlsBind_C W_ControlsBind.Default__W_ControlsBind_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ControlsBind_C* UW_ControlsBind_C::GetDefaultObj()
{
	static class UW_ControlsBind_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ControlsBind_C*>(UW_ControlsBind_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ControlsBind.W_ControlsBind_C.Get Conflicting Keybind Text OLD
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        RequiredKeybindName                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        ConflictingBindFormat                                            (Edit, BlueprintVisible)

void UW_ControlsBind_C::Get_Conflicting_Keybind_Text_OLD(class FText RequiredKeybindName, class FText* Text, class FText ConflictingBindFormat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "Get Conflicting Keybind Text OLD");

	Params::UW_ControlsBind_C_Get_Conflicting_Keybind_Text_OLD_Params Parms{};

	Parms.RequiredKeybindName = RequiredKeybindName;
	Parms.ConflictingBindFormat = ConflictingBindFormat;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function W_ControlsBind.W_ControlsBind_C.Check Conflicting Keybinds Are Unbindable OLD
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAxisMappingStruct>  Axes                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FActionMappingStruct>Actions                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        BindFriendlyName                                                 (Parm, OutParm)
// struct FActionMappingStruct        TempActionBind                                                   (Edit, BlueprintVisible)
// struct FAxisMappingStruct          TempAxisBind                                                     (Edit, BlueprintVisible)

void UW_ControlsBind_C::Check_Conflicting_Keybinds_Are_Unbindable_OLD(TArray<struct FAxisMappingStruct>& Axes, TArray<struct FActionMappingStruct>& Actions, class FText* BindFriendlyName, const struct FActionMappingStruct& TempActionBind, const struct FAxisMappingStruct& TempAxisBind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "Check Conflicting Keybinds Are Unbindable OLD");

	Params::UW_ControlsBind_C_Check_Conflicting_Keybinds_Are_Unbindable_OLD_Params Parms{};

	Parms.Axes = Axes;
	Parms.Actions = Actions;
	Parms.TempActionBind = TempActionBind;
	Parms.TempAxisBind = TempAxisBind;

	UObject::ProcessEvent(Func, &Parms);

	if (BindFriendlyName != nullptr)
		*BindFriendlyName = Parms.BindFriendlyName;

}


// Function W_ControlsBind.W_ControlsBind_C.Remove Conflict Keybinds OLD
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAxisMappingStruct>  Axes                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FActionMappingStruct>Actions                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UW_ControlsBind_C*           TempActionToRemove                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsBind_C*           TempAxisToRemove                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionMappingStruct        TempActionMapping                                                (Edit, BlueprintVisible)
// struct FAxisMappingStruct          TempAxisMapping                                                  (Edit, BlueprintVisible)

void UW_ControlsBind_C::Remove_Conflict_Keybinds_OLD(TArray<struct FAxisMappingStruct>& Axes, TArray<struct FActionMappingStruct>& Actions, class UW_ControlsBind_C* TempActionToRemove, class UW_ControlsBind_C* TempAxisToRemove, const struct FActionMappingStruct& TempActionMapping, const struct FAxisMappingStruct& TempAxisMapping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "Remove Conflict Keybinds OLD");

	Params::UW_ControlsBind_C_Remove_Conflict_Keybinds_OLD_Params Parms{};

	Parms.Axes = Axes;
	Parms.Actions = Actions;
	Parms.TempActionToRemove = TempActionToRemove;
	Parms.TempAxisToRemove = TempAxisToRemove;
	Parms.TempActionMapping = TempActionMapping;
	Parms.TempAxisMapping = TempAxisMapping;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ControlsBind.W_ControlsBind_C.Add Keybinds to List OLD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSKeybinding>        Keybinds                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        AxisMapping                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAxisMappingStruct>  AxesList                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FActionMappingStruct>ActionsList                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              TempScale                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ControlsBind_C::Add_Keybinds_to_List_OLD(TArray<struct FSKeybinding>& Keybinds, class FName AxisMapping, float Scale, TArray<struct FAxisMappingStruct>& AxesList, TArray<struct FActionMappingStruct>& ActionsList, float TempScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "Add Keybinds to List OLD");

	Params::UW_ControlsBind_C_Add_Keybinds_to_List_OLD_Params Parms{};

	Parms.Keybinds = Keybinds;
	Parms.AxisMapping = AxisMapping;
	Parms.Scale = Scale;
	Parms.AxesList = AxesList;
	Parms.ActionsList = ActionsList;
	Parms.TempScale = TempScale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ControlsBind.W_ControlsBind_C.Add Conflicting Keybinds to List OLD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MappingName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAxisMappingStruct>  Axes                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FActionMappingStruct>Actions                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              ControlsScale                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TempMappingName                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ControlsBind_C::Add_Conflicting_Keybinds_to_List_OLD(class FName MappingName, float Scale, TArray<struct FAxisMappingStruct>& Axes, TArray<struct FActionMappingStruct>& Actions, float ControlsScale, class FName TempMappingName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "Add Conflicting Keybinds to List OLD");

	Params::UW_ControlsBind_C_Add_Conflicting_Keybinds_to_List_OLD_Params Parms{};

	Parms.MappingName = MappingName;
	Parms.Scale = Scale;
	Parms.Axes = Axes;
	Parms.Actions = Actions;
	Parms.ControlsScale = ControlsScale;
	Parms.TempMappingName = TempMappingName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ControlsBind.W_ControlsBind_C.HandleMouseWheel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_PointerEvent_GetWheelDelta_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_2                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_Select_Default                                            (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FKey                        K2Node_Select_Default_1                                          (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

struct FEventReply UW_ControlsBind_C::HandleMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, bool Temp_bool_Variable, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, const struct FKey& Temp_struct_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable_1, const struct FKey& Temp_struct_Variable_1, const struct FKey& Temp_struct_Variable_2, const struct FKey& K2Node_Select_Default, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& K2Node_Select_Default_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "HandleMouseWheel");

	Params::UW_ControlsBind_C_HandleMouseWheel_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_PointerEvent_GetWheelDelta_ReturnValue = CallFunc_PointerEvent_GetWheelDelta_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ControlsBind.W_ControlsBind_C.Get Conflicting Keybinds when Valid OLD
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAxisMappingStruct>  Axes                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FActionMappingStruct>Actions                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bHasConflict                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAxisMappingStruct>  ConflictingAxes                                                  (Parm, OutParm)
// TArray<struct FActionMappingStruct>ConflictingActions                                               (Parm, OutParm)
// TArray<struct FActionMappingStruct>OutputAction                                                     (Edit, BlueprintVisible)
// TArray<struct FAxisMappingStruct>  OutputAxes                                                       (Edit, BlueprintVisible)
// TArray<class FText>                LocalizedActions                                                 (Edit, BlueprintVisible)

void UW_ControlsBind_C::Get_Conflicting_Keybinds_when_Valid_OLD(TArray<struct FAxisMappingStruct>& Axes, TArray<struct FActionMappingStruct>& Actions, bool* bHasConflict, TArray<struct FAxisMappingStruct>* ConflictingAxes, TArray<struct FActionMappingStruct>* ConflictingActions, const TArray<struct FActionMappingStruct>& OutputAction, const TArray<struct FAxisMappingStruct>& OutputAxes, const TArray<class FText>& LocalizedActions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "Get Conflicting Keybinds when Valid OLD");

	Params::UW_ControlsBind_C_Get_Conflicting_Keybinds_when_Valid_OLD_Params Parms{};

	Parms.Axes = Axes;
	Parms.Actions = Actions;
	Parms.OutputAction = OutputAction;
	Parms.OutputAxes = OutputAxes;
	Parms.LocalizedActions = LocalizedActions;

	UObject::ProcessEvent(Func, &Parms);

	if (bHasConflict != nullptr)
		*bHasConflict = Parms.bHasConflict;

	if (ConflictingAxes != nullptr)
		*ConflictingAxes = std::move(Parms.ConflictingAxes);

	if (ConflictingActions != nullptr)
		*ConflictingActions = std::move(Parms.ConflictingActions);

}


// Function W_ControlsBind.W_ControlsBind_C.HandleKeyDown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   My_Geometry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   In_Key_Event                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

struct FEventReply UW_ControlsBind_C::HandleKeyDown(const struct FGeometry& My_Geometry, const struct FKeyEvent& In_Key_Event, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "HandleKeyDown");

	Params::UW_ControlsBind_C_HandleKeyDown_Params Parms{};

	Parms.My_Geometry = My_Geometry;
	Parms.In_Key_Event = In_Key_Event;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ControlsBind.W_ControlsBind_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_HandleKeyDown_ReturnValue                               (None)

struct FEventReply UW_ControlsBind_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_HandleKeyDown_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "OnPreviewKeyDown");

	Params::UW_ControlsBind_C_OnPreviewKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_HandleKeyDown_ReturnValue = CallFunc_HandleKeyDown_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ControlsBind.W_ControlsBind_C.GetOtherBindingIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ControlsBind_C::GetOtherBindingIndex(int32* Value, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "GetOtherBindingIndex");

	Params::UW_ControlsBind_C_GetOtherBindingIndex_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function W_ControlsBind.W_ControlsBind_C.HandleMouseButtonDown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 Reply                                                            (Parm, OutParm)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

void UW_ControlsBind_C::HandleMouseButtonDown(const struct FPointerEvent& PointerEvent, struct FEventReply* Reply, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "HandleMouseButtonDown");

	Params::UW_ControlsBind_C_HandleMouseButtonDown_Params Parms{};

	Parms.PointerEvent = PointerEvent;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Reply != nullptr)
		*Reply = std::move(Parms.Reply);

}


// Function W_ControlsBind.W_ControlsBind_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_HandleMouseWheel_ReturnValue                            (None)

struct FEventReply UW_ControlsBind_C::OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_HandleMouseWheel_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "OnMouseWheel");

	Params::UW_ControlsBind_C_OnMouseWheel_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_HandleMouseWheel_ReturnValue = CallFunc_HandleMouseWheel_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ControlsBind.W_ControlsBind_C.SetDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ControlsBind_C::SetDisabled(bool Disabled, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "SetDisabled");

	Params::UW_ControlsBind_C_SetDisabled_Params Parms{};

	Parms.Disabled = Disabled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ControlsBind.W_ControlsBind_C.Set Keybinding Text OLD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ControlsBind_C::Set_Keybinding_Text_OLD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "Set Keybinding Text OLD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsBind.W_ControlsBind_C.Reset Binding OLD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ControlsBind_C::Reset_Binding_OLD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "Reset Binding OLD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsBind.W_ControlsBind_C.Binding Finished OLD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ControlsBind_C::Binding_Finished_OLD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "Binding Finished OLD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsBind.W_ControlsBind_C.Rebind Key OLD
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        NewKey                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Key_Rebound                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActionMappingStruct        NewActionMapping                                                 (Edit, BlueprintVisible)
// struct FAxisMappingStruct          NewAxisMapping                                                   (Edit, BlueprintVisible)

void UW_ControlsBind_C::Rebind_Key_OLD(const struct FKey& NewKey, bool* Key_Rebound, const struct FActionMappingStruct& NewActionMapping, const struct FAxisMappingStruct& NewAxisMapping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "Rebind Key OLD");

	Params::UW_ControlsBind_C_Rebind_Key_OLD_Params Parms{};

	Parms.NewKey = NewKey;
	Parms.NewActionMapping = NewActionMapping;
	Parms.NewAxisMapping = NewAxisMapping;

	UObject::ProcessEvent(Func, &Parms);

	if (Key_Rebound != nullptr)
		*Key_Rebound = Parms.Key_Rebound;

}


// Function W_ControlsBind.W_ControlsBind_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_HandleMouseButtonDown_Reply                             (None)

struct FEventReply UW_ControlsBind_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_HandleMouseButtonDown_Reply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "OnMouseButtonDown");

	Params::UW_ControlsBind_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_HandleMouseButtonDown_Reply = CallFunc_HandleMouseButtonDown_Reply;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ControlsBind.W_ControlsBind_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_HandleKeyDown_ReturnValue                               (None)

struct FEventReply UW_ControlsBind_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_HandleKeyDown_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "OnKeyDown");

	Params::UW_ControlsBind_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_HandleKeyDown_ReturnValue = CallFunc_HandleKeyDown_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ControlsBind.W_ControlsBind_C.Get Input Binding Data OLD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionMappingStruct        ActionMapping                                                    (Parm, OutParm)
// struct FAxisMappingStruct          AxisMapping                                                      (Parm, OutParm)

void UW_ControlsBind_C::Get_Input_Binding_Data_OLD(int32 Index, struct FActionMappingStruct* ActionMapping, struct FAxisMappingStruct* AxisMapping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "Get Input Binding Data OLD");

	Params::UW_ControlsBind_C_Get_Input_Binding_Data_OLD_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionMapping != nullptr)
		*ActionMapping = std::move(Parms.ActionMapping);

	if (AxisMapping != nullptr)
		*AxisMapping = std::move(Parms.AxisMapping);

}


// Function W_ControlsBind.W_ControlsBind_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ControlsBind_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "PreConstruct");

	Params::UW_ControlsBind_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ControlsBind.W_ControlsBind_C.Key Event Received
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        KeyIn                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_ControlsBind_C::Key_Event_Received(const struct FKey& KeyIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "Key Event Received");

	Params::UW_ControlsBind_C_Key_Event_Received_Params Parms{};

	Parms.KeyIn = KeyIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ControlsBind.W_ControlsBind_C.Binding Confirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ControlsBind_C::Binding_Confirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "Binding Confirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ControlsBind_C::BndEvt__KeybindButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "BndEvt__KeybindButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ControlsBind_C::BndEvt__KeybindButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "BndEvt__KeybindButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsBind.W_ControlsBind_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ControlsBind_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsBind.W_ControlsBind_C.OnIllegalBindAttempted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        BindFriendlyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ControlsBind_C::OnIllegalBindAttempted(class FText BindFriendlyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "OnIllegalBindAttempted");

	Params::UW_ControlsBind_C_OnIllegalBindAttempted_Params Parms{};

	Parms.BindFriendlyName = BindFriendlyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ControlsBind_C::BndEvt__KeybindButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "BndEvt__KeybindButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ControlsBind_C::BndEvt__KeybindButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "BndEvt__KeybindButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ControlsBind_C::BndEvt__KeybindButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "BndEvt__KeybindButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsBind.W_ControlsBind_C.UnbindAllEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ControlsBind_C::UnbindAllEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "UnbindAllEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsBind.W_ControlsBind_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ControlsBind_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsBind.W_ControlsBind_C.ExecuteUbergraph_W_ControlsBind
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_CustomEvent_KeyIn                                         (HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAxisMappingStruct          K2Node_MakeStruct_AxisMappingStruct                              (None)
// struct FActionMappingStruct        K2Node_MakeStruct_ActionMappingStruct                            (None)
// TArray<enum class EActionMappingFilter>K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<enum class EAxisMappingFilter>K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_GetAllActionMappings_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FActionMappingStruct>CallFunc_GetAllActionMappings_ActionMappings                     (ReferenceParm)
// bool                               CallFunc_GetAllAxisMappings_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAxisMappingStruct>  CallFunc_GetAllAxisMappings_AxisMappings                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetConflictingKeybindsWhenValid_HasConflict             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAxisMappingStruct>  CallFunc_GetConflictingKeybindsWhenValid_ConflictingAxes         (ReferenceParm)
// TArray<struct FActionMappingStruct>CallFunc_GetConflictingKeybindsWhenValid_ConflictingActions      (ReferenceParm)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_CheckConflictingKeybindsAreUnbindable_ReturnValue       (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_BindFriendlyName                              (None)
// class FText                        CallFunc_GetConflictingKeybindText_ReturnValue                   (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RebindKey_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FAxisMappingStruct          CallFunc_GetInputBindingData_AxisMapping                         (None)
// struct FActionMappingStruct        CallFunc_GetInputBindingData_ActionMapping                       (None)
// struct FActionMappingStruct        K2Node_MakeStruct_ActionMappingStruct_1                          (None)
// struct FAxisMappingStruct          K2Node_MakeStruct_AxisMappingStruct_1                            (None)

void UW_ControlsBind_C::ExecuteUbergraph_W_ControlsBind(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FKey& K2Node_CustomEvent_KeyIn, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, const struct FAxisMappingStruct& K2Node_MakeStruct_AxisMappingStruct, const struct FActionMappingStruct& K2Node_MakeStruct_ActionMappingStruct, TArray<enum class EActionMappingFilter>& K2Node_MakeArray_Array, TArray<enum class EAxisMappingFilter>& K2Node_MakeArray_Array_1, bool CallFunc_GetAllActionMappings_ReturnValue, TArray<struct FActionMappingStruct>& CallFunc_GetAllActionMappings_ActionMappings, bool CallFunc_GetAllAxisMappings_ReturnValue, TArray<struct FAxisMappingStruct>& CallFunc_GetAllAxisMappings_AxisMappings, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GetConflictingKeybindsWhenValid_HasConflict, TArray<struct FAxisMappingStruct>& CallFunc_GetConflictingKeybindsWhenValid_ConflictingAxes, TArray<struct FActionMappingStruct>& CallFunc_GetConflictingKeybindsWhenValid_ConflictingActions, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_CheckConflictingKeybindsAreUnbindable_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class FText K2Node_CustomEvent_BindFriendlyName, class FText CallFunc_GetConflictingKeybindText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_RebindKey_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FAxisMappingStruct& CallFunc_GetInputBindingData_AxisMapping, const struct FActionMappingStruct& CallFunc_GetInputBindingData_ActionMapping, const struct FActionMappingStruct& K2Node_MakeStruct_ActionMappingStruct_1, const struct FAxisMappingStruct& K2Node_MakeStruct_AxisMappingStruct_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "ExecuteUbergraph_W_ControlsBind");

	Params::UW_ControlsBind_C_ExecuteUbergraph_W_ControlsBind_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.K2Node_CustomEvent_KeyIn = K2Node_CustomEvent_KeyIn;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.K2Node_MakeStruct_AxisMappingStruct = K2Node_MakeStruct_AxisMappingStruct;
	Parms.K2Node_MakeStruct_ActionMappingStruct = K2Node_MakeStruct_ActionMappingStruct;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetAllActionMappings_ReturnValue = CallFunc_GetAllActionMappings_ReturnValue;
	Parms.CallFunc_GetAllActionMappings_ActionMappings = CallFunc_GetAllActionMappings_ActionMappings;
	Parms.CallFunc_GetAllAxisMappings_ReturnValue = CallFunc_GetAllAxisMappings_ReturnValue;
	Parms.CallFunc_GetAllAxisMappings_AxisMappings = CallFunc_GetAllAxisMappings_AxisMappings;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetConflictingKeybindsWhenValid_HasConflict = CallFunc_GetConflictingKeybindsWhenValid_HasConflict;
	Parms.CallFunc_GetConflictingKeybindsWhenValid_ConflictingAxes = CallFunc_GetConflictingKeybindsWhenValid_ConflictingAxes;
	Parms.CallFunc_GetConflictingKeybindsWhenValid_ConflictingActions = CallFunc_GetConflictingKeybindsWhenValid_ConflictingActions;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_CheckConflictingKeybindsAreUnbindable_ReturnValue = CallFunc_CheckConflictingKeybindsAreUnbindable_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_BindFriendlyName = K2Node_CustomEvent_BindFriendlyName;
	Parms.CallFunc_GetConflictingKeybindText_ReturnValue = CallFunc_GetConflictingKeybindText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_RebindKey_ReturnValue = CallFunc_RebindKey_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetInputBindingData_AxisMapping = CallFunc_GetInputBindingData_AxisMapping;
	Parms.CallFunc_GetInputBindingData_ActionMapping = CallFunc_GetInputBindingData_ActionMapping;
	Parms.K2Node_MakeStruct_ActionMappingStruct_1 = K2Node_MakeStruct_ActionMappingStruct_1;
	Parms.K2Node_MakeStruct_AxisMappingStruct_1 = K2Node_MakeStruct_AxisMappingStruct_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ControlsBind.W_ControlsBind_C.OnUnbindableKeyReboundAttempted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        BindFriendlyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ControlsBind_C::OnUnbindableKeyReboundAttempted__DelegateSignature(class FText BindFriendlyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "OnUnbindableKeyReboundAttempted__DelegateSignature");

	Params::UW_ControlsBind_C_OnUnbindableKeyReboundAttempted__DelegateSignature_Params Parms{};

	Parms.BindFriendlyName = BindFriendlyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ControlsBind.W_ControlsBind_C.OnConflictingBindDetected__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           CallingBind                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActionMappingStruct>ActionMappings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FAxisMappingStruct>  AxisMappings                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<class FText>                ConflictBindsText                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_ControlsBind_C::OnConflictingBindDetected__DelegateSignature(class UW_ControlsBind_C* CallingBind, TArray<struct FActionMappingStruct>& ActionMappings, TArray<struct FAxisMappingStruct>& AxisMappings, const struct FKey& Key, TArray<class FText>& ConflictBindsText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "OnConflictingBindDetected__DelegateSignature");

	Params::UW_ControlsBind_C_OnConflictingBindDetected__DelegateSignature_Params Parms{};

	Parms.CallingBind = CallingBind;
	Parms.ActionMappings = ActionMappings;
	Parms.AxisMappings = AxisMappings;
	Parms.Key = Key;
	Parms.ConflictBindsText = ConflictBindsText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ControlsBind.W_ControlsBind_C.OnBindingCommitted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           CallingWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        NewKey                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_ControlsBind_C::OnBindingCommitted__DelegateSignature(class UW_ControlsBind_C* CallingWidget, const struct FKey& NewKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "OnBindingCommitted__DelegateSignature");

	Params::UW_ControlsBind_C_OnBindingCommitted__DelegateSignature_Params Parms{};

	Parms.CallingWidget = CallingWidget;
	Parms.NewKey = NewKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ControlsBind.W_ControlsBind_C.OnBindingCanceled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           CallingWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ControlsBind_C::OnBindingCanceled__DelegateSignature(class UW_ControlsBind_C* CallingWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "OnBindingCanceled__DelegateSignature");

	Params::UW_ControlsBind_C_OnBindingCanceled__DelegateSignature_Params Parms{};

	Parms.CallingWidget = CallingWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ControlsBind.W_ControlsBind_C.OnBindingStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           CallingWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ControlsBind_C::OnBindingStarted__DelegateSignature(class UW_ControlsBind_C* CallingWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "OnBindingStarted__DelegateSignature");

	Params::UW_ControlsBind_C_OnBindingStarted__DelegateSignature_Params Parms{};

	Parms.CallingWidget = CallingWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ControlsBind.W_ControlsBind_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           CallingWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ControlsBind_C::OnReleased__DelegateSignature(class UW_ControlsBind_C* CallingWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "OnReleased__DelegateSignature");

	Params::UW_ControlsBind_C_OnReleased__DelegateSignature_Params Parms{};

	Parms.CallingWidget = CallingWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ControlsBind.W_ControlsBind_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           CallingWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ControlsBind_C::OnPressed__DelegateSignature(class UW_ControlsBind_C* CallingWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "OnPressed__DelegateSignature");

	Params::UW_ControlsBind_C_OnPressed__DelegateSignature_Params Parms{};

	Parms.CallingWidget = CallingWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ControlsBind.W_ControlsBind_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           CallingWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ControlsBind_C::OnUnhovered__DelegateSignature(class UW_ControlsBind_C* CallingWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "OnUnhovered__DelegateSignature");

	Params::UW_ControlsBind_C_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.CallingWidget = CallingWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ControlsBind.W_ControlsBind_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           CallingWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ControlsBind_C::OnHovered__DelegateSignature(class UW_ControlsBind_C* CallingWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsBind_C", "OnHovered__DelegateSignature");

	Params::UW_ControlsBind_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.CallingWidget = CallingWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


