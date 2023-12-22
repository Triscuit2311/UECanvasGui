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
// Function W_KeyDisplay.W_KeyDisplay_C.PreConstruct
struct UW_KeyDisplay_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function W_KeyDisplay.W_KeyDisplay_C.Tick
struct UW_KeyDisplay_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E1 (0x1E1 - 0x0)
// Function W_KeyDisplay.W_KeyDisplay_C.ExecuteUbergraph_W_KeyDisplay
struct UW_KeyDisplay_C_ExecuteUbergraph_W_KeyDisplay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6D5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x20(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EActionMappingFilter>      K2Node_MakeArray_Array;                            // 0x60(0x10)(ReferenceParm)
	TArray<enum class EAxisMappingFilter>        K2Node_MakeArray_Array_1;                          // 0x70(0x10)(ReferenceParm)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6D8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x84(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x8C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActionMappingStruct                  K2Node_MakeStruct_ActionMappingStruct;             // 0x98(0x28)(None)
	struct FAxisMappingStruct                    K2Node_MakeStruct_AxisMappingStruct;               // 0xC0(0x28)(None)
	bool                                         CallFunc_GetAllActionMappings_ReturnValue;         // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActionMappingStruct>          CallFunc_GetAllActionMappings_ActionMappings;      // 0xF0(0x10)(ReferenceParm)
	bool                                         CallFunc_GetAllAxisMappings_ReturnValue;           // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAxisMappingStruct>            CallFunc_GetAllAxisMappings_AxisMappings;          // 0x108(0x10)(ReferenceParm)
	struct FActionMappingStruct                  CallFunc_Array_Get_Item;                           // 0x118(0x28)(None)
	struct FAxisMappingStruct                    CallFunc_Array_Get_Item_1;                         // 0x140(0x28)(None)
	class FText                                  CallFunc_Key_GetDisplayName_ReturnValue;           // 0x168(0x18)(None)
	class FText                                  CallFunc_Key_GetDisplayName_ReturnValue_1;         // 0x180(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x198(0x18)(None)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue_1;        // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E2[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      K2Node_DynamicCast_AsPlayer_Character;             // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E4[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseItem*                             CallFunc_GetEquippedItem_ReturnValue;              // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


