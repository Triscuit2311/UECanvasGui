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

// 0x8 (0x8 - 0x0)
// Function W_Tablet_Roster.W_Tablet_Roster_C.GetFocusTarget
struct UW_Tablet_Roster_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Tablet_Roster.W_Tablet_Roster_C.BackPage
struct UW_Tablet_Roster_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Tablet_Roster.W_Tablet_Roster_C.SetVisualTheme
struct UW_Tablet_Roster_C_SetVisualTheme_Params
{
public:
	bool                                         UseDarkTheme;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function W_Tablet_Roster.W_Tablet_Roster_C.AudioPlayerVisible
struct UW_Tablet_Roster_C_AudioPlayerVisible_Params
{
public:
	class UW_AudioPlayer_C*                      PlayerWidget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayerVisible;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_Tablet_Roster.W_Tablet_Roster_C.Reveal
struct UW_Tablet_Roster_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_Tablet_Roster.W_Tablet_Roster_C.Hide
struct UW_Tablet_Roster_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Tablet_Roster.W_Tablet_Roster_C.SetInputMode
struct UW_Tablet_Roster_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Tablet_Roster.W_Tablet_Roster_C.ChangePage
struct UW_Tablet_Roster_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Tablet_Roster.W_Tablet_Roster_C.SetTabletState
struct UW_Tablet_Roster_C_SetTabletState_Params
{
public:
	bool                                         IsAwake;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x61 (0x61 - 0x0)
// Function W_Tablet_Roster.W_Tablet_Roster_C.ExecuteUbergraph_W_Tablet_Roster
struct UW_Tablet_Roster_C_ExecuteUbergraph_W_Tablet_Roster_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActivatableWidget*              CallFunc_GetActiveWidget_ReturnValue;              // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ITabletUI_C>          K2Node_DynamicCast_AsTablet_UI;                    // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_UseDarkTheme;                         // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37A2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_AudioPlayer_C*                      K2Node_Event_PlayerWidget;                         // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_PlayerVisible;                        // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Delay_1;                              // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay;                                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsGamepad;                            // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37A7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_PageName;                             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInLobby_ReturnValue;                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCommanderMode_ReturnValue;              // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37A9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_PreMission_Tablet_RosterManager_C*  CallFunc_BP_AddWidget_ReturnValue;                 // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Roster_Status_C*                    CallFunc_BP_AddWidget_ReturnValue_1;               // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsAwake;                              // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


