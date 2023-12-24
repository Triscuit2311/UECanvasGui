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

// 0x10 (0x10 - 0x0)
// Function BP_GameInstance.BP_GameInstance_C.AddPauseGameCondition
struct UBP_GameInstance_C_AddPauseGameCondition_Params
{
public:
	class FString                                PauseCondition;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_GameInstance.BP_GameInstance_C.RemovePauseGameCondition
struct UBP_GameInstance_C_RemovePauseGameCondition_Params
{
public:
	class FString                                PauseCondition;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_GameInstance.BP_GameInstance_C.PauseGameWithConditon
struct UBP_GameInstance_C_PauseGameWithConditon_Params
{
public:
	class FString                                NewCondition;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x130 (0x130 - 0x0)
// Function BP_GameInstance.BP_GameInstance_C.OnSessionInviteAccepted
struct UBP_GameInstance_C_OnSessionInviteAccepted_Params
{
public:
	int32                                        LocalPlayerNum;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4510[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPUniqueNetId                        PersonInvited;                                     // 0x8(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBlueprintSessionResult               SessionToJoin;                                     // 0x28(0x108)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x21C (0x21C - 0x0)
// Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
struct UBP_GameInstance_C_ExecuteUbergraph_BP_GameInstance_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_GetVolumes_MasterVolume;                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetVolumes_UIVolume;                      // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetVolumes_SFXVolume;                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetVolumes_MusicVolume;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetVolumes_VOIPVolume;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetVolumes_ReturnValue;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4516[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_PauseCondition_1;                     // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_PauseCondition;                       // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4518[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x54(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetGamePaused_ReturnValue;                // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x6E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x6F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x70(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x80(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x88(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x98(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetGamePaused_ReturnValue_1;              // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_451A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_NewCondition;                   // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_LocalPlayerNum;                       // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_451C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPUniqueNetId                        K2Node_Event_PersonInvited;                        // 0xC0(0x20)(None)
	struct FBlueprintSessionResult               K2Node_Event_SessionToJoin;                        // 0xE0(0x108)(ConstParm)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerController*           K2Node_DynamicCast_AsReady_or_Not_Player_Controller; // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_451E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_LoadColorblindStrength_ColorblindStrength; // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadColorblindStrength_ReturnValue;       // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_451F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDestroySessionCallbackProxy*          CallFunc_DestroySession_ReturnValue;               // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelStreaming*                       CallFunc_StreamInSession_OutStreamedLevel;         // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StreamInSession_ReturnValue;              // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x219(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EColorVisionDeficiency            CallFunc_LoadColorblindMode_ColorVisionDeficiency; // 0x21A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadColorblindMode_ReturnValue;           // 0x21B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


