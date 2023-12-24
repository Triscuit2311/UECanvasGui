#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PremissionTablet_Button.W_PremissionTablet_Button_C
// (None)

class UClass* UW_PremissionTablet_Button_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PremissionTablet_Button_C");

	return Clss;
}


// W_PremissionTablet_Button_C W_PremissionTablet_Button.Default__W_PremissionTablet_Button_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PremissionTablet_Button_C* UW_PremissionTablet_Button_C::GetDefaultObj()
{
	static class UW_PremissionTablet_Button_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PremissionTablet_Button_C*>(UW_PremissionTablet_Button_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.ClickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PremissionTablet_Button_C*Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PreMission_Tablet_C*      CallFunc_WidgetGetParentOfClass_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PremissionTablet_Button_C::ClickButton(class UW_PremissionTablet_Button_C* Button, class UW_PreMission_Tablet_C* CallFunc_WidgetGetParentOfClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PremissionTablet_Button_C", "ClickButton");

	Params::UW_PremissionTablet_Button_C_ClickButton_Params Parms{};

	Parms.Button = Button;
	Parms.CallFunc_WidgetGetParentOfClass_ReturnValue = CallFunc_WidgetGetParentOfClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.GetIsActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PremissionTablet_Button_C::GetIsActive(bool* IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PremissionTablet_Button_C", "GetIsActive");

	Params::UW_PremissionTablet_Button_C_GetIsActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;

}


// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.SpawnPopOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Open                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMenuAnchor*                 K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchorData                 CallFunc_GetLayout_ReturnValue                                   (NoDestructor)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PremissionTablet_Button_C::SpawnPopOut(bool Open, bool Temp_bool_Variable, class UMenuAnchor* K2Node_Select_Default, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FAnchorData& CallFunc_GetLayout_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PremissionTablet_Button_C", "SpawnPopOut");

	Params::UW_PremissionTablet_Button_C_SpawnPopOut_Params Parms{};

	Parms.Open = Open;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetLayout_ReturnValue = CallFunc_GetLayout_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.SetHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PremissionTablet_Button_C::SetHovered(bool Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PremissionTablet_Button_C", "SetHovered");

	Params::UW_PremissionTablet_Button_C_SetHovered_Params Parms{};

	Parms.Hovered = Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMenuAnchor*                 K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMenuAnchor*                 K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PremissionTablet_Button_C::SetActive(bool Active, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_1, class UMenuAnchor* K2Node_Select_Default, class UMenuAnchor* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PremissionTablet_Button_C", "SetActive");

	Params::UW_PremissionTablet_Button_C_SetActive_Params Parms{};

	Parms.Active = Active;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PremissionTablet_Button_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PremissionTablet_Button_C", "PreConstruct");

	Params::UW_PremissionTablet_Button_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PremissionTablet_Button_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PremissionTablet_Button_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PremissionTablet_Button_C::BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PremissionTablet_Button_C", "BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_PremissionTablet_Button_C_BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.AddPopout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PremissionTablet_Button_C::AddPopout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PremissionTablet_Button_C", "AddPopout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.BndEvt__W_PremissionTablet_Button_PopoutAnchor_K2Node_ComponentBoundEvent_1_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsOpen                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PremissionTablet_Button_C::BndEvt__W_PremissionTablet_Button_PopoutAnchor_K2Node_ComponentBoundEvent_1_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PremissionTablet_Button_C", "BndEvt__W_PremissionTablet_Button_PopoutAnchor_K2Node_ComponentBoundEvent_1_OnMenuOpenChangedEvent__DelegateSignature");

	Params::UW_PremissionTablet_Button_C_BndEvt__W_PremissionTablet_Button_PopoutAnchor_K2Node_ComponentBoundEvent_1_OnMenuOpenChangedEvent__DelegateSignature_Params Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PremissionTablet_Button_C::BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PremissionTablet_Button_C", "BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature");

	Params::UW_PremissionTablet_Button_C_BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PremissionTablet_Button_C::BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PremissionTablet_Button_C", "BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.BndEvt__W_PremissionTablet_Button_PopoutAnchorLeft_K2Node_ComponentBoundEvent_4_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsOpen                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PremissionTablet_Button_C::BndEvt__W_PremissionTablet_Button_PopoutAnchorLeft_K2Node_ComponentBoundEvent_4_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PremissionTablet_Button_C", "BndEvt__W_PremissionTablet_Button_PopoutAnchorLeft_K2Node_ComponentBoundEvent_4_OnMenuOpenChangedEvent__DelegateSignature");

	Params::UW_PremissionTablet_Button_C_BndEvt__W_PremissionTablet_Button_PopoutAnchorLeft_K2Node_ComponentBoundEvent_4_OnMenuOpenChangedEvent__DelegateSignature_Params Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PremissionTablet_Button_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PremissionTablet_Button_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.ExecuteUbergraph_W_PremissionTablet_Button
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsOpen_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsOpen                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMenuAnchor*                 K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PremissionTablet_Button_C::ExecuteUbergraph_W_PremissionTablet_Button(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, bool K2Node_ComponentBoundEvent_bIsOpen_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_bIsOpen, class UMenuAnchor* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PremissionTablet_Button_C", "ExecuteUbergraph_W_PremissionTablet_Button");

	Params::UW_PremissionTablet_Button_C_ExecuteUbergraph_W_PremissionTablet_Button_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_bIsOpen_1 = K2Node_ComponentBoundEvent_bIsOpen_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_bIsOpen = K2Node_ComponentBoundEvent_bIsOpen;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PremissionTablet_Button_C::OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PremissionTablet_Button_C", "OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PremissionTablet_Button_C::OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PremissionTablet_Button_C", "OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.OnActiveStateChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PremissionTablet_Button_C::OnActiveStateChange__DelegateSignature(bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PremissionTablet_Button_C", "OnActiveStateChange__DelegateSignature");

	Params::UW_PremissionTablet_Button_C_OnActiveStateChange__DelegateSignature_Params Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PremissionTablet_Button_C*TriggeringButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PremissionTablet_Button_C::OnClicked__DelegateSignature(class UW_PremissionTablet_Button_C* TriggeringButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PremissionTablet_Button_C", "OnClicked__DelegateSignature");

	Params::UW_PremissionTablet_Button_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringButton = TriggeringButton;

	UObject::ProcessEvent(Func, &Parms);

}

}


