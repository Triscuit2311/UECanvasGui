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
// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.OnLocalPlayerReadyChange
struct UW_ReadyRoomWidget_C_OnLocalPlayerReadyChange_Params
{
public:
	bool                                         bReady;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.Tick
struct UW_ReadyRoomWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.OnCountdownStart
struct UW_ReadyRoomWidget_C_OnCountdownStart_Params
{
public:
	float                                        Countdown;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.OnInputChange
struct UW_ReadyRoomWidget_C_OnInputChange_Params
{
public:
	enum class ECommonInputType                  bNewInputType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA10 (0xA10 - 0x0)
// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.ExecuteUbergraph_W_ReadyRoomWidget
struct UW_ReadyRoomWidget_C_ExecuteUbergraph_W_ReadyRoomWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_FCeil_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x18(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x30(0x10)(ZeroConstructor, NoDestructor)
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F2E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  Temp_struct_Variable;                              // 0x50(0x18)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x68(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bReady;                         // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F2F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x7C(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xD0(0x18)(None)
	class AMissionPortal*                        CallFunc_GetActorOfClass_ReturnValue;              // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Countdown;                      // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMissionPortal*                        CallFunc_GetActorOfClass_ReturnValue_1;            // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x100(0x10)(ZeroConstructor, NoDestructor)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPlayersReady_Ready;                    // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPlayersReady_Total;                    // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetPlayersReady_ReturnValue;              // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F30[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x160(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetSelectedMission_OutMissionURL;         // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x180(0x18)(None)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F31[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLevelDataLookupTable                 CallFunc_GetMapDetailsFromName_ReturnValue;        // 0x1A0(0x788)(None)
	class UTexture2D*                            CallFunc_GetLazyLoadedImage_ReturnValue;           // 0x928(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x930(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x938(0x10)(ZeroConstructor, NoDestructor)
	enum class ECommonInputType                  K2Node_CustomEvent_bNewInputType;                  // 0x948(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x949(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x94A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F32[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x950(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  CallFunc_GetKeyFromInputActionName_ReturnValue;    // 0x958(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_Key_IsValid_ReturnValue;                  // 0x970(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F33[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_Select_Default;                             // 0x978(0x18)(HasGetValueTypeHash)
	class FText                                  CallFunc_FormatPlayerActionText_ReturnValue;       // 0x990(0x18)(None)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_1;            // 0x9A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x9B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  CallFunc_GetKeyFromInputActionName_ReturnValue_1;  // 0x9B8(0x18)(HasGetValueTypeHash)
	class ALobbyGS*                              K2Node_DynamicCast_AsLobby_GS;                     // 0x9D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x9D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F34[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x9E0(0x18)(None)
	class FText                                  CallFunc_FormatPlayerActionText_ReturnValue_1;     // 0x9F8(0x18)(None)
};

}
}


