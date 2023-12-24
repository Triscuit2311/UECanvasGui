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
// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.GetFocusTarget
struct UW_MissionSelect_EntryPoint_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.BackPage
struct UW_MissionSelect_EntryPoint_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.Hide
struct UW_MissionSelect_EntryPoint_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.SetInputMode
struct UW_MissionSelect_EntryPoint_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.ChangePage
struct UW_MissionSelect_EntryPoint_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.SetupEntryPoint
struct UW_MissionSelect_EntryPoint_C_SetupEntryPoint_Params
{
public:
	struct FEntryPoint                           EntryPoint;                                        // 0x0(0x78)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.BndEvt__W_MissionSelect_EntryPoint_ButtonBase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
struct UW_MissionSelect_EntryPoint_C_BndEvt__W_MissionSelect_EntryPoint_ButtonBase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.Reveal
struct UW_MissionSelect_EntryPoint_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.ExecuteUbergraph_W_MissionSelect_EntryPoint
struct UW_MissionSelect_EntryPoint_C_ExecuteUbergraph_W_MissionSelect_EntryPoint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay_1;                              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsGamepad;                            // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43B4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_PageName;                             // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEntryPoint                           K2Node_CustomEvent_EntryPoint;                     // 0x18(0x78)(None)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay;                                // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C.OnClicked__DelegateSignature
struct UW_MissionSelect_EntryPoint_C_OnClicked__DelegateSignature_Params
{
public:
	class UW_MissionSelect_EntryPoint_C*         Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


