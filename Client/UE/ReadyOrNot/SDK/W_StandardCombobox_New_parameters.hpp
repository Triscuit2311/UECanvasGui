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
// Function W_StandardCombobox_New.W_StandardCombobox_New_C.Get_BackGroundImg_ColorAndOpacity_0
struct UW_StandardCombobox_New_C_Get_BackGroundImg_ColorAndOpacity_0_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_StandardCombobox_New.W_StandardCombobox_New_C.GetCurrentOptionAsString
struct UW_StandardCombobox_New_C_GetCurrentOptionAsString_Params
{
public:
	class FString                                OptionAsString;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item;                           // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function W_StandardCombobox_New.W_StandardCombobox_New_C.DeleteOptionString
struct UW_StandardCombobox_New_C_DeleteOptionString_Params
{
public:
	class FString                                StringValue;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function W_StandardCombobox_New.W_StandardCombobox_New_C.DeleteOptionIndex
struct UW_StandardCombobox_New_C_DeleteOptionIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C5A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function W_StandardCombobox_New.W_StandardCombobox_New_C.InsertOption
struct UW_StandardCombobox_New_C_InsertOption_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C5D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OptionString;                                      // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  OptionName;                                        // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  OptionDescription;                                 // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x4C (0x4C - 0x0)
// Function W_StandardCombobox_New.W_StandardCombobox_New_C.AddOption
struct UW_StandardCombobox_New_C_AddOption_Params
{
public:
	class FString                                OptionString;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  OptionName;                                        // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  OptionDescription;                                 // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function W_StandardCombobox_New.W_StandardCombobox_New_C.SetStringOption
struct UW_StandardCombobox_New_C_SetStringOption_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_StandardCombobox_New.W_StandardCombobox_New_C.SetOption
struct UW_StandardCombobox_New_C_SetOption_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_StandardCombobox_New.W_StandardCombobox_New_C.UpdateOptionText
struct UW_StandardCombobox_New_C_UpdateOptionText_Params
{
public:
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C5E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Array_Get_Item;                           // 0x8(0x18)(None)
};

// 0x1C (0x1C - 0x0)
// Function W_StandardCombobox_New.W_StandardCombobox_New_C.ReceivedOptionClickedSignal
struct UW_StandardCombobox_New_C_ReceivedOptionClickedSignal_Params
{
public:
	class FString                                OptionAsString;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_StandardCombobox_New.W_StandardCombobox_New_C.GetAnchorMenuContent
struct UW_StandardCombobox_New_C_GetAnchorMenuContent_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Combobox_Menu_C*                    CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_StandardCombobox_New.W_StandardCombobox_New_C.PreConstruct
struct UW_StandardCombobox_New_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnAddedToFocusPath
struct UW_StandardCombobox_New_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnRemovedFromFocusPath
struct UW_StandardCombobox_New_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0xE8 (0xE8 - 0x0)
// Function W_StandardCombobox_New.W_StandardCombobox_New_C.ExecuteUbergraph_W_StandardCombobox_New
struct UW_StandardCombobox_New_C_ExecuteUbergraph_W_StandardCombobox_New_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x4(0x8)(NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C63[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C64[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFMODEvent*                            K2Node_Select_Default;                             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_1;                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x38(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x60(0x28)(None)
	struct FFocusEvent                           K2Node_Event_InFocusEvent_1;                       // 0x88(0x8)(NoDestructor)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x90(0x58)(HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_StandardCombobox_New.W_StandardCombobox_New_C.OnNewOptionSelected__DelegateSignature
struct UW_StandardCombobox_New_C_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


