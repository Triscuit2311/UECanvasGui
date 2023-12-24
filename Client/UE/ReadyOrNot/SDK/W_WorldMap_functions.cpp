#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_WorldMap.W_WorldMap_C
// (None)

class UClass* UW_WorldMap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_WorldMap_C");

	return Clss;
}


// W_WorldMap_C W_WorldMap.Default__W_WorldMap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_WorldMap_C* UW_WorldMap_C::GetDefaultObj()
{
	static class UW_WorldMap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_WorldMap_C*>(UW_WorldMap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_WorldMap.W_WorldMap_C.GoBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WorldMap_C::GoBack(class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_C", "GoBack");

	Params::UW_WorldMap_C_GoBack_Params Parms{};

	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMap.W_WorldMap_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

struct FEventReply UW_WorldMap_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_C", "OnKeyDown");

	Params::UW_WorldMap_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_WorldMap.W_WorldMap_C.SetSelectedMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SelectedMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_WorldMapPin_C*>    CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UW_WorldMapPin_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_WorldMapPin_C*>    CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// class UW_WorldMapPin_C*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WorldMap_C::SetSelectedMode(class FName SelectedMode, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UW_WorldMapPin_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_WorldMapPin_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UW_WorldMapPin_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UW_WorldMapPin_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_C", "SetSelectedMode");

	Params::UW_WorldMap_C_SetSelectedMode_Params Parms{};

	Parms.SelectedMode = SelectedMode;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMap.W_WorldMap_C.On_MapBlurClickable_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UW_WorldMap_C::On_MapBlurClickable_MouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_C", "On_MapBlurClickable_MouseButtonDown_0");

	Params::UW_WorldMap_C_On_MapBlurClickable_MouseButtonDown_0_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_WorldMap.W_WorldMap_C.ShowToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLevelDataLookupTable       MissionDetails                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  CallFunc_GetLazyLoadedImage_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WorldMap_C::ShowToolTip(const struct FLevelDataLookupTable& MissionDetails, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_C", "ShowToolTip");

	Params::UW_WorldMap_C_ShowToolTip_Params Parms{};

	Parms.MissionDetails = MissionDetails;
	Parms.CallFunc_GetLazyLoadedImage_ReturnValue = CallFunc_GetLazyLoadedImage_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMap.W_WorldMap_C.SetSelectedMission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SelectedMission                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FLevelDataLookupTable       CallFunc_GetMapDetailsFromName_ReturnValue                       (None)
// class UTexture2D*                  CallFunc_GetLazyLoadedImage_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_WorldMapPin_C*>    CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UW_WorldMapPin_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_WorldMapPin_C*>    CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// class UW_WorldMapPin_C*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WorldMap_C::SetSelectedMission(class FName SelectedMission, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FLevelDataLookupTable& CallFunc_GetMapDetailsFromName_ReturnValue, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UW_WorldMapPin_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_WorldMapPin_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UW_WorldMapPin_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UW_WorldMapPin_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_C", "SetSelectedMission");

	Params::UW_WorldMap_C_SetSelectedMission_Params Parms{};

	Parms.SelectedMission = SelectedMission;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetMapDetailsFromName_ReturnValue = CallFunc_GetMapDetailsFromName_ReturnValue;
	Parms.CallFunc_GetLazyLoadedImage_ReturnValue = CallFunc_GetLazyLoadedImage_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMap.W_WorldMap_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*          Operation                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMap_C::OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_C", "OnDragDetected");

	Params::UW_WorldMap_C_OnDragDetected_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;

}


// Function W_WorldMap.W_WorldMap_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FVector2D                   CallFunc_PointerEvent_GetCursorDelta_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_Vector2DVector2D_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_WorldMap_C::OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetCursorDelta_ReturnValue, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_C", "OnMouseMove");

	Params::UW_WorldMap_C_OnMouseMove_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_PointerEvent_GetCursorDelta_ReturnValue = CallFunc_PointerEvent_GetCursorDelta_ReturnValue;
	Parms.CallFunc_EqualEqual_Vector2DVector2D_ReturnValue = CallFunc_EqualEqual_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_WorldMap.W_WorldMap_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMap_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_C", "Tick");

	Params::UW_WorldMap_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMap.W_WorldMap_C.BndEvt__W_WorldMap_btn_Close_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMap_C::BndEvt__W_WorldMap_btn_Close_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_C", "BndEvt__W_WorldMap_btn_Close_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UW_WorldMap_C_BndEvt__W_WorldMap_btn_Close_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMap.W_WorldMap_C.BndEvt__W_WorldMap_btn_AcceptMission_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMap_C::BndEvt__W_WorldMap_btn_AcceptMission_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_C", "BndEvt__W_WorldMap_btn_AcceptMission_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_WorldMap_C_BndEvt__W_WorldMap_btn_AcceptMission_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMap.W_WorldMap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_WorldMap_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WorldMap.W_WorldMap_C.OnSetMissionButtonClicked_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_WorldMap_MissionSelect_C* BtnClicked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMap_C::OnSetMissionButtonClicked_Event_0(class UW_WorldMap_MissionSelect_C* BtnClicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_C", "OnSetMissionButtonClicked_Event_0");

	Params::UW_WorldMap_C_OnSetMissionButtonClicked_Event_0_Params Parms{};

	Parms.BtnClicked = BtnClicked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMap.W_WorldMap_C.PinClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MissionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMap_C::PinClicked(class FName MissionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_C", "PinClicked");

	Params::UW_WorldMap_C_PinClicked_Params Parms{};

	Parms.MissionName = MissionName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMap.W_WorldMap_C.PinHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MissionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMap_C::PinHovered(class FName MissionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_C", "PinHovered");

	Params::UW_WorldMap_C_PinHovered_Params Parms{};

	Parms.MissionName = MissionName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMap.W_WorldMap_C.PinUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MissionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMap_C::PinUnhovered(class FName MissionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_C", "PinUnhovered");

	Params::UW_WorldMap_C_PinUnhovered_Params Parms{};

	Parms.MissionName = MissionName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMap.W_WorldMap_C.ExecuteUbergraph_W_WorldMap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_WorldMapPin_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLevelUnlocked_OutIsUnlocked                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_IsLevelUnlocked_OutScoreRequired                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_IsLevelUnlocked_OutLockedUrl                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLevelUnlocked_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLevelDataLookupTable       CallFunc_GetMapDetailsFromName_ReturnValue                       (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class UW_WorldMap_MissionSelect_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UW_WorldMap_MissionSelect_C* K2Node_CustomEvent_BtnClicked                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_WorldMap_MissionSelect_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetBuiltModdedMapList_ReturnValue                       (ReferenceParm)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSelectedMode_OutMode                                 (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelectedMode_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_WorldMap_MissionSelect_C* K2Node_DynamicCast_AsW_World_Map_Mission_Select                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameModeSelectable_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AMissionPortal*>      CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class AMissionPortal*              CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_MissionName_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_WorldMapPin_C*>    CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)
// class UW_WorldMapPin_C*            CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_MissionName_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_MissionName                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// struct FLevelDataLookupTable       CallFunc_GetMapDetailsFromName_ReturnValue_1                     (None)

void UW_WorldMap_C::ExecuteUbergraph_W_WorldMap(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, class UW_WorldMapPin_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_IsLevelUnlocked_OutIsUnlocked, float CallFunc_IsLevelUnlocked_OutScoreRequired, const class FString& CallFunc_IsLevelUnlocked_OutLockedUrl, bool CallFunc_IsLevelUnlocked_ReturnValue, const struct FLevelDataLookupTable& CallFunc_GetMapDetailsFromName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UW_WorldMap_MissionSelect_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_WorldMap_MissionSelect_C* K2Node_CustomEvent_BtnClicked, class UW_WorldMap_MissionSelect_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, TArray<class FString>& CallFunc_GetBuiltModdedMapList_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& CallFunc_GetSelectedMode_OutMode, bool CallFunc_GetSelectedMode_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class UWidget* CallFunc_Array_Get_Item_2, class UW_WorldMap_MissionSelect_C* K2Node_DynamicCast_AsW_World_Map_Mission_Select, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsGameModeSelectable_ReturnValue, TArray<class AMissionPortal*>& CallFunc_GetAllActorsOfClass_OutActors, class AMissionPortal* CallFunc_Array_Get_Item_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_MissionName_2, TArray<class UW_WorldMapPin_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, class UW_WorldMapPin_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, class FName K2Node_CustomEvent_MissionName_1, class FName K2Node_CustomEvent_MissionName, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const struct FLevelDataLookupTable& CallFunc_GetMapDetailsFromName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_C", "ExecuteUbergraph_W_WorldMap");

	Params::UW_WorldMap_C_ExecuteUbergraph_W_WorldMap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_IsLevelUnlocked_OutIsUnlocked = CallFunc_IsLevelUnlocked_OutIsUnlocked;
	Parms.CallFunc_IsLevelUnlocked_OutScoreRequired = CallFunc_IsLevelUnlocked_OutScoreRequired;
	Parms.CallFunc_IsLevelUnlocked_OutLockedUrl = CallFunc_IsLevelUnlocked_OutLockedUrl;
	Parms.CallFunc_IsLevelUnlocked_ReturnValue = CallFunc_IsLevelUnlocked_ReturnValue;
	Parms.CallFunc_GetMapDetailsFromName_ReturnValue = CallFunc_GetMapDetailsFromName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.K2Node_CustomEvent_BtnClicked = K2Node_CustomEvent_BtnClicked;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue_1 = CallFunc_GetReadyOrNotPlayerController_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue = CallFunc_GetReadyOrNotGameInstance_ReturnValue;
	Parms.CallFunc_GetBuiltModdedMapList_ReturnValue = CallFunc_GetBuiltModdedMapList_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetSelectedMode_OutMode = CallFunc_GetSelectedMode_OutMode;
	Parms.CallFunc_GetSelectedMode_ReturnValue = CallFunc_GetSelectedMode_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_DynamicCast_AsW_World_Map_Mission_Select = K2Node_DynamicCast_AsW_World_Map_Mission_Select;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsGameModeSelectable_ReturnValue = CallFunc_IsGameModeSelectable_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_MissionName_2 = K2Node_CustomEvent_MissionName_2;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.K2Node_CustomEvent_MissionName_1 = K2Node_CustomEvent_MissionName_1;
	Parms.K2Node_CustomEvent_MissionName = K2Node_CustomEvent_MissionName;
	Parms.CallFunc_Conv_NameToString_ReturnValue_2 = CallFunc_Conv_NameToString_ReturnValue_2;
	Parms.CallFunc_GetMapDetailsFromName_ReturnValue_1 = CallFunc_GetMapDetailsFromName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMap.W_WorldMap_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_WorldMap_C::NewEventDispatcher_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_C", "NewEventDispatcher_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WorldMap.W_WorldMap_C.UpdateMapMaterial__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  LayoutTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMap_C::UpdateMapMaterial__DelegateSignature(class UTexture2D* LayoutTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_C", "UpdateMapMaterial__DelegateSignature");

	Params::UW_WorldMap_C_UpdateMapMaterial__DelegateSignature_Params Parms{};

	Parms.LayoutTexture = LayoutTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMap.W_WorldMap_C.PanMap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CursorPos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMap_C::PanMap__DelegateSignature(bool Pressed, const struct FVector2D& CursorPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMap_C", "PanMap__DelegateSignature");

	Params::UW_WorldMap_C_PanMap__DelegateSignature_Params Parms{};

	Parms.Pressed = Pressed;
	Parms.CursorPos = CursorPos;

	UObject::ProcessEvent(Func, &Parms);

}

}


