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

// 0x4 (0x4 - 0x0)
// Function W_Briefing_TImeline.W_Briefing_TImeline_C.Playing
struct UW_Briefing_TImeline_C_Playing_Params
{
public:
	float                                        CurrentPlayTime;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function W_Briefing_TImeline.W_Briefing_TImeline_C.SetPlayState
struct UW_Briefing_TImeline_C_SetPlayState_Params
{
public:
	enum class E_Briefing_Audio_PlayStates       AudioPlayState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_Briefing_TImeline.W_Briefing_TImeline_C.AudioPlay
struct UW_Briefing_TImeline_C_AudioPlay_Params
{
public:
	float                                        Start;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Briefing_TImeline.W_Briefing_TImeline_C.PreConstruct
struct UW_Briefing_TImeline_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function W_Briefing_TImeline.W_Briefing_TImeline_C.Initialize
struct UW_Briefing_TImeline_C_Initialize_Params
{
public:
	TArray<struct FTimelineEvent>                Events;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class USoundWave*                            AudioWaveAsset;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Briefing_TImeline.W_Briefing_TImeline_C.BndEvt__W_Briefing_Timeline_TrackWave_K2Node_ComponentBoundEvent_1_TimelineEventEnded__DelegateSignature
struct UW_Briefing_TImeline_C_BndEvt__W_Briefing_Timeline_TrackWave_K2Node_ComponentBoundEvent_1_TimelineEventEnded__DelegateSignature_Params
{
public:
	float                                        EventId;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x190 (0x190 - 0x0)
// Function W_Briefing_TImeline.W_Briefing_TImeline_C.ExecuteUbergraph_W_Briefing_TImeline
struct UW_Briefing_TImeline_C_ExecuteUbergraph_W_Briefing_TImeline_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_396A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTimelineEvent>                K2Node_CustomEvent_Events;                         // 0x20(0x10)(ConstParm, ReferenceParm)
	class USoundWave*                            K2Node_CustomEvent_AudioWaveAsset;                 // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimelineEvent                        CallFunc_Array_Get_Item;                           // 0x38(0x50)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_396C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Briefing_Timeline_Entry_C*          CallFunc_Create_ReturnValue;                       // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue;             // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundWave*                            CallFunc_GetTimelineEventTestData_Audio_Asset;     // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTimelineEvent>                CallFunc_GetTimelineEventTestData_Events;          // 0xA8(0x10)(ReferenceParm)
	TMap<float, struct FTimelineEvent>           CallFunc_GetTimelineEventTestData_EventEntries;    // 0xB8(0x50)(None)
	struct FAnchors                              K2Node_MakeStruct_Anchors;                         // 0x108(0x10)(NoDestructor)
	struct FVector2D                             CallFunc_GetDesiredSize_ReturnValue;               // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_EventID;                // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3976[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimelineEvent                        CallFunc_Map_Find_Value;                           // 0x130(0x50)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_397B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


