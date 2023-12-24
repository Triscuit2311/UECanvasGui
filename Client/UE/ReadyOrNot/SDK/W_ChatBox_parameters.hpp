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

// 0x38 (0x38 - 0x0)
// Function W_ChatBox.W_ChatBox_C.SetInput
struct UW_ChatBox_C_SetInput_Params
{
public:
	TArray<class UUserWidget*>                   CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0(0x10)(ReferenceParm, ContainsInstancedReference)
	class UUserWidget*                           CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                   CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
	class UUserWidget*                           CallFunc_Array_Get_Item_1;                         // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function W_ChatBox.W_ChatBox_C.ShowChatBox
struct UW_ChatBox_C_ShowChatBox_Params
{
public:
	bool                                         bTeamChat_;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AnyInViewport;                                     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F17[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWidgetLookupData                     CallFunc_GetWidgetDataFromLookupData_ReturnValue;  // 0x8(0x30)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUserWidget*>                   CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x40(0x10)(ReferenceParm, ContainsInstancedReference)
	class UUserWidget*                           CallFunc_Array_Get_Item;                           // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInViewport_ReturnValue;                 // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F1A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadHUDSettings_bShowHud;                 // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bCurvedHUD;               // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowCompass;             // 0x66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowWeaponHUD;           // 0x67(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowMagazineHUD;         // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowChat;                // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bSwayHUD;                 // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_b2DReload;                // 0x6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_LoadHUDSettings_IconScale;                // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_LoadHUDSettings_QuickThrowScale;          // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadHUDSettings_FireModeDisplayOption;    // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadHUDSettings_bShowPlayerNames;         // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowButtonPrompts;       // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_ReturnValue;              // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F1C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function W_ChatBox.W_ChatBox_C.BndEvt__EditableTextBox_220_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UW_ChatBox_C_BndEvt__EditableTextBox_220_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function W_ChatBox.W_ChatBox_C.OnChatMessageReceived_Event_0
struct UW_ChatBox_C_OnChatMessageReceived_Event_0_Params
{
public:
	struct FRChatMessage                         Message;                                           // 0x0(0x68)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_ChatBox.W_ChatBox_C.OnFocusLost
struct UW_ChatBox_C_OnFocusLost_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x298 (0x298 - 0x0)
// Function W_ChatBox.W_ChatBox_C.ExecuteUbergraph_W_ChatBox
struct UW_ChatBox_C_ExecuteUbergraph_W_ChatBox_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F56[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerController*           K2Node_DynamicCast_AsReady_or_Not_Player_Controller; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F58[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UChatMessage_Entry_C*                  CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRChatMessage>                 CallFunc_RetrieveChatLog_OutMessages;              // 0x28(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x3C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_2F5B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x50(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x58(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F5D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x70(0x8)(NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x78(0x18)(ConstParm)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F5E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRChatMessage                         K2Node_CustomEvent_Message;                        // 0xB0(0x68)(None)
	class AReadyOrNotGameState*                  K2Node_DynamicCast_AsReady_or_Not_Game_State;      // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F60[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x124(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_2F61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x138(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F64[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadHUDSettings_bShowHud;                 // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bCurvedHUD;               // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowCompass;             // 0x152(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowWeaponHUD;           // 0x153(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowMagazineHUD;         // 0x154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowChat;                // 0x155(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bSwayHUD;                 // 0x156(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_b2DReload;                // 0x157(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_LoadHUDSettings_IconScale;                // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_LoadHUDSettings_QuickThrowScale;          // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadHUDSettings_FireModeDisplayOption;    // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadHUDSettings_bShowPlayerNames;         // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowButtonPrompts;       // 0x165(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_ReturnValue;              // 0x166(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x167(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowHud_1;               // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bCurvedHUD_1;             // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowCompass_1;           // 0x16A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowWeaponHUD_1;         // 0x16B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowMagazineHUD_1;       // 0x16C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowChat_1;              // 0x16D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bSwayHUD_1;               // 0x16E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_b2DReload_1;              // 0x16F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_LoadHUDSettings_IconScale_1;              // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_LoadHUDSettings_QuickThrowScale_1;        // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadHUDSettings_FireModeDisplayOption_1;  // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadHUDSettings_bShowPlayerNames_1;       // 0x17C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowButtonPrompts_1;     // 0x17D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_ReturnValue_1;            // 0x17E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F69[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerController*           K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1; // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F6B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x194(0x8)(NoDestructor)
	uint8                                        Pad_2F6D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x1A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerState*                K2Node_DynamicCast_AsReady_or_Not_Player_State;    // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F6E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRChatMessage                         K2Node_MakeStruct_RChatMessage;                    // 0x1C0(0x68)(None)
	enum class ETeamType                         CallFunc_GetTeam_ReturnValue;                      // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StringIsEmpty_ReturnValue;                // 0x229(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F6F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRChatMessage                         K2Node_MakeStruct_RChatMessage_1;                  // 0x230(0x68)(None)
};

}
}


