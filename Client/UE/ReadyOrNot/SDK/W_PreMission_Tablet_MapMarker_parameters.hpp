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

// 0x398 (0x398 - 0x0)
// Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.OnMouseButtonDown
struct UW_PreMission_Tablet_MapMarker_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FVector2D                             CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue; // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_371B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x170(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x228(0xB8)(None)
	struct FEventReply                           CallFunc_CaptureMouse_ReturnValue;                 // 0x2E0(0xB8)(None)
};

// 0x31C (0x31C - 0x0)
// Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.OnMouseMove
struct UW_PreMission_Tablet_MapMarker_C_OnMouseMove_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FVector2D                             CallFunc_GetNormalizedClick_ReturnValue;           // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X_1;                        // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_1;                        // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x178(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x184(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x190(0xB8)(None)
	struct FRotator                              CallFunc_FindLookAtRotation_ReturnValue;           // 0x248(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x254(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x25C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x260(0xB8)(None)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x318(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x468 (0x468 - 0x0)
// Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.OnMouseButtonUp
struct UW_PreMission_Tablet_MapMarker_C_OnMouseButtonUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x160(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_371C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x180(0xB8)(None)
	struct FEventReply                           CallFunc_ReleaseMouseCapture_ReturnValue;          // 0x238(0xB8)(None)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x2F0(0xB8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_371D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue_1;                    // 0x3B0(0xB8)(None)
};

// 0x2 (0x2 - 0x0)
// Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.HasAngleChanged
struct UW_PreMission_Tablet_MapMarker_C_HasAngleChanged_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.HasRotation
struct UW_PreMission_Tablet_MapMarker_C_HasRotation_Params
{
public:
	bool                                         Rotates;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.SetRotation
struct UW_PreMission_Tablet_MapMarker_C_SetRotation_Params
{
public:
	float                                        NewRotation;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB0 (0xB0 - 0x0)
// Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.SetStyle
struct UW_PreMission_Tablet_MapMarker_C_SetStyle_Params
{
public:
	class FName                                  MarkerName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_PreMissionMarkers                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x8(0x60)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_371E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetPlanningPlayerNumber_ReturnValue;      // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_PreMission_Tablet_PlayerNode_C*     CallFunc_Create_ReturnValue;                       // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x83(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_371F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3720[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default;                             // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3721[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_Select_Default_1;                           // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.SetupMarker
struct UW_PreMission_Tablet_MapMarker_C_SetupMarker_Params
{
public:
	class FName                                  NewParam;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewParam2;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.PreConstruct
struct UW_PreMission_Tablet_MapMarker_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.Tick
struct UW_PreMission_Tablet_MapMarker_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD9 (0xD9 - 0x0)
// Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.ExecuteUbergraph_W_PreMission_Tablet_MapMarker
struct UW_PreMission_Tablet_MapMarker_C_ExecuteUbergraph_W_PreMission_Tablet_MapMarker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3722[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerState*                CallFunc_GetPlayerStateFromPlanningNumber_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasRotation_Rotates;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3723[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerState*                CallFunc_GetPlayerStateFromPlanningNumber_ReturnValue_1; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NewParam;                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_NewParam2;                      // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3724[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_PreMissionMarkers                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x30(0x60)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasRotation_Rotates_1;                    // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3725[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x94(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.OnRotated__DelegateSignature
struct UW_PreMission_Tablet_MapMarker_C_OnRotated__DelegateSignature_Params
{
public:
	class UW_PreMission_Tablet_MapMarker_C*      TriggeringMarker;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Rotation;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.OnClicked__DelegateSignature
struct UW_PreMission_Tablet_MapMarker_C_OnClicked__DelegateSignature_Params
{
public:
	class UW_PreMission_Tablet_MapMarker_C*      TriggeringMarker;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.OnReleased__DelegateSignature
struct UW_PreMission_Tablet_MapMarker_C_OnReleased__DelegateSignature_Params
{
public:
	class UW_PreMission_Tablet_MapMarker_C*      TriggeringMarker;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PreMission_Tablet_MapMarker.W_PreMission_Tablet_MapMarker_C.OnPressed__DelegateSignature
struct UW_PreMission_Tablet_MapMarker_C_OnPressed__DelegateSignature_Params
{
public:
	class UW_PreMission_Tablet_MapMarker_C*      TriggeringMarker;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


