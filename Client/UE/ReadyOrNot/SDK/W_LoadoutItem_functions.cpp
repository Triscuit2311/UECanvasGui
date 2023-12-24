#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_LoadoutItem.W_LoadoutItem_C
// (None)

class UClass* UW_LoadoutItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_LoadoutItem_C");

	return Clss;
}


// W_LoadoutItem_C W_LoadoutItem.Default__W_LoadoutItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_LoadoutItem_C* UW_LoadoutItem_C::GetDefaultObj()
{
	static class UW_LoadoutItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_LoadoutItem_C*>(UW_LoadoutItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_LoadoutItem.W_LoadoutItem_C.GetSelectionSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFMODEvent*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UFMODEvent* UW_LoadoutItem_C::GetSelectionSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_C", "GetSelectionSound");

	Params::UW_LoadoutItem_C_GetSelectionSound_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadoutItem.W_LoadoutItem_C.GetCurrentMenuDirectory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Return_Value                                                     (Parm, OutParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UW_LoadoutItem_C::GetCurrentMenuDirectory(class FText* Return_Value, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_C", "GetCurrentMenuDirectory");

	Params::UW_LoadoutItem_C_GetCurrentMenuDirectory_Params Parms{};

	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Conv_TextToString_ReturnValue_4 = CallFunc_Conv_TextToString_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function W_LoadoutItem.W_LoadoutItem_C.Get_Equipped_Text_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UW_LoadoutItem_C::Get_Equipped_Text_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_C", "Get_Equipped_Text_Visibility");

	Params::UW_LoadoutItem_C_Get_Equipped_Text_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadoutItem.W_LoadoutItem_C.SimulateUnhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutItem_C::SimulateUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_C", "SimulateUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutItem.W_LoadoutItem_C.SimulateHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutItem_C::SimulateHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_C", "SimulateHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutItem.W_LoadoutItem_C.SimulateClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutItem_C::SimulateClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_C", "SimulateClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutItem.W_LoadoutItem_C.ToggleSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutItem_C::ToggleSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_C", "ToggleSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutItem.W_LoadoutItem_C.Deselect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutItem_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_C", "Deselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutItem.W_LoadoutItem_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutItem_C::Select(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_C", "Select");

	Params::UW_LoadoutItem_C_Select_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem.W_LoadoutItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LoadoutItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutItem.W_LoadoutItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_LoadoutItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_C", "BndEvt__Button_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutItem.W_LoadoutItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_StandardButton_C*         CallingButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_C", "BndEvt__Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	Params::UW_LoadoutItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params Parms{};

	Parms.CallingButton = CallingButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem.W_LoadoutItem_C.OnLoadoutLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadoutItem_C::OnLoadoutLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_C", "OnLoadoutLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadoutItem.W_LoadoutItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_C", "PreConstruct");

	Params::UW_LoadoutItem_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem.W_LoadoutItem_C.ExecuteUbergraph_W_LoadoutItem
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDLCLocked_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_StandardButton_C*         K2Node_ComponentBoundEvent_CallingButton                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODEvent*                  CallFunc_GetSelectionSound_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPreMissionPlanning*         CallFunc_GetPremissionPlanning_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LoadoutItem_C::ExecuteUbergraph_W_LoadoutItem(int32 EntryPoint, bool CallFunc_IsDLCLocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UW_StandardButton_C* K2Node_ComponentBoundEvent_CallingButton, bool K2Node_Event_IsDesignTime, bool K2Node_SwitchEnum_CmpSuccess, class UFMODEvent* CallFunc_GetSelectionSound_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UPreMissionPlanning* CallFunc_GetPremissionPlanning_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_C", "ExecuteUbergraph_W_LoadoutItem");

	Params::UW_LoadoutItem_C_ExecuteUbergraph_W_LoadoutItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDLCLocked_ReturnValue = CallFunc_IsDLCLocked_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_CallingButton = K2Node_ComponentBoundEvent_CallingButton;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetSelectionSound_ReturnValue = CallFunc_GetSelectionSound_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_GetPremissionPlanning_ReturnValue = CallFunc_GetPremissionPlanning_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_3 = CallFunc_EqualEqual_ClassClass_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_4 = CallFunc_EqualEqual_ClassClass_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem.W_LoadoutItem_C.OnButtonUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutItem_C*            LoadoutItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutItem_C::OnButtonUnhovered__DelegateSignature(class UW_LoadoutItem_C* LoadoutItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_C", "OnButtonUnhovered__DelegateSignature");

	Params::UW_LoadoutItem_C_OnButtonUnhovered__DelegateSignature_Params Parms{};

	Parms.LoadoutItem = LoadoutItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem.W_LoadoutItem_C.OnButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutItem_C*            LoadoutItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutItem_C::OnButtonHovered__DelegateSignature(class UW_LoadoutItem_C* LoadoutItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_C", "OnButtonHovered__DelegateSignature");

	Params::UW_LoadoutItem_C_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.LoadoutItem = LoadoutItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutItem.W_LoadoutItem_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_LoadoutItem_C*            LoadoutItemWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadoutItem_C::OnButtonClicked__DelegateSignature(class UW_LoadoutItem_C* LoadoutItemWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutItem_C", "OnButtonClicked__DelegateSignature");

	Params::UW_LoadoutItem_C_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.LoadoutItemWidget = LoadoutItemWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


