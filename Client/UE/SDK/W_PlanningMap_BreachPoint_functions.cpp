#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C
// (None)

class UClass* UW_PlanningMap_BreachPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PlanningMap_BreachPoint_C");

	return Clss;
}


// W_PlanningMap_BreachPoint_C W_PlanningMap_BreachPoint.Default__W_PlanningMap_BreachPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PlanningMap_BreachPoint_C* UW_PlanningMap_BreachPoint_C::GetDefaultObj()
{
	static class UW_PlanningMap_BreachPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PlanningMap_BreachPoint_C*>(UW_PlanningMap_BreachPoint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PlanningMap_BreachPoint_C::SetSelected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_C", "SetSelected");

	Params::UW_PlanningMap_BreachPoint_C_SetSelected_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PlanningMap_BreachPoint_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.FadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PlanningMap_BreachPoint_C::FadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_C", "FadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.FadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PlanningMap_BreachPoint_C::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_C", "FadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_BreachPoint_C::BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_C", "BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_PlanningMap_BreachPoint_C_BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_BreachPoint_C::BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_C", "BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature");

	Params::UW_PlanningMap_BreachPoint_C_BndEvt__btn_BreachPoint_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.ExecuteUbergraph_W_PlanningMap_BreachPoint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_BreachPoint_C::ExecuteUbergraph_W_PlanningMap_BreachPoint(int32 EntryPoint, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsAnimationPlayingForward_ReturnValue_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_C", "ExecuteUbergraph_W_PlanningMap_BreachPoint");

	Params::UW_PlanningMap_BreachPoint_C_ExecuteUbergraph_W_PlanningMap_BreachPoint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue_1 = CallFunc_IsAnimationPlayingForward_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.OnBreachPointClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PlanningMap_BreachPoint_C*ClickedPoint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_BreachPoint_C::OnBreachPointClicked__DelegateSignature(class UW_PlanningMap_BreachPoint_C* ClickedPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_C", "OnBreachPointClicked__DelegateSignature");

	Params::UW_PlanningMap_BreachPoint_C_OnBreachPointClicked__DelegateSignature_Params Parms{};

	Parms.ClickedPoint = ClickedPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap_BreachPoint.W_PlanningMap_BreachPoint_C.OnBreachPointHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PlanningMap_BreachPoint_C*HoveredPoint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_BreachPoint_C::OnBreachPointHovered__DelegateSignature(class UW_PlanningMap_BreachPoint_C* HoveredPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_BreachPoint_C", "OnBreachPointHovered__DelegateSignature");

	Params::UW_PlanningMap_BreachPoint_C_OnBreachPointHovered__DelegateSignature_Params Parms{};

	Parms.HoveredPoint = HoveredPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


