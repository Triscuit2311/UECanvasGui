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
// Function W_PreMission_Tablet_PlayerNode.W_PreMission_Tablet_PlayerNode_C.PreConstruct
struct UW_PreMission_Tablet_PlayerNode_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function W_PreMission_Tablet_PlayerNode.W_PreMission_Tablet_PlayerNode_C.SetupWidget
struct UW_PreMission_Tablet_PlayerNode_C_SetupWidget_Params
{
public:
	int32                                        NewParam;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          NewParam2;                                         // 0x4(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function W_PreMission_Tablet_PlayerNode.W_PreMission_Tablet_PlayerNode_C.ExecuteUbergraph_W_PreMission_Tablet_PlayerNode
struct UW_PreMission_Tablet_PlayerNode_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerNode_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3711[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetPlayerTeamColor_LinearColor;           // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetPlayerTeamColor_SlateColor;            // 0x18(0x28)(None)
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPlanningPlayerNumber_ReturnValue;      // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3712[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x58(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_NewParam;                       // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_CustomEvent_NewParam2;                      // 0x84(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3713[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x98(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xB0(0x18)(None)
};

}
}


