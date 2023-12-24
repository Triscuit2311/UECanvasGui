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
// Function W_FPSCounter.W_FPSCounter_C.PreConstruct
struct UW_FPSCounter_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1E8 (0x1E8 - 0x0)
// Function W_FPSCounter.W_FPSCounter_C.ExecuteUbergraph_W_FPSCounter
struct UW_FPSCounter_C_ExecuteUbergraph_W_FPSCounter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetShowFPS_bShowFPS;                      // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetShowFPS_ReturnValue;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42FA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x18(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x58(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x68(0x18)(None)
	bool                                         CallFunc_GetReflexLatency_bGameToRenderLatencyEnabled; // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetReflexLatency_GametoRenderLatency;     // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetReflexLatency_bGameLatencyEnabled;     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetReflexLatency_GameLatencyInMS;         // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetReflexLatency_bRenderLatencyEnabled;   // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetReflexLatency_RenderLatencyInMS;       // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x98(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0xD8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0xE8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x100(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x140(0x10)(ReferenceParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x150(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x190(0x18)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_3;                          // 0x1A8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_3;                     // 0x1B8(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1D0(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x1E0(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


