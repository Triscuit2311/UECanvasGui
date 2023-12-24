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

// 0x19 (0x19 - 0x0)
// Function W_Briefing_Event.W_Briefing_Event_C.Hovered
struct UW_Briefing_Event_C_Hovered_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_387E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Briefing_Event.W_Briefing_Event_C.PreConstruct
struct UW_Briefing_Event_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Briefing_Event.W_Briefing_Event_C.BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
struct UW_Briefing_Event_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Briefing_Event.W_Briefing_Event_C.BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
struct UW_Briefing_Event_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDC (0xDC - 0x0)
// Function W_Briefing_Event.W_Briefing_Event_C.ExecuteUbergraph_W_Briefing_Event
struct UW_Briefing_Event_C_ExecuteUbergraph_W_Briefing_Event_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38CF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundWave*                            CallFunc_GetTimelineEventTestData_Audio_Asset;     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTimelineEvent>                CallFunc_GetTimelineEventTestData_Events;          // 0x28(0x10)(ReferenceParm)
	TMap<float, struct FTimelineEvent>           CallFunc_GetTimelineEventTestData_EventEntries;    // 0x38(0x50)(None)
	struct FTimelineEvent                        CallFunc_Array_Get_Item;                           // 0x88(0x50)(None)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Briefing_Event.W_Briefing_Event_C.TimelineEventClicked__DelegateSignature
struct UW_Briefing_Event_C_TimelineEventClicked__DelegateSignature_Params
{
public:
	float                                        EventAudioStart;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EventAudioDuration;                                // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Briefing_Event.W_Briefing_Event_C.TimelineEventUnhovered__DelegateSignature
struct UW_Briefing_Event_C_TimelineEventUnhovered__DelegateSignature_Params
{
public:
	float                                        EventId;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Briefing_Event.W_Briefing_Event_C.TimelineEventHovered__DelegateSignature
struct UW_Briefing_Event_C_TimelineEventHovered__DelegateSignature_Params
{
public:
	float                                        EventId;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


