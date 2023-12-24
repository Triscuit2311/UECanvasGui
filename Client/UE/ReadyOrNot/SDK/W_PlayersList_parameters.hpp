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

// 0x70 (0x70 - 0x0)
// Function W_PlayersList.W_PlayersList_C.Create Player Item
struct UW_PlayersList_C_Create_Player_Item_Params
{
public:
	class APlayerController*                     OwningPlayer;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLobbyPlayer                          Player;                                            // 0x8(0x58)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UW_PlayersList_Entry_C*                CallFunc_Create_ReturnValue;                       // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function W_PlayersList.W_PlayersList_C.Toggle Mute Player
struct UW_PlayersList_C_Toggle_Mute_Player_Params
{
public:
	struct FLobbyPlayer                          LobbyPlayer;                                       // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x88 (0x88 - 0x0)
// Function W_PlayersList.W_PlayersList_C.KickPlayer
struct UW_PlayersList_C_KickPlayer_Params
{
public:
	struct FLobbyPlayer                          LobbyPlayer;                                       // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerState*                          CallFunc_GetPlayerStateFromUniqueId_ReturnValue;   // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_FindTextInLocalizationTable_OutText;      // 0x60(0x18)(None)
	bool                                         CallFunc_FindTextInLocalizationTable_ReturnValue;  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_430D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function W_PlayersList.W_PlayersList_C.BP_GetDesiredFocusTarget
struct UW_PlayersList_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_PlayersList.W_PlayersList_C.PreConstruct
struct UW_PlayersList_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList.W_PlayersList_C.OnFocusLost
struct UW_PlayersList_C_OnFocusLost_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList.W_PlayersList_C.BndEvt__W_PlayersList_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
struct UW_PlayersList_C_BndEvt__W_PlayersList_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList.W_PlayersList_C.BndEvt__W_PlayersList_W_Button_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature
struct UW_PlayersList_C_BndEvt__W_PlayersList_W_Button_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F0 (0x1F0 - 0x0)
// Function W_PlayersList.W_PlayersList_C.ExecuteUbergraph_W_PlayersList
struct UW_PlayersList_C_ExecuteUbergraph_W_PlayersList_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_430E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x40(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x80(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x90(0x18)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_430F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FLobbyPlayer                          K2Node_MakeStruct_LobbyPlayer;                     // 0xC0(0x58)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4310[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBlueprintResultSwitch            CallFunc_ShowInviteUI_Result;                      // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4311[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLobbyPlayer                          CallFunc_Array_Get_Item;                           // 0x130(0x58)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4312[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4313[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x194(0x10)(ZeroConstructor, NoDestructor)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x1A4(0x8)(NoDestructor)
	uint8                                        Pad_4314[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4315[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4316[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x1E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x1E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


