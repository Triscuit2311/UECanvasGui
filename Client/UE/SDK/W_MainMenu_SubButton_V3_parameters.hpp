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

// 0x59 (0x59 - 0x0)
// Function W_MainMenu_SubButton_V3.W_MainMenu_SubButton_V3_C.SetState
struct UW_MainMenu_SubButton_V3_C_SetState_Params
{
public:
	bool                                         Hovered;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Selected;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F9[0x6];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           White_90;                                          // 0x8(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           White_40;                                          // 0x30(0x28)(Edit, BlueprintVisible)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_MainMenu_SubButton_V3.W_MainMenu_SubButton_V3_C.PreConstruct
struct UW_MainMenu_SubButton_V3_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_MainMenu_SubButton_V3.W_MainMenu_SubButton_V3_C.OnAddedToFocusPath
struct UW_MainMenu_SubButton_V3_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_MainMenu_SubButton_V3.W_MainMenu_SubButton_V3_C.OnRemovedFromFocusPath
struct UW_MainMenu_SubButton_V3_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function W_MainMenu_SubButton_V3.W_MainMenu_SubButton_V3_C.ExecuteUbergraph_W_MainMenu_SubButton_V3
struct UW_MainMenu_SubButton_V3_C_ExecuteUbergraph_W_MainMenu_SubButton_V3_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_107[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFocusEvent                           K2Node_Event_InFocusEvent_1;                       // 0x8(0x8)(NoDestructor)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x10(0x8)(NoDestructor)
};

}
}


