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
// Function W_Replay_DetailPanel.W_Replay_DetailPanel_C.SetImage
struct UW_Replay_DetailPanel_C_SetImage_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function W_Replay_DetailPanel.W_Replay_DetailPanel_C.UpdateFileName
struct UW_Replay_DetailPanel_C_UpdateFileName_Params
{
public:
	class FString                                NewFileName;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x10(0x18)(None)
};

// 0x78 (0x78 - 0x0)
// Function W_Replay_DetailPanel.W_Replay_DetailPanel_C.GetReplayTimeFormat
struct UW_Replay_DetailPanel_C_GetReplayTimeFormat_Params
{
public:
	float                                        ReplayLength;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_230A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Duration;                                          // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Percent_FloatFloat_ReturnValue;           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FFloor_ReturnValue_1;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_AppendMultiple_ReturnValue;               // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_AppendMultiple_ReturnValue_1;             // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_AppendMultiple_ReturnValue_2;             // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x16A (0x16A - 0x0)
// Function W_Replay_DetailPanel.W_Replay_DetailPanel_C.UpdateReplayInfo
struct UW_Replay_DetailPanel_C_UpdateReplayInfo_Params
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FReplayData                           ReplayData;                                        // 0x10(0x80)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                CallFunc_GetProjectVersion_ReturnValue;            // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_230D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xA8(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0xC0(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0xD8(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0xF0(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x108(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x120(0x18)(None)
	class FString                                CallFunc_GetReplayTimeFormat_Duration;             // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_230E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_4;          // 0x150(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Replay_DetailPanel.W_Replay_DetailPanel_C.BndEvt__W_Replay_DetailPanel_btn_Rename_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_Replay_DetailPanel_C_BndEvt__W_Replay_DetailPanel_btn_Rename_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Replay_DetailPanel.W_Replay_DetailPanel_C.BndEvt__W_Replay_DetailPanel_btn_Delete_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UW_Replay_DetailPanel_C_BndEvt__W_Replay_DetailPanel_btn_Delete_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Replay_DetailPanel.W_Replay_DetailPanel_C.ExecuteUbergraph_W_Replay_DetailPanel
struct UW_Replay_DetailPanel_C_ExecuteUbergraph_W_Replay_DetailPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2311[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


