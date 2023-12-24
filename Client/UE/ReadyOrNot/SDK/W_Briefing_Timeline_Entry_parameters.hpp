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

// 0x18 (0x18 - 0x0)
// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.Hovered
struct UW_Briefing_Timeline_Entry_C_Hovered_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EHorizontalAlignment              Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHorizontalAlignment              Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHorizontalAlignment              K2Node_Select_Default_1;                           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3873[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.PreConstruct
struct UW_Briefing_Timeline_Entry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
struct UW_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
struct UW_Briefing_Timeline_Entry_C_BndEvt__btn_TimelineEntry_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE9 (0xE9 - 0x0)
// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.ExecuteUbergraph_W_Briefing_Timeline_Entry
struct UW_Briefing_Timeline_Entry_C_ExecuteUbergraph_W_Briefing_Timeline_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_388A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_388D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_388F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundWave*                            CallFunc_GetTimelineEventTestData_Audio_Asset;     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTimelineEvent>                CallFunc_GetTimelineEventTestData_Events;          // 0x30(0x10)(ReferenceParm)
	TMap<float, struct FTimelineEvent>           CallFunc_GetTimelineEventTestData_EventEntries;    // 0x40(0x50)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3893[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimelineEvent                        CallFunc_Array_Get_Item;                           // 0x98(0x50)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.TimelineEventClicked__DelegateSignature
struct UW_Briefing_Timeline_Entry_C_TimelineEventClicked__DelegateSignature_Params
{
public:
	float                                        EventAudioStart;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EventAudioEnd;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EventAudioDuration;                                // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.TimelineEventUnhovered__DelegateSignature
struct UW_Briefing_Timeline_Entry_C_TimelineEventUnhovered__DelegateSignature_Params
{
public:
	float                                        EventId;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Briefing_Timeline_Entry.W_Briefing_Timeline_Entry_C.TimelineEventHovered__DelegateSignature
struct UW_Briefing_Timeline_Entry_C_TimelineEventHovered__DelegateSignature_Params
{
public:
	float                                        EventId;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


