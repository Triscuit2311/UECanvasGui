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

// 0x68 (0x68 - 0x0)
// Function W_VotePopUp_gamepad.W_VotePopUp_gamepad_C.UpdateVote
struct UW_VotePopUp_gamepad_C_UpdateVote_Params
{
public:
	class FText                                  CallFunc_GetNoVotes_ReturnValue;                   // 0x0(0x18)(None)
	class FText                                  CallFunc_GetYesVotes_ReturnValue;                  // 0x18(0x18)(None)
	enum class ESlateVisibility                  CallFunc_GetVoteNo_Visibility_ReturnValue;         // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4036[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetVoteQuestion_ReturnValue;              // 0x38(0x18)(None)
	class FText                                  CallFunc_VoteReason_ReturnValue;                   // 0x50(0x18)(None)
};

// 0x6 (0x6 - 0x0)
// Function W_VotePopUp_gamepad.W_VotePopUp_gamepad_C.GetVoteNo_Visibility
struct UW_VotePopUp_gamepad_C_GetVoteNo_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanVoteNo_Return_Value;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x35 (0x35 - 0x0)
// Function W_VotePopUp_gamepad.W_VotePopUp_gamepad_C.CanVoteNo
struct UW_VotePopUp_gamepad_C_CanVoteNo_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4037[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  K2Node_DynamicCast_AsReady_or_Not_Game_State;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4038[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AReadyOrNotPlayerState*>        CallFunc_GetPlayersAvailableForVote_ReturnValue;   // 0x20(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function W_VotePopUp_gamepad.W_VotePopUp_gamepad_C.GetVoteNoKeyBinding
struct UW_VotePopUp_gamepad_C_GetVoteNoKeyBinding_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  CallFunc_GetKeyFromInputActionName_ReturnValue;    // 0x20(0x18)(HasGetValueTypeHash)
	class FString                                CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue; // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(None)
};

// 0x60 (0x60 - 0x0)
// Function W_VotePopUp_gamepad.W_VotePopUp_gamepad_C.GetVoteYesKeyBinding
struct UW_VotePopUp_gamepad_C_GetVoteYesKeyBinding_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  CallFunc_GetKeyFromInputActionName_ReturnValue;    // 0x20(0x18)(HasGetValueTypeHash)
	class FString                                CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue; // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function W_VotePopUp_gamepad.W_VotePopUp_gamepad_C.GetVoteQuestion
struct UW_VotePopUp_gamepad_C_GetVoteQuestion_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x48 (0x48 - 0x0)
// Function W_VotePopUp_gamepad.W_VotePopUp_gamepad_C.GetText_4
struct UW_VotePopUp_gamepad_C_GetText_4_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACoopGS*                               K2Node_DynamicCast_AsCoop_GS;                      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4039[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x30(0x18)(None)
};

// 0x48 (0x48 - 0x0)
// Function W_VotePopUp_gamepad.W_VotePopUp_gamepad_C.GetNoVotes
struct UW_VotePopUp_gamepad_C_GetNoVotes_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACoopGS*                               K2Node_DynamicCast_AsCoop_GS;                      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_403A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x30(0x18)(None)
};

// 0x48 (0x48 - 0x0)
// Function W_VotePopUp_gamepad.W_VotePopUp_gamepad_C.GetYesVotes
struct UW_VotePopUp_gamepad_C_GetYesVotes_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACoopGS*                               K2Node_DynamicCast_AsCoop_GS;                      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_403B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x30(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function W_VotePopUp_gamepad.W_VotePopUp_gamepad_C.GetVoteVisibility
struct UW_VotePopUp_gamepad_C_GetVoteVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_VotePopUp_gamepad.W_VotePopUp_gamepad_C.GetbIsEnabled_0
struct UW_VotePopUp_gamepad_C_GetbIsEnabled_0_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function W_VotePopUp_gamepad.W_VotePopUp_gamepad_C.GetText_1
struct UW_VotePopUp_gamepad_C_GetText_1_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseController_C*                  K2Node_DynamicCast_AsBP_Base_Controller;           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_403C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_VotePopUp_gamepad.W_VotePopUp_gamepad_C.VoteNo_Visibility_2
struct UW_VotePopUp_gamepad_C_VoteNo_Visibility_2_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_VotePopUp_gamepad.W_VotePopUp_gamepad_C.VoteNo_Visibility_1
struct UW_VotePopUp_gamepad_C_VoteNo_Visibility_1_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_VotePopUp_gamepad.W_VotePopUp_gamepad_C.VoteReason
struct UW_VotePopUp_gamepad_C_VoteReason_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x31 (0x31 - 0x0)
// Function W_VotePopUp_gamepad.W_VotePopUp_gamepad_C.StartVote
struct UW_VotePopUp_gamepad_C_StartVote_Params
{
public:
	class FText                                  VoteReason;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  VoteQuestion;                                      // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         bCanVoteNo;                                        // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x51 (0x51 - 0x0)
// Function W_VotePopUp_gamepad.W_VotePopUp_gamepad_C.ExecuteUbergraph_W_VotePopUp_gamepad
struct UW_VotePopUp_gamepad_C_ExecuteUbergraph_W_VotePopUp_gamepad_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_VoteReason;                     // 0x10(0x18)(None)
	class FText                                  K2Node_CustomEvent_VoteQuestion;                   // 0x28(0x18)(None)
	bool                                         K2Node_CustomEvent_bCanVoteNo;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_403D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_BaseController_C*                  K2Node_DynamicCast_AsBP_Base_Controller;           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


