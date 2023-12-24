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
// Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.BackPage
struct UW_Loadout_UnitSelect_Option_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.GetFocusTarget
struct UW_Loadout_UnitSelect_Option_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.SetNameText
struct UW_Loadout_UnitSelect_Option_C_SetNameText_Params
{
public:
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x0(0x28)(None)
	struct FLinearColor                          CallFunc_GetPlayerTeamColor_LinearColor;           // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetPlayerTeamColor_SlateColor;            // 0x38(0x28)(None)
	struct FLinearColor                          CallFunc_GetPlayerTeamColor_LinearColor_1;         // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetPlayerTeamColor_SlateColor_1;          // 0x70(0x28)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetPlayerTeamColor_LinearColor_2;         // 0x9C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_GetPlayerTeamColor_SlateColor_2;          // 0xB0(0x28)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xE0(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.SetInputMode
struct UW_Loadout_UnitSelect_Option_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.ChangePage
struct UW_Loadout_UnitSelect_Option_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x188 (0x188 - 0x0)
// Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.UpdateActiveLoadout
struct UW_Loadout_UnitSelect_Option_C_UpdateActiveLoadout_Params
{
public:
	struct FSavedLoadout                         ActiveLoadout;                                     // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.UpdateCurrentSlot
struct UW_Loadout_UnitSelect_Option_C_UpdateCurrentSlot_Params
{
public:
	class UW_LoadoutSlot_C*                      CurrentSlot;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.UpdateCurrentItemMap
struct UW_Loadout_UnitSelect_Option_C_UpdateCurrentItemMap_Params
{
public:
	TMap<enum class EItemCategory, class UClass*> ItemCategory;                                      // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.SetLoadoutWidget
struct UW_Loadout_UnitSelect_Option_C_SetLoadoutWidget_Params
{
public:
	class UW_Loadout_C*                          LoadoutWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.HeaderSubpageNavigation
struct UW_Loadout_UnitSelect_Option_C_HeaderSubpageNavigation_Params
{
public:
	class FName                                  OptionNameID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.BndEvt__W_Loadout_UnitSelect_Option_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_Loadout_UnitSelect_Option_C_BndEvt__W_Loadout_UnitSelect_Option_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.SetSelected
struct UW_Loadout_UnitSelect_Option_C_SetSelected_Params
{
public:
	bool                                         IsSelected;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.Reveal
struct UW_Loadout_UnitSelect_Option_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.Hide
struct UW_Loadout_UnitSelect_Option_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.OnAddedToFocusPath
struct UW_Loadout_UnitSelect_Option_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x241 (0x241 - 0x0)
// Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.ExecuteUbergraph_W_Loadout_UnitSelect_Option
struct UW_Loadout_UnitSelect_Option_C_ExecuteUbergraph_W_Loadout_UnitSelect_Option_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsGamepad;                            // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                  K2Node_Event_PageName;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSavedLoadout                         K2Node_Event_ActiveLoadout;                        // 0x10(0x188)(None)
	class UW_LoadoutSlot_C*                      K2Node_Event_CurrentSlot;                          // 0x198(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory;                         // 0x1A0(0x50)(None)
	class UW_Loadout_C*                          K2Node_Event_LoadoutWidget;                        // 0x1F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_OptionNameID;                         // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x200(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsSelected;                     // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Delay_1;                              // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Delay;                                // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x22C(0x8)(NoDestructor)
	uint8                                        Pad_39A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasUserFocus_ReturnValue;                 // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C.UnitOptionClicked__DelegateSignature
struct UW_Loadout_UnitSelect_Option_C_UnitOptionClicked__DelegateSignature_Params
{
public:
	class UW_Loadout_UnitSelect_Option_C*        TriggeringOption;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


