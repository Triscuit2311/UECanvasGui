#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ReplayEntry.W_ReplayEntry_C
// (None)

class UClass* UW_ReplayEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ReplayEntry_C");

	return Clss;
}


// W_ReplayEntry_C W_ReplayEntry.Default__W_ReplayEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ReplayEntry_C* UW_ReplayEntry_C::GetDefaultObj()
{
	static class UW_ReplayEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ReplayEntry_C*>(UW_ReplayEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ReplayEntry.W_ReplayEntry_C.UpdateFileName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReplayFileName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UW_ReplayEntry_C::UpdateFileName(const class FString& ReplayFileName, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "UpdateFileName");

	Params::UW_ReplayEntry_C_UpdateFileName_Params Parms{};

	Parms.ReplayFileName = ReplayFileName;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayEntry.W_ReplayEntry_C.SetActive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayEntry_C::SetActive(bool Active, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "SetActive");

	Params::UW_ReplayEntry_C_SetActive_Params Parms{};

	Parms.Active = Active;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayEntry.W_ReplayEntry_C.SetHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayEntry_C::SetHovered(bool Hovered, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_2, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "SetHovered");

	Params::UW_ReplayEntry_C_SetHovered_Params Parms{};

	Parms.Hovered = Hovered;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;
	Parms.CallFunc_SelectColor_ReturnValue_2 = CallFunc_SelectColor_ReturnValue_2;
	Parms.CallFunc_SelectColor_ReturnValue_3 = CallFunc_SelectColor_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayEntry.W_ReplayEntry_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayEntry_C::UpdateStyle(const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "UpdateStyle");

	Params::UW_ReplayEntry_C_UpdateStyle_Params Parms{};

	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayEntry.W_ReplayEntry_C.GetReplayTimeFormat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReplayLength                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Duration                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Percent_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_AppendMultiple_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_AppendMultiple_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_AppendMultiple_ReturnValue_2                            (ZeroConstructor, HasGetValueTypeHash)

void UW_ReplayEntry_C::GetReplayTimeFormat(float ReplayLength, class FString* Duration, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_AppendMultiple_ReturnValue, const class FString& CallFunc_AppendMultiple_ReturnValue_1, const class FString& CallFunc_AppendMultiple_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "GetReplayTimeFormat");

	Params::UW_ReplayEntry_C_GetReplayTimeFormat_Params Parms{};

	Parms.ReplayLength = ReplayLength;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_AppendMultiple_ReturnValue = CallFunc_AppendMultiple_ReturnValue;
	Parms.CallFunc_AppendMultiple_ReturnValue_1 = CallFunc_AppendMultiple_ReturnValue_1;
	Parms.CallFunc_AppendMultiple_ReturnValue_2 = CallFunc_AppendMultiple_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = std::move(Parms.Duration);

}


// Function W_ReplayEntry.W_ReplayEntry_C.SetupData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetReplayTimeFormat_Duration                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)

void UW_ReplayEntry_C::SetupData(const class FString& CallFunc_GetReplayTimeFormat_Duration, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "SetupData");

	Params::UW_ReplayEntry_C_SetupData_Params Parms{};

	Parms.CallFunc_GetReplayTimeFormat_Duration = CallFunc_GetReplayTimeFormat_Duration;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayEntry.W_ReplayEntry_C.BndEvt__W_ReplayEntry_btn_Select_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayEntry_C::BndEvt__W_ReplayEntry_btn_Select_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "BndEvt__W_ReplayEntry_btn_Select_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UW_ReplayEntry_C_BndEvt__W_ReplayEntry_btn_Select_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayEntry.W_ReplayEntry_C.BndEvt__W_ReplayEntry_btn_ReplayEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayEntry_C::BndEvt__W_ReplayEntry_btn_ReplayEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "BndEvt__W_ReplayEntry_btn_ReplayEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature");

	Params::UW_ReplayEntry_C_BndEvt__W_ReplayEntry_btn_ReplayEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayEntry.W_ReplayEntry_C.BndEvt__W_ReplayEntry_btn_ReplayEntry_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayEntry_C::BndEvt__W_ReplayEntry_btn_ReplayEntry_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "BndEvt__W_ReplayEntry_btn_ReplayEntry_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayEntry.W_ReplayEntry_C.BndEvt__W_ReplayEntry_btn_ReplayEntry_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayEntry_C::BndEvt__W_ReplayEntry_btn_ReplayEntry_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "BndEvt__W_ReplayEntry_btn_ReplayEntry_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	Params::UW_ReplayEntry_C_BndEvt__W_ReplayEntry_btn_ReplayEntry_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayEntry.W_ReplayEntry_C.OnUnselected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReplayEntry_C::OnUnselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "OnUnselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayEntry.W_ReplayEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ReplayEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayEntry.W_ReplayEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ReplayEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "PreConstruct");

	Params::UW_ReplayEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayEntry.W_ReplayEntry_C.ExecuteUbergraph_W_ReplayEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ReplayBrowser_C*          CallFunc_WidgetGetParentOfClass_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ReplayEntry_C::ExecuteUbergraph_W_ReplayEntry(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UW_ReplayBrowser_C* CallFunc_WidgetGetParentOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "ExecuteUbergraph_W_ReplayEntry");

	Params::UW_ReplayEntry_C_ExecuteUbergraph_W_ReplayEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_WidgetGetParentOfClass_ReturnValue = CallFunc_WidgetGetParentOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayEntry.W_ReplayEntry_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ReplayEntry_C*            TriggeringEntry                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayEntry_C::OnClicked__DelegateSignature(class UW_ReplayEntry_C* TriggeringEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "OnClicked__DelegateSignature");

	Params::UW_ReplayEntry_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringEntry = TriggeringEntry;

	UObject::ProcessEvent(Func, &Parms);

}

}


