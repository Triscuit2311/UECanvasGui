#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Spinbox.W_Spinbox_C
// (None)

class UClass* UW_Spinbox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Spinbox_C");

	return Clss;
}


// W_Spinbox_C W_Spinbox.Default__W_Spinbox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Spinbox_C* UW_Spinbox_C::GetDefaultObj()
{
	static class UW_Spinbox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Spinbox_C*>(UW_Spinbox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Spinbox.W_Spinbox_C.ClearMaxSliderValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Spinbox_C::ClearMaxSliderValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "ClearMaxSliderValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Spinbox.W_Spinbox_C.ClearMinSliderValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Spinbox_C::ClearMinSliderValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "ClearMinSliderValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Spinbox.W_Spinbox_C.ClearMaxValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Spinbox_C::ClearMaxValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "ClearMaxValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Spinbox.W_Spinbox_C.ClearMinValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Spinbox_C::ClearMinValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "ClearMinValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Spinbox.W_Spinbox_C.GetMaxSliderValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              MaximumSliderValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::GetMaxSliderValue(float* MaximumSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "GetMaxSliderValue");

	Params::UW_Spinbox_C_GetMaxSliderValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MaximumSliderValue != nullptr)
		*MaximumSliderValue = Parms.MaximumSliderValue;

}


// Function W_Spinbox.W_Spinbox_C.GetMinSliderValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              MinimumSliderValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::GetMinSliderValue(float* MinimumSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "GetMinSliderValue");

	Params::UW_Spinbox_C_GetMinSliderValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MinimumSliderValue != nullptr)
		*MinimumSliderValue = Parms.MinimumSliderValue;

}


// Function W_Spinbox.W_Spinbox_C.GetMaxValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              MaximumValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::GetMaxValue(float* MaximumValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "GetMaxValue");

	Params::UW_Spinbox_C_GetMaxValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MaximumValue != nullptr)
		*MaximumValue = Parms.MaximumValue;

}


// Function W_Spinbox.W_Spinbox_C.GetMinValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              MinimumValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::GetMinValue(float* MinimumValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "GetMinValue");

	Params::UW_Spinbox_C_GetMinValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MinimumValue != nullptr)
		*MinimumValue = Parms.MinimumValue;

}


// Function W_Spinbox.W_Spinbox_C.SetMaxSliderValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::SetMaxSliderValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "SetMaxSliderValue");

	Params::UW_Spinbox_C_SetMaxSliderValue_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.SetMinSliderValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::SetMinSliderValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "SetMinSliderValue");

	Params::UW_Spinbox_C_SetMinSliderValue_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.SetMaxValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::SetMaxValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "SetMaxValue");

	Params::UW_Spinbox_C_SetMaxValue_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.SetMinValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::SetMinValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "SetMinValue");

	Params::UW_Spinbox_C_SetMinValue_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.UpdateResetButton
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::UpdateResetButton(bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "UpdateResetButton");

	Params::UW_Spinbox_C_UpdateResetButton_Params Parms{};

	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.SetDefaultValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DefaultValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowResetButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Spinbox_C::SetDefaultValue(float DefaultValue, bool ShowResetButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "SetDefaultValue");

	Params::UW_Spinbox_C_SetDefaultValue_Params Parms{};

	Parms.DefaultValue = DefaultValue;
	Parms.ShowResetButton = ShowResetButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::SetValue(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "SetValue");

	Params::UW_Spinbox_C_SetValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.UpdateValue
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::UpdateValue(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "UpdateValue");

	Params::UW_Spinbox_C_UpdateValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UW_Spinbox_C_BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.BndEvt__W_Spinbox_btn_Reset_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::BndEvt__W_Spinbox_btn_Reset_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "BndEvt__W_Spinbox_btn_Reset_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UW_Spinbox_C_BndEvt__W_Spinbox_btn_Reset_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_3_OnSpinBoxBeginSliderMovement__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Spinbox_C::BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_3_OnSpinBoxBeginSliderMovement__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_3_OnSpinBoxBeginSliderMovement__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Spinbox.W_Spinbox_C.BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_Spinbox_C_BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Spinbox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Spinbox.W_Spinbox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Spinbox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "PreConstruct");

	Params::UW_Spinbox_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_Spinbox_C_BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.ExecuteUbergraph_W_Spinbox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::ExecuteUbergraph_W_Spinbox(int32 EntryPoint, float K2Node_ComponentBoundEvent_InValue, float K2Node_ComponentBoundEvent_InValue_2, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class UW_Button_C* K2Node_ComponentBoundEvent_Button, float K2Node_ComponentBoundEvent_InValue_1, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "ExecuteUbergraph_W_Spinbox");

	Params::UW_Spinbox_C_ExecuteUbergraph_W_Spinbox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_InValue = K2Node_ComponentBoundEvent_InValue;
	Parms.K2Node_ComponentBoundEvent_InValue_2 = K2Node_ComponentBoundEvent_InValue_2;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_InValue_1 = K2Node_ComponentBoundEvent_InValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.OnEndSliderMovement__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::OnEndSliderMovement__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "OnEndSliderMovement__DelegateSignature");

	Params::UW_Spinbox_C_OnEndSliderMovement__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.OnBeginSliderMovement__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Spinbox_C::OnBeginSliderMovement__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "OnBeginSliderMovement__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Spinbox.W_Spinbox_C.OnValueCommited__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::OnValueCommited__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "OnValueCommited__DelegateSignature");

	Params::UW_Spinbox_C_OnValueCommited__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "OnValueChanged__DelegateSignature");

	Params::UW_Spinbox_C_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


