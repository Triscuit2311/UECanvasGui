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

// 0x8 (0x8 - 0x0)
// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.GetFocusTarget
struct UW_MissionScore_ScorePanel_Entry_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.BackPage
struct UW_MissionScore_ScorePanel_Entry_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_Entry_3
struct UW_MissionScore_ScorePanel_Entry_C_SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_Entry_3_Params
{
public:
	class UObject*                               Event_Receiver;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_Entry_1
struct UW_MissionScore_ScorePanel_Entry_C_SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_Entry_1_Params
{
public:
	class UObject*                               Event_Receiver;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.SetValueText
struct UW_MissionScore_ScorePanel_Entry_C_SetValueText_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_172F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class UTextBlock*                            K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1730[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x30(0x18)(None)
	class FText                                  K2Node_Select_Default_1;                           // 0x48(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.SetNameText
struct UW_MissionScore_ScorePanel_Entry_C_SetNameText_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1734[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.SetCountText
struct UW_MissionScore_ScorePanel_Entry_C_SetCountText_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_173B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x10(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x50(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x90(0x18)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xA8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xB8(0x18)(None)
	class FText                                  K2Node_Select_Default_1;                           // 0xD0(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.SetInputMode
struct UW_MissionScore_ScorePanel_Entry_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.ChangePage
struct UW_MissionScore_ScorePanel_Entry_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.numberSound
struct UW_MissionScore_ScorePanel_Entry_C_NumberSound_Params
{
public:
	class UObject*                               Event_Receiver;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.PreConstruct
struct UW_MissionScore_ScorePanel_Entry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.Hide
struct UW_MissionScore_ScorePanel_Entry_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.Reveal
struct UW_MissionScore_ScorePanel_Entry_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.ExecuteUbergraph_W_MissionScore_ScorePanel_Entry
struct UW_MissionScore_ScorePanel_Entry_C_ExecuteUbergraph_W_MissionScore_ScorePanel_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsGamepad;                            // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_175E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_PageName;                             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_1;                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                               K2Node_CustomEvent_Event_Receiver;                 // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1761[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_2;                // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay_1;                              // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1763[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Delay;                                // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      K2Node_Select_Default;                             // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*     CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function W_MissionScore_ScorePanel_Entry.W_MissionScore_ScorePanel_Entry_C.ScoreEntryReady__DelegateSignature
struct UW_MissionScore_ScorePanel_Entry_C_ScoreEntryReady__DelegateSignature_Params
{
public:
	class UW_MissionScore_ScorePanel_Entry_C*    EntryWidget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Score;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


