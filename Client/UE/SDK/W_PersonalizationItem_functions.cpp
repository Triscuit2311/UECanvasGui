#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PersonalizationItem.W_PersonalizationItem_C
// (None)

class UClass* UW_PersonalizationItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PersonalizationItem_C");

	return Clss;
}


// W_PersonalizationItem_C W_PersonalizationItem.Default__W_PersonalizationItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PersonalizationItem_C* UW_PersonalizationItem_C::GetDefaultObj()
{
	static class UW_PersonalizationItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PersonalizationItem_C*>(UW_PersonalizationItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PersonalizationItem.W_PersonalizationItem_C.UnhighlightBorder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PersonalizationItem_C::UnhighlightBorder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationItem_C", "UnhighlightBorder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PersonalizationItem.W_PersonalizationItem_C.HighlightBorder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PersonalizationItem_C::HighlightBorder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationItem_C", "HighlightBorder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PersonalizationItem.W_PersonalizationItem_C.SimulateClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PersonalizationItem_C::SimulateClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationItem_C", "SimulateClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PersonalizationItem.W_PersonalizationItem_C.SimulateUnhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PersonalizationItem_C::SimulateUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationItem_C", "SimulateUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PersonalizationItem.W_PersonalizationItem_C.SimulateHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PersonalizationItem_C::SimulateHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationItem_C", "SimulateHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PersonalizationItem.W_PersonalizationItem_C.Deselect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PersonalizationItem_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationItem_C", "Deselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PersonalizationItem.W_PersonalizationItem_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PersonalizationItem_C::Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationItem_C", "Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PersonalizationItem.W_PersonalizationItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PersonalizationItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationItem_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PersonalizationItem.W_PersonalizationItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PersonalizationItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationItem_C", "PreConstruct");

	Params::UW_PersonalizationItem_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PersonalizationItem.W_PersonalizationItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_StandardButton_C*         CallingButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PersonalizationItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationItem_C", "BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	Params::UW_PersonalizationItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params Parms{};

	Parms.CallingButton = CallingButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PersonalizationItem.W_PersonalizationItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PersonalizationItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationItem_C", "BndEvt__Button_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PersonalizationItem.W_PersonalizationItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PersonalizationItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationItem_C", "BndEvt__Button_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PersonalizationItem.W_PersonalizationItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PersonalizationItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationItem_C", "BndEvt__Button_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PersonalizationItem.W_PersonalizationItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PersonalizationItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationItem_C", "Tick");

	Params::UW_PersonalizationItem_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PersonalizationItem.W_PersonalizationItem_C.ExecuteUbergraph_W_PersonalizationItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDLCInstalledEnum_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_StandardButton_C*         K2Node_ComponentBoundEvent_CallingButton                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetLazyLoadedImage_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// bool                               CallFunc_IsDLCInstalledEnum_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PersonalizationItem_C::ExecuteUbergraph_W_PersonalizationItem(int32 EntryPoint, bool CallFunc_IsDLCInstalledEnum_ReturnValue, bool K2Node_Event_IsDesignTime, class UW_StandardButton_C* K2Node_ComponentBoundEvent_CallingButton, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsDLCInstalledEnum_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationItem_C", "ExecuteUbergraph_W_PersonalizationItem");

	Params::UW_PersonalizationItem_C_ExecuteUbergraph_W_PersonalizationItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDLCInstalledEnum_ReturnValue = CallFunc_IsDLCInstalledEnum_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_CallingButton = K2Node_ComponentBoundEvent_CallingButton;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetLazyLoadedImage_ReturnValue = CallFunc_GetLazyLoadedImage_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_IsDLCInstalledEnum_ReturnValue_1 = CallFunc_IsDLCInstalledEnum_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PersonalizationItem.W_PersonalizationItem_C.OnButtonUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PersonalizationItem_C*    PersonalizationItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PersonalizationItem_C::OnButtonUnhovered__DelegateSignature(class UW_PersonalizationItem_C* PersonalizationItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationItem_C", "OnButtonUnhovered__DelegateSignature");

	Params::UW_PersonalizationItem_C_OnButtonUnhovered__DelegateSignature_Params Parms{};

	Parms.PersonalizationItem = PersonalizationItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PersonalizationItem.W_PersonalizationItem_C.OnButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PersonalizationItem_C*    PersonalizationItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PersonalizationItem_C::OnButtonHovered__DelegateSignature(class UW_PersonalizationItem_C* PersonalizationItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationItem_C", "OnButtonHovered__DelegateSignature");

	Params::UW_PersonalizationItem_C_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.PersonalizationItem = PersonalizationItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PersonalizationItem.W_PersonalizationItem_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PersonalizationItem_C*    PersonalizationItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PersonalizationItem_C::OnButtonClicked__DelegateSignature(class UW_PersonalizationItem_C* PersonalizationItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationItem_C", "OnButtonClicked__DelegateSignature");

	Params::UW_PersonalizationItem_C_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.PersonalizationItem = PersonalizationItem;

	UObject::ProcessEvent(Func, &Parms);

}

}


