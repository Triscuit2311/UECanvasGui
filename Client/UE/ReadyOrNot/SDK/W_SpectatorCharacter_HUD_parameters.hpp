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

// 0x50 (0x50 - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetCharacterName
struct UW_SpectatorCharacter_HUD_C_GetCharacterName_Params
{
public:
	class AReadyOrNotCharacter*                  InCharacter;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Return_Value;                                      // 0x8(0x18)(Parm, OutParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4424[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x38(0x18)(None)
};

// 0x3A (0x3A - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.AreAllPlayersDead
struct UW_SpectatorCharacter_HUD_C_AreAllPlayersDead_Params
{
public:
	bool                                         AllPlayersDead;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_442F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerCharacter*>              CallFunc_GetAllActorsOfClass_OutActors;            // 0x10(0x10)(ReferenceParm)
	class APlayerCharacter*                      CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalPlayer_ReturnValue;                // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4430[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCharacterHealthComponent*             CallFunc_GetHealthComponent_ReturnValue;           // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetReinforcementsTextVisibility
struct UW_SpectatorCharacter_HUD_C_GetReinforcementsTextVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4432[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x8(0x18)(None)
	class FText                                  CallFunc_GetReinforcementsTimeRemainingText_ReturnValue; // 0x20(0x18)(None)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10E (0x10E - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetVoteHotkeyVisibility
struct UW_SpectatorCharacter_HUD_C_GetVoteHotkeyVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_443A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EActionMappingFilter>      K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm)
	struct FActionMappingStruct                  K2Node_MakeStruct_ActionMappingStruct;             // 0x18(0x28)(None)
	TArray<enum class EActionMappingFilter>      K2Node_MakeArray_Array_1;                          // 0x40(0x10)(ReferenceParm)
	bool                                         CallFunc_GetAllActionMappings_ReturnValue;         // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_443B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActionMappingStruct>          CallFunc_GetAllActionMappings_ActionMappings;      // 0x58(0x10)(ReferenceParm)
	struct FActionMappingStruct                  K2Node_MakeStruct_ActionMappingStruct_1;           // 0x68(0x28)(None)
	struct FActionMappingStruct                  CallFunc_Array_Get_Item;                           // 0x90(0x28)(None)
	bool                                         CallFunc_GetAllActionMappings_ReturnValue_1;       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_443C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActionMappingStruct>          CallFunc_GetAllActionMappings_ActionMappings_1;    // 0xC0(0x10)(ReferenceParm)
	struct FActionMappingStruct                  CallFunc_Array_Get_Item_1;                         // 0xD0(0x28)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_443D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x102(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x103(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_443E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x10D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x190 (0x190 - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetVoteHotkeyText
struct UW_SpectatorCharacter_HUD_C_GetVoteHotkeyText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	TArray<enum class EActionMappingFilter>      K2Node_MakeArray_Array;                            // 0x18(0x10)(ReferenceParm)
	struct FActionMappingStruct                  K2Node_MakeStruct_ActionMappingStruct;             // 0x28(0x28)(None)
	TArray<enum class EActionMappingFilter>      K2Node_MakeArray_Array_1;                          // 0x50(0x10)(ReferenceParm)
	bool                                         CallFunc_GetAllActionMappings_ReturnValue;         // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_443F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActionMappingStruct>          CallFunc_GetAllActionMappings_ActionMappings;      // 0x68(0x10)(ReferenceParm)
	struct FActionMappingStruct                  K2Node_MakeStruct_ActionMappingStruct_1;           // 0x78(0x28)(None)
	bool                                         CallFunc_GetAllActionMappings_ReturnValue_1;       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4440[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActionMappingStruct>          CallFunc_GetAllActionMappings_ActionMappings_1;    // 0xA8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Key_GetDisplayName_ReturnValue;           // 0xB8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xD0(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Key_GetDisplayName_ReturnValue_1;         // 0x110(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x128(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x168(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x178(0x18)(None)
};

// 0xD8 (0xD8 - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetVoteVotersText
struct UW_SpectatorCharacter_HUD_C_GetVoteVotersText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  K2Node_DynamicCast_AsReady_or_Not_Game_State;      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4441[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x70(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC0(0x18)(None)
};

// 0x98 (0x98 - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetVoteTimeLeftText
struct UW_SpectatorCharacter_HUD_C_GetVoteTimeLeftText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  K2Node_DynamicCast_AsReady_or_Not_Game_State;      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4442[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x70(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x80(0x18)(None)
};

// 0x48 (0x48 - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetVoteName
struct UW_SpectatorCharacter_HUD_C_GetVoteName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  K2Node_DynamicCast_AsReady_or_Not_Game_State;      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4443[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetHudDescription_ReturnValue;            // 0x30(0x18)(None)
};

// 0xC0 (0xC0 - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetVoteCallerName
struct UW_SpectatorCharacter_HUD_C_GetVoteCallerName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  K2Node_DynamicCast_AsReady_or_Not_Game_State;      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4444[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x40(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x58(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x98(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xA8(0x18)(None)
};

// 0x1A (0x1A - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetVoteDisplayVisibility
struct UW_SpectatorCharacter_HUD_C_GetVoteDisplayVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4445[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  K2Node_DynamicCast_AsReady_or_Not_Game_State;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA1 (0xA1 - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetEvidenceLeftText
struct UW_SpectatorCharacter_HUD_C_GetEvidenceLeftText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	int32                                        CallFunc_GetEvidenceCount_EvidenceCollected;       // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetEvidenceCount_TotalEvidence;           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4446[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x28(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x68(0x10)(ReferenceParm)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x80(0x18)(None)
	class ACoopGS*                               K2Node_DynamicCast_AsCoop_GS;                      // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA1 (0xA1 - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetReportsLeftText
struct UW_SpectatorCharacter_HUD_C_GetReportsLeftText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	int32                                        CallFunc_GetReportCount_ReportedCount;             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetReportCount_TotalReports;              // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4447[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x28(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x68(0x10)(ReferenceParm)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x80(0x18)(None)
	class ACoopGS*                               K2Node_DynamicCast_AsCoop_GS;                      // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetMissionEndedVisibility
struct UW_SpectatorCharacter_HUD_C_GetMissionEndedVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4448[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACoopGS*                               K2Node_DynamicCast_AsCoop_GS;                      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetReinforcementsTimeRemainingText
struct UW_SpectatorCharacter_HUD_C_GetReinforcementsTimeRemainingText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerController*           K2Node_DynamicCast_AsReady_or_Not_Player_Controller; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4449[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AArrestAndRescueGS*                    K2Node_DynamicCast_AsArrest_and_Rescue_GS;         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETeamType                         CallFunc_GetTeamType_ReturnValue;                  // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_444A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameState*                  K2Node_DynamicCast_AsReady_or_Not_Game_State;      // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_444B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_ConvertFloatToStringMinutes_ReturnValue;  // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x68(0x18)(None)
};

// 0x19 (0x19 - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetReinforcementsVisibility
struct UW_SpectatorCharacter_HUD_C_GetReinforcementsVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_444C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  K2Node_DynamicCast_AsReady_or_Not_Game_State;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetMissionCompleteFailedVisibility
struct UW_SpectatorCharacter_HUD_C_GetMissionCompleteFailedVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccessfulCompletion;                             // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetMissionCompleteFailedColor
struct UW_SpectatorCharacter_HUD_C_GetMissionCompleteFailedColor_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm)
};

// 0x19 (0x19 - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetMissionCompleteFailedText
struct UW_SpectatorCharacter_HUD_C_GetMissionCompleteFailedText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         bSuccessfulCompletion;                             // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2E6 (0x2E6 - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.GetControlsPrompt
struct UW_SpectatorCharacter_HUD_C_GetControlsPrompt_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	TArray<enum class EActionMappingFilter>      K2Node_MakeArray_Array;                            // 0x18(0x10)(ReferenceParm)
	struct FActionMappingStruct                  K2Node_MakeStruct_ActionMappingStruct;             // 0x28(0x28)(None)
	TArray<enum class EActionMappingFilter>      K2Node_MakeArray_Array_1;                          // 0x50(0x10)(ReferenceParm)
	bool                                         CallFunc_GetAllActionMappings_ReturnValue;         // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_444D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActionMappingStruct>          CallFunc_GetAllActionMappings_ActionMappings;      // 0x68(0x10)(ReferenceParm)
	struct FActionMappingStruct                  K2Node_MakeStruct_ActionMappingStruct_1;           // 0x78(0x28)(None)
	struct FActionMappingStruct                  CallFunc_Array_Get_Item;                           // 0xA0(0x28)(None)
	bool                                         CallFunc_GetAllActionMappings_ReturnValue_1;       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_444E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActionMappingStruct>          CallFunc_GetAllActionMappings_ActionMappings_1;    // 0xD0(0x10)(ReferenceParm)
	struct FActionMappingStruct                  CallFunc_Array_Get_Item_1;                         // 0xE0(0x28)(None)
	class FString                                CallFunc_Abbreviate_Key_Abreviated_Name;           // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x118(0x18)(None)
	class FString                                CallFunc_Abbreviate_Key_Abreviated_Name_1;         // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x140(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x180(0x18)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x198(0x10)(ReferenceParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x1A8(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1E8(0x18)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_3;                          // 0x200(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x210(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x228(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x268(0x40)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_444F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_4;                          // 0x2B0(0x10)(ReferenceParm)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4450[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x2C8(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x2E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2E5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.OnNewCharacterViewed
struct UW_SpectatorCharacter_HUD_C_OnNewCharacterViewed_Params
{
public:
	class AReadyOrNotCharacter*                  NewViewTarget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.Tick
struct UW_SpectatorCharacter_HUD_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.CenterPrint
struct UW_SpectatorCharacter_HUD_C_CenterPrint_Params
{
public:
	class FName                                  MessageType;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Duration;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4451[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCharacter*                      Other;                                             // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.On Center Print
struct UW_SpectatorCharacter_HUD_C_On_Center_Print_Params
{
public:
	class FName                                  Message_Type;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Duration;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4452[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCharacter*                      Other;                                             // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2AA (0x2AA - 0x0)
// Function W_SpectatorCharacter_HUD.W_SpectatorCharacter_HUD_C.ExecuteUbergraph_W_SpectatorCharacter_HUD
struct UW_SpectatorCharacter_HUD_C_ExecuteUbergraph_W_SpectatorCharacter_HUD_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMultiplayer_ReturnValue;                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4453[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4454[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotCharacter*                  K2Node_Event_NewViewTarget;                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4455[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetCharacterName_Return_Value;            // 0x20(0x18)(None)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x38(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4456[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  K2Node_DynamicCast_AsReady_or_Not_Game_State;      // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4457[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4458[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue;                // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASpectatePawn*                         K2Node_DynamicCast_AsSpectate_Pawn;                // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4459[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0xB4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0xD0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_445A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_RInterpTo_ReturnValue;                    // 0xE8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_445B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerState*                K2Node_DynamicCast_AsReady_or_Not_Player_State;    // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_445C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_1;               // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  K2Node_DynamicCast_AsReady_or_Not_Game_State_1;    // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_445D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASpectatorPawn*                        CallFunc_GetSpectatorPawn_ReturnValue;             // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASpectatePawn*                         K2Node_DynamicCast_AsSpectate_Pawn_1;              // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_445E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_MessageType;                          // 0x154(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Duration;                             // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      K2Node_Event_Other;                                // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_Message_Type;                   // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Duration;                       // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_445F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCharacter*                      K2Node_CustomEvent_Other;                          // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_2;               // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRenderOpacity_ReturnValue;             // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x18C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4460[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_3;               // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_3;              // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  K2Node_DynamicCast_AsReady_or_Not_Game_State_2;    // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4461[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRChatMessage                         CallFunc_Array_Get_Item;                           // 0x1B8(0x68)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x224(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4462[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_4;        // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ReplayController_C*                K2Node_DynamicCast_AsBP_Replay_Controller;         // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4463[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerController*           K2Node_DynamicCast_AsReady_or_Not_Player_Controller; // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x249(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4464[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_4;               // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  K2Node_DynamicCast_AsReady_or_Not_Game_State_3;    // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x261(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasWidgetInViewport_ReturnValue;          // 0x262(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4465[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x264(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4466[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x278(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4467[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x290(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4468[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetsData*                          CallFunc_GetWidgetData_ReturnValue;                // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AreAllPlayersDead_AllPlayersDead;         // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x2A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


