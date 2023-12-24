#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C
// (None)

class UClass* UW_PreMission_PlanningMap_Level_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PreMission_PlanningMap_Level_C");

	return Clss;
}


// W_PreMission_PlanningMap_Level_C W_PreMission_PlanningMap_Level.Default__W_PreMission_PlanningMap_Level_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PreMission_PlanningMap_Level_C* UW_PreMission_PlanningMap_Level_C::GetDefaultObj()
{
	static class UW_PreMission_PlanningMap_Level_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PreMission_PlanningMap_Level_C*>(UW_PreMission_PlanningMap_Level_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.MarkerRotated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PreMission_Tablet_MapMarker_C*TriggeringMarker                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Level_C::MarkerRotated(class UW_PreMission_Tablet_MapMarker_C* TriggeringMarker, float Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Level_C", "MarkerRotated");

	Params::UW_PreMission_PlanningMap_Level_C_MarkerRotated_Params Parms{};

	Parms.TriggeringMarker = TriggeringMarker;
	Parms.Rotation = Rotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.LineStartNodeSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_OfficerMarker_C*          OfficerMarker                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Level_C::LineStartNodeSelected(class UW_OfficerMarker_C* OfficerMarker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Level_C", "LineStartNodeSelected");

	Params::UW_PreMission_PlanningMap_Level_C_LineStartNodeSelected_Params Parms{};

	Parms.OfficerMarker = OfficerMarker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.DrawMarker
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MarkerID                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlanningMarker             MarkerData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UW_PreMission_Tablet_MapMarker_C*Marker                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PreMission_Tablet_MapMarker_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UW_PreMission_PlanningMap_Level_C::DrawMarker(int32& MarkerID, struct FPlanningMarker& MarkerData, class UW_PreMission_Tablet_MapMarker_C* Marker, class UW_PreMission_Tablet_MapMarker_C* CallFunc_Create_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Level_C", "DrawMarker");

	Params::UW_PreMission_PlanningMap_Level_C_DrawMarker_Params Parms{};

	Parms.MarkerID = MarkerID;
	Parms.MarkerData = MarkerData;
	Parms.Marker = Marker;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.EraseLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LineID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanel*                CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_PlanningMap_Level_C::EraseLine(int32 LineID, bool CallFunc_Map_Remove_ReturnValue, class UCanvasPanel* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Level_C", "EraseLine");

	Params::UW_PreMission_PlanningMap_Level_C_EraseLine_Params Parms{};

	Parms.LineID = LineID;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.DrawLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LineID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlanningLine               LineData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class AReadyOrNotPlayerState*      LineOwner                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                Canvas                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PreMission_PlanningMap_Line_C*Line                                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LastNode                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              EndOffset                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartOffset                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   PreviousPoint                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Coordinates                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     NodeWidget                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FirstNode                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_PreMission_PlanningMap_Line_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerState*      CallFunc_GetPlayerStateFromPlanningNumber_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_OfficerMarker_C*          CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PreMission_Tablet_PlayerNode_C*CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetPlayerTeamColor_LinearColor                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetPlayerTeamColor_SlateColor                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchorData                 K2Node_MakeStruct_AnchorData                                     (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLineAngle_Angle                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLineLength_Length                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors_1                                      (NoDestructor)
// struct FAnchorData                 K2Node_MakeStruct_AnchorData_1                                   (NoDestructor)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors_2                                      (NoDestructor)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchorData                 K2Node_MakeStruct_AnchorData_2                                   (NoDestructor)

void UW_PreMission_PlanningMap_Level_C::DrawLine(int32 LineID, const struct FPlanningLine& LineData, class AReadyOrNotPlayerState* LineOwner, class UCanvasPanel* Canvas, class UW_PreMission_PlanningMap_Line_C* Line, bool LastNode, float EndOffset, float StartOffset, const struct FVector2D& PreviousPoint, const struct FVector2D& Coordinates, class UWidget* NodeWidget, bool FirstNode, class UW_PreMission_PlanningMap_Line_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class AReadyOrNotPlayerState* CallFunc_GetPlayerStateFromPlanningNumber_ReturnValue, class UW_OfficerMarker_C* CallFunc_Create_ReturnValue_1, class UW_PreMission_Tablet_PlayerNode_C* CallFunc_Create_ReturnValue_2, int32 Temp_int_Array_Index_Variable, const struct FVector2D& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FLinearColor& CallFunc_GetPlayerTeamColor_LinearColor, const struct FSlateColor& CallFunc_GetPlayerTeamColor_SlateColor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, int32 Temp_int_Loop_Counter_Variable, const struct FAnchorData& K2Node_MakeStruct_AnchorData, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetLineAngle_Angle, float CallFunc_GetLineLength_Length, const struct FAnchors& K2Node_MakeStruct_Anchors_1, const struct FAnchorData& K2Node_MakeStruct_AnchorData_1, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_1, class UCanvasPanel* CallFunc_SpawnObject_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors_2, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_2, const struct FAnchorData& K2Node_MakeStruct_AnchorData_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Level_C", "DrawLine");

	Params::UW_PreMission_PlanningMap_Level_C_DrawLine_Params Parms{};

	Parms.LineID = LineID;
	Parms.LineData = LineData;
	Parms.LineOwner = LineOwner;
	Parms.Canvas = Canvas;
	Parms.Line = Line;
	Parms.LastNode = LastNode;
	Parms.EndOffset = EndOffset;
	Parms.StartOffset = StartOffset;
	Parms.PreviousPoint = PreviousPoint;
	Parms.Coordinates = Coordinates;
	Parms.NodeWidget = NodeWidget;
	Parms.FirstNode = FirstNode;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_GetPlayerStateFromPlanningNumber_ReturnValue = CallFunc_GetPlayerStateFromPlanningNumber_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetPlayerTeamColor_LinearColor = CallFunc_GetPlayerTeamColor_LinearColor;
	Parms.CallFunc_GetPlayerTeamColor_SlateColor = CallFunc_GetPlayerTeamColor_SlateColor;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_MakeStruct_AnchorData = K2Node_MakeStruct_AnchorData;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLineAngle_Angle = CallFunc_GetLineAngle_Angle;
	Parms.CallFunc_GetLineLength_Length = CallFunc_GetLineLength_Length;
	Parms.K2Node_MakeStruct_Anchors_1 = K2Node_MakeStruct_Anchors_1;
	Parms.K2Node_MakeStruct_AnchorData_1 = K2Node_MakeStruct_AnchorData_1;
	Parms.CallFunc_AddChildToCanvas_ReturnValue_1 = CallFunc_AddChildToCanvas_ReturnValue_1;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors_2 = K2Node_MakeStruct_Anchors_2;
	Parms.CallFunc_AddChildToCanvas_ReturnValue_2 = CallFunc_AddChildToCanvas_ReturnValue_2;
	Parms.K2Node_MakeStruct_AnchorData_2 = K2Node_MakeStruct_AnchorData_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.GetLineAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   PointA                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   PointB                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PointA_X                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PointA_Y                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PointB_X                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PointB_Y                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Angle                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Level_C::GetLineAngle(const struct FVector2D& PointA, const struct FVector2D& PointB, float PointA_X, float PointA_Y, float PointB_X, float PointB_Y, float* Angle, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Level_C", "GetLineAngle");

	Params::UW_PreMission_PlanningMap_Level_C_GetLineAngle_Params Parms{};

	Parms.PointA = PointA;
	Parms.PointB = PointB;
	Parms.PointA_X = PointA_X;
	Parms.PointA_Y = PointA_Y;
	Parms.PointB_X = PointB_X;
	Parms.PointB_Y = PointB_Y;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;

	UObject::ProcessEvent(Func, &Parms);

	if (Angle != nullptr)
		*Angle = Parms.Angle;

}


// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.GetLineLength
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   PointA                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   PointB                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Length                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetWidgetSize_Absolute_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DVector2D_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Distance2D_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Level_C::GetLineLength(const struct FVector2D& PointA, const struct FVector2D& PointB, float* Length, const struct FVector2D& CallFunc_GetWidgetSize_Absolute_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue_1, float CallFunc_Distance2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Level_C", "GetLineLength");

	Params::UW_PreMission_PlanningMap_Level_C_GetLineLength_Params Parms{};

	Parms.PointA = PointA;
	Parms.PointB = PointB;
	Parms.CallFunc_GetWidgetSize_Absolute_ReturnValue = CallFunc_GetWidgetSize_Absolute_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DVector2D_ReturnValue = CallFunc_Multiply_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DVector2D_ReturnValue_1 = CallFunc_Multiply_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_Distance2D_ReturnValue = CallFunc_Distance2D_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Length != nullptr)
		*Length = Parms.Length;

}


// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PreMission_PlanningMap_Level_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Level_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.ExecuteUbergraph_W_PreMission_PlanningMap_Level
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Level_C::ExecuteUbergraph_W_PreMission_PlanningMap_Level(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Level_C", "ExecuteUbergraph_W_PreMission_PlanningMap_Level");

	Params::UW_PreMission_PlanningMap_Level_C_ExecuteUbergraph_W_PreMission_PlanningMap_Level_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.OnMarkerRotated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PreMission_Tablet_MapMarker_C*TriggeringMarker                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FloorLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Level_C::OnMarkerRotated__DelegateSignature(class UW_PreMission_Tablet_MapMarker_C* TriggeringMarker, int32 FloorLevel, float Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Level_C", "OnMarkerRotated__DelegateSignature");

	Params::UW_PreMission_PlanningMap_Level_C_OnMarkerRotated__DelegateSignature_Params Parms{};

	Parms.TriggeringMarker = TriggeringMarker;
	Parms.FloorLevel = FloorLevel;
	Parms.Rotation = Rotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.OnLineDrawn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LineID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                LineCanvas                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Level_C::OnLineDrawn__DelegateSignature(int32 LineID, class UCanvasPanel* LineCanvas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Level_C", "OnLineDrawn__DelegateSignature");

	Params::UW_PreMission_PlanningMap_Level_C_OnLineDrawn__DelegateSignature_Params Parms{};

	Parms.LineID = LineID;
	Parms.LineCanvas = LineCanvas;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.OnMarkerDrawn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MarkerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PreMission_Tablet_MapMarker_C*Marker                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Level_C::OnMarkerDrawn__DelegateSignature(int32 MarkerID, class UW_PreMission_Tablet_MapMarker_C* Marker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Level_C", "OnMarkerDrawn__DelegateSignature");

	Params::UW_PreMission_PlanningMap_Level_C_OnMarkerDrawn__DelegateSignature_Params Parms{};

	Parms.MarkerID = MarkerID;
	Parms.Marker = Marker;

	UObject::ProcessEvent(Func, &Parms);

}

}


