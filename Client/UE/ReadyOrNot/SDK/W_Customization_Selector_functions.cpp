#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Customization_Selector.W_Customization_Selector_C
// (None)

class UClass* UW_Customization_Selector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Customization_Selector_C");

	return Clss;
}


// W_Customization_Selector_C W_Customization_Selector.Default__W_Customization_Selector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Customization_Selector_C* UW_Customization_Selector_C::GetDefaultObj()
{
	static class UW_Customization_Selector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Customization_Selector_C*>(UW_Customization_Selector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Customization_Selector.W_Customization_Selector_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Selector_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "GetFocusTarget");

	Params::UW_Customization_Selector_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Customization_Selector.W_Customization_Selector_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Selector_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "BackPage");

	Params::UW_Customization_Selector_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Customization_Selector.W_Customization_Selector_C.SetEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EquippedID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Selector_C::SetEquipped(class FName EquippedID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "SetEquipped");

	Params::UW_Customization_Selector_C_SetEquipped_Params Parms{};

	Parms.EquippedID = EquippedID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Selector.W_Customization_Selector_C.SetOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, class FText>     OptionsMap                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        OptionText                                                       (Edit, BlueprintVisible)
// class FName                        OptionID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Selector_C::SetOptions(TMap<class FName, class FText> OptionsMap, class FText OptionText, class FName OptionID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "SetOptions");

	Params::UW_Customization_Selector_C_SetOptions_Params Parms{};

	Parms.OptionsMap = OptionsMap;
	Parms.OptionText = OptionText;
	Parms.OptionID = OptionID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Selector.W_Customization_Selector_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseGamepad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_1                                          (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Selector_C::UpdateStyle(bool bUseGamepad, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class UWidget* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "UpdateStyle");

	Params::UW_Customization_Selector_C_UpdateStyle_Params Parms{};

	Parms.bUseGamepad = bUseGamepad;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Selector.W_Customization_Selector_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Selector_C::Reveal(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "Reveal");

	Params::UW_Customization_Selector_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Selector.W_Customization_Selector_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Selector_C::Hide(float Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "Hide");

	Params::UW_Customization_Selector_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Selector.W_Customization_Selector_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Selector_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "SetInputMode");

	Params::UW_Customization_Selector_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Selector.W_Customization_Selector_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Selector_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "ChangePage");

	Params::UW_Customization_Selector_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Selector.W_Customization_Selector_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Customization_Selector_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "PreConstruct");

	Params::UW_Customization_Selector_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Selector.W_Customization_Selector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Customization_Selector_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Selector.W_Customization_Selector_C.BndEvt__W_Customization_Selector_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Selector_C::BndEvt__W_Customization_Selector_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "BndEvt__W_Customization_Selector_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature");

	Params::UW_Customization_Selector_C_BndEvt__W_Customization_Selector_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Selector.W_Customization_Selector_C.BndEvt__W_Customization_Selector_Carousel_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Selector_C::BndEvt__W_Customization_Selector_Carousel_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature(class FName OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "BndEvt__W_Customization_Selector_Carousel_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature");

	Params::UW_Customization_Selector_C_BndEvt__W_Customization_Selector_Carousel_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Selector.W_Customization_Selector_C.BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Customization_Selector_C::BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature");

	Params::UW_Customization_Selector_C_BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Selector.W_Customization_Selector_C.BndEvt__W_Customization_Selector_Button_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Customization_Selector_C::BndEvt__W_Customization_Selector_Button_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "BndEvt__W_Customization_Selector_Button_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Selector.W_Customization_Selector_C.BndEvt__W_Customization_Selector_Button_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Selector_C::BndEvt__W_Customization_Selector_Button_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "BndEvt__W_Customization_Selector_Button_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");

	Params::UW_Customization_Selector_C_BndEvt__W_Customization_Selector_Button_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Selector.W_Customization_Selector_C.BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_5_OnOptionHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Customization_Selector_C::BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_5_OnOptionHovered__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_5_OnOptionHovered__DelegateSignature");

	Params::UW_Customization_Selector_C_BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_5_OnOptionHovered__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Selector.W_Customization_Selector_C.BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_6_OnMenuClosed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Dropdown_C*               TriggeringDropdown                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Selector_C::BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_6_OnMenuClosed__DelegateSignature(class UW_Dropdown_C* TriggeringDropdown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_6_OnMenuClosed__DelegateSignature");

	Params::UW_Customization_Selector_C_BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_6_OnMenuClosed__DelegateSignature_Params Parms{};

	Parms.TriggeringDropdown = TriggeringDropdown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Selector.W_Customization_Selector_C.BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_7_OnOptionUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Customization_Selector_C::BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_7_OnOptionUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_7_OnOptionUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Selector.W_Customization_Selector_C.ExecuteUbergraph_W_Customization_Selector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_OptionID_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_OptionID_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_OptionID                              (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Dropdown_C*               K2Node_ComponentBoundEvent_TriggeringDropdown                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Selector_C::ExecuteUbergraph_W_Customization_Selector(int32 EntryPoint, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, TArray<class FName>& CallFunc_Map_Keys_Keys, bool CallFunc_Array_IsValidIndex_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class FName K2Node_ComponentBoundEvent_OptionID_2, const class FString& K2Node_ComponentBoundEvent_OptionID_1, class FName CallFunc_Conv_StringToName_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, const class FString& K2Node_ComponentBoundEvent_OptionID, class FName CallFunc_Conv_StringToName_ReturnValue_1, class UW_Dropdown_C* K2Node_ComponentBoundEvent_TriggeringDropdown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "ExecuteUbergraph_W_Customization_Selector");

	Params::UW_Customization_Selector_C_ExecuteUbergraph_W_Customization_Selector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_OptionID_2 = K2Node_ComponentBoundEvent_OptionID_2;
	Parms.K2Node_ComponentBoundEvent_OptionID_1 = K2Node_ComponentBoundEvent_OptionID_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_OptionID = K2Node_ComponentBoundEvent_OptionID;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_TriggeringDropdown = K2Node_ComponentBoundEvent_TriggeringDropdown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Selector.W_Customization_Selector_C.OnOptionUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_Selector_C::OnOptionUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "OnOptionUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Selector.W_Customization_Selector_C.OnDropdownClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Customization_Selector_C::OnDropdownClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "OnDropdownClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Customization_Selector.W_Customization_Selector_C.OnOptionHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Selector_C::OnOptionHovered__DelegateSignature(class FName OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "OnOptionHovered__DelegateSignature");

	Params::UW_Customization_Selector_C_OnOptionHovered__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Selector.W_Customization_Selector_C.OnSelectorClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Customization_Selector_C* TriggeringSelector                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Selector_C::OnSelectorClicked__DelegateSignature(class UW_Customization_Selector_C* TriggeringSelector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "OnSelectorClicked__DelegateSignature");

	Params::UW_Customization_Selector_C_OnSelectorClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringSelector = TriggeringSelector;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Customization_Selector.W_Customization_Selector_C.OptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Customization_Selector_C::OptionSelected__DelegateSignature(class FName OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Customization_Selector_C", "OptionSelected__DelegateSignature");

	Params::UW_Customization_Selector_C_OptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}

}


