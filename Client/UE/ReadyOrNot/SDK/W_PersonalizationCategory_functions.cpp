#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PersonalizationCategory.W_PersonalizationCategory_C
// (None)

class UClass* UW_PersonalizationCategory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PersonalizationCategory_C");

	return Clss;
}


// W_PersonalizationCategory_C W_PersonalizationCategory.Default__W_PersonalizationCategory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PersonalizationCategory_C* UW_PersonalizationCategory_C::GetDefaultObj()
{
	static class UW_PersonalizationCategory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PersonalizationCategory_C*>(UW_PersonalizationCategory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PersonalizationCategory.W_PersonalizationCategory_C.Transform Into Custom Button
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PersonalizationCategory_C::Transform_Into_Custom_Button()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationCategory_C", "Transform Into Custom Button");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PersonalizationCategory.W_PersonalizationCategory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PersonalizationCategory_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationCategory_C", "PreConstruct");

	Params::UW_PersonalizationCategory_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PersonalizationCategory.W_PersonalizationCategory_C.BndEvt__W_PersonalizationCategory_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_StandardButton_C*         CallingButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PersonalizationCategory_C::BndEvt__W_PersonalizationCategory_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationCategory_C", "BndEvt__W_PersonalizationCategory_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::UW_PersonalizationCategory_C_BndEvt__W_PersonalizationCategory_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params Parms{};

	Parms.CallingButton = CallingButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PersonalizationCategory.W_PersonalizationCategory_C.ExecuteUbergraph_W_PersonalizationCategory
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_StandardButton_C*         K2Node_ComponentBoundEvent_CallingButton                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PersonalizationCategory_C::ExecuteUbergraph_W_PersonalizationCategory(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UW_StandardButton_C* K2Node_ComponentBoundEvent_CallingButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationCategory_C", "ExecuteUbergraph_W_PersonalizationCategory");

	Params::UW_PersonalizationCategory_C_ExecuteUbergraph_W_PersonalizationCategory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_CallingButton = K2Node_ComponentBoundEvent_CallingButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PersonalizationCategory.W_PersonalizationCategory_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PersonalizationCategory_C*PersonalizationCategory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PersonalizationCategory_C::OnClicked__DelegateSignature(class UW_PersonalizationCategory_C* PersonalizationCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PersonalizationCategory_C", "OnClicked__DelegateSignature");

	Params::UW_PersonalizationCategory_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.PersonalizationCategory = PersonalizationCategory;

	UObject::ProcessEvent(Func, &Parms);

}

}


