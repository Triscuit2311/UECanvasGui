#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_AttachmentItem.W_AttachmentItem_C
// (None)

class UClass* UW_AttachmentItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_AttachmentItem_C");

	return Clss;
}


// W_AttachmentItem_C W_AttachmentItem.Default__W_AttachmentItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_AttachmentItem_C* UW_AttachmentItem_C::GetDefaultObj()
{
	static class UW_AttachmentItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_AttachmentItem_C*>(UW_AttachmentItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_AttachmentItem.W_AttachmentItem_C.UnhighlightBorder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AttachmentItem_C::UnhighlightBorder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "UnhighlightBorder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentItem.W_AttachmentItem_C.HighlightBorder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AttachmentItem_C::HighlightBorder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "HighlightBorder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentItem.W_AttachmentItem_C.UpdateAttachmentName
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)

void UW_AttachmentItem_C::UpdateAttachmentName(const class FString& CallFunc_GetClassDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "UpdateAttachmentName");

	Params::UW_AttachmentItem_C_UpdateAttachmentName_Params Parms{};

	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentItem.W_AttachmentItem_C.SimulateClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AttachmentItem_C::SimulateClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "SimulateClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentItem.W_AttachmentItem_C.SimulateUnhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AttachmentItem_C::SimulateUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "SimulateUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentItem.W_AttachmentItem_C.SimulateHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AttachmentItem_C::SimulateHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "SimulateHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentItem.W_AttachmentItem_C.Deselect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AttachmentItem_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "Deselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentItem.W_AttachmentItem_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AttachmentItem_C::Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentItem.W_AttachmentItem_C.Get_ItemClassName_Text_Visibility
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERONBuildConfiguration  Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERONBuildConfiguration  CallFunc_GetBuildConfiguration_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UW_AttachmentItem_C::Get_ItemClassName_Text_Visibility(enum class ERONBuildConfiguration Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ERONBuildConfiguration CallFunc_GetBuildConfiguration_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "Get_ItemClassName_Text_Visibility");

	Params::UW_AttachmentItem_C_Get_ItemClassName_Text_Visibility_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.CallFunc_GetBuildConfiguration_ReturnValue = CallFunc_GetBuildConfiguration_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_AttachmentItem.W_AttachmentItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_AttachmentItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentItem.W_AttachmentItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_AttachmentItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "PreConstruct");

	Params::UW_AttachmentItem_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentItem.W_AttachmentItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_StandardButton_C*         CallingButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttachmentItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	Params::UW_AttachmentItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params Parms{};

	Parms.CallingButton = CallingButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentItem.W_AttachmentItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_AttachmentItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentItem.W_AttachmentItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_AttachmentItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentItem.W_AttachmentItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_AttachmentItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentItem.W_AttachmentItem_C.OnLoadoutLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AttachmentItem_C::OnLoadoutLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "OnLoadoutLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentItem.W_AttachmentItem_C.OnGunCleaned
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AttachmentItem_C::OnGunCleaned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "OnGunCleaned");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AttachmentItem.W_AttachmentItem_C.ExecuteUbergraph_W_AttachmentItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EItemCategory>   Temp_byte_Variable                                               (ReferenceParm)
// enum class EItemCategory           Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetLazyLoadedImage_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UW_StandardButton_C*         K2Node_ComponentBoundEvent_CallingButton                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_10                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_11                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_12                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_13                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_14                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_15                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_AttachmentItem_C::ExecuteUbergraph_W_AttachmentItem(int32 EntryPoint, TArray<enum class EItemCategory>& Temp_byte_Variable, enum class EItemCategory Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class FText CallFunc_Conv_StringToText_ReturnValue, class UW_StandardButton_C* K2Node_ComponentBoundEvent_CallingButton, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_4, bool CallFunc_EqualEqual_ClassClass_ReturnValue_5, bool CallFunc_EqualEqual_ClassClass_ReturnValue_6, bool CallFunc_EqualEqual_ClassClass_ReturnValue_7, bool CallFunc_EqualEqual_ClassClass_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_EqualEqual_ClassClass_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_EqualEqual_ClassClass_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_EqualEqual_ClassClass_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "ExecuteUbergraph_W_AttachmentItem");

	Params::UW_AttachmentItem_C_ExecuteUbergraph_W_AttachmentItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetLazyLoadedImage_ReturnValue = CallFunc_GetLazyLoadedImage_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_CallingButton = K2Node_ComponentBoundEvent_CallingButton;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_3 = CallFunc_EqualEqual_ClassClass_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_4 = CallFunc_EqualEqual_ClassClass_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_5 = CallFunc_EqualEqual_ClassClass_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_6 = CallFunc_EqualEqual_ClassClass_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_7 = CallFunc_EqualEqual_ClassClass_ReturnValue_7;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_8 = CallFunc_EqualEqual_ClassClass_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_9 = CallFunc_EqualEqual_ClassClass_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_10 = CallFunc_EqualEqual_ClassClass_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_11 = CallFunc_EqualEqual_ClassClass_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_12 = CallFunc_EqualEqual_ClassClass_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_13 = CallFunc_EqualEqual_ClassClass_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_14 = CallFunc_EqualEqual_ClassClass_ReturnValue_14;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_15 = CallFunc_EqualEqual_ClassClass_ReturnValue_15;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_13 = CallFunc_BooleanOR_ReturnValue_13;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentItem.W_AttachmentItem_C.OnButtonUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AttachmentItem_C*         AttachmentItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttachmentItem_C::OnButtonUnhovered__DelegateSignature(class UW_AttachmentItem_C* AttachmentItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "OnButtonUnhovered__DelegateSignature");

	Params::UW_AttachmentItem_C_OnButtonUnhovered__DelegateSignature_Params Parms{};

	Parms.AttachmentItem = AttachmentItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentItem.W_AttachmentItem_C.OnButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AttachmentItem_C*         AttachmentItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttachmentItem_C::OnButtonHovered__DelegateSignature(class UW_AttachmentItem_C* AttachmentItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "OnButtonHovered__DelegateSignature");

	Params::UW_AttachmentItem_C_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.AttachmentItem = AttachmentItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttachmentItem.W_AttachmentItem_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AttachmentItem_C*         AttachmentItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttachmentItem_C::OnButtonClicked__DelegateSignature(class UW_AttachmentItem_C* AttachmentItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttachmentItem_C", "OnButtonClicked__DelegateSignature");

	Params::UW_AttachmentItem_C_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.AttachmentItem = AttachmentItem;

	UObject::ProcessEvent(Func, &Parms);

}

}


