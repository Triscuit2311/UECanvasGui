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

// 0x44 (0x44 - 0x0)
// Function W_OfficerMarker.W_OfficerMarker_C.UpdateData
struct UW_OfficerMarker_C_UpdateData_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1756[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetPlayerTeamColor_LinearColor;           // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1757[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_GetPlayerTeamColor_SlateColor;            // 0x18(0x28)(None)
	int32                                        CallFunc_GetPlanningPlayerNumber_ReturnValue;      // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_OfficerMarker.W_OfficerMarker_C.SetPlayerState
struct UW_OfficerMarker_C_SetPlayerState_Params
{
public:
	class AReadyOrNotPlayerState*                PlayerState;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function W_OfficerMarker.W_OfficerMarker_C.UpdateStyle
struct UW_OfficerMarker_C_UpdateStyle_Params
{
public:
	class FText                                  Temp_text_Variable;                                // 0x0(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1767[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x38(0x18)(None)
};

// 0x3A8 (0x3A8 - 0x0)
// Function W_OfficerMarker.W_OfficerMarker_C.OnMouseButtonUp
struct UW_OfficerMarker_C_OnMouseButtonUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x160(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1778[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x180(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue_1;                    // 0x238(0xB8)(None)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x2F0(0xB8)(None)
};

// 0x1 (0x1 - 0x0)
// Function W_OfficerMarker.W_OfficerMarker_C.PreConstruct
struct UW_OfficerMarker_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function W_OfficerMarker.W_OfficerMarker_C.OnMouseEnter
struct UW_OfficerMarker_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x70 (0x70 - 0x0)
// Function W_OfficerMarker.W_OfficerMarker_C.OnMouseLeave
struct UW_OfficerMarker_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x120 (0x120 - 0x0)
// Function W_OfficerMarker.W_OfficerMarker_C.ExecuteUbergraph_W_OfficerMarker
struct UW_OfficerMarker_C_ExecuteUbergraph_W_OfficerMarker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1785[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x8(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x40(0x70)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xB0(0x70)(ConstParm)
};

// 0x8 (0x8 - 0x0)
// Function W_OfficerMarker.W_OfficerMarker_C.OnRightClicked__DelegateSignature
struct UW_OfficerMarker_C_OnRightClicked__DelegateSignature_Params
{
public:
	class UW_OfficerMarker_C*                    TriggeringMarker;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_OfficerMarker.W_OfficerMarker_C.OnUnhovered__DelegateSignature
struct UW_OfficerMarker_C_OnUnhovered__DelegateSignature_Params
{
public:
	class UW_OfficerMarker_C*                    TriggeringMarker;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_OfficerMarker.W_OfficerMarker_C.OnHovered__DelegateSignature
struct UW_OfficerMarker_C_OnHovered__DelegateSignature_Params
{
public:
	class UW_OfficerMarker_C*                    TriggeringMarker;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_OfficerMarker.W_OfficerMarker_C.OnClicked__DelegateSignature
struct UW_OfficerMarker_C_OnClicked__DelegateSignature_Params
{
public:
	class UW_OfficerMarker_C*                    TriggeringMarker;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


