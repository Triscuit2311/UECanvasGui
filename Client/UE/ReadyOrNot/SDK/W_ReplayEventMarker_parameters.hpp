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

// 0x48 (0x48 - 0x0)
// Function W_ReplayEventMarker.W_ReplayEventMarker_C.GetToolTipWidget_0
struct UW_ReplayEventMarker_C_GetToolTipWidget_0_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(None)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x30(0x18)(None)
};

// 0x234 (0x234 - 0x0)
// Function W_ReplayEventMarker.W_ReplayEventMarker_C.OnMouseButtonDown_0
struct UW_ReplayEventMarker_C_OnMouseButtonDown_0_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)(None)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayController*                     K2Node_DynamicCast_AsReplay_Controller;            // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_299E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue; // 0x22C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_ReplayEventMarker.W_ReplayEventMarker_C.PreConstruct
struct UW_ReplayEventMarker_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function W_ReplayEventMarker.W_ReplayEventMarker_C.OnMouseEnter
struct UW_ReplayEventMarker_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xC0 (0xC0 - 0x0)
// Function W_ReplayEventMarker.W_ReplayEventMarker_C.ExecuteUbergraph_W_ReplayEventMarker
struct UW_ReplayEventMarker_C_ExecuteUbergraph_W_ReplayEventMarker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ReplayEventMarkerTag_C*             CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x14(0x38)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_29A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0x50(0x70)(ConstParm)
};

}
}


