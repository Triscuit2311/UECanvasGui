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

// 0x18 (0x18 - 0x0)
// Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.OnInputMethodChanged
struct UW_HotkeyBar_Entry_C_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  bNewInputType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_372C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.PreConstruct
struct UW_HotkeyBar_Entry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.SetBinding
struct UW_HotkeyBar_Entry_C_SetBinding_Params
{
public:
	struct FSt_HotkeySettings                    Hotkey;                                            // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
struct UW_HotkeyBar_Entry_C_BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
struct UW_HotkeyBar_Entry_C_BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D1 (0x1D1 - 0x0)
// Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.ExecuteUbergraph_W_HotkeyBar_Entry
struct UW_HotkeyBar_Entry_C_ExecuteUbergraph_W_HotkeyBar_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3731[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x18(0x18)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3733[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_HotkeySettings                    K2Node_CustomEvent_Hotkey;                         // 0x38(0x58)(HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_1;                              // 0x90(0x18)(None)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3736[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue; // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xC8(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0xE0(0x18)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_373A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_Select_Default_1;                           // 0x100(0x88)(ConstParm)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x188(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_373D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default_2;                           // 0x1A8(0x18)(None)
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue_1; // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1; // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_HotkeyBar_Entry.W_HotkeyBar_Entry_C.OnHotkeyButtonClicked__DelegateSignature
struct UW_HotkeyBar_Entry_C_OnHotkeyButtonClicked__DelegateSignature_Params
{
public:
	class UW_HotkeyBar_Entry_C*                  TriggeringHotkeyEntry;                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


