#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_StandardButton.W_StandardButton_C
// (None)

class UClass* UW_StandardButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_StandardButton_C");

	return Clss;
}


// W_StandardButton_C W_StandardButton.Default__W_StandardButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_StandardButton_C* UW_StandardButton_C::GetDefaultObj()
{
	static class UW_StandardButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_StandardButton_C*>(UW_StandardButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_StandardButton.W_StandardButton_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewButtonText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_StandardButton_C::SetButtonText(class FText NewButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "SetButtonText");

	Params::UW_StandardButton_C_SetButtonText_Params Parms{};

	Parms.NewButtonText = NewButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardButton.W_StandardButton_C.GetTabControlIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UW_StandardButton_C::GetTabControlIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "GetTabControlIndex");

	Params::UW_StandardButton_C_GetTabControlIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_StandardButton.W_StandardButton_C.GetDescriptionText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        DescriptionText                                                  (Parm, OutParm)

void UW_StandardButton_C::GetDescriptionText(class FText* DescriptionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "GetDescriptionText");

	Params::UW_StandardButton_C_GetDescriptionText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DescriptionText != nullptr)
		*DescriptionText = Parms.DescriptionText;

}


// Function W_StandardButton.W_StandardButton_C.SetDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardButton_C::SetDisabled(bool Disabled, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "SetDisabled");

	Params::UW_StandardButton_C_SetDisabled_Params Parms{};

	Parms.Disabled = Disabled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardButton.W_StandardButton_C.UpdateSelectedVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardButton_C::UpdateSelectedVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "UpdateSelectedVisibility");

	Params::UW_StandardButton_C_UpdateSelectedVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardButton.W_StandardButton_C.GetThinRedLineVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UW_StandardButton_C::GetThinRedLineVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "GetThinRedLineVisibility");

	Params::UW_StandardButton_C_GetThinRedLineVisibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_StandardButton.W_StandardButton_C.GetSelectedVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UW_StandardButton_C::GetSelectedVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "GetSelectedVisibility");

	Params::UW_StandardButton_C_GetSelectedVisibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_StandardButton.W_StandardButton_C.OnUnhovered_Derived
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardButton_C::OnUnhovered_Derived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "OnUnhovered_Derived");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardButton.W_StandardButton_C.OnHovered_Derived
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardButton_C::OnHovered_Derived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "OnHovered_Derived");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardButton.W_StandardButton_C.OnClicked_Derived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardButton_C::OnClicked_Derived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "OnClicked_Derived");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardButton.W_StandardButton_C.OnReleased_Derived
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardButton_C::OnReleased_Derived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "OnReleased_Derived");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardButton.W_StandardButton_C.OnPressed_Derived
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardButton_C::OnPressed_Derived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "OnPressed_Derived");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardButton.W_StandardButton_C.GetDisabledVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_StandardButton_C::GetDisabledVisibility(bool CallFunc_GetIsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "GetDisabledVisibility");

	Params::UW_StandardButton_C_GetDisabledVisibility_Params Parms{};

	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_StandardButton.W_StandardButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_StandardButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "BndEvt__TheButton_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardButton.W_StandardButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_StandardButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardButton.W_StandardButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_StandardButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "BndEvt__TheButton_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardButton.W_StandardButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_StandardButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "BndEvt__TheButton_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardButton.W_StandardButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_StandardButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardButton.W_StandardButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "PreConstruct");

	Params::UW_StandardButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardButton.W_StandardButton_C.Update Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardButton_C::Update_Visibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "Update Visibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardButton.W_StandardButton_C.Reconstruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardButton_C::Reconstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "Reconstruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardButton.W_StandardButton_C.SimulateHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardButton_C::SimulateHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "SimulateHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardButton.W_StandardButton_C.SimulateUnhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardButton_C::SimulateUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "SimulateUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardButton.W_StandardButton_C.SimulateClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardButton_C::SimulateClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "SimulateClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardButton.W_StandardButton_C.ExecuteUbergraph_W_StandardButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_1                                          (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescriptionText_DescriptionText                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToUpper_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        K2Node_Select_Default_3                                          (None)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardButton_C::ExecuteUbergraph_W_StandardButton(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool Temp_bool_Variable_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, class FName K2Node_Select_Default, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, bool K2Node_SwitchEnum_CmpSuccess, class FText K2Node_Select_Default_1, bool K2Node_Event_IsDesignTime, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, class FText CallFunc_GetDescriptionText_DescriptionText, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_ToUpper_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText K2Node_Select_Default_3, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "ExecuteUbergraph_W_StandardButton");

	Params::UW_StandardButton_C_ExecuteUbergraph_W_StandardButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetDescriptionText_DescriptionText = CallFunc_GetDescriptionText_DescriptionText;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_ToUpper_ReturnValue_1 = CallFunc_ToUpper_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardButton.W_StandardButton_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardButton_C::OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardButton.W_StandardButton_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardButton_C::OnReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "OnReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardButton.W_StandardButton_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardButton_C::OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardButton.W_StandardButton_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardButton_C::OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardButton.W_StandardButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardButton_C*         CallingButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardButton_C::OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardButton_C", "OnClicked__DelegateSignature");

	Params::UW_StandardButton_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.CallingButton = CallingButton;

	UObject::ProcessEvent(Func, &Parms);

}

}


