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
// Function W_StandardButton.W_StandardButton_C.SetButtonText
struct UW_StandardButton_C_SetButtonText_Params
{
public:
	class FText                                  NewButtonText;                                     // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x4 (0x4 - 0x0)
// Function W_StandardButton.W_StandardButton_C.GetTabControlIndex
struct UW_StandardButton_C_GetTabControlIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_StandardButton.W_StandardButton_C.GetDescriptionText
struct UW_StandardButton_C_GetDescriptionText_Params
{
public:
	class FText                                  DescriptionText;                                   // 0x0(0x18)(Parm, OutParm)
};

// 0x2 (0x2 - 0x0)
// Function W_StandardButton.W_StandardButton_C.SetDisabled
struct UW_StandardButton_C_SetDisabled_Params
{
public:
	bool                                         Disabled;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_StandardButton.W_StandardButton_C.UpdateSelectedVisibility
struct UW_StandardButton_C_UpdateSelectedVisibility_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_StandardButton.W_StandardButton_C.GetThinRedLineVisibility
struct UW_StandardButton_C_GetThinRedLineVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_StandardButton.W_StandardButton_C.GetSelectedVisibility
struct UW_StandardButton_C_GetSelectedVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function W_StandardButton.W_StandardButton_C.GetDisabledVisibility
struct UW_StandardButton_C_GetDisabledVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_StandardButton.W_StandardButton_C.PreConstruct
struct UW_StandardButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x161 (0x161 - 0x0)
// Function W_StandardButton.W_StandardButton_C.ExecuteUbergraph_W_StandardButton
struct UW_StandardButton_C_ExecuteUbergraph_W_StandardButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E40[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_ToUpper_ReturnValue;                      // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x30(0x18)(None)
	bool                                         Temp_bool_Variable_3;                              // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                  K2Node_Select_Default;                             // 0x4C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E41[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x58(0x58)(HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E42[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_1;                           // 0xB8(0x18)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E43[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlaySlot*                          CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E44[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetDescriptionText_DescriptionText;       // 0xE8(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_ToUpper_ReturnValue_1;                    // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x120(0x18)(None)
	class FText                                  K2Node_Select_Default_3;                           // 0x138(0x18)(None)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_1;                // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_StandardButton.W_StandardButton_C.OnClicked__DelegateSignature
struct UW_StandardButton_C_OnClicked__DelegateSignature_Params
{
public:
	class UW_StandardButton_C*                   CallingButton;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


