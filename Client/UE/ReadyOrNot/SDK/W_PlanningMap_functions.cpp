#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PlanningMap.W_PlanningMap_C
// (None)

class UClass* UW_PlanningMap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PlanningMap_C");

	return Clss;
}


// W_PlanningMap_C W_PlanningMap.Default__W_PlanningMap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PlanningMap_C* UW_PlanningMap_C::GetDefaultObj()
{
	static class UW_PlanningMap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PlanningMap_C*>(UW_PlanningMap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PlanningMap.W_PlanningMap_C.GetDetailPanePosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   PointScreenPosition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UW_PlanningMap_C::GetDetailPanePosition(const struct FVector2D& PointScreenPosition, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "GetDetailPanePosition");

	Params::UW_PlanningMap_C_GetDetailPanePosition_Params Parms{};

	Parms.PointScreenPosition = PointScreenPosition;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PlanningMap.W_PlanningMap_C.GetSpawnPointInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UW_PlanningMap_BreachPoint_C*BreachPointButton                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnPoints                SpawnPointInfo                                                   (Parm, OutParm)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_PlanningMap_BreachPoint_C*>CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// TArray<class UBP_UI_PlanningMap_SpawnPoint_C*>CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UI_PlanningMap_SpawnPoint_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::GetSpawnPointInfo(class UW_PlanningMap_BreachPoint_C*& BreachPointButton, struct FSpawnPoints* SpawnPointInfo, int32* Index, TArray<class UW_PlanningMap_BreachPoint_C*>& CallFunc_Map_Values_Values, TArray<class UBP_UI_PlanningMap_SpawnPoint_C*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Find_ReturnValue, class UBP_UI_PlanningMap_SpawnPoint_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "GetSpawnPointInfo");

	Params::UW_PlanningMap_C_GetSpawnPointInfo_Params Parms{};

	Parms.BreachPointButton = BreachPointButton;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnPointInfo != nullptr)
		*SpawnPointInfo = std::move(Parms.SpawnPointInfo);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function W_PlanningMap.W_PlanningMap_C.RefreshSpawns
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ZoomValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ScreenPosition                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_PlanningMap_BreachPoint_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UI_PlanningMap_SpawnPoint_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PlanningMap_BreachPoint_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PlanningMap_C::RefreshSpawns(float ZoomValue, const struct FVector2D& ScreenPosition, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UW_PlanningMap_BreachPoint_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Array_Index_Variable, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class UBP_UI_PlanningMap_SpawnPoint_C* CallFunc_Array_Get_Item, class UW_PlanningMap_BreachPoint_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition, bool CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "RefreshSpawns");

	Params::UW_PlanningMap_C_RefreshSpawns_Params Parms{};

	Parms.ZoomValue = ZoomValue;
	Parms.ScreenPosition = ScreenPosition;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition = CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition;
	Parms.CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue = CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap.W_PlanningMap_C.OpenPlanningMarker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FVector2D                   CallFunc_GetMousePositionOnViewport_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_DeprojectScreenToWorld_WorldPosition                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_DeprojectScreenToWorld_WorldDirection                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DeprojectScreenToWorld_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PlanningMap_C::OpenPlanningMarker(TArray<class AActor*>& Temp_object_Variable, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector& CallFunc_DeprojectScreenToWorld_WorldPosition, const struct FVector& CallFunc_DeprojectScreenToWorld_WorldDirection, bool CallFunc_DeprojectScreenToWorld_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "OpenPlanningMarker");

	Params::UW_PlanningMap_C_OpenPlanningMarker_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetMousePositionOnViewport_ReturnValue = CallFunc_GetMousePositionOnViewport_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_DeprojectScreenToWorld_WorldPosition = CallFunc_DeprojectScreenToWorld_WorldPosition;
	Parms.CallFunc_DeprojectScreenToWorld_WorldDirection = CallFunc_DeprojectScreenToWorld_WorldDirection;
	Parms.CallFunc_DeprojectScreenToWorld_ReturnValue = CallFunc_DeprojectScreenToWorld_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap.W_PlanningMap_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)

struct FEventReply UW_PlanningMap_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "OnMouseButtonUp");

	Params::UW_PlanningMap_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PlanningMap.W_PlanningMap_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*          Operation                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "OnDragDetected");

	Params::UW_PlanningMap_C_OnDragDetected_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;

}


// Function W_PlanningMap.W_PlanningMap_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_PlanningMap_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "OnMouseButtonDown");

	Params::UW_PlanningMap_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PlanningMap.W_PlanningMap_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FVector2D                   CallFunc_PointerEvent_GetCursorDelta_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_Vector2DVector2D_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)
// bool                               CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue_2                                   (None)

