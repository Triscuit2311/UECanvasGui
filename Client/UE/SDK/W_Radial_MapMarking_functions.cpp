#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Radial_MapMarking.W_Radial_MapMarking_C
// (None)

class UClass* UW_Radial_MapMarking_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Radial_MapMarking_C");

	return Clss;
}


// W_Radial_MapMarking_C W_Radial_MapMarking.Default__W_Radial_MapMarking_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Radial_MapMarking_C* UW_Radial_MapMarking_C::GetDefaultObj()
{
	static class UW_Radial_MapMarking_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Radial_MapMarking_C*>(UW_Radial_MapMarking_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.InitGamepadSupport
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Radial_MapMarking_C::InitGamepadSupport(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "InitGamepadSupport");

	Params::UW_Radial_MapMarking_C_InitGamepadSupport_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.HandleGamepad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_RadialMenu_C*           UMGRadial                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAnalogStickState_StickX                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAnalogStickState_StickY                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize2D_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Radial_MapMarking_C::HandleGamepad(class UUMG_RadialMenu_C* UMGRadial, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, float CallFunc_GetInputAnalogStickState_StickX, float CallFunc_GetInputAnalogStickState_StickY, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_VSize2D_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "HandleGamepad");

	Params::UW_Radial_MapMarking_C_HandleGamepad_Params Parms{};

	Parms.UMGRadial = UMGRadial;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetInputAnalogStickState_StickX = CallFunc_GetInputAnalogStickState_StickX;
	Parms.CallFunc_GetInputAnalogStickState_StickY = CallFunc_GetInputAnalogStickState_StickY;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_VSize2D_ReturnValue = CallFunc_VSize2D_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.SetGamepadInputDirection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_RadialMenu_C*           UMGRadial                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAnalogStickState_StickX                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAnalogStickState_StickY                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize2D_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Radial_MapMarking_C::SetGamepadInputDirection(class UUMG_RadialMenu_C* UMGRadial, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, float CallFunc_GetInputAnalogStickState_StickX, float CallFunc_GetInputAnalogStickState_StickY, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_VSize2D_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "SetGamepadInputDirection");

	Params::UW_Radial_MapMarking_C_SetGamepadInputDirection_Params Parms{};

	Parms.UMGRadial = UMGRadial;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetInputAnalogStickState_StickX = CallFunc_GetInputAnalogStickState_StickX;
	Parms.CallFunc_GetInputAnalogStickState_StickY = CallFunc_GetInputAnalogStickState_StickY;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_VSize2D_ReturnValue = CallFunc_VSize2D_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.Update Position
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Coordinates                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   RawCoordinates                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Radial_MapMarking_C::Update_Position(const struct FVector2D& Coordinates, const struct FVector2D& RawCoordinates, const struct FAnchors& K2Node_MakeStruct_Anchors, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "Update Position");

	Params::UW_Radial_MapMarking_C_Update_Position_Params Parms{};

	Parms.Coordinates = Coordinates;
	Parms.RawCoordinates = RawCoordinates;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)

struct FEventReply UW_Radial_MapMarking_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "OnMouseButtonUp");

	Params::UW_Radial_MapMarking_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_Radial_MapMarking_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "OnKeyDown");

	Params::UW_Radial_MapMarking_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UW_Radial_MapMarking_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "OnMouseButtonDown");

	Params::UW_Radial_MapMarking_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue = CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue;
	Parms.CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1 = CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.Finished_344D667B4B5F9FD05121C694FD14ED92
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Radial_MapMarking_C::Finished_344D667B4B5F9FD05121C694FD14ED92()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "Finished_344D667B4B5F9FD05121C694FD14ED92");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Radial_MapMarking_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "Tick");

	Params::UW_Radial_MapMarking_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Radial_MapMarking_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "PreConstruct");

	Params::UW_Radial_MapMarking_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.PopulateSubmenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Radial_MapMarking_C::PopulateSubmenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "PopulateSubmenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.AddCategory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        DisplayName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  IconImage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasSubCommands                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Radial_MapMarking_C::AddCategory(const class FString& ID, class FText DisplayName, class UTexture2D* IconImage, bool HasSubCommands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "AddCategory");

	Params::UW_Radial_MapMarking_C_AddCategory_Params Parms{};

	Parms.ID = ID;
	Parms.DisplayName = DisplayName;
	Parms.IconImage = IconImage;
	Parms.HasSubCommands = HasSubCommands;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.Populate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Radial_MapMarking_C::Populate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "Populate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Radial_MapMarking_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.GoBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Radial_MapMarking_C::GoBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "GoBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.SelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Radial_MapMarking_C::SelectionMade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "SelectionMade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.Submit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Radial_MapMarking_C::Submit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "Submit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.CollapseRadial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Radial_MapMarking_C::CollapseRadial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "CollapseRadial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.CollapseSubMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Radial_MapMarking_C::CollapseSubMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "CollapseSubMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnPageViewUpdate_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Radial_MapMarking_C::OnPageViewUpdate_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "OnPageViewUpdate_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.OpenSubmenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Radial_MapMarking_C::OpenSubmenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "OpenSubmenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewSelection                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OldSelection                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Radial_MapMarking_C::BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature(int32 NewSelection, int32 OldSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature");

	Params::UW_Radial_MapMarking_C_BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature_Params Parms{};

	Parms.NewSelection = NewSelection;
	Parms.OldSelection = OldSelection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_3_SelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewSelection                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OldSelection                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Radial_MapMarking_C::BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_3_SelectionChanged__DelegateSignature(int32 NewSelection, int32 OldSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_3_SelectionChanged__DelegateSignature");

	Params::UW_Radial_MapMarking_C_BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_3_SelectionChanged__DelegateSignature_Params Parms{};

	Parms.NewSelection = NewSelection;
	Parms.OldSelection = OldSelection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_1_EnteredDeadzone__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Radial_MapMarking_C::BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_1_EnteredDeadzone__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_1_EnteredDeadzone__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_2_ExitedDeadzone__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Radial_MapMarking_C::BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_2_ExitedDeadzone__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_2_ExitedDeadzone__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_5_EnteredDeadzone__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Radial_MapMarking_C::BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_5_EnteredDeadzone__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_5_EnteredDeadzone__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_Radial_MapMarking_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "OnFocusLost");

	Params::UW_Radial_MapMarking_C_OnFocusLost_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.InputChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Radial_MapMarking_C::InputChange(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "InputChange");

	Params::UW_Radial_MapMarking_C_InputChange_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.ExecuteUbergraph_W_Radial_MapMarking
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_RadialIcon_MapMarking_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_RadialIcon_MapMarking_C*  CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_PreMissionMarker_CategoriesCallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ID                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_DisplayName                                   (None)
// class UTexture2D*                  K2Node_CustomEvent_IconImage                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_HasSubCommands                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddChildToRadialMenu_Success                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_PreMissionMarker_CategoriesCallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddChildToRadialMenu_Success_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_PreMissionMarkers       CallFunc_GetDataTableRowFromName_OutRow_2                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetChild_Output                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetChild_Success                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_RadialIcon_MapMarking_C*  K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewSelection_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OldSelection_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetChild_Output_1                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetChild_Success_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_RadialIcon_MapMarking_C*  K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewSelection                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OldSelection                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetChild_Output_2                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetChild_Success_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_RadialIcon_MapMarking_C*  K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking_2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Radial_MapMarking_C::ExecuteUbergraph_W_Radial_MapMarking(int32 EntryPoint, class UW_RadialIcon_MapMarking_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Array_Index_Variable, class UW_RadialIcon_MapMarking_C* CallFunc_Create_ReturnValue_1, class FName CallFunc_Array_Get_Item, const struct FSt_PreMissionMarker_Categories& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& K2Node_CustomEvent_ID, class FText K2Node_CustomEvent_DisplayName, class UTexture2D* K2Node_CustomEvent_IconImage, bool K2Node_CustomEvent_HasSubCommands, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_AddChildToRadialMenu_Success, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FSt_PreMissionMarker_Categories& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class FName CallFunc_Array_Get_Item_1, bool CallFunc_AddChildToRadialMenu_Success_1, const struct FSt_PreMissionMarkers& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUserWidget* CallFunc_GetChild_Output, bool CallFunc_GetChild_Success, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UW_RadialIcon_MapMarking_C* K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32 K2Node_ComponentBoundEvent_NewSelection_1, int32 K2Node_ComponentBoundEvent_OldSelection_1, class UUserWidget* CallFunc_GetChild_Output_1, bool CallFunc_GetChild_Success_1, bool CallFunc_NotEqual_IntInt_ReturnValue, class UW_RadialIcon_MapMarking_C* K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking_1, bool K2Node_DynamicCast_bSuccess_1, int32 K2Node_ComponentBoundEvent_NewSelection, int32 K2Node_ComponentBoundEvent_OldSelection, class UUserWidget* CallFunc_GetChild_Output_2, bool CallFunc_GetChild_Success_2, class UW_RadialIcon_MapMarking_C* K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_NotEqual_IntInt_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "ExecuteUbergraph_W_Radial_MapMarking");

	Params::UW_Radial_MapMarking_C_ExecuteUbergraph_W_Radial_MapMarking_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.K2Node_CustomEvent_ID = K2Node_CustomEvent_ID;
	Parms.K2Node_CustomEvent_DisplayName = K2Node_CustomEvent_DisplayName;
	Parms.K2Node_CustomEvent_IconImage = K2Node_CustomEvent_IconImage;
	Parms.K2Node_CustomEvent_HasSubCommands = K2Node_CustomEvent_HasSubCommands;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToRadialMenu_Success = CallFunc_AddChildToRadialMenu_Success;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_AddChildToRadialMenu_Success_1 = CallFunc_AddChildToRadialMenu_Success_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_GetChild_Output = CallFunc_GetChild_Output;
	Parms.CallFunc_GetChild_Success = CallFunc_GetChild_Success;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking = K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewSelection_1 = K2Node_ComponentBoundEvent_NewSelection_1;
	Parms.K2Node_ComponentBoundEvent_OldSelection_1 = K2Node_ComponentBoundEvent_OldSelection_1;
	Parms.CallFunc_GetChild_Output_1 = CallFunc_GetChild_Output_1;
	Parms.CallFunc_GetChild_Success_1 = CallFunc_GetChild_Success_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking_1 = K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_ComponentBoundEvent_NewSelection = K2Node_ComponentBoundEvent_NewSelection;
	Parms.K2Node_ComponentBoundEvent_OldSelection = K2Node_ComponentBoundEvent_OldSelection;
	Parms.CallFunc_GetChild_Output_2 = CallFunc_GetChild_Output_2;
	Parms.CallFunc_GetChild_Success_2 = CallFunc_GetChild_Success_2;
	Parms.K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking_2 = K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnSubmenuCollapse__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Radial_MapMarking_C::OnSubmenuCollapse__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "OnSubmenuCollapse__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnCollapsed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Radial_MapMarking_C::OnCollapsed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "OnCollapsed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.Cancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Radial_MapMarking_C::Cancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "Cancel__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Radial_MapMarking.W_Radial_MapMarking_C.SubmenuCommit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MarkerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Radial_MapMarking_C::SubmenuCommit__DelegateSignature(class FName Category, class FName MarkerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Radial_MapMarking_C", "SubmenuCommit__DelegateSignature");

	Params::UW_Radial_MapMarking_C_SubmenuCommit__DelegateSignature_Params Parms{};

	Parms.Category = Category;
	Parms.MarkerName = MarkerName;

	UObject::ProcessEvent(Func, &Parms);

}

}


