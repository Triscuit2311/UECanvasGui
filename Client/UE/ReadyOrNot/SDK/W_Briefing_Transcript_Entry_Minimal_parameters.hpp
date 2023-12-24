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
// Function W_Briefing_Transcript_Entry_Minimal.W_Briefing_Transcript_Entry_Minimal_C.PreConstruct
struct UW_Briefing_Transcript_Entry_Minimal_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Briefing_Transcript_Entry_Minimal.W_Briefing_Transcript_Entry_Minimal_C.BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_Briefing_Transcript_Entry_Minimal_C_BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x168 (0x168 - 0x0)
// Function W_Briefing_Transcript_Entry_Minimal.W_Briefing_Transcript_Entry_Minimal_C.ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal
struct UW_Briefing_Transcript_Entry_Minimal_C_ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x28(0x40)(HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x78(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xC0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xD0(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0xE8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x100(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x140(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x150(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// Function W_Briefing_Transcript_Entry_Minimal.W_Briefing_Transcript_Entry_Minimal_C.TranscriptEntryClicked__DelegateSignature
struct UW_Briefing_Transcript_Entry_Minimal_C_TranscriptEntryClicked__DelegateSignature_Params
{
public:
	float                                        EntryID;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


