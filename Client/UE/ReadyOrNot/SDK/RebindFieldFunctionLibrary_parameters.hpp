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

// 0x68 (0x68 - 0x0)
// Function RebindFieldFunctionLibrary.RebindFieldFunctionLibrary_C.Using Modifier Key?
struct URebindFieldFunctionLibrary_C_Using_Modifier_Key__Params
{
public:
	TArray<struct FKey>                          Key_List;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<enum class EKeyModifiers>             Modifiers;                                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return_Value;                                      // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Has_Key_;                                          // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18B6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18B8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_Array_Get_Item;                           // 0x40(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_Key_IsModifierKey_ReturnValue;            // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18BA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18BC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function RebindFieldFunctionLibrary.RebindFieldFunctionLibrary_C.Key list has Non Modifier Key
struct URebindFieldFunctionLibrary_C_Key_list_has_Non_Modifier_Key_Params
{
public:
	TArray<struct FKey>                          Key_List;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return_Value;                                      // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Has_Key_;                                          // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18D2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  CallFunc_Array_Get_Item;                           // 0x28(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_Key_is_Non_Modifier_Key__Return_Value;    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18D7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18D9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x118 (0x118 - 0x0)
// Function RebindFieldFunctionLibrary.RebindFieldFunctionLibrary_C.Abbreviate Key
struct URebindFieldFunctionLibrary_C_Abbreviate_Key_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Abreviated_Name;                                   // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_Abbreviation;                                 // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_Abbreviated_Name;                             // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FKey                                  Temp_Key;                                          // 0x50(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FString                                CallFunc_Split_LeftS;                              // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_RightS;                             // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_SelectString_ReturnValue_1;               // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetSubstring_ReturnValue;                 // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_ToUpper_ReturnValue;                      // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue;                          // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Key_IsMouseButton_ReturnValue;            // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18ED[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Key_GetDisplayName_ReturnValue;           // 0xF0(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x23 (0x23 - 0x0)
// Function RebindFieldFunctionLibrary.RebindFieldFunctionLibrary_C.Key is Non Modifier Key?
struct URebindFieldFunctionLibrary_C_Key_is_Non_Modifier_Key__Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return_Value;                                      // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Key_IsModifierKey_ReturnValue;            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


