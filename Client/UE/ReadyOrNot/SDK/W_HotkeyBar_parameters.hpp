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
// Function W_HotkeyBar.W_HotkeyBar_C.PreConstruct
struct UW_HotkeyBar_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function W_HotkeyBar.W_HotkeyBar_C.UpdateHints
struct UW_HotkeyBar_C_UpdateHints_Params
{
public:
	TArray<struct FSt_HotkeySettings>            Hotkeys;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function W_HotkeyBar.W_HotkeyBar_C.HotkeyButtonClicked
struct UW_HotkeyBar_C_HotkeyButtonClicked_Params
{
public:
	class UW_HotkeyBar_Entry_C*                  TriggeringHotkeyEntry;                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function W_HotkeyBar.W_HotkeyBar_C.ExecuteUbergraph_W_HotkeyBar
struct UW_HotkeyBar_C_ExecuteUbergraph_W_HotkeyBar_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSt_HotkeySettings>            K2Node_CustomEvent_Hotkeys;                        // 0x40(0x10)(ConstParm, ReferenceParm)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_HotkeySettings                    CallFunc_Array_Get_Item;                           // 0x60(0x58)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40BE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_HotkeyBar_Entry_C*                  K2Node_CustomEvent_TriggeringHotkeyEntry;          // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_HotkeyBar_Entry_C*                  CallFunc_Create_ReturnValue;                       // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_HotkeyBar_Entry_C*>          CallFunc_WidgetGetChildrenOfClass_ChildWidgets;    // 0xD0(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_HotkeyBar_Entry_C*                  CallFunc_Array_Get_Item_1;                         // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0xF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_HotkeyBar.W_HotkeyBar_C.OnHotkeyClicked__DelegateSignature
struct UW_HotkeyBar_C_OnHotkeyClicked__DelegateSignature_Params
{
public:
	class FString                                HotkeyID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}
}


