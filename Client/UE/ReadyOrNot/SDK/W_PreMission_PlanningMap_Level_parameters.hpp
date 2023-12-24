#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.MarkerRotated
struct UW_PreMission_PlanningMap_Level_C_MarkerRotated_Params
{
public:
	class UW_PreMission_Tablet_MapMarker_C*      TriggeringMarker;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Rotation;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.LineStartNodeSelected
struct UW_PreMission_PlanningMap_Level_C_LineStartNodeSelected_Params
{
public:
	class UW_OfficerMarker_C*                    OfficerMarker;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.DrawMarker
struct UW_PreMission_PlanningMap_Level_C_DrawMarker_Params
{
public:
	int32                                        MarkerID;                                          // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlanningMarker                       MarkerData;                                        // 0x4(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	uint8                                        Pad_2535[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_PreMission_Tablet_MapMarker_C*      Marker;                                            // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_PreMission_Tablet_MapMarker_C*      CallFunc_Create_ReturnValue;                       // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                              K2Node_MakeStruct_Anchors;                         // 0x40(0x10)(NoDestructor)
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue;             // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x58(0x10)(ZeroConstructor, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.EraseLine
struct UW_PreMission_PlanningMap_Level_C_EraseLine_Params
{
public:
	int32                                        LineID;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2537[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanel*                          CallFunc_Map_Find_Value;                           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D8 (0x1D8 - 0x0)
// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.DrawLine
struct UW_PreMission_PlanningMap_Level_C_DrawLine_Params
{
public:
	int32                                        LineID;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_253E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlanningLine                         LineData;                                          // 0x8(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	class AReadyOrNotPlayerState*                LineOwner;                                         // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas;                                            // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_PreMission_PlanningMap_Line_C*      Line;                                              // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LastNode;                                          // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_253F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EndOffset;                                         // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartOffset;                                       // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             PreviousPoint;                                     // 0x54(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Coordinates;                                       // 0x5C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2540[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               NodeWidget;                                        // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FirstNode;                                         // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2541[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_PreMission_PlanningMap_Line_C*      CallFunc_Create_ReturnValue;                       // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerState*                CallFunc_GetPlayerStateFromPlanningNumber_ReturnValue; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_OfficerMarker_C*                    CallFunc_Create_ReturnValue_1;                     // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_PreMission_Tablet_PlayerNode_C*     CallFunc_Create_ReturnValue_2;                     // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Array_Get_Item;                           // 0xA4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0xAD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2542[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetPlayerTeamColor_LinearColor;           // 0xB0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetPlayerTeamColor_SlateColor;            // 0xC0(0x28)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xE8(0x10)(ZeroConstructor, NoDestructor)
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue;             // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                              K2Node_MakeStruct_Anchors;                         // 0x100(0x10)(NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchorData                           K2Node_MakeStruct_AnchorData;                      // 0x114(0x28)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2543[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetLineAngle_Angle;                       // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetLineLength_Length;                     // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                              K2Node_MakeStruct_Anchors_1;                       // 0x14C(0x10)(NoDestructor)
	struct FAnchorData                           K2Node_MakeStruct_AnchorData_1;                    // 0x15C(0x28)(NoDestructor)
	uint8                                        Pad_2544[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue_1;           // 0x188(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CallFunc_SpawnObject_ReturnValue;                  // 0x190(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                              K2Node_MakeStruct_Anchors_2;                       // 0x198(0x10)(NoDestructor)
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue_2;           // 0x1A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchorData                           K2Node_MakeStruct_AnchorData_2;                    // 0x1B0(0x28)(NoDestructor)
};

// 0x64 (0x64 - 0x0)
// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.GetLineAngle
struct UW_PreMission_PlanningMap_Level_C_GetLineAngle_Params
{
public:
	struct FVector2D                             PointA;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             PointB;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PointA_X;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PointA_Y;                                          // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PointB_X;                                          // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PointB_Y;                                          // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Angle;                                             // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X_1;                        // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_1;                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_FindLookAtRotation_ReturnValue;           // 0x4C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.GetLineLength
struct UW_PreMission_PlanningMap_Level_C_GetLineLength_Params
{
public:
	struct FVector2D                             PointA;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             PointB;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Length;                                            // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetWidgetSize_Absolute_ReturnValue;       // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Multiply_Vector2DVector2D_ReturnValue_1;  // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Distance2D_ReturnValue;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.ExecuteUbergraph_W_PreMission_PlanningMap_Level
struct UW_PreMission_PlanningMap_Level_C_ExecuteUbergraph_W_PreMission_PlanningMap_Level_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.OnMarkerRotated__DelegateSignature
struct UW_PreMission_PlanningMap_Level_C_OnMarkerRotated__DelegateSignature_Params
{
public:
	class UW_PreMission_Tablet_MapMarker_C*      TriggeringMarker;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FloorLevel;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Rotation;                                          // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.OnLineDrawn__DelegateSignature
struct UW_PreMission_PlanningMap_Level_C_OnLineDrawn__DelegateSignature_Params
{
public:
	int32                                        LineID;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_254C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanel*                          LineCanvas;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C.OnMarkerDrawn__DelegateSignature
struct UW_PreMission_PlanningMap_Level_C_OnMarkerDrawn__DelegateSignature_Params
{
public:
	int32                                        MarkerID;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_254E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_PreMission_Tablet_MapMarker_C*      Marker;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


