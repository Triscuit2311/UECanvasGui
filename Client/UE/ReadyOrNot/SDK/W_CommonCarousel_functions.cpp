#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_CommonCarousel.W_CommonCarousel_C
// (None)

class UClass* UW_CommonCarousel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_CommonCarousel_C");

	return Clss;
}


// W_CommonCarousel_C W_CommonCarousel.Default__W_CommonCarousel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_CommonCarousel_C* UW_CommonCarousel_C::GetDefaultObj()
{
	static class UW_CommonCarousel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_CommonCarousel_C*>(UW_CommonCarousel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_CommonCarousel.W_CommonCarousel_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FAnalogInputEvent           InAnalogInputEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnalogValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_CommonCarousel_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetAnalogValue_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommonCarousel_C", "OnAnalogValueChanged");

	Params::UW_CommonCarousel_C_OnAnalogValueChanged_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InAnalogInputEvent = InAnalogInputEvent;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetAnalogValue_ReturnValue = CallFunc_GetAnalogValue_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_CommonCarousel.W_CommonCarousel_C.Navigate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Right                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UW_CommonCarousel_C::Navigate(bool Right, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommonCarousel_C", "Navigate");

	Params::UW_CommonCarousel_C_Navigate_Params Parms{};

	Parms.Right = Right;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_CommonCarousel.W_CommonCarousel_C.ClearItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_CommonCarousel_C::ClearItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommonCarousel_C", "ClearItems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CommonCarousel.W_CommonCarousel_C.CreateCarouselItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScaleBox*                   CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Text_C*                   CallFunc_SpawnObject_ReturnValue_2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommonCarousel_C::CreateCarouselItem(class FText Label, const class FString& Value, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class USizeBox* CallFunc_SpawnObject_ReturnValue, class UScaleBox* CallFunc_SpawnObject_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UW_Text_C* CallFunc_SpawnObject_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommonCarousel_C", "CreateCarouselItem");

	Params::UW_CommonCarousel_C_CreateCarouselItem_Params Parms{};

	Parms.Label = Label;
	Parms.Value = Value;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue_2 = CallFunc_SpawnObject_ReturnValue_2;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue_2 = CallFunc_AddChild_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommonCarousel.W_CommonCarousel_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UW_CommonCarousel_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommonCarousel_C", "OnPreviewKeyDown");

	Params::UW_CommonCarousel_C_OnPreviewKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_CommonCarousel.W_CommonCarousel_C.CreateCarouselDefaultItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// class UScaleBox*                   CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommonCarousel_C::CreateCarouselDefaultItems(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class FText CallFunc_Array_Get_Item, class UScaleBox* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UTextBlock* CallFunc_SpawnObject_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommonCarousel_C", "CreateCarouselDefaultItems");

	Params::UW_CommonCarousel_C_CreateCarouselDefaultItems_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommonCarousel.W_CommonCarousel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_CommonCarousel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommonCarousel_C", "PreConstruct");

	Params::UW_CommonCarousel_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommonCarousel.W_CommonCarousel_C.BndEvt__CommonCarousel_LeftButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_CommonCarousel_C::BndEvt__CommonCarousel_LeftButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommonCarousel_C", "BndEvt__CommonCarousel_LeftButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CommonCarousel.W_CommonCarousel_C.BndEvt__CommonCarousel_RightButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_CommonCarousel_C::BndEvt__CommonCarousel_RightButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommonCarousel_C", "BndEvt__CommonCarousel_RightButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CommonCarousel.W_CommonCarousel_C.BndEvt__W_CommonCarousel_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_CommonCarousel_C::BndEvt__W_CommonCarousel_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommonCarousel_C", "BndEvt__W_CommonCarousel_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CommonCarousel.W_CommonCarousel_C.BndEvt__W_CommonCarousel_RightButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_CommonCarousel_C::BndEvt__W_CommonCarousel_RightButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommonCarousel_C", "BndEvt__W_CommonCarousel_RightButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CommonCarousel.W_CommonCarousel_C.BndEvt__W_CommonCarousel_Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_CommonCarousel_C::BndEvt__W_CommonCarousel_Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommonCarousel_C", "BndEvt__W_CommonCarousel_Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CommonCarousel.W_CommonCarousel_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_CommonCarousel_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommonCarousel_C", "OnRemovedFromFocusPath");

	Params::UW_CommonCarousel_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommonCarousel.W_CommonCarousel_C.BndEvt__W_CommonCarousel_CommonWidgetCarousel_98_K2Node_ComponentBoundEvent_5_OnCurrentPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonWidgetCarousel*       CarouselWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentPageIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommonCarousel_C::BndEvt__W_CommonCarousel_CommonWidgetCarousel_98_K2Node_ComponentBoundEvent_5_OnCurrentPageIndexChanged__DelegateSignature(class UCommonWidgetCarousel* CarouselWidget, int32 CurrentPageIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommonCarousel_C", "BndEvt__W_CommonCarousel_CommonWidgetCarousel_98_K2Node_ComponentBoundEvent_5_OnCurrentPageIndexChanged__DelegateSignature");

	Params::UW_CommonCarousel_C_BndEvt__W_CommonCarousel_CommonWidgetCarousel_98_K2Node_ComponentBoundEvent_5_OnCurrentPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.CarouselWidget = CarouselWidget;
	Parms.CurrentPageIndex = CurrentPageIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommonCarousel.W_CommonCarousel_C.ExecuteUbergraph_W_CommonCarousel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonWidgetCarousel*       K2Node_ComponentBoundEvent_CarouselWidget                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_CurrentPageIndex                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)

void UW_CommonCarousel_C::ExecuteUbergraph_W_CommonCarousel(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float CallFunc_GetGameTimeInSeconds_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCommonWidgetCarousel* K2Node_ComponentBoundEvent_CarouselWidget, int32 K2Node_ComponentBoundEvent_CurrentPageIndex, const class FString& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommonCarousel_C", "ExecuteUbergraph_W_CommonCarousel");

	Params::UW_CommonCarousel_C_ExecuteUbergraph_W_CommonCarousel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_CarouselWidget = K2Node_ComponentBoundEvent_CarouselWidget;
	Parms.K2Node_ComponentBoundEvent_CurrentPageIndex = K2Node_ComponentBoundEvent_CurrentPageIndex;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommonCarousel.W_CommonCarousel_C.OnPageIndexChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_CommonCarousel_C::OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommonCarousel_C", "OnPageIndexChanged__DelegateSignature");

	Params::UW_CommonCarousel_C_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommonCarousel.W_CommonCarousel_C.FocusLostDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommonCarousel_C::FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommonCarousel_C", "FocusLostDispatcher__DelegateSignature");

	Params::UW_CommonCarousel_C_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}

}


