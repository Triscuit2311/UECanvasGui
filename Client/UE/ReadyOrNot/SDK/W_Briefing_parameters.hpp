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

// 0x20 (0x20 - 0x0)
// Function W_Briefing.W_Briefing_C.GetObjectives
struct UW_Briefing_C_GetObjectives_Params
{
public:
	TArray<TSoftClassPtr<class AObjective>>      Objectives;                                        // 0x0(0x10)(Parm, OutParm)
	TArray<TSoftClassPtr<class UChallenge>>      Challenges;                                        // 0x10(0x10)(Parm, OutParm)
};

// 0x20 (0x20 - 0x0)
// Function W_Briefing.W_Briefing_C.GetBriefingAudio
struct UW_Briefing_C_GetBriefingAudio_Params
{
public:
	TArray<struct FMissionAudio>                 Audio;                                             // 0x0(0x10)(Parm, OutParm)
	TArray<struct FTimelineEvent>                TimelineEvents;                                    // 0x10(0x10)(Parm, OutParm)
};

// 0x3F5 (0x3F5 - 0x0)
// Function W_Briefing.W_Briefing_C.Original
struct UW_Briefing_C_Original_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D03[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_BriefingBio_ProfileLeft_C*          CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCharacterBio>                 CallFunc_GetBios_OutBios;                          // 0x10(0x10)(ReferenceParm)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D09[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D0B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_BriefingTaskButton_C*>       CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x40(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_BriefingBio_ProfileRight_C*         CallFunc_Create_ReturnValue_1;                     // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D0E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCharacterBio>                 CallFunc_GetBios_OutBios_1;                        // 0x60(0x10)(ReferenceParm)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D0F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterBio                         CallFunc_Array_Get_Item;                           // 0x78(0x140)(None)
	TArray<struct FCriminalRecord>               CallFunc_GetBioDetails_RapSheet;                   // 0x1B8(0x10)(ReferenceParm)
	class UTexture2D*                            CallFunc_GetBioDetails_ProfileImage;               // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetBioDetails_OutDescription;             // 0x1D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetBioDetails_OutBioText;                 // 0x1E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D10[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x1F8(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x210(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x22C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x231(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D11[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_BriefingTaskButton_C*               CallFunc_Array_Get_Item_1;                         // 0x238(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterBio                         CallFunc_Array_Get_Item_2;                         // 0x240(0x140)(None)
	TArray<struct FCriminalRecord>               CallFunc_GetBioDetails_RapSheet_1;                 // 0x380(0x10)(ReferenceParm)
	class UTexture2D*                            CallFunc_GetBioDetails_ProfileImage_1;             // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetBioDetails_OutDescription_1;           // 0x398(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetBioDetails_OutBioText_1;               // 0x3A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x3B8(0x18)(None)
	bool                                         CallFunc_DoesLevelHaveMissionAudio_bHasMissionAudio; // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x3D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D12[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x3D8(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x3F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x3F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function W_Briefing.W_Briefing_C.SetBriefingTaskButtonsActive
struct UW_Briefing_C_SetBriefingTaskButtonsActive_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsActive;                                          // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D17[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_BriefingTaskButton_C*               CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x218 (0x218 - 0x0)
// Function W_Briefing.W_Briefing_C.OnMouseButtonDoubleClick
struct UW_Briefing_C_OnMouseButtonDoubleClick_Params
{
public:
	struct FGeometry                             InMyGeometry;                                      // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         InMouseEvent;                                      // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)(None)
};

// 0x1 (0x1 - 0x0)
// Function W_Briefing.W_Briefing_C.PreConstruct
struct UW_Briefing_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1112 (0x1112 - 0x0)
// Function W_Briefing.W_Briefing_C.ExecuteUbergraph_W_Briefing
struct UW_Briefing_C_ExecuteUbergraph_W_Briefing_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D21[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCharacterBio>                 CallFunc_GetBios_OutBios;                          // 0x8(0x10)(ReferenceParm)
	TArray<struct FCharacterBio>                 CallFunc_GetBios_OutBios_1;                        // 0x18(0x10)(ReferenceParm)
	struct FST_Briefing_Intel                    K2Node_MakeStruct_ST_Briefing_Intel;               // 0x28(0x30)(HasGetValueTypeHash)
	class UDataTable*                            CallFunc_GetLevelLookupDataTable_ReturnValue;      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMissionAudio>                 CallFunc_GetBriefingAudio_Audio;                   // 0x60(0x10)(ReferenceParm)
	TArray<struct FTimelineEvent>                CallFunc_GetBriefingAudio_TimelineEvents;          // 0x70(0x10)(ReferenceParm)
	struct FLevelDataLookupTable                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x80(0x788)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x808(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D22[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            CallFunc_GetLevelLookupDataTable_ReturnValue_1;    // 0x810(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLevelDataLookupTable                 CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x818(0x788)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0xFA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCharacterBio>                 CallFunc_GetBios_OutBios_2;                        // 0xFA8(0x10)(ReferenceParm)
	TArray<struct FCharacterBio>                 CallFunc_GetBios_OutBios_3;                        // 0xFB8(0x10)(ReferenceParm)
	struct FST_Briefing_Intel                    K2Node_MakeStruct_ST_Briefing_Intel_1;             // 0xFC8(0x30)(HasGetValueTypeHash)
	TArray<struct FMissionAudio>                 CallFunc_GetBriefingAudio_Audio_1;                 // 0xFF8(0x10)(ReferenceParm)
	TArray<struct FTimelineEvent>                CallFunc_GetBriefingAudio_TimelineEvents_1;        // 0x1008(0x10)(ReferenceParm)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x1018(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D24[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMissionAudio                         CallFunc_GetBriefing_OutBriefing;                  // 0x1020(0x60)(None)
	struct FMissionAudio                         CallFunc_GetBriefing_OutBriefing_1;                // 0x1080(0x60)(None)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x10E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D25[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x10F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x10F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D26[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x1100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue_1;       // 0x1108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlayingForward_ReturnValue;    // 0x1110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


