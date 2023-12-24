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

// 0x1 (0x1 - 0x0)
// Function W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C.SetStyle
struct UW_Briefing_Timeline_TrackWaveElement_vert_C_SetStyle_Params
{
public:
	bool                                         IsTimelineEvent;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C.SetWaveLength
struct UW_Briefing_Timeline_TrackWaveElement_vert_C_SetWaveLength_Params
{
public:
	float                                        Length;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                              K2Node_MakeStruct_Anchors;                         // 0x18(0x10)(NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C.Tick
struct UW_Briefing_Timeline_TrackWaveElement_vert_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C.Update
struct UW_Briefing_Timeline_TrackWaveElement_vert_C_Update_Params
{
public:
	float                                        WaveAmp;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Freq;                                              // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C.PreConstruct
struct UW_Briefing_Timeline_TrackWaveElement_vert_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x79 (0x79 - 0x0)
// Function W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C.ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert
struct UW_Briefing_Timeline_TrackWaveElement_vert_C_ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_WaveAmp;                        // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Freq;                           // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x4C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38F4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_NormalizeToRange_ReturnValue;             // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Ease_ReturnValue;                         // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


