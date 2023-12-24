#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ControlsResetBinding.W_ControlsResetBinding_C
// (None)

class UClass* UW_ControlsResetBinding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ControlsResetBinding_C");

	return Clss;
}


// W_ControlsResetBinding_C W_ControlsResetBinding.Default__W_ControlsResetBinding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ControlsResetBinding_C* UW_ControlsResetBinding_C::GetDefaultObj()
{
	static class UW_ControlsResetBinding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ControlsResetBinding_C*>(UW_ControlsResetBinding_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ControlsResetBinding.W_ControlsResetBinding_C.Remove Key Bind
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           Control_Bind                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsBind_C*           TempControlsBind                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActionMapping_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveAxisMapping_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ControlsResetBinding_C::Remove_Key_Bind(class UW_ControlsBind_C* Control_Bind, class UW_ControlsBind_C* TempControlsBind, bool CallFunc_RemoveActionMapping_ReturnValue, bool CallFunc_RemoveAxisMapping_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsResetBinding_C", "Remove Key Bind");

	Params::UW_ControlsResetBinding_C_Remove_Key_Bind_Params Parms{};

	Parms.Control_Bind = Control_Bind;
	Parms.TempControlsBind = TempControlsBind;
	Parms.CallFunc_RemoveActionMapping_ReturnValue = CallFunc_RemoveActionMapping_ReturnValue;
	Parms.CallFunc_RemoveAxisMapping_ReturnValue = CallFunc_RemoveAxisMapping_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ControlsResetBinding.W_ControlsResetBinding_C.Update Input Mappings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveActionMapping_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveAxisMapping_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ControlsResetBinding_C::Update_Input_Mappings(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_RemoveActionMapping_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_RemoveAxisMapping_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsResetBinding_C", "Update Input Mappings");

	Params::UW_ControlsResetBinding_C_Update_Input_Mappings_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_RemoveActionMapping_ReturnValue = CallFunc_RemoveActionMapping_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_RemoveAxisMapping_ReturnValue = CallFunc_RemoveAxisMapping_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ControlsResetBinding.W_ControlsResetBinding_C.Clear Temp Input Mappings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ControlsResetBinding_C::Clear_Temp_Input_Mappings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsResetBinding_C", "Clear Temp Input Mappings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsResetBinding.W_ControlsResetBinding_C.Check if None Key Is Assigned Action
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsNoneKeyAssigned                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EActionMappingFilter>K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FActionMappingStruct        K2Node_MakeStruct_ActionMappingStruct                            (None)
// bool                               CallFunc_GetAllActionMappings_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FActionMappingStruct>CallFunc_GetAllActionMappings_ActionMappings                     (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionMappingStruct        CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ControlsResetBinding_C::Check_if_None_Key_Is_Assigned_Action(bool* IsNoneKeyAssigned, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EActionMappingFilter>& K2Node_MakeArray_Array, const struct FActionMappingStruct& K2Node_MakeStruct_ActionMappingStruct, bool CallFunc_GetAllActionMappings_ReturnValue, TArray<struct FActionMappingStruct>& CallFunc_GetAllActionMappings_ActionMappings, int32 CallFunc_Array_Length_ReturnValue, const struct FActionMappingStruct& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsResetBinding_C", "Check if None Key Is Assigned Action");

	Params::UW_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Action_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_ActionMappingStruct = K2Node_MakeStruct_ActionMappingStruct;
	Parms.CallFunc_GetAllActionMappings_ReturnValue = CallFunc_GetAllActionMappings_ReturnValue;
	Parms.CallFunc_GetAllActionMappings_ActionMappings = CallFunc_GetAllActionMappings_ActionMappings;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsNoneKeyAssigned != nullptr)
		*IsNoneKeyAssigned = Parms.IsNoneKeyAssigned;

}


// Function W_ControlsResetBinding.W_ControlsResetBinding_C.Check if None Key Is Assigned Axis
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsNoneKeyAssigned                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EAxisMappingFilter>K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FAxisMappingStruct          K2Node_MakeStruct_AxisMappingStruct                              (None)
// bool                               CallFunc_GetAllAxisMappings_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAxisMappingStruct>  CallFunc_GetAllAxisMappings_AxisMappings                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAxisMappingStruct          CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ControlsResetBinding_C::Check_if_None_Key_Is_Assigned_Axis(bool* IsNoneKeyAssigned, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EAxisMappingFilter>& K2Node_MakeArray_Array, const struct FAxisMappingStruct& K2Node_MakeStruct_AxisMappingStruct, bool CallFunc_GetAllAxisMappings_ReturnValue, TArray<struct FAxisMappingStruct>& CallFunc_GetAllAxisMappings_AxisMappings, int32 CallFunc_Array_Length_ReturnValue, const struct FAxisMappingStruct& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsResetBinding_C", "Check if None Key Is Assigned Axis");

	Params::UW_ControlsResetBinding_C_Check_if_None_Key_Is_Assigned_Axis_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_AxisMappingStruct = K2Node_MakeStruct_AxisMappingStruct;
	Parms.CallFunc_GetAllAxisMappings_ReturnValue = CallFunc_GetAllAxisMappings_ReturnValue;
	Parms.CallFunc_GetAllAxisMappings_AxisMappings = CallFunc_GetAllAxisMappings_AxisMappings;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsNoneKeyAssigned != nullptr)
		*IsNoneKeyAssigned = Parms.IsNoneKeyAssigned;

}


// Function W_ControlsResetBinding.W_ControlsResetBinding_C.SetDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ControlsResetBinding_C::SetDisabled(bool Disabled, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsResetBinding_C", "SetDisabled");

	Params::UW_ControlsResetBinding_C_SetDisabled_Params Parms{};

	Parms.Disabled = Disabled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ControlsResetBinding_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsResetBinding_C", "BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ControlsResetBinding_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsResetBinding_C", "BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ControlsResetBinding_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsResetBinding_C", "BndEvt__ResetButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ControlsResetBinding_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsResetBinding_C", "BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsResetBinding.W_ControlsResetBinding_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ControlsResetBinding_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsResetBinding_C", "BndEvt__ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsResetBinding.W_ControlsResetBinding_C.ExecuteUbergraph_W_ControlsResetBinding
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_ControlsBind_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ControlsResetBinding_C::ExecuteUbergraph_W_ControlsResetBinding(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UW_ControlsBind_C* CallFunc_Array_Get_Item, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsResetBinding_C", "ExecuteUbergraph_W_ControlsResetBinding");

	Params::UW_ControlsResetBinding_C_ExecuteUbergraph_W_ControlsResetBinding_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ControlsResetBinding_C::OnResetReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsResetBinding_C", "OnResetReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ControlsResetBinding_C::OnResetPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsResetBinding_C", "OnResetPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ControlsResetBinding_C::OnResetUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsResetBinding_C", "OnResetUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ControlsResetBinding_C::OnResetHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsResetBinding_C", "OnResetHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ControlsResetBinding.W_ControlsResetBinding_C.OnResetClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsResetBinding_C*   CallingWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ControlsResetBinding_C::OnResetClicked__DelegateSignature(class UW_ControlsResetBinding_C* CallingWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ControlsResetBinding_C", "OnResetClicked__DelegateSignature");

	Params::UW_ControlsResetBinding_C_OnResetClicked__DelegateSignature_Params Parms{};

	Parms.CallingWidget = CallingWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


