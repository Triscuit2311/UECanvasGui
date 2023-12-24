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
// Function W_MunitionsOverviewSlot.W_MunitionsOverviewSlot_C.UnbindFromButton
struct UW_MunitionsOverviewSlot_C_UnbindFromButton_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_MunitionsOverviewSlot.W_MunitionsOverviewSlot_C.BindDoubleClick
struct UW_MunitionsOverviewSlot_C_BindDoubleClick_Params
{
public:
	class UW_Button_C*                           ParentButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_MunitionsOverviewSlot.W_MunitionsOverviewSlot_C.BindClick
struct UW_MunitionsOverviewSlot_C_BindClick_Params
{
public:
	class UW_Button_C*                           ParentButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_MunitionsOverviewSlot.W_MunitionsOverviewSlot_C.BindPressedState
struct UW_MunitionsOverviewSlot_C_BindPressedState_Params
{
public:
	bool                                         CallFunc_IsPressed_ReturnValue;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_MunitionsOverviewSlot.W_MunitionsOverviewSlot_C.BindHovered
struct UW_MunitionsOverviewSlot_C_BindHovered_Params
{
public:
	class UW_Button_C*                           ParentButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function W_MunitionsOverviewSlot.W_MunitionsOverviewSlot_C.BindSelectedState
struct UW_MunitionsOverviewSlot_C_BindSelectedState_Params
{
public:
	class UW_Button_C*                           ParentButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7C (0x7C - 0x0)
// Function W_MunitionsOverviewSlot.W_MunitionsOverviewSlot_C.BindToButton
struct UW_MunitionsOverviewSlot_C_BindToButton_Params
{
public:
	class UW_Button_C*                           ParentButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BindClicks;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3597[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x2C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x3C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x4C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x5C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x6C(0x10)(ZeroConstructor, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function W_MunitionsOverviewSlot.W_MunitionsOverviewSlot_C.UpdateStyle
struct UW_MunitionsOverviewSlot_C_UpdateStyle_Params
{
public:
	bool                                         bUseGamepad;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3598[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonButtonStyle>        K2Node_Select_Default_1;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function W_MunitionsOverviewSlot.W_MunitionsOverviewSlot_C.SetVisualState
struct UW_MunitionsOverviewSlot_C_SetVisualState_Params
{
public:
	bool                                         Hovered;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Pressed;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3599[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Temp_struct_Variable;                              // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable_1;                            // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_359A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_GetNormalColorByState_ReturnValue;        // 0x18(0x28)(None)
	struct FVector2D                             K2Node_Select_Default;                             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function W_MunitionsOverviewSlot.W_MunitionsOverviewSlot_C.GetNormalColorByState
struct UW_MunitionsOverviewSlot_C_GetNormalColorByState_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_359B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Select_Default;                             // 0x30(0x28)(None)
	struct FSlateColor                           K2Node_Select_Default_1;                           // 0x58(0x28)(None)
};

// 0x1 (0x1 - 0x0)
// Function W_MunitionsOverviewSlot.W_MunitionsOverviewSlot_C.CreateSeparator
struct UW_MunitionsOverviewSlot_C_CreateSeparator_Params
{
public:
	bool                                         bShouldCreateSeparator;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function W_MunitionsOverviewSlot.W_MunitionsOverviewSlot_C.CreateElement
struct UW_MunitionsOverviewSlot_C_CreateElement_Params
{
public:
	class UTexture2D*                            Icon;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Amount;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsAmmoElement;                                    // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_359C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  AmmoType;                                          // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function W_MunitionsOverviewSlot.W_MunitionsOverviewSlot_C.UpdateSlotText
struct UW_MunitionsOverviewSlot_C_UpdateSlotText_Params
{
public:
	int32                                        CurrentSlots;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxSlots;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_MunitionsOverviewSlot.W_MunitionsOverviewSlot_C.BndEvt__W_MunitionsSlot_MunitionsButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_MunitionsOverviewSlot_C_BndEvt__W_MunitionsSlot_MunitionsButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_MunitionsOverviewSlot.W_MunitionsOverviewSlot_C.BndEvt__W_MunitionsSlot_MunitionsButton_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature
struct UW_MunitionsOverviewSlot_C_BndEvt__W_MunitionsSlot_MunitionsButton_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_MunitionsOverviewSlot.W_MunitionsOverviewSlot_C.InputMethodChanged
struct UW_MunitionsOverviewSlot_C_InputMethodChanged_Params
{
public:
	enum class ECommonInputType                  bNewInputType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39A (0x39A - 0x0)
// Function W_MunitionsOverviewSlot.W_MunitionsOverviewSlot_C.ExecuteUbergraph_W_MunitionsOverviewSlot
struct UW_MunitionsOverviewSlot_C_ExecuteUbergraph_W_MunitionsOverviewSlot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_359F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)(None)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_MunitionsOverviewSlot_Element_C*    CallFunc_Create_ReturnValue;                       // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_1;                   // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x54(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bShouldCreateSeparator;               // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35A0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x74(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_Event_Icon;                                 // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_Amount;                               // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsAmmoElement;                       // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_AmmoType;                             // 0x98(0x18)(ConstParm)
	class UImage*                                CallFunc_SpawnObject_ReturnValue;                  // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_2;                   // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    K2Node_DynamicCast_AsHorizontal_Box_Slot;          // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAmmoTypeData                         CallFunc_GetDataTableRowFromName_OutRow;           // 0xE8(0x160)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x258(0x18)(None)
	int32                                        K2Node_Event_CurrentSlots;                         // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_MaxSlots;                             // 0x274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x278(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x2B8(0x40)(HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x2F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x300(0x10)(ReferenceParm)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x310(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x318(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x330(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x370(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x380(0x18)(None)
	enum class ECommonInputType                  K2Node_CustomEvent_bNewInputType;                  // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x399(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


