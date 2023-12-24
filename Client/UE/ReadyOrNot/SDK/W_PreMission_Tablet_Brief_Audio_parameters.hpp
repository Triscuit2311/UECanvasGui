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

// 0x2 (0x2 - 0x0)
// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.IsPlayingAudio
struct UW_PreMission_Tablet_Brief_Audio_C_IsPlayingAudio_Params
{
public:
	bool                                         Playing;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPlaying_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.ScrubTime
struct UW_PreMission_Tablet_Brief_Audio_C_ScrubTime_Params
{
public:
	bool                                         Rewinding;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3734[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetScrubbedTime_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.GetScrubbedTime
struct UW_PreMission_Tablet_Brief_Audio_C_GetScrubbedTime_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.Set Current Audio Text
struct UW_PreMission_Tablet_Brief_Audio_C_Set_Current_Audio_Text_Params
{
public:
	int32                                        CurrentTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3740[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Get_Timer_Text_TimerText;                 // 0x8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x20(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x60(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xA0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xB0(0x18)(None)
};

// 0x115 (0x115 - 0x0)
// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.GetEventEntries
struct UW_PreMission_Tablet_Brief_Audio_C_GetEventEntries_Params
{
public:
	bool                                         ForceUpdate;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3743[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<float, struct FTimelineEvent>           EventEntries1;                                     // 0x8(0x50)(Parm, OutParm)
	bool                                         Initialized;                                       // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3744[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<float, struct FTimelineEvent>           EventEntries;                                      // 0x60(0x50)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xBD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3745[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimelineEvent                        CallFunc_Array_Get_Item;                           // 0xC0(0x50)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.SetAudioPlayProgress
struct UW_PreMission_Tablet_Brief_Audio_C_SetAudioPlayProgress_Params
{
public:
	class USoundWave*                            PlayingSoundWave;                                  // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlaybackPercent;                                   // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlaying_ReturnValue;                    // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3747[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x120 (0x120 - 0x0)
// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.Get Timer Text
struct UW_PreMission_Tablet_Brief_Audio_C_Get_Timer_Text_Params
{
public:
	int32                                        Time;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3750[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TimerText;                                         // 0x8(0x18)(Parm, OutParm)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3751[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimespan                             CallFunc_FromMilliseconds_ReturnValue;             // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTimespan_Days;                       // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTimespan_Hours;                      // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTimespan_Minutes;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTimespan_Seconds;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTimespan_Milliseconds;               // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3754[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x48(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x60(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x78(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xB8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xF8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x108(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.BndEvt__W_Briefing_Timeline_TrackWave_Simple_K2Node_ComponentBoundEvent_13_TimelineEventFired__DelegateSignature
struct UW_PreMission_Tablet_Brief_Audio_C_BndEvt__W_Briefing_Timeline_TrackWave_Simple_K2Node_ComponentBoundEvent_13_TimelineEventFired__DelegateSignature_Params
{
public:
	float                                        EventId;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.BndEvt__Events_K2Node_ComponentBoundEvent_15_OnEventClicked__DelegateSignature
struct UW_PreMission_Tablet_Brief_Audio_C_BndEvt__Events_K2Node_ComponentBoundEvent_15_OnEventClicked__DelegateSignature_Params
{
public:
	float                                        EventAudioStart;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EventAudioDuration;                                // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.Initialize
struct UW_PreMission_Tablet_Brief_Audio_C_Initialize_Params
{
public:
	struct FMissionAudio                         Audio;                                             // 0x0(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x3C (0x3C - 0x0)
// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.Tick
struct UW_PreMission_Tablet_Brief_Audio_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.PreConstruct
struct UW_PreMission_Tablet_Brief_Audio_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.BndEvt__W_Briefing_Transcript_K2Node_ComponentBoundEvent_7_TranscriptClicked__DelegateSignature
struct UW_PreMission_Tablet_Brief_Audio_C_BndEvt__W_Briefing_Transcript_K2Node_ComponentBoundEvent_7_TranscriptClicked__DelegateSignature_Params
{
public:
	float                                        ClipStartTime;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function W_PreMission_Tablet_Brief_Audio.W_PreMission_Tablet_Brief_Audio_C.ExecuteUbergraph_W_PreMission_Tablet_Brief_Audio
struct UW_PreMission_Tablet_Brief_Audio_C_ExecuteUbergraph_W_PreMission_Tablet_Brief_Audio_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3768[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMissionAudio                         K2Node_CustomEvent_Audio;                          // 0x48(0x60)(ConstParm)
	float                                        K2Node_ComponentBoundEvent_EventAudioStart;        // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_EventAudioDuration;     // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_EventID;                // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_376B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ATablet*                               CallFunc_GetPlayerTablet_ReturnValue;              // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   CallFunc_PlayEventAttached_ReturnValue;            // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_376D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_ClipStartTime;          // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


