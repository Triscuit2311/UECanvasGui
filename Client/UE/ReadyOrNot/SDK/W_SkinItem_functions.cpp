#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SkinItem.W_SkinItem_C
// (None)

class UClass* UW_SkinItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SkinItem_C");

	return Clss;
}


// W_SkinItem_C W_SkinItem.Default__W_SkinItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SkinItem_C* UW_SkinItem_C::GetDefaultObj()
{
	static class UW_SkinItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SkinItem_C*>(UW_SkinItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_SkinItem.W_SkinItem_C.UnhighlightBorder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SkinItem_C::UnhighlightBorder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "UnhighlightBorder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinItem.W_SkinItem_C.HighlightBorder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SkinItem_C::HighlightBorder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "HighlightBorder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinItem.W_SkinItem_C.UpdateSkinName
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SkinItem_C::UpdateSkinName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "UpdateSkinName");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinItem.W_SkinItem_C.SimulateClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SkinItem_C::SimulateClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "SimulateClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinItem.W_SkinItem_C.SimulateUnhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SkinItem_C::SimulateUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "SimulateUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinItem.W_SkinItem_C.SimulateHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SkinItem_C::SimulateHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "SimulateHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinItem.W_SkinItem_C.Deselect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SkinItem_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "Deselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinItem.W_SkinItem_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SkinItem_C::Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinItem.W_SkinItem_C.Get_ItemClassName_Text_Visibility
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

enum class ESlateVisibility UW_SkinItem_C::Get_ItemClassName_Text_Visibility(enum class ERONBuildConfiguration Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ERONBuildConfiguration CallFunc_GetBuildConfiguration_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "Get_ItemClassName_Text_Visibility");

	Params::UW_SkinItem_C_Get_ItemClassName_Text_Visibility_Params Parms{};

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


// Function W_SkinItem.W_SkinItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_SkinItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinItem.W_SkinItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SkinItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "PreConstruct");

	Params::UW_SkinItem_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinItem.W_SkinItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_StandardButton_C*         CallingButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SkinItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	Params::UW_SkinItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params Parms{};

	Parms.CallingButton = CallingButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinItem.W_SkinItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_SkinItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinItem.W_SkinItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_SkinItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinItem.W_SkinItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_SkinItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinItem.W_SkinItem_C.OnLoadoutLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SkinItem_C::OnLoadoutLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "OnLoadoutLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinItem.W_SkinItem_C.OnGunCleaned
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SkinItem_C::OnGunCleaned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "OnGunCleaned");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SkinItem.W_SkinItem_C.ExecuteUbergraph_W_SkinItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDLCInstalledEnum_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetLazyLoadedImage_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UW_StandardButton_C*         K2Node_ComponentBoundEvent_CallingButton                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFactorySkin_Return_Value                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_SkinItem_C::ExecuteUbergraph_W_SkinItem(int32 EntryPoint, bool CallFunc_IsDLCInstalledEnum_ReturnValue, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class UW_StandardButton_C* K2Node_ComponentBoundEvent_CallingButton, bool CallFunc_IsFactorySkin_Return_Value, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "ExecuteUbergraph_W_SkinItem");

	Params::UW_SkinItem_C_ExecuteUbergraph_W_SkinItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDLCInstalledEnum_ReturnValue = CallFunc_IsDLCInstalledEnum_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_GetLazyLoadedImage_ReturnValue = CallFunc_GetLazyLoadedImage_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_CallingButton = K2Node_ComponentBoundEvent_CallingButton;
	Parms.CallFunc_IsFactorySkin_Return_Value = CallFunc_IsFactorySkin_Return_Value;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinItem.W_SkinItem_C.OnButtonUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SkinItem_C*               SkinItem                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SkinItem_C::OnButtonUnhovered__DelegateSignature(class UW_SkinItem_C* SkinItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "OnButtonUnhovered__DelegateSignature");

	Params::UW_SkinItem_C_OnButtonUnhovered__DelegateSignature_Params Parms{};

	Parms.SkinItem = SkinItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinItem.W_SkinItem_C.OnButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SkinItem_C*               SkinItem                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SkinItem_C::OnButtonHovered__DelegateSignature(class UW_SkinItem_C* SkinItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "OnButtonHovered__DelegateSignature");

	Params::UW_SkinItem_C_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.SkinItem = SkinItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SkinItem.W_SkinItem_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SkinItem_C*               SkinItem                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SkinItem_C::OnButtonClicked__DelegateSignature(class UW_SkinItem_C* SkinItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SkinItem_C", "OnButtonClicked__DelegateSignature");

	Params::UW_SkinItem_C_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.SkinItem = SkinItem;

	UObject::ProcessEvent(Func, &Parms);

}

}


