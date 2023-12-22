#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_StandardRadioButton.W_StandardRadioButton_C
// (None)

class UClass* UW_StandardRadioButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_StandardRadioButton_C");

	return Clss;
}


// W_StandardRadioButton_C W_StandardRadioButton.Default__W_StandardRadioButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_StandardRadioButton_C* UW_StandardRadioButton_C::GetDefaultObj()
{
	static class UW_StandardRadioButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_StandardRadioButton_C*>(UW_StandardRadioButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_StandardRadioButton.W_StandardRadioButton_C.Equals
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IIRadioWidget_C>Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_StandardRadioButton_C*    K2Node_DynamicCast_AsW_Standard_Radio_Button                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardRadioButton_C::Equals(TScriptInterface<class IIRadioWidget_C> Other, bool* Result, class UW_StandardRadioButton_C* K2Node_DynamicCast_AsW_Standard_Radio_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardRadioButton_C", "Equals");

	Params::UW_StandardRadioButton_C_Equals_Params Parms{};

	Parms.Other = Other;
	Parms.K2Node_DynamicCast_AsW_Standard_Radio_Button = K2Node_DynamicCast_AsW_Standard_Radio_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function W_StandardRadioButton.W_StandardRadioButton_C.GetTabControlIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UW_StandardRadioButton_C::GetTabControlIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardRadioButton_C", "GetTabControlIndex");

	Params::UW_StandardRadioButton_C_GetTabControlIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_StandardRadioButton.W_StandardRadioButton_C.GetParentContainerSlow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UW_RadioContainer_C*         RadioContainer                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CurrentWidget                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_RadioContainer_C*         K2Node_DynamicCast_AsW_Radio_Container                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardRadioButton_C::GetParentContainerSlow(class UW_RadioContainer_C** RadioContainer, class UWidget* CurrentWidget, class UPanelWidget* CallFunc_GetParent_ReturnValue, class UW_RadioContainer_C* K2Node_DynamicCast_AsW_Radio_Container, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardRadioButton_C", "GetParentContainerSlow");

	Params::UW_StandardRadioButton_C_GetParentContainerSlow_Params Parms{};

	Parms.CurrentWidget = CurrentWidget;
	Parms.CallFunc_GetParent_ReturnValue = CallFunc_GetParent_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Radio_Container = K2Node_DynamicCast_AsW_Radio_Container;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RadioContainer != nullptr)
		*RadioContainer = Parms.RadioContainer;

}


// Function W_StandardRadioButton.W_StandardRadioButton_C.OnClicked_Derived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardRadioButton_C::OnClicked_Derived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardRadioButton_C", "OnClicked_Derived");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardRadioButton.W_StandardRadioButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_StandardRadioButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardRadioButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardRadioButton.W_StandardRadioButton_C.OnRadioSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardRadioButton_C::OnRadioSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardRadioButton_C", "OnRadioSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardRadioButton.W_StandardRadioButton_C.OnRadioDeselected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardRadioButton_C::OnRadioDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardRadioButton_C", "OnRadioDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardRadioButton.W_StandardRadioButton_C.EventReconstruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_StandardRadioButton_C::EventReconstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardRadioButton_C", "EventReconstruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardRadioButton.W_StandardRadioButton_C.ExecuteUbergraph_W_StandardRadioButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIRadioWidget_C>K2Node_DynamicCast_AsIRadio_Widget                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_RadioContainer_C*         CallFunc_GetParentContainerSlow_RadioContainer                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIRadioWidget_C>K2Node_DynamicCast_AsIRadio_Widget_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardRadioButton_C::ExecuteUbergraph_W_StandardRadioButton(int32 EntryPoint, TScriptInterface<class IIRadioWidget_C> K2Node_DynamicCast_AsIRadio_Widget, bool K2Node_DynamicCast_bSuccess, class UW_RadioContainer_C* CallFunc_GetParentContainerSlow_RadioContainer, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IIRadioWidget_C> K2Node_DynamicCast_AsIRadio_Widget_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardRadioButton_C", "ExecuteUbergraph_W_StandardRadioButton");

	Params::UW_StandardRadioButton_C_ExecuteUbergraph_W_StandardRadioButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsIRadio_Widget = K2Node_DynamicCast_AsIRadio_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetParentContainerSlow_RadioContainer = CallFunc_GetParentContainerSlow_RadioContainer;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsIRadio_Widget_1 = K2Node_DynamicCast_AsIRadio_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


