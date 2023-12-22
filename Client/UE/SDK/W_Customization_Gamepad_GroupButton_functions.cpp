#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C
// (None)

class UClass* UW_Customization_Gamepad_GroupButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Customization_Gamepad_GroupButton_C");

	return Clss;
}


// W_Customization_Gamepad_GroupButton_C W_Customization_Gamepad_GroupButton.Default__W_Customization_Gamepad_GroupButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Customization_Gamepad_GroupButton_C* UW_Customization_Gamepad_GroupButton_C::GetDefaultObj()
{
	static class UW_Customization_Gamepad_GroupButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Customization_Gamepad_GroupButton_C*>(UW_Customization_Gamepad_GroupButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.Deselect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_Gamepad_GroupButton_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Gamepad_GroupButton_C", "Deselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_Gamepad_GroupButton_C::Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Gamepad_GroupButton_C", "Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.UpdatePressedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Gamepad_GroupButton_C::UpdatePressedState(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Gamepad_GroupButton_C", "UpdatePressedState");

	Params::UW_Customization_Gamepad_GroupButton_C_UpdatePressedState_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.UpdateSelectedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Gamepad_GroupButton_C::UpdateSelectedState(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Gamepad_GroupButton_C", "UpdateSelectedState");

	Params::UW_Customization_Gamepad_GroupButton_C_UpdateSelectedState_Params Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.UpdateHoverState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Gamepad_GroupButton_C::UpdateHoverState(bool Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Gamepad_GroupButton_C", "UpdateHoverState");

	Params::UW_Customization_Gamepad_GroupButton_C_UpdateHoverState_Params Parms{};

	Parms.Hovered = Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.GetColorByState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor                               (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_1                             (None)
// struct FSlateColor                 K2Node_Select_Default                                            (None)

struct FSlateColor UW_Customization_Gamepad_GroupButton_C::GetColorByState(bool Temp_bool_Variable, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FSlateColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Gamepad_GroupButton_C", "GetColorByState");

	Params::UW_Customization_Gamepad_GroupButton_C_GetColorByState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetColorByName_LinearColor = CallFunc_GetColorByName_LinearColor;
	Parms.CallFunc_GetColorByName_SlateColor = CallFunc_GetColorByName_SlateColor;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetColorByName_LinearColor_1 = CallFunc_GetColorByName_LinearColor_1;
	Parms.CallFunc_GetColorByName_SlateColor_1 = CallFunc_GetColorByName_SlateColor_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.UpdateVisualState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSelected                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 CallFunc_GetColorByState_ReturnValue                             (None)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Gamepad_GroupButton_C::UpdateVisualState(bool Hovered, bool Pressed, bool bSelected, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool Temp_bool_Variable, bool CallFunc_BooleanOR_ReturnValue, const struct FSlateColor& CallFunc_GetColorByState_ReturnValue, const struct FVector2D& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Gamepad_GroupButton_C", "UpdateVisualState");

	Params::UW_Customization_Gamepad_GroupButton_C_UpdateVisualState_Params Parms{};

	Parms.Hovered = Hovered;
	Parms.Pressed = Pressed;
	Parms.bSelected = bSelected;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetColorByState_ReturnValue = CallFunc_GetColorByState_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Gamepad_GroupButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Gamepad_GroupButton_C", "PreConstruct");

	Params::UW_Customization_Gamepad_GroupButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Customization_Gamepad_GroupButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Gamepad_GroupButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Customization_Gamepad_GroupButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Gamepad_GroupButton_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Customization_Gamepad_GroupButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Gamepad_GroupButton_C", "BP_OnSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Customization_Gamepad_GroupButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Gamepad_GroupButton_C", "BP_OnDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Gamepad_GroupButton_C::Pressed(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Gamepad_GroupButton_C", "Pressed");

	Params::UW_Customization_Gamepad_GroupButton_C_Pressed_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Gamepad_GroupButton_C::Released(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Gamepad_GroupButton_C", "Released");

	Params::UW_Customization_Gamepad_GroupButton_C_Released_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Customization_Gamepad_GroupButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Gamepad_GroupButton_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Customization_Gamepad_GroupButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Gamepad_GroupButton_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.ExecuteUbergraph_W_Customization_Gamepad_GroupButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButtonBase*           K2Node_CustomEvent_Button_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonButtonBase*           K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void UW_Customization_Gamepad_GroupButton_C::ExecuteUbergraph_W_Customization_Gamepad_GroupButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UCommonButtonBase* K2Node_CustomEvent_Button_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonBase* K2Node_CustomEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Gamepad_GroupButton_C", "ExecuteUbergraph_W_Customization_Gamepad_GroupButton");

	Params::UW_Customization_Gamepad_GroupButton_C_ExecuteUbergraph_W_Customization_Gamepad_GroupButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Button_1 = K2Node_CustomEvent_Button_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.OnDeselected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Gamepad_GroupButton_C*Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Gamepad_GroupButton_C::OnDeselected__DelegateSignature(class UW_Customization_Gamepad_GroupButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Gamepad_GroupButton_C", "OnDeselected__DelegateSignature");

	Params::UW_Customization_Gamepad_GroupButton_C_OnDeselected__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Gamepad_GroupButton_C*Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Gamepad_GroupButton_C::OnSelected__DelegateSignature(class UW_Customization_Gamepad_GroupButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Gamepad_GroupButton_C", "OnSelected__DelegateSignature");

	Params::UW_Customization_Gamepad_GroupButton_C_OnSelected__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