struct FEventReply UW_PlanningMap_C::OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FVector2D& CallFunc_PointerEvent_GetCursorDelta_ReturnValue, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "OnMouseMove");

	Params::UW_PlanningMap_C_OnMouseMove_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetCursorDelta_ReturnValue = CallFunc_PointerEvent_GetCursorDelta_ReturnValue;
	Parms.CallFunc_EqualEqual_Vector2DVector2D_ReturnValue = CallFunc_EqualEqual_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;
	Parms.CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_1 = CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue_2 = CallFunc_Handled_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PlanningMap.W_PlanningMap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PlanningMap_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlanningMap.W_PlanningMap_C.UpdateMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FloorIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::UpdateMap(int32 FloorIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "UpdateMap");

	Params::UW_PlanningMap_C_UpdateMap_Params Parms{};

	Parms.FloorIndex = FloorIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap.W_PlanningMap_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PlanningMap_C::BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlanningMap.W_PlanningMap_C.BndEvt__MapInteraction_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PlanningMap_C::BndEvt__MapInteraction_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "BndEvt__MapInteraction_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlanningMap.W_PlanningMap_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::OnDragCancelled(struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "OnDragCancelled");

	Params::UW_PlanningMap_C_OnDragCancelled_Params Parms{};

	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap.W_PlanningMap_C.UpdateSpawns
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBP_UI_PlanningMap_SpawnPoint_C*>SpawnPointComponents                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UW_PlanningMap_C::UpdateSpawns(TArray<class UBP_UI_PlanningMap_SpawnPoint_C*>& SpawnPointComponents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "UpdateSpawns");

	Params::UW_PlanningMap_C_UpdateSpawns_Params Parms{};

	Parms.SpawnPointComponents = SpawnPointComponents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap.W_PlanningMap_C.InitPlanningMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_UI_PlanningMap_C*        PlanningMapActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::InitPlanningMap(class ABP_UI_PlanningMap_C* PlanningMapActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "InitPlanningMap");

	Params::UW_PlanningMap_C_InitPlanningMap_Params Parms{};

	Parms.PlanningMapActor = PlanningMapActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap.W_PlanningMap_C.ChangeFloor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::ChangeFloor(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "ChangeFloor");

	Params::UW_PlanningMap_C_ChangeFloor_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap.W_PlanningMap_C.MapFloorUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Floor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::MapFloorUpdated(int32 Floor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "MapFloorUpdated");

	Params::UW_PlanningMap_C_MapFloorUpdated_Params Parms{};

	Parms.Floor = Floor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap.W_PlanningMap_C.PointHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PlanningMap_BreachPoint_C*HoveredPoint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::PointHovered(class UW_PlanningMap_BreachPoint_C* HoveredPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "PointHovered");

	Params::UW_PlanningMap_C_PointHovered_Params Parms{};

	Parms.HoveredPoint = HoveredPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap.W_PlanningMap_C.PointClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PlanningMap_BreachPoint_C*ClickedPoint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::PointClicked(class UW_PlanningMap_BreachPoint_C* ClickedPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "PointClicked");

	Params::UW_PlanningMap_C_PointClicked_Params Parms{};

	Parms.ClickedPoint = ClickedPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap.W_PlanningMap_C.BndEvt__SpawnDetailsPanel_K2Node_ComponentBoundEvent_3_OnSetSpawnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PlanningMap_C::BndEvt__SpawnDetailsPanel_K2Node_ComponentBoundEvent_3_OnSetSpawnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "BndEvt__SpawnDetailsPanel_K2Node_ComponentBoundEvent_3_OnSetSpawnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlanningMap.W_PlanningMap_C.BndEvt__SpawnDetailsPanel_K2Node_ComponentBoundEvent_4_OnDetailPanelHide__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_PlanningMap_C::BndEvt__SpawnDetailsPanel_K2Node_ComponentBoundEvent_4_OnDetailPanelHide__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "BndEvt__SpawnDetailsPanel_K2Node_ComponentBoundEvent_4_OnDetailPanelHide__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlanningMap.W_PlanningMap_C.ExitMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PlanningMap_C::ExitMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "ExitMap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlanningMap.W_PlanningMap_C.ExecuteUbergraph_W_PlanningMap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetLevelLookupDataTable_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLevelDataLookupTable       CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_FloorIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLevelFloorData             CallFunc_Array_Get_Item                                          (None)
