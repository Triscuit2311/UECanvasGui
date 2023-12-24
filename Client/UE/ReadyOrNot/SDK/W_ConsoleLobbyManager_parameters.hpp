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

// 0x28 (0x28 - 0x0)
// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.PopulateAudioWidget
struct UW_ConsoleLobbyManager_C_PopulateAudioWidget_Params
{
public:
	enum class EVoiceType                        Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F63[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F64[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerState*                K2Node_DynamicCast_AsReady_or_Not_Player_State;    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EVoiceType                        CallFunc_GetVoiceType_ReturnValue;                 // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F65[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.BP_GetDesiredFocusTarget
struct UW_ConsoleLobbyManager_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.BndEvt__W_ConsoleLobbyManager_KickButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
struct UW_ConsoleLobbyManager_C_BndEvt__W_ConsoleLobbyManager_KickButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.BndEvt__W_ConsoleLobbyManager_MuteButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
struct UW_ConsoleLobbyManager_C_BndEvt__W_ConsoleLobbyManager_MuteButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.BndEvt__W_ConsoleLobbyManager_ProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
struct UW_ConsoleLobbyManager_C_BndEvt__W_ConsoleLobbyManager_ProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.BndEvt__W_ConsoleLobbyManager_Audio_DefaultVoipChannel_K2Node_ComponentBoundEvent_5_OnPageIndexChanged__DelegateSignature
struct UW_ConsoleLobbyManager_C_BndEvt__W_ConsoleLobbyManager_Audio_DefaultVoipChannel_K2Node_ComponentBoundEvent_5_OnPageIndexChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F66[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Value;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.BndEvt__W_ConsoleLobbyManager_W_Page_K2Node_ComponentBoundEvent_3_OnFooterButtonClicked__DelegateSignature
struct UW_ConsoleLobbyManager_C_BndEvt__W_ConsoleLobbyManager_W_Page_K2Node_ComponentBoundEvent_3_OnFooterButtonClicked__DelegateSignature_Params
{
public:
	class FString                                ButtonID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0xCB (0xCB - 0x0)
// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.ExecuteUbergraph_W_ConsoleLobbyManager
struct UW_ConsoleLobbyManager_C_ExecuteUbergraph_W_ConsoleLobbyManager_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	enum class EVoiceType                        Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVoiceType                        Temp_byte_Variable_1;                              // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F67[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_2;               // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_1;               // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F68[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerState*                K2Node_DynamicCast_AsReady_or_Not_Player_State;    // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F69[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_Value;                  // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EVoiceType                        K2Node_Select_Default;                             // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F6A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBPUniqueNetId                        CallFunc_GetUniqueNetID_UniqueNetId;               // 0x88(0x20)(None)
	class FString                                CallFunc_UniqueNetIdToString_String;               // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_ButtonID;               // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


