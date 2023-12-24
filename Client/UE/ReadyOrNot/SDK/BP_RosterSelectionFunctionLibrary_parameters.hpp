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

// 0x1EA (0x1EA - 0x0)
// Function BP_RosterSelectionFunctionLibrary.BP_RosterSelectionFunctionLibrary_C.GetStressLevelColor
struct UBP_RosterSelectionFunctionLibrary_C_GetStressLevelColor_Params
{
public:
	float                                        StressLevel;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_374B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           Color;                                             // 0x10(0x28)(Parm, OutParm)
	TMap<struct FVector2D, struct FSlateColor>   StressColorsMap;                                   // 0x38(0x50)(Edit, BlueprintVisible)
	TMap<struct FVector2D, class FText>          StressLevelsMap;                                   // 0x88(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                             CurrentRange;                                      // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FVector2D, class FText>          K2Node_MakeVariable_MakeVariableOutput;            // 0xE0(0x50)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_374D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_374E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_374F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector2D>                     CallFunc_Map_Keys_Keys;                            // 0x148(0x10)(ReferenceParm)
	TMap<struct FVector2D, struct FSlateColor>   K2Node_MakeVariable_MakeVariableOutput_1;          // 0x158(0x50)(None)
	struct FVector2D                             CallFunc_Array_Get_Item;                           // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1B5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1B6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3753[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakVector2D_X;                          // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_Map_Find_Value;                           // 0x1C0(0x28)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_InRange_FloatFloat_ReturnValue;           // 0x1E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12A (0x12A - 0x0)
// Function BP_RosterSelectionFunctionLibrary.BP_RosterSelectionFunctionLibrary_C.GetStressLevelText
struct UBP_RosterSelectionFunctionLibrary_C_GetStressLevelText_Params
{
public:
	float                                        StressLevel;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3757[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x10(0x18)(Parm, OutParm)
	TMap<struct FVector2D, class FText>          StressLevelsMap;                                   // 0x28(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                             CurrentRange;                                      // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3759[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_375A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_375C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FVector2D, class FText>          K2Node_MakeVariable_MakeVariableOutput;            // 0x98(0x50)(None)
	TArray<struct FVector2D>                     CallFunc_Map_Keys_Keys;                            // 0xE8(0x10)(ReferenceParm)
	struct FVector2D                             CallFunc_Array_Get_Item;                           // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x105(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x106(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_375F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakVector2D_X;                          // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Map_Find_Value;                           // 0x110(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_InRange_FloatFloat_ReturnValue;           // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD0 (0xD0 - 0x0)
// Function BP_RosterSelectionFunctionLibrary.BP_RosterSelectionFunctionLibrary_C.GetRosterCharacterStateText
struct UBP_RosterSelectionFunctionLibrary_C_GetRosterCharacterStateText_Params
{
public:
	class URosterCharacter*                      RosterCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x10(0x18)(Parm, OutParm)
	enum class ERosterCharacterState             Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3764[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_StressPercentageAsStatus_StatusText;      // 0x30(0x18)(None)
	struct FSlateColor                           CallFunc_StressPercentageAsStatus_StatusColor;     // 0x48(0x28)(None)
	class FText                                  Temp_text_Variable;                                // 0x70(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x88(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0xA0(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0xB8(0x18)(None)
};

// 0xD8 (0xD8 - 0x0)
// Function BP_RosterSelectionFunctionLibrary.BP_RosterSelectionFunctionLibrary_C.FormatBio
struct UBP_RosterSelectionFunctionLibrary_C_FormatBio_Params
{
public:
	class URosterCharacter*                      Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  OutText;                                           // 0x10(0x18)(Parm, OutParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3773[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x70(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC0(0x18)(None)
};

// 0xE8 (0xE8 - 0x0)
// Function BP_RosterSelectionFunctionLibrary.BP_RosterSelectionFunctionLibrary_C.StressPercentageAsStatus
struct UBP_RosterSelectionFunctionLibrary_C_StressPercentageAsStatus_Params
{
public:
	class URosterCharacter*                      Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  StatusText;                                        // 0x10(0x18)(Parm, OutParm)
	struct FSlateColor                           StatusColor;                                       // 0x28(0x28)(Parm, OutParm)
	enum class ERosterCharacterState             Temp_byte_Variable;                                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3779[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_GetStressLevelColor_Color;                // 0x58(0x28)(None)
	class FText                                  CallFunc_GetStressLevelText_Text;                  // 0x80(0x18)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x98(0x28)(None)
	struct FSlateColor                           K2Node_Select_Default;                             // 0xC0(0x28)(None)
};

// 0x40 (0x40 - 0x0)
// Function BP_RosterSelectionFunctionLibrary.BP_RosterSelectionFunctionLibrary_C.StressPercentageAsText
struct UBP_RosterSelectionFunctionLibrary_C_StressPercentageAsText_Params
{
public:
	class URosterCharacter*                      Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x10(0x18)(Parm, OutParm)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x28(0x18)(None)
};

// 0x84 (0x84 - 0x0)
// Function BP_RosterSelectionFunctionLibrary.BP_RosterSelectionFunctionLibrary_C.SquadPositionToColor
struct UBP_RosterSelectionFunctionLibrary_C_SquadPositionToColor_Params
{
public:
	enum class ERosterSquadPosition              SquadPosition;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_378A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          OutColor;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERosterSquadPosition              Temp_byte_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_378B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x24(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x34(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_2;                            // 0x44(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_3;                            // 0x54(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_4;                            // 0x64(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x74(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function BP_RosterSelectionFunctionLibrary.BP_RosterSelectionFunctionLibrary_C.FormatName
struct UBP_RosterSelectionFunctionLibrary_C_FormatName_Params
{
public:
	class URosterCharacter*                      Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  OutText;                                           // 0x10(0x18)(Parm, OutParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x28(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x68(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xA8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xB8(0x18)(None)
	class FText                                  CallFunc_TextTrimPrecedingAndTrailing_ReturnValue; // 0xD0(0x18)(None)
};

}
}


