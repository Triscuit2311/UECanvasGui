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

// 0x50 (0x50 - 0x0)
// Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.Initialize
struct UW_Briefing_TimelineEvents_C_Initialize_Params
{
public:
	TMap<float, struct FTimelineEvent>           EventEntries;                                      // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x4 (0x4 - 0x0)
// Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.AddEvent
struct UW_Briefing_TimelineEvents_C_AddEvent_Params
{
public:
	float                                        EventId;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.EventClicked
struct UW_Briefing_TimelineEvents_C_EventClicked_Params
{
public:
	float                                        EventAudioStart;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EventAudioDuration;                                // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.ExecuteUbergraph_W_Briefing_TimelineEvents
struct UW_Briefing_TimelineEvents_C_ExecuteUbergraph_W_Briefing_TimelineEvents_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_EventAudioStart;                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_EventAudioDuration;             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3911[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<float, struct FTimelineEvent>           K2Node_CustomEvent_EventEntries;                   // 0x20(0x50)(None)
	float                                        K2Node_CustomEvent_EventID;                        // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3915[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Briefing_Event_C*                   CallFunc_Create_ReturnValue;                       // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimelineEvent                        CallFunc_Map_Find_Value;                           // 0x80(0x50)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3916[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result; // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*     CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue; // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_391E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_InsertChildAt_ReturnValue;                // 0xF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xF8(0x10)(ZeroConstructor, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.OnEventClicked__DelegateSignature
struct UW_Briefing_TimelineEvents_C_OnEventClicked__DelegateSignature_Params
{
public:
	float                                        EventAudioStart;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EventAudioDuration;                                // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


