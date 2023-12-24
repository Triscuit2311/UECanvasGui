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

// 0x48 (0x48 - 0x0)
// Function W_AG_PlayerList.W_AG_PlayerList_C.Get_Name_Text_0
struct UW_AG_PlayerList_C_Get_Name_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x30(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function W_AG_PlayerList.W_AG_PlayerList_C.Get_TextBlock_0_Text_0
struct UW_AG_PlayerList_C_Get_TextBlock_0_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_Multiply_ByteByte_ReturnValue;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EE3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_ByteToText_ReturnValue;              // 0x20(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function W_AG_PlayerList.W_AG_PlayerList_C.Get_Score_Text_0
struct UW_AG_PlayerList_C_Get_Score_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EE4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function W_AG_PlayerList.W_AG_PlayerList_C.Get_Damage_Text_0
struct UW_AG_PlayerList_C_Get_Damage_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EE5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function W_AG_PlayerList.W_AG_PlayerList_C.GetDeathsText
struct UW_AG_PlayerList_C_GetDeathsText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EE6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function W_AG_PlayerList.W_AG_PlayerList_C.Get_Arrests_Text_0
struct UW_AG_PlayerList_C_Get_Arrests_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function W_AG_PlayerList.W_AG_PlayerList_C.Get_Kills_Text_0
struct UW_AG_PlayerList_C_Get_Kills_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EE8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)(None)
};

// 0x88 (0x88 - 0x0)
// Function W_AG_PlayerList.W_AG_PlayerList_C.GetBrush_0
struct UW_AG_PlayerList_C_GetBrush_0_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0x88)(Parm, OutParm, ReturnParm)
};

// 0x3C (0x3C - 0x0)
// Function W_AG_PlayerList.W_AG_PlayerList_C.Tick
struct UW_AG_PlayerList_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_AG_PlayerList.W_AG_PlayerList_C.BndEvt__W_AG_PlayerList_Btn_Ban_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_AG_PlayerList_C_BndEvt__W_AG_PlayerList_Btn_Ban_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_AG_PlayerList.W_AG_PlayerList_C.BndEvt__W_AG_PlayerList_Btn_Kick_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UW_AG_PlayerList_C_BndEvt__W_AG_PlayerList_Btn_Kick_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function W_AG_PlayerList.W_AG_PlayerList_C.ExecuteUbergraph_W_AG_PlayerList
struct UW_AG_PlayerList_C_ExecuteUbergraph_W_AG_PlayerList_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EE9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x8(0x18)(None)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x20(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EEA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPUniqueNetId                        CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId; // 0x60(0x20)(None)
	bool                                         CallFunc_IsValidUniqueNetID_ReturnValue;           // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EEB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_UniqueNetIdToString_String;               // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xB8(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EEC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue_1; // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


