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
// Function w_Dropdown.w_Dropdown_C.BackPage
struct UW_Dropdown_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function w_Dropdown.w_Dropdown_C.GetFocusTarget
struct UW_Dropdown_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function w_Dropdown.w_Dropdown_C.OpenMenu
struct UW_Dropdown_C_OpenMenu_Params
{
public:
	bool                                         CallFunc_IsOpen_ReturnValue;                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E5E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function w_Dropdown.w_Dropdown_C.RemoveFooterOption
struct UW_Dropdown_C_RemoveFooterOption_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function w_Dropdown.w_Dropdown_C.AddFooterOption
struct UW_Dropdown_C_AddFooterOption_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FST_DropdownOptions                   OptionData;                                        // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function w_Dropdown.w_Dropdown_C.SetFooterOptions
struct UW_Dropdown_C_SetFooterOptions_Params
{
public:
	TMap<class FString, struct FST_DropdownOptions> FooterOptions;                                     // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function w_Dropdown.w_Dropdown_C.OnDropdown Menu Desired Focus Set
struct UW_Dropdown_C_OnDropdown_Menu_Desired_Focus_Set_Params
{
public:
	class UW_Button_C*                           DesiredFocus;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function w_Dropdown.w_Dropdown_C.SetSelectionByIndex
struct UW_Dropdown_C_SetSelectionByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_Map_Keys_Keys;                            // 0x8(0x10)(ReferenceParm)
	class FString                                CallFunc_Array_Get_Item;                           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function w_Dropdown.w_Dropdown_C.DisableInteraction
struct UW_Dropdown_C_DisableInteraction_Params
{
public:
	bool                                         Disable;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function w_Dropdown.w_Dropdown_C.CloseMenu
struct UW_Dropdown_C_CloseMenu_Params
{
public:
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOpen_ReturnValue;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function w_Dropdown.w_Dropdown_C.SetLabelText
struct UW_Dropdown_C_SetLabelText_Params
{
public:
	class FText                                  LabelText;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x31 (0x31 - 0x0)
// Function w_Dropdown.w_Dropdown_C.UpdateLabelText
struct UW_Dropdown_C_UpdateLabelText_Params
{
public:
	struct FAnchors                              K2Node_MakeStruct_Anchors;                         // 0x0(0x10)(NoDestructor)
	struct FAnchors                              K2Node_MakeStruct_Anchors_1;                       // 0x10(0x10)(NoDestructor)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function w_Dropdown.w_Dropdown_C.SetSelection
struct UW_Dropdown_C_SetSelection_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Map_Find_Value;                           // 0x10(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function w_Dropdown.w_Dropdown_C.SetOptions
struct UW_Dropdown_C_SetOptions_Params
{
public:
	TMap<class FString, class FText>             Options;                                           // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x28 (0x28 - 0x0)
// Function w_Dropdown.w_Dropdown_C.AddOption
struct UW_Dropdown_C_AddOption_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  OptionText;                                        // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x90 (0x90 - 0x0)
// Function w_Dropdown.w_Dropdown_C.On_DropdownMenuAnchor_GetUserMenuContent_0
struct UW_Dropdown_C_On_DropdownMenuAnchor_GetUserMenuContent_0_Params
{
public:
	class UUserWidget*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UW_DropdownMenu_C*                     CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x30(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x40(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x50(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x60(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x70(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x80(0x10)(ZeroConstructor, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function w_Dropdown.w_Dropdown_C.ChangePage
struct UW_Dropdown_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function w_Dropdown.w_Dropdown_C.PreConstruct
struct UW_Dropdown_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function w_Dropdown.w_Dropdown_C.BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_Dropdown_C_BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function w_Dropdown.w_Dropdown_C.OptionSelected
struct UW_Dropdown_C_OptionSelected_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function w_Dropdown.w_Dropdown_C.FooterOptionSelected
struct UW_Dropdown_C_FooterOptionSelected_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function w_Dropdown.w_Dropdown_C.Reveal
struct UW_Dropdown_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function w_Dropdown.w_Dropdown_C.Hide
struct UW_Dropdown_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function w_Dropdown.w_Dropdown_C.OptionHovered
struct UW_Dropdown_C_OptionHovered_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function w_Dropdown.w_Dropdown_C.SetInputMode
struct UW_Dropdown_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function w_Dropdown.w_Dropdown_C.FooterOptionHovered
struct UW_Dropdown_C_FooterOptionHovered_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function w_Dropdown.w_Dropdown_C.BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
struct UW_Dropdown_C_BndEvt__w_Dropdown_btn_Dropdown_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function w_Dropdown.w_Dropdown_C.ExecuteUbergraph_w_Dropdown
struct UW_Dropdown_C_ExecuteUbergraph_w_Dropdown_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E60[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_OptionID_3;                     // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E61[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_OptionID_2;                     // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay_1;                              // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay;                                // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E62[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_PageName;                             // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x60(0x10)(ZeroConstructor, NoDestructor)
	class FString                                K2Node_CustomEvent_OptionID_1;                     // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsGamepad;                            // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E63[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_OptionID;                       // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function w_Dropdown.w_Dropdown_C.OnHovered__DelegateSignature
struct UW_Dropdown_C_OnHovered__DelegateSignature_Params
{
public:
	class UW_Dropdown_C*                         Dropdown;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function w_Dropdown.w_Dropdown_C.OnFooterOptionHovered__DelegateSignature
struct UW_Dropdown_C_OnFooterOptionHovered__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function w_Dropdown.w_Dropdown_C.OnMenuClosed__DelegateSignature
struct UW_Dropdown_C_OnMenuClosed__DelegateSignature_Params
{
public:
	class UW_Dropdown_C*                         TriggeringDropdown;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function w_Dropdown.w_Dropdown_C.OnOptionHovered__DelegateSignature
struct UW_Dropdown_C_OnOptionHovered__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function w_Dropdown.w_Dropdown_C.OnFooterOptionSelected__DelegateSignature
struct UW_Dropdown_C_OnFooterOptionSelected__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function w_Dropdown.w_Dropdown_C.OnOptionSelected__DelegateSignature
struct UW_Dropdown_C_OnOptionSelected__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}
}


