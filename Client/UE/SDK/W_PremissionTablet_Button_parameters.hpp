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
// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.ClickButton
struct UW_PremissionTablet_Button_C_ClickButton_Params
{
public:
	class UW_PremissionTablet_Button_C*          Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_PreMission_Tablet_C*                CallFunc_WidgetGetParentOfClass_ReturnValue;       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.GetIsActive
struct UW_PremissionTablet_Button_C_GetIsActive_Params
{
public:
	bool                                         IsActive;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.SpawnPopOut
struct UW_PremissionTablet_Button_C_SpawnPopOut_Params
{
public:
	bool                                         Open;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3793[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuAnchor*                           K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue;             // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchorData                           CallFunc_GetLayout_ReturnValue;                    // 0x20(0x28)(NoDestructor)
	class UUserWidget*                           CallFunc_Create_ReturnValue;                       // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.SetHovered
struct UW_PremissionTablet_Button_C_SetHovered_Params
{
public:
	bool                                         Hovered;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.SetActive
struct UW_PremissionTablet_Button_C_SetActive_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3797[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuAnchor*                           K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuAnchor*                           K2Node_Select_Default_1;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.PreConstruct
struct UW_PremissionTablet_Button_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_PremissionTablet_Button_C_BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.BndEvt__W_PremissionTablet_Button_PopoutAnchor_K2Node_ComponentBoundEvent_1_OnMenuOpenChangedEvent__DelegateSignature
struct UW_PremissionTablet_Button_C_BndEvt__W_PremissionTablet_Button_PopoutAnchor_K2Node_ComponentBoundEvent_1_OnMenuOpenChangedEvent__DelegateSignature_Params
{
public:
	bool                                         bIsOpen;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
struct UW_PremissionTablet_Button_C_BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.BndEvt__W_PremissionTablet_Button_PopoutAnchorLeft_K2Node_ComponentBoundEvent_4_OnMenuOpenChangedEvent__DelegateSignature
struct UW_PremissionTablet_Button_C_BndEvt__W_PremissionTablet_Button_PopoutAnchorLeft_K2Node_ComponentBoundEvent_4_OnMenuOpenChangedEvent__DelegateSignature_Params
{
public:
	bool                                         bIsOpen;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.ExecuteUbergraph_W_PremissionTablet_Button
struct UW_PremissionTablet_Button_C_ExecuteUbergraph_W_PremissionTablet_Button_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37AA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bIsOpen_1;              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bIsOpen;                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuAnchor*                           K2Node_Select_Default;                             // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.OnActiveStateChange__DelegateSignature
struct UW_PremissionTablet_Button_C_OnActiveStateChange__DelegateSignature_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_PremissionTablet_Button.W_PremissionTablet_Button_C.OnClicked__DelegateSignature
struct UW_PremissionTablet_Button_C_OnClicked__DelegateSignature_Params
{
public:
	class UW_PremissionTablet_Button_C*          TriggeringButton;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