// struct FPointerEvent               K2Node_Event_PointerEvent                                        (ConstParm)
// class UDragDropOperation*          K2Node_Event_Operation                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UBP_UI_PlanningMap_SpawnPoint_C*>K2Node_CustomEvent_SpawnPointComponents                          (ConstParm, ReferenceParm, ContainsInstancedReference)
// class ABP_UI_PlanningMap_C*        K2Node_CustomEvent_PlanningMapActor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UW_Button_C*                 K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Floor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// TArray<class UW_PlanningMap_BreachPoint_C*>CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_PlanningMap_BreachPoint_C*CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_PlanningMap_BreachPoint_C*K2Node_CustomEvent_HoveredPoint                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PlanningMap_BreachPoint_C*K2Node_CustomEvent_ClickedPoint                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnPoints                CallFunc_GetSpawnPointInfo_SpawnPointInfo                        (None)
// int32                              CallFunc_GetSpawnPointInfo_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDetailPanePosition_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_3                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnPoints                CallFunc_GetSpawnPointInfo_SpawnPointInfo_1                      (None)
// int32                              CallFunc_GetSpawnPointInfo_Index_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PlanningMap_C::ExecuteUbergraph_W_PlanningMap(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, class UDataTable* CallFunc_GetLevelLookupDataTable_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLevelDataLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 K2Node_CustomEvent_FloorIndex, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, const struct FLevelFloorData& CallFunc_Array_Get_Item, const struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, TArray<class UBP_UI_PlanningMap_SpawnPoint_C*>& K2Node_CustomEvent_SpawnPointComponents, class ABP_UI_PlanningMap_C* K2Node_CustomEvent_PlanningMapActor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UW_Button_C* K2Node_CustomEvent_Button, int32 CallFunc_Array_Find_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UW_Button_C* CallFunc_Array_Get_Item_1, int32 K2Node_CustomEvent_Floor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<class UW_PlanningMap_BreachPoint_C*>& CallFunc_Map_Values_Values, bool CallFunc_IsValid_ReturnValue, class UW_PlanningMap_BreachPoint_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UW_PlanningMap_BreachPoint_C* K2Node_CustomEvent_HoveredPoint, class UW_PlanningMap_BreachPoint_C* K2Node_CustomEvent_ClickedPoint, const struct FSpawnPoints& CallFunc_GetSpawnPointInfo_SpawnPointInfo, int32 CallFunc_GetSpawnPointInfo_Index, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, const struct FVector2D& CallFunc_GetPosition_ReturnValue, const struct FVector2D& CallFunc_GetDetailPanePosition_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, const struct FSpawnPoints& CallFunc_GetSpawnPointInfo_SpawnPointInfo_1, int32 CallFunc_GetSpawnPointInfo_Index_1, class UW_Button_C* CallFunc_Array_Get_Item_3, class UW_Button_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "ExecuteUbergraph_W_PlanningMap");

	Params::UW_PlanningMap_C_ExecuteUbergraph_W_PlanningMap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetLevelLookupDataTable_ReturnValue = CallFunc_GetLevelLookupDataTable_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_CustomEvent_FloorIndex = K2Node_CustomEvent_FloorIndex;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Event_PointerEvent = K2Node_Event_PointerEvent;
	Parms.K2Node_Event_Operation = K2Node_Event_Operation;
	Parms.K2Node_CustomEvent_SpawnPointComponents = K2Node_CustomEvent_SpawnPointComponents;
	Parms.K2Node_CustomEvent_PlanningMapActor = K2Node_CustomEvent_PlanningMapActor;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_CustomEvent_Floor = K2Node_CustomEvent_Floor;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_HoveredPoint = K2Node_CustomEvent_HoveredPoint;
	Parms.K2Node_CustomEvent_ClickedPoint = K2Node_CustomEvent_ClickedPoint;
	Parms.CallFunc_GetSpawnPointInfo_SpawnPointInfo = CallFunc_GetSpawnPointInfo_SpawnPointInfo;
	Parms.CallFunc_GetSpawnPointInfo_Index = CallFunc_GetSpawnPointInfo_Index;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_2 = CallFunc_SlotAsCanvasSlot_ReturnValue_2;
	Parms.CallFunc_GetPosition_ReturnValue = CallFunc_GetPosition_ReturnValue;
	Parms.CallFunc_GetDetailPanePosition_ReturnValue = CallFunc_GetDetailPanePosition_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_3 = CallFunc_SlotAsCanvasSlot_ReturnValue_3;
	Parms.CallFunc_GetSpawnPointInfo_SpawnPointInfo_1 = CallFunc_GetSpawnPointInfo_SpawnPointInfo_1;
	Parms.CallFunc_GetSpawnPointInfo_Index_1 = CallFunc_GetSpawnPointInfo_Index_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap.W_PlanningMap_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PlanningMap_C::NewEventDispatcher_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "NewEventDispatcher_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlanningMap.W_PlanningMap_C.UpdateMapMaterial__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  LayoutTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::UpdateMapMaterial__DelegateSignature(class UTexture2D* LayoutTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "UpdateMapMaterial__DelegateSignature");

	Params::UW_PlanningMap_C_UpdateMapMaterial__DelegateSignature_Params Parms{};

	Parms.LayoutTexture = LayoutTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlanningMap.W_PlanningMap_C.PanMap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CursorPos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::PanMap__DelegateSignature(bool Pressed, const struct FVector2D& CursorPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlanningMap_C", "PanMap__DelegateSignature");

	Params::UW_PlanningMap_C_PanMap__DelegateSignature_Params Parms{};

	Parms.Pressed = Pressed;
	Parms.CursorPos = CursorPos;

	UObject::ProcessEvent(Func, &Parms);

}

}


