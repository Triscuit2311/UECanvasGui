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
// Function w_DropdownMenu.w_DropdownMenu_C.CreateFooterButton
struct UW_DropdownMenu_C_CreateFooterButton_Params
{
public:
	class FString                                FooterOptionID;                                    // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	class UW_Button_C*                           NewButton;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_DropdownOptions                   CallFunc_Map_Find_Value;                           // 0x38(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x81 (0x81 - 0x0)
// Function w_DropdownMenu.w_DropdownMenu_C.CreateOptionButton
struct UW_DropdownMenu_C_CreateOptionButton_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UW_Button_C*                           NewOptionButton;                                   // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           NewButton;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x38(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x48(0x10)(ZeroConstructor, NoDestructor)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8A2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Map_Find_Value;                           // 0x68(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function w_DropdownMenu.w_DropdownMenu_C.PopulateOptions
struct UW_DropdownMenu_C_PopulateOptions_Params
{
public:
	TMap<class FString, class FText>             Options;                                           // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function w_DropdownMenu.w_DropdownMenu_C.OptionClicked
struct UW_DropdownMenu_C_OptionClicked_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function w_DropdownMenu.w_DropdownMenu_C.FooterOptionClicked
struct UW_DropdownMenu_C_FooterOptionClicked_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function w_DropdownMenu.w_DropdownMenu_C.OptionHovered
struct UW_DropdownMenu_C_OptionHovered_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function w_DropdownMenu.w_DropdownMenu_C.FooterOptionHovered
struct UW_DropdownMenu_C_FooterOptionHovered_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x149 (0x149 - 0x0)
// Function w_DropdownMenu.w_DropdownMenu_C.ExecuteUbergraph_w_DropdownMenu
struct UW_DropdownMenu_C_ExecuteUbergraph_w_DropdownMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8E2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class FText>             K2Node_CustomEvent_Options;                        // 0x18(0x50)(None)
	TArray<class FString>                        CallFunc_Map_Keys_Keys;                            // 0x68(0x10)(ReferenceParm)
	class FString                                CallFunc_Array_Get_Item;                           // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           CallFunc_CreateOptionButton_NewOptionButton;       // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_CustomEvent_Button_3;                       // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Map_Find_Value;                           // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8E7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_Map_Keys_Keys_1;                          // 0xB8(0x10)(ReferenceParm)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0xDD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8EA[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8ED[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_CustomEvent_Button_2;                       // 0xE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8EF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_CustomEvent_Button_1;                       // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Map_Find_Value_1;                         // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8F2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Map_Find_Value_2;                         // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8F6[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_CustomEvent_Button;                         // 0x130(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Map_Find_Value_3;                         // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function w_DropdownMenu.w_DropdownMenu_C.OnFooterOptionHovered__DelegateSignature
struct UW_DropdownMenu_C_OnFooterOptionHovered__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function w_DropdownMenu.w_DropdownMenu_C.OnDesiredFocusSet__DelegateSignature
struct UW_DropdownMenu_C_OnDesiredFocusSet__DelegateSignature_Params
{
public:
	class UW_Button_C*                           DesiredFocus;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function w_DropdownMenu.w_DropdownMenu_C.OnOptionHovered__DelegateSignature
struct UW_DropdownMenu_C_OnOptionHovered__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function w_DropdownMenu.w_DropdownMenu_C.OnFooterOptionSelected__DelegateSignature
struct UW_DropdownMenu_C_OnFooterOptionSelected__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function w_DropdownMenu.w_DropdownMenu_C.OnOptionSelected__DelegateSignature
struct UW_DropdownMenu_C_OnOptionSelected__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}
}


