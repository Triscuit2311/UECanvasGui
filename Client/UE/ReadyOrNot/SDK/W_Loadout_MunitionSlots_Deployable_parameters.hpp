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
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.BackPage
struct UW_Loadout_MunitionSlots_Deployable_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.GetFocusTarget
struct UW_Loadout_MunitionSlots_Deployable_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.SetCount
struct UW_Loadout_MunitionSlots_Deployable_C_SetCount_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1789[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x8(0x40)(HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      CallFunc_GetSlot_ReturnValue;                      // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x50(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x60(0x18)(None)
};

// 0x9 (0x9 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.SetSlotVisibility
struct UW_Loadout_MunitionSlots_Deployable_C_SetSlotVisibility_Params
{
public:
	bool                                         IsGrenade;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.GetSlot
struct UW_Loadout_MunitionSlots_Deployable_C_GetSlot_Params
{
public:
	class UW_LoadoutSlot_C*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1791[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutSlot_C*                      K2Node_Select_Default;                             // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.DisplayCountControls
struct UW_Loadout_MunitionSlots_Deployable_C_DisplayCountControls_Params
{
public:
	bool                                         ShowCountControls;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.Reveal
struct UW_Loadout_MunitionSlots_Deployable_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.Hide
struct UW_Loadout_MunitionSlots_Deployable_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.SetInputMode
struct UW_Loadout_MunitionSlots_Deployable_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.ChangePage
struct UW_Loadout_MunitionSlots_Deployable_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.PreConstruct
struct UW_Loadout_MunitionSlots_Deployable_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Add_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_Loadout_MunitionSlots_Deployable_C_BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Add_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Minus_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UW_Loadout_MunitionSlots_Deployable_C_BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Minus_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.LoadoutSlotClicked
struct UW_Loadout_MunitionSlots_Deployable_C_LoadoutSlotClicked_Params
{
public:
	class UW_LoadoutSlot_C*                      TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.SetItemClass
struct UW_Loadout_MunitionSlots_Deployable_C_SetItemClass_Params
{
public:
	class UClass*                                ItemData;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.LoadoutSlotHovered
struct UW_Loadout_MunitionSlots_Deployable_C_LoadoutSlotHovered_Params
{
public:
	class UW_LoadoutSlot_C*                      TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.LoadoutSlotUnhovered
struct UW_Loadout_MunitionSlots_Deployable_C_LoadoutSlotUnhovered_Params
{
public:
	class UW_LoadoutSlot_C*                      TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.ToggleAddButton
struct UW_Loadout_MunitionSlots_Deployable_C_ToggleAddButton_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB0 (0xB0 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.ExecuteUbergraph_W_Loadout_MunitionSlots_Deployable
struct UW_Loadout_MunitionSlots_Deployable_C_ExecuteUbergraph_W_Loadout_MunitionSlots_Deployable_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutSlot_C*                      CallFunc_GetSlot_ReturnValue;                      // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Delay_1;                              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay;                                // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsGamepad;                            // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17B7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_PageName;                             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      K2Node_CustomEvent_TriggeringSlot_2;               // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_CustomEvent_ItemData;                       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      CallFunc_GetSlot_ReturnValue_1;                    // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x68(0x10)(ZeroConstructor, NoDestructor)
	class UW_LoadoutSlot_C*                      K2Node_CustomEvent_TriggeringSlot_1;               // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      K2Node_CustomEvent_TriggeringSlot;                 // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Enabled;                        // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x8C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_17BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutSlot_C*                      CallFunc_GetSlot_ReturnValue_2;                    // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      K2Node_Select_Default;                             // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnDeployableSlotUnhovered__DelegateSignature
struct UW_Loadout_MunitionSlots_Deployable_C_OnDeployableSlotUnhovered__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_C*                      LoadoutSlot;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot;                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnDeployableSlotHovered__DelegateSignature
struct UW_Loadout_MunitionSlots_Deployable_C_OnDeployableSlotHovered__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_C*                      LoadoutSlot;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot;                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnDeployableSlotClicked__DelegateSignature
struct UW_Loadout_MunitionSlots_Deployable_C_OnDeployableSlotClicked__DelegateSignature_Params
{
public:
	class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot;                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      LoadoutSlot;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnMinusClicked__DelegateSignature
struct UW_Loadout_MunitionSlots_Deployable_C_OnMinusClicked__DelegateSignature_Params
{
public:
	class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot;                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C.OnAddClicked__DelegateSignature
struct UW_Loadout_MunitionSlots_Deployable_C_OnAddClicked__DelegateSignature_Params
{
public:
	class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot;                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


