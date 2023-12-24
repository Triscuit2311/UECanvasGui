#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_StandardCombobox_New.W_StandardCombobox_New_C
// (None)

class UClass* UW_StandardCombobox_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_StandardCombobox_New_C");

	return Clss;
}


// W_StandardCombobox_New_C W_StandardCombobox_New.Default__W_StandardCombobox_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_StandardCombobox_New_C* UW_StandardCombobox_New_C::GetDefaultObj()
{
	static class UW_StandardCombobox_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_StandardCombobox_New_C*>(UW_StandardCombobox_New_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.Get_BackGroundImg_ColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UW_StandardCombobox_New_C::Get_BackGroundImg_ColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "Get_BackGroundImg_ColorAndOpacity_0");

	Params::UW_StandardCombobox_New_C_Get_BackGroundImg_ColorAndOpacity_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.GetCurrentOptionAsString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      OptionAsString                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)

void UW_StandardCombobox_New_C::GetCurrentOptionAsString(class FString* OptionAsString, const class FString& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "GetCurrentOptionAsString");

	Params::UW_StandardCombobox_New_C_GetCurrentOptionAsString_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (OptionAsString != nullptr)
		*OptionAsString = std::move(Parms.OptionAsString);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.ClearOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardCombobox_New_C::ClearOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "ClearOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.DeleteOptionString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      StringValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardCombobox_New_C::DeleteOptionString(const class FString& StringValue, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "DeleteOptionString");

	Params::UW_StandardCombobox_New_C_DeleteOptionString_Params Parms{};

	Parms.StringValue = StringValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.DeleteOptionIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardCombobox_New_C::DeleteOptionIndex(int32 Index, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "DeleteOptionIndex");

	Params::UW_StandardCombobox_New_C_DeleteOptionIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.InsertOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      OptionString                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        OptionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        OptionDescription                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_StandardCombobox_New_C::InsertOption(int32 Index, const class FString& OptionString, class FText OptionName, class FText OptionDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "InsertOption");

	Params::UW_StandardCombobox_New_C_InsertOption_Params Parms{};

	Parms.Index = Index;
	Parms.OptionString = OptionString;
	Parms.OptionName = OptionName;
	Parms.OptionDescription = OptionDescription;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.AddOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OptionString                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        OptionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        OptionDescription                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardCombobox_New_C::AddOption(const class FString& OptionString, class FText OptionName, class FText OptionDescription, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "AddOption");

	Params::UW_StandardCombobox_New_C_AddOption_Params Parms{};

	Parms.OptionString = OptionString;
	Parms.OptionName = OptionName;
	Parms.OptionDescription = OptionDescription;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.SetStringOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardCombobox_New_C::SetStringOption(const class FString& Option, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "SetStringOption");

	Params::UW_StandardCombobox_New_C_SetStringOption_Params Parms{};

	Parms.Option = Option;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.SetOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardCombobox_New_C::SetOption(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "SetOption");

	Params::UW_StandardCombobox_New_C_SetOption_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.UpdateOptionText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Array_Get_Item                                          (None)

void UW_StandardCombobox_New_C::UpdateOptionText(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "UpdateOptionText");

	Params::UW_StandardCombobox_New_C_UpdateOptionText_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.ReceivedOptionClickedSignal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OptionAsString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardCombobox_New_C::ReceivedOptionClickedSignal(const class FString& OptionAsString, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "ReceivedOptionClickedSignal");

	Params::UW_StandardCombobox_New_C_ReceivedOptionClickedSignal_Params Parms{};

	Parms.OptionAsString = OptionAsString;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.GetAnchorMenuContent
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Combobox_Menu_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_StandardCombobox_New_C::GetAnchorMenuContent(class UW_Combobox_Menu_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "GetAnchorMenuContent");

	Params::UW_StandardCombobox_New_C_GetAnchorMenuContent_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_StandardCombobox_New_C::BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_StandardCombobox_New_C::BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_StandardCombobox_New_C::BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_StandardCombobox_New_C::BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_StandardCombobox_New_C::BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "BndEvt__ComboboxButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardCombobox_New_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "PreConstruct");

	Params::UW_StandardCombobox_New_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_StandardCombobox_New_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.Reconstruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardCombobox_New_C::Reconstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "Reconstruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_StandardCombobox_New_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "OnAddedToFocusPath");

	Params::UW_StandardCombobox_New_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_StandardCombobox_New_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "OnRemovedFromFocusPath");

	Params::UW_StandardCombobox_New_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.ExecuteUbergraph_W_StandardCombobox_New
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODEvent*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UW_StandardCombobox_New_C::ExecuteUbergraph_W_StandardCombobox_New(int32 EntryPoint, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UFMODEvent* K2Node_Select_Default, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "ExecuteUbergraph_W_StandardCombobox_New");

	Params::UW_StandardCombobox_New_C_ExecuteUbergraph_W_StandardCombobox_New_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardCombobox_New_C::OnReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "OnReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardCombobox_New_C::OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardCombobox_New_C::OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardCombobox_New_C::OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnNewOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardCombobox_New_C::OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "OnNewOptionSelected__DelegateSignature");

	Params::UW_StandardCombobox_New_C_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnOptionMenuClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardCombobox_New_C::OnOptionMenuClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "OnOptionMenuClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnOptionMenuOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardCombobox_New_C::OnOptionMenuOpened__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardCombobox_New_C", "OnOptionMenuOpened__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


