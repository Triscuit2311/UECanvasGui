#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_OfficerMarker.W_OfficerMarker_C
// (None)

class UClass* UW_OfficerMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_OfficerMarker_C");

	return Clss;
}


// W_OfficerMarker_C W_OfficerMarker.Default__W_OfficerMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_OfficerMarker_C* UW_OfficerMarker_C::GetDefaultObj()
{
	static class UW_OfficerMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_OfficerMarker_C*>(UW_OfficerMarker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_OfficerMarker.W_OfficerMarker_C.UpdateData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetPlayerTeamColor_LinearColor                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetPlayerTeamColor_SlateColor                           (None)
// int32                              CallFunc_GetPlanningPlayerNumber_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_OfficerMarker_C::UpdateData(bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_GetPlayerTeamColor_LinearColor, const struct FSlateColor& CallFunc_GetPlayerTeamColor_SlateColor, int32 CallFunc_GetPlanningPlayerNumber_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OfficerMarker_C", "UpdateData");

	Params::UW_OfficerMarker_C_UpdateData_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerTeamColor_LinearColor = CallFunc_GetPlayerTeamColor_LinearColor;
	Parms.CallFunc_GetPlayerTeamColor_SlateColor = CallFunc_GetPlayerTeamColor_SlateColor;
	Parms.CallFunc_GetPlanningPlayerNumber_ReturnValue = CallFunc_GetPlanningPlayerNumber_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OfficerMarker.W_OfficerMarker_C.SetPlayerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotPlayerState*      PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_OfficerMarker_C::SetPlayerState(class AReadyOrNotPlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OfficerMarker_C", "SetPlayerState");

	Params::UW_OfficerMarker_C_SetPlayerState_Params Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OfficerMarker.W_OfficerMarker_C.UpdateStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        K2Node_Select_Default                                            (None)

void UW_OfficerMarker_C::UpdateStyle(class FText Temp_text_Variable, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OfficerMarker_C", "UpdateStyle");

	Params::UW_OfficerMarker_C_UpdateStyle_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OfficerMarker.W_OfficerMarker_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

struct FEventReply UW_OfficerMarker_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OfficerMarker_C", "OnMouseButtonUp");

	Params::UW_OfficerMarker_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_OfficerMarker.W_OfficerMarker_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_OfficerMarker_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OfficerMarker_C", "PreConstruct");

	Params::UW_OfficerMarker_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OfficerMarker.W_OfficerMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_OfficerMarker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OfficerMarker_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_OfficerMarker.W_OfficerMarker_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_OfficerMarker_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OfficerMarker_C", "OnMouseEnter");

	Params::UW_OfficerMarker_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OfficerMarker.W_OfficerMarker_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_OfficerMarker_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OfficerMarker_C", "OnMouseLeave");

	Params::UW_OfficerMarker_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OfficerMarker.W_OfficerMarker_C.ExecuteUbergraph_W_OfficerMarker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)

void UW_OfficerMarker_C::ExecuteUbergraph_W_OfficerMarker(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OfficerMarker_C", "ExecuteUbergraph_W_OfficerMarker");

	Params::UW_OfficerMarker_C_ExecuteUbergraph_W_OfficerMarker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OfficerMarker.W_OfficerMarker_C.OnRightClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_OfficerMarker_C*          TriggeringMarker                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_OfficerMarker_C::OnRightClicked__DelegateSignature(class UW_OfficerMarker_C* TriggeringMarker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OfficerMarker_C", "OnRightClicked__DelegateSignature");

	Params::UW_OfficerMarker_C_OnRightClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringMarker = TriggeringMarker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OfficerMarker.W_OfficerMarker_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_OfficerMarker_C*          TriggeringMarker                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_OfficerMarker_C::OnUnhovered__DelegateSignature(class UW_OfficerMarker_C* TriggeringMarker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OfficerMarker_C", "OnUnhovered__DelegateSignature");

	Params::UW_OfficerMarker_C_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.TriggeringMarker = TriggeringMarker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OfficerMarker.W_OfficerMarker_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_OfficerMarker_C*          TriggeringMarker                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_OfficerMarker_C::OnHovered__DelegateSignature(class UW_OfficerMarker_C* TriggeringMarker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OfficerMarker_C", "OnHovered__DelegateSignature");

	Params::UW_OfficerMarker_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.TriggeringMarker = TriggeringMarker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OfficerMarker.W_OfficerMarker_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_OfficerMarker_C*          TriggeringMarker                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_OfficerMarker_C::OnClicked__DelegateSignature(class UW_OfficerMarker_C* TriggeringMarker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OfficerMarker_C", "OnClicked__DelegateSignature");

	Params::UW_OfficerMarker_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.TriggeringMarker = TriggeringMarker;

	UObject::ProcessEvent(Func, &Parms);

}

}


